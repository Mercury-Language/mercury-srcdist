/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2018-03-17
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "counter.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_can_we_generate_code_for_tscc_0[2];

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

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_contains_nested_funcs_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_contains_nested_funcs_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_contains_nested_funcs_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0[2];

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

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0[14];

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0[14];

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

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_proc_stmt_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_proc_stmt_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_proc_stmt_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_proc_stmt_info_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_proc_stmt_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_tscc_code_model_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_tscc_code_model_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_tscc_code_model_0[2];

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_local_var_defns_for_copied_output_vars__1733__1_1_f_0(
  MR_Word LambdaHeadVar__1_35);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_local_var_defns_for_copied_output_vars__1731__1_1_f_0(
  MR_Word LambdaHeadVar__1_32);

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1626__1_8_p_0(
  MR_Word CodeModel_10,
  MR_Word Context_20,
  MR_Word ConvOutputStmts_23,
  MR_Word * LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Word LambdaHeadVar__4_41,
  MR_Word * LambdaHeadVar__5_42);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1375__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_40,
  MR_Word HeadVar__2_47);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1319__1_1_f_0(
  MR_Word LambdaHeadVar__1_69);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1231__1_2_p_0(
  MR_Word ArgTuples_24,
  MR_Word ProcArgTuples_43);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__644__1_2_p_0(
  MR_Word TsccKind_19,
  MR_Word HeadVar__2_39);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__154__1_2_f_0(
  MR_Word PredId_13,
  MR_Integer LambdaHeadVar__1_32);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

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
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_37,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_38);

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_while_continue_5_p_0(
  MR_Word GotoEndStmts_6,
  MR_Word ProcStmtInfo_7,
  MR_Word * SwitchCase_8,
  MR_Word STATE_VARIABLE_PossibleSwitchValues_0_16,
  MR_Word * STATE_VARIABLE_PossibleSwitchValues_17);

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
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_40,
  MR_Word * STATE_VARIABLE_MaybeEntryProcInfo_41,
  MR_Word STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_42,
  MR_Word * STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word LoopKind_9,
  MR_Word PredProcCodes_10,
  MR_Word EnvVarNames_11,
  MR_Word EntryProcDescComments_12,
  MR_Word EntryProc_13,
  MR_Word * FuncDefn_14);

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

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_with_while_continue_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_with_while_continue_7_p_0(
  MR_Word CopyOutValThroughPtrStmts_8,
  MR_Word ReturnStmt_9,
  MR_Word EntryProc_10,
  MR_Word EntryProcContext_11,
  MR_Word ProcStmtInfos_12,
  MR_Word * ContainerVarDefns_13,
  MR_Word * WrappedStmts_14);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Target_12,
  MR_Word ConstStructMap_13,
  MR_Word TsccCodeModel_14,
  MR_Word PredProcIdArgsInfo_15,
  MR_Word * PredProcCode_16,
  MR_Word STATE_VARIABLE_GlobalData_0_61,
  MR_Word * STATE_VARIABLE_GlobalData_62,
  MR_Word STATE_VARIABLE_TsccInfo_0_63,
  MR_Word * STATE_VARIABLE_TsccInfo_64);

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredProcId_15,
  MR_Word * PredProcIdArgsInfo_16,
  MR_Integer STATE_VARIABLE_ProcNum_0_50,
  MR_Integer * STATE_VARIABLE_ProcNum_51,
  MR_Word STATE_VARIABLE_MaybeOutVarsTypes_0_52,
  MR_Word * STATE_VARIABLE_MaybeOutVarsTypes_53,
  MR_Word STATE_VARIABLE_CanGenerateTscc_0_54,
  MR_Word * STATE_VARIABLE_CanGenerateTscc_55,
  MR_Word STATE_VARIABLE_OutArgNames_0_56,
  MR_Word * STATE_VARIABLE_OutArgNames_57,
  MR_Word STATE_VARIABLE_InSccMap_0_58,
  MR_Word * STATE_VARIABLE_InSccMap_59);

static void MR_CALL 
ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InSccInfo_8,
  MR_Word STATE_VARIABLE_NonTailEntryPredProcIds_0_15,
  MR_Word * STATE_VARIABLE_NonTailEntryPredProcIds_16,
  MR_Word STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17,
  MR_Word * STATE_VARIABLE_NoMutualTailRecPredProcIds_18);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word _SCCEntryPredProcIds_16,
  MR_Word TsccCodeModel_17,
  MR_Word TSCCE_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_InSccMap_0_47,
  MR_Word * STATE_VARIABLE_InSccMap_48);

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word TsccCodeModel_17,
  MR_Word TSCCE_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_InSccMap_0_47,
  MR_Word * STATE_VARIABLE_InSccMap_48);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_1(
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
  MR_Box * wrapper_arg_12);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word ConstStructMap_20,
  MR_Word TsccCodeModel_21,
  MR_Word PredProcIds_22,
  MR_Word * NonTailEntryPredProcIds_23,
  MR_Word * NoMutualPredProcIds_24,
  MR_Word * MutualPredProcIds_25,
  MR_Word * MutualPredProcCodes_26,
  MR_Word * CanGenerateTscc_27,
  MR_Word * MutualEnvVarNames_28,
  MR_Word * MutualClosureWrapperFuncDefns_29,
  MR_Word * LoopKind_30,
  MR_Word STATE_VARIABLE_InSccMap_0_44,
  MR_Word * STATE_VARIABLE_InSccMap_45,
  MR_Word STATE_VARIABLE_GlobalData_0_46,
  MR_Word * STATE_VARIABLE_GlobalData_47);

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
ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcId_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_27,
  MR_Word * STATE_VARIABLE_FuncDefns_28,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30,
  MR_Word STATE_VARIABLE_InSccMap_0_31,
  MR_Word * STATE_VARIABLE_InSccMap_32);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcIdInfo_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_55,
  MR_Word * STATE_VARIABLE_FuncDefns_56,
  MR_Word STATE_VARIABLE_GlobalData_0_57,
  MR_Word * STATE_VARIABLE_GlobalData_58,
  MR_Word STATE_VARIABLE_InSccMap_0_59,
  MR_Word * STATE_VARIABLE_InSccMap_60);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(
  MR_Word Info_4,
  MR_Word Context_5,
  MR_Word * SucceededVarDefns_6);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0(
  MR_Word ProcInfo_8,
  MR_Word Context_9,
  MR_Word ArgTuples_10,
  MR_Word CopiedOutputVars_11,
  MR_Word * OutputVarLocalDefns_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0(
  MR_Word CodeModel_10,
  MR_Word ArgTuples_11,
  MR_Word CopiedOutputVars_12,
  MR_Word Goal_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

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
ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OptTailCalls_2,
  MR_Word DefaultWarnParams_3,
  MR_Word Target_4,
  MR_Word ConstStructMap_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_FuncDefns_0_7,
  MR_Word * STATE_VARIABLE_FuncDefns_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OptTailCalls_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word SCCE_15,
  MR_Word * STATE_VARIABLE_InSccMap_40,
  MR_Word STATE_VARIABLE_FuncDefns_0_41,
  MR_Word * STATE_VARIABLE_FuncDefns_42,
  MR_Word STATE_VARIABLE_GlobalData_0_43,
  MR_Word * STATE_VARIABLE_GlobalData_44);

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
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(
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


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[20][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[17][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[9][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[2][14];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[8][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][15];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[2][8];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][10];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][11];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][16];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_12[1][13];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_13[1][9];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_14[6][1];




static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_13[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[8])),
    ((MR_Box) (ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[5]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[2][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
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
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_12[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_tscc_code_model_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_13[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_14[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[16])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "tscc_end"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Setup for mutual tailcalls optimized into a loop."))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "The mutually recursive procedures are:"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_0 = {
  (MR_String) "can_not_generate_code_for_tscc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_1 = {
  (MR_String) "can_generate_code_for_tscc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_can_we_generate_code_for_tscc_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "can_we_generate_code_for_tscc",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_can_we_generate_code_for_tscc_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_can_we_generate_code_for_tscc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_can_we_generate_code_for_tscc_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0 = {
  (MR_String) "entry_proc_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_entry_proc_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_entry_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_entry_proc_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "entry_proc_info",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_entry_proc_info_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_entry_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_entry_proc_info_0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_0 = {
  (MR_String) "does_not_contain_nested_funcs",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_1 = {
  (MR_String) "contains_nested_funcs",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_contains_nested_funcs_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_contains_nested_funcs",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_contains_nested_funcs_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_contains_nested_funcs_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_contains_nested_funcs_0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0 = {
  (MR_String) "no_tail_call_opt_in_code_gen",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1 = {
  (MR_String) "tail_call_opt_in_code_gen",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_tail_call_opt_in_code_gen",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_in_code_gen_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0 = {
  (MR_String) "no_tail_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1 = {
  (MR_String) "self_tail_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "none_or_self_tail_rec",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0[8] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
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
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_code_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_code_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_code_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_code_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_code",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_code_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_code_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_code_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0[14] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0
};

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0[14] = {
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
  (MR_String) "ppiai_tscc_out_value_local_var_defns",
  (MR_String) "ppiai_copy_tscc_in_to_own_copy",
  (MR_String) "ppiai_copy_own_to_tscc_out_copy",
  (MR_String) "ppiai_copy_out_through_ptr"
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0 = {
  (MR_String) "pred_proc_id_args_info",
  (MR_Integer) 14,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_args_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_args_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_args_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_id_args_info",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_args_info_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_args_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_args_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0 = {
  (MR_String) "pred_proc_id_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_id_info",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_proc_stmt_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0 = {
  (MR_String) "proc_stmt_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_proc_stmt_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_proc_stmt_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_proc_stmt_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_proc_stmt_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "proc_stmt_info",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_proc_stmt_info_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_proc_stmt_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_proc_stmt_info_0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_0 = {
  (MR_String) "tscc_det",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_1 = {
  (MR_String) "tscc_semi",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_tscc_code_model_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "tscc_code_model",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_tscc_code_model_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_tscc_code_model_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_tscc_code_model_0
};

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_local_var_defns_for_copied_output_vars__1733__1_1_f_0(
  MR_Word LambdaHeadVar__1_35)
{
  {
    MR_Word LambdaHeadVar__2_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 2)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 0)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 1)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 3)));

    return LambdaHeadVar__2_36;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_local_var_defns_for_copied_output_vars__1731__1_1_f_0(
  MR_Word LambdaHeadVar__1_32)
{
  {
    MR_Word LambdaHeadVar__2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 0)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 1)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 2)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 3)));

    return LambdaHeadVar__2_33;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1626__1_8_p_0(
  MR_Word CodeModel_10,
  MR_Word Context_20,
  MR_Word ConvOutputStmts_23,
  MR_Word * LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39,
  MR_Word * LambdaHeadVar__3_40,
  MR_Word LambdaHeadVar__4_41,
  MR_Word * LambdaHeadVar__5_42)
{
  {
    MR_Word SuccStmts_30;

    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_10, Context_20, &SuccStmts_30, LambdaHeadVar__4_41, LambdaHeadVar__5_42);
    *LambdaHeadVar__1_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__3_40 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_23, SuccStmts_30);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1375__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_40,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8], ((MR_Box) (STATE_VARIABLE_MaybeEntryProcInfo_0_40)), ((MR_Box) (HeadVar__2_47)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1319__1_1_f_0(
  MR_Word LambdaHeadVar__1_69)
{
  {
    MR_Word LambdaHeadVar__2_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 4)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 0)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 1)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 2)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 3)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 5)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 6)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 7)));

    return LambdaHeadVar__2_70;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1231__1_2_p_0(
  MR_Word ArgTuples_24,
  MR_Word ProcArgTuples_43)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], ((MR_Box) (ArgTuples_24)), ((MR_Box) (ProcArgTuples_43)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__644__1_2_p_0(
  MR_Word TsccKind_19,
  MR_Word HeadVar__2_39)
{
  {
    MR_bool succeeded = (TsccKind_19 == HeadVar__2_39);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__154__1_2_f_0(
  MR_Word PredId_13,
  MR_Integer LambdaHeadVar__1_32)
{
  {
    MR_Word LambdaHeadVar__2_33;

    {
      LambdaHeadVar__2_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, 0) = ((MR_Box) (PredId_13));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, 1) = ((MR_Box) (LambdaHeadVar__1_32));
    }
    return LambdaHeadVar__2_33;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) ArgX1_4;
      MR_Integer Var_18 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        ml_backend__mlds____Compare____mlds_stmt_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_14 = (MR_Integer) ArgX1_3;
      MR_Integer Var_15 = (MR_Integer) ArgY1_4;

      succeeded = (Var_14 == Var_15);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word Var_20;

      ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        ml_backend__mlds____Compare____mlds_func_params_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], &Var_22, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              ml_backend__mlds____Compare____mlds_stmt_0_0(&Var_24, ArgX5_12, ArgY5_13);
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10], &Var_25, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], &Var_26, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[14], HeadVar__1_1, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
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

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_45 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_46 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_45 == CastY_46);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12)));
      MR_Word ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13)));
      MR_Word ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13)));
      MR_Word Var_32;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_32, ArgX1_4, ArgY1_5);
      succeeded = (Var_32 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_32;
      else
      {
        MR_Word Var_33;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_33, ArgX2_6, ArgY2_7);
        succeeded = (Var_33 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_33;
        else
        {
          MR_Word Var_34;

          hlds__hlds_pred____Compare____proc_info_0_0(&Var_34, ArgX3_8, ArgY3_9);
          succeeded = (Var_34 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_34;
          else
          {
            MR_Word Var_35;

            mercury__term____Compare____context_0_0(&Var_35, ArgX4_10, ArgY4_11);
            succeeded = (Var_35 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_35;
            else
            {
              MR_Word Var_36;
              MR_Integer Var_61 = (MR_Integer) ArgX5_12;
              MR_Integer Var_62 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_61, Var_62);
              succeeded = (Var_36 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_36;
              else
              {
                MR_Word Var_37;

                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], &Var_37, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_37 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_37;
                else
                {
                  MR_Word Var_38;

                  ml_backend__mlds____Compare____mlds_func_params_0_0(&Var_38, ArgX7_16, ArgY7_17);
                  succeeded = (Var_38 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_38;
                  else
                  {
                    MR_Word Var_39;

                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[13], &Var_39, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_39 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_39;
                    else
                    {
                      MR_Word Var_40;

                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], &Var_40, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_40 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_40;
                      else
                      {
                        MR_Word Var_41;

                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], &Var_41, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
                        succeeded = (Var_41 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_41;
                        else
                        {
                          MR_Word Var_42;

                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], &Var_42, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_42 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_42;
                          else
                          {
                            MR_Word Var_43;

                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10], &Var_43, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_43 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_43;
                            else
                            {
                              MR_Word Var_44;

                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10], &Var_44, ((MR_Box) (ArgX13_28)), ((MR_Box) (ArgY13_29)));
                              succeeded = (Var_44 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_44;
                              else
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10], HeadVar__1_1, ((MR_Box) (ArgX14_30)), ((MR_Box) (ArgY14_31)));
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
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));

      succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_26_26 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_27_27 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[14];
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
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_31 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_32 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_31 == CastY_32);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_38_38;
      MR_Word TypeInfo_40_40;
      MR_Word TypeInfo_41_41;
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_43_43;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_45_45;
      MR_Word TypeInfo_46_46;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Word ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13)));
      MR_Word ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13)));
      MR_Integer Var_47;
      MR_Integer Var_48;

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              Var_47 = (MR_Integer) ArgX5_11;
              Var_48 = (MR_Integer) ArgY5_12;
              succeeded = (Var_47 == Var_48);
              if (succeeded)
              {
                TypeInfo_38_38 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    TypeInfo_40_40 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[13];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_41_41 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_42_42 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_43_43 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_44_44 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_45_45 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10];
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                TypeInfo_46_46 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10];
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
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
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;
      MR_Integer Var_29 = (MR_Integer) ArgX1_4;
      MR_Integer Var_30 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_29, Var_30);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          ml_backend__mlds____Compare____mlds_func_params_0_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[13], &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], &Var_20, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10], HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          hlds__hlds_pred____Compare____proc_info_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer Var_22 = (MR_Integer) ArgX1_3;
      MR_Integer Var_23 = (MR_Integer) ArgY1_4;

      succeeded = (Var_22 == Var_23);
      if (succeeded)
      {
        succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[13];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = mercury__term____Unify____context_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_case_contain_nested_func_defn_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_9,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_10)
{
  {
    MR_Word Stmt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 2)));
    MR_Word _FirstCond_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 0)));
    MR_Word _LaterConds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 1)));

    ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(Stmt_8, STATE_VARIABLE_ContainsNestedFuncs_0_9, STATE_VARIABLE_ContainsNestedFuncs_10);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ContainsNestedFuncs_10;

    ml_backend__ml_proc_gen__does_case_contain_nested_func_defn_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_ContainsNestedFuncs_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ContainsNestedFuncs_10));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ContainsNestedFuncs_38;

    ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ContainsNestedFuncs_38);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContainsNestedFuncs_38));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(
  MR_Word Stmt_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_37,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_38)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Stmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FuncDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 1)));
          MR_Word SubStmts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 2)));
          MR_Word _LocalVarDefns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 0)));
          MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 3)));

          if ((FuncDefns_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Box conv1_STATE_VARIABLE_ContainsNestedFuncs_38;

            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[18], SubStmts_8, ((MR_Box) (STATE_VARIABLE_ContainsNestedFuncs_0_37)), &conv1_STATE_VARIABLE_ContainsNestedFuncs_38);
            *STATE_VARIABLE_ContainsNestedFuncs_38 = ((MR_Word) conv1_STATE_VARIABLE_ContainsNestedFuncs_38);
          }
          else
            *STATE_VARIABLE_ContainsNestedFuncs_38 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 2)));
          MR_Word _LoopKind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 0)));
          MR_Word _CondRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 1)));
          MR_Word _Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 3)));
          MR_Word next_value_of_Stmt_4 = SubStmt_14;

          // direct tailcall eliminated
          Stmt_4 = next_value_of_Stmt_4;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ThenStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 1)));
          MR_Word MaybeElseStmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 2)));
          MR_Word STATE_VARIABLE_ContainsNestedFuncs_44_44;
          MR_Word _Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 3)));
          MR_Word _CondRval_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 0)));

          ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(ThenStmt_15, STATE_VARIABLE_ContainsNestedFuncs_0_37, &STATE_VARIABLE_ContainsNestedFuncs_44_44);
          if ((MaybeElseStmt_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_44_44;
          else
          {
            MR_Word ElseStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElseStmt_16, (MR_Integer) 0)));
            MR_Word next_value_of_Stmt_4 = ElseStmt_17;
            MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37 = STATE_VARIABLE_ContainsNestedFuncs_44_44;

            // direct tailcall eliminated
            Stmt_4 = next_value_of_Stmt_4;
            STATE_VARIABLE_ContainsNestedFuncs_0_37 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
              MR_Word Default_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5)));
              MR_Word STATE_VARIABLE_ContainsNestedFuncs_42_42;
              MR_Word _Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word _Range_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word _Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
              MR_Box conv3_STATE_VARIABLE_ContainsNestedFuncs_42_42;

              mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[19], Cases_21, ((MR_Box) (STATE_VARIABLE_ContainsNestedFuncs_0_37)), &conv3_STATE_VARIABLE_ContainsNestedFuncs_42_42);
              STATE_VARIABLE_ContainsNestedFuncs_42_42 = ((MR_Word) conv3_STATE_VARIABLE_ContainsNestedFuncs_42_42);
              switch (MR_tag((MR_Word) Default_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_42_42;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_42_42;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word DefaultStmt_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_22, (MR_Integer) 0)));
                    MR_Word next_value_of_Stmt_4 = DefaultStmt_23;
                    MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37 = STATE_VARIABLE_ContainsNestedFuncs_42_42;

                    // direct tailcall eliminated
                    Stmt_4 = next_value_of_Stmt_4;
                    STATE_VARIABLE_ContainsNestedFuncs_0_37 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
          case (MR_Integer) 5:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
          case (MR_Integer) 6:
            {
              MR_Word GoalStmt_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word HandlerStmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word STATE_VARIABLE_ContainsNestedFuncs_39_39;
              MR_Word _Lval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Context_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
              MR_Word next_value_of_Stmt_4;
              MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37;

              ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(GoalStmt_25, STATE_VARIABLE_ContainsNestedFuncs_0_37, &STATE_VARIABLE_ContainsNestedFuncs_39_39);
              // direct tailcall eliminated
              next_value_of_Stmt_4 = HandlerStmt_26;
              next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37 = STATE_VARIABLE_ContainsNestedFuncs_39_39;
              Stmt_4 = next_value_of_Stmt_4;
              STATE_VARIABLE_ContainsNestedFuncs_0_37 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_37;
              continue;
            }
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_ContainsNestedFuncs_38 = STATE_VARIABLE_ContainsNestedFuncs_0_37;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_while_continue_5_p_0(
  MR_Word GotoEndStmts_6,
  MR_Word ProcStmtInfo_7,
  MR_Word * SwitchCase_8,
  MR_Word STATE_VARIABLE_PossibleSwitchValues_0_16,
  MR_Word * STATE_VARIABLE_PossibleSwitchValues_17)
{
  {
    MR_bool succeeded;
    MR_Word IdInTscc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_7, (MR_Integer) 0)));
    MR_Word ProcStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_7, (MR_Integer) 1)));
    MR_Word ProcContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_7, (MR_Integer) 2)));
    MR_Integer IdInTsccNum_13 = (MR_Integer) IdInTscc_10;
    MR_Word MatchCond_14;
    MR_Word SwitchStmt_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word LocalVarDefns_29;
    MR_Word FuncDefns_30;
    MR_Word BaseStmts_31;
    MR_Word Context_32;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_19, 0) = ((MR_Box) (IdInTsccNum_13));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      MatchCond_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MatchCond_14, 0) = ((MR_Box) (Var_18));
    }
    succeeded = ((MR_tag((MR_Word) ProcStmt_11)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      LocalVarDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_11, (MR_Integer) 0)));
      FuncDefns_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_11, (MR_Integer) 1)));
      BaseStmts_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_11, (MR_Integer) 2)));
      Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_11, (MR_Integer) 3)));
      {
        MR_Word Var_33;
        MR_Word Var_34;

        Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, BaseStmts_31, GotoEndStmts_6);
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (LocalVarDefns_29));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (FuncDefns_30));
          MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Context_32));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ProcStmt_11));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (GotoEndStmts_6));
      }
    SwitchStmt_15 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_22, ProcContext_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *SwitchCase_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchCond_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SwitchStmt_15));
    }
    mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (IdInTsccNum_13)), STATE_VARIABLE_PossibleSwitchValues_0_16, STATE_VARIABLE_PossibleSwitchValues_17);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_label_goto_3_p_0(
  MR_Word GotoEndStmt_4,
  MR_Word ProcStmtInfo_5,
  MR_Word * LabelProcStmts_6)
{
  {
    MR_bool succeeded;
    MR_Word IdInTscc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_5, (MR_Integer) 0)));
    MR_Word ProcStmt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_5, (MR_Integer) 1)));
    MR_Word ProcContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_5, (MR_Integer) 2)));
    MR_String StartLabel_10;
    MR_Word StartLabelStmt_11;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word LocalVarDefns_19;
    MR_Word FuncDefns_20;
    MR_Word BaseStmts_21;
    MR_Word Context_22;

    StartLabel_10 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, IdInTscc_7);
    {
      StartLabelStmt_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartLabelStmt_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), StartLabelStmt_11, 1) = ((MR_Box) (StartLabel_10));
      MR_hl_field(MR_mktag(3), StartLabelStmt_11, 2) = ((MR_Box) (ProcContext_9));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (GotoEndStmt_4));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    succeeded = ((MR_tag((MR_Word) ProcStmt_8)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      LocalVarDefns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_8, (MR_Integer) 0)));
      FuncDefns_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_8, (MR_Integer) 1)));
      BaseStmts_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_8, (MR_Integer) 2)));
      Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmt_8, (MR_Integer) 3)));
      {
        MR_Word Var_23;
        MR_Word Var_24;

        Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, BaseStmts_21, Var_14);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (LocalVarDefns_19));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (FuncDefns_20));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Context_22));
        }
        {
          Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (ProcStmt_8));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *LabelProcStmts_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartLabelStmt_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_13));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1375__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(
  MR_Word EntryProc_8,
  MR_Word PredProcCode_9,
  MR_Word * ProcStmtInfo_10,
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_40,
  MR_Word * STATE_VARIABLE_MaybeEntryProcInfo_41,
  MR_Word STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_42,
  MR_Word * STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_54_54;
    MR_Word PredProcIdArgsInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 0)));
    MR_Word GoalLocalVarDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 2)));
    MR_Word GoalFuncDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 3)));
    MR_Word GoalStmts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 5)));
    MR_Word PredProcId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 0)));
    MR_Word PredInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 1)));
    MR_Word ProcInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 2)));
    MR_Word ProcContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 3)));
    MR_Word IdInTscc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 4)));
    MR_Word FuncParams_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 6)));
    MR_Word ReturnRvalsTypes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 7)));
    MR_Word OwnLocalVarDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 8)));
    MR_Word TsccInLocalVarDefns_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 9)));
    MR_Word TsccOutLocalVarDefns_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 10)));
    MR_Word CopyTsccInToOwnStmts_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 11)));
    MR_Word CopyOwnToTsccOutStmts_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 12)));
    MR_Word CopyOutValThroughPtrStmts_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 13)));
    MR_Word AllLocalVarDefns_37;
    MR_Word AllStmts_38;
    MR_Word ProcStmt_39;
    MR_Word Var_50;
    MR_Word _FuncParams_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 1)));
    MR_Word _DescCommentStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 4)));
    MR_Word _ClosureWrapperFuncDefns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 6)));
    MR_Word _EnvVarNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 7)));
    MR_Word _ArgTuples_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 5)));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_21, EntryProc_8);
    if (succeeded)
    {
      MR_Word PredProcIdInfo_35;
      MR_Word EntryProcInfo_36;
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[7]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (STATE_VARIABLE_MaybeEntryProcInfo_0_40));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_proc_gen.construct_func_body_for_tscc\'/7", (MR_String) "!.MaybeEntryProcInfo != no");
      {
        PredProcIdInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredProcIdInfo_35, 0) = ((MR_Box) (PredProcId_21));
        MR_hl_field(MR_mktag(0), PredProcIdInfo_35, 1) = ((MR_Box) (PredInfo_22));
        MR_hl_field(MR_mktag(0), PredProcIdInfo_35, 2) = ((MR_Box) (ProcInfo_23));
        MR_hl_field(MR_mktag(0), PredProcIdInfo_35, 3) = ((MR_Box) (ProcContext_24));
      }
      {
        EntryProcInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EntryProcInfo_36, 0) = ((MR_Box) (IdInTscc_25));
        MR_hl_field(MR_mktag(0), EntryProcInfo_36, 1) = ((MR_Box) (PredProcIdInfo_35));
        MR_hl_field(MR_mktag(0), EntryProcInfo_36, 2) = ((MR_Box) (FuncParams_27));
        MR_hl_field(MR_mktag(0), EntryProcInfo_36, 3) = ((MR_Box) (ReturnRvalsTypes_28));
        MR_hl_field(MR_mktag(0), EntryProcInfo_36, 4) = ((MR_Box) (TsccOutLocalVarDefns_31));
        MR_hl_field(MR_mktag(0), EntryProcInfo_36, 5) = ((MR_Box) (CopyOutValThroughPtrStmts_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeEntryProcInfo_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EntryProcInfo_36));
      }
      *STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43 = STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_42;
    }
    else
    {
      *STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_42, TsccInLocalVarDefns_30);
      *STATE_VARIABLE_MaybeEntryProcInfo_41 = STATE_VARIABLE_MaybeEntryProcInfo_0_40;
    }
    AllLocalVarDefns_37 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, OwnLocalVarDefns_29, GoalLocalVarDefns_15);
    TypeCtorInfo_54_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    Var_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, GoalStmts_18, CopyOwnToTsccOutStmts_33);
    AllStmts_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, CopyTsccInToOwnStmts_32, Var_50);
    {
      ProcStmt_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcStmt_39, 0) = ((MR_Box) (AllLocalVarDefns_37));
      MR_hl_field(MR_mktag(0), ProcStmt_39, 1) = ((MR_Box) (GoalFuncDefns_16));
      MR_hl_field(MR_mktag(0), ProcStmt_39, 2) = ((MR_Box) (AllStmts_38));
      MR_hl_field(MR_mktag(0), ProcStmt_39, 3) = ((MR_Box) (ProcContext_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ProcStmtInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (IdInTscc_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcStmt_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcContext_24));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__2_70;

    conv5_LambdaHeadVar__2_70 = ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1319__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_70));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ProcStmtInfo_10;
    MR_Word conv1_STATE_VARIABLE_MaybeEntryProcInfo_41;
    MR_Word conv0_STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43;

    ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_ProcStmtInfo_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_MaybeEntryProcInfo_41, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43);
    *wrapper_arg_2 = ((MR_Box) (conv2_ProcStmtInfo_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeEntryProcInfo_41));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_NonEntryTsccInLocalVarDefns_43));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word LoopKind_9,
  MR_Word PredProcCodes_10,
  MR_Word EnvVarNames_11,
  MR_Word EntryProcDescComments_12,
  MR_Word EntryProc_13,
  MR_Word * FuncDefn_14)
{
  {
    MR_Word TypeCtorInfo_92_92;
    MR_Word TypeCtorInfo_98_98;
    MR_Word TypeCtorInfo_99_99;
    MR_Word ProcStmtInfos_16;
    MR_Word MaybeEntryProcInfo_17;
    MR_Word NonEntryTsccInLocalVarDefns_18;
    MR_Word EntryIdInTscc_20;
    MR_Word EntryPredProcIdInfo_21;
    MR_Word EntryProcParams_22;
    MR_Word EntryTsccOutLocalVarDefns_24;
    MR_Word EntryCopyOutValThroughPtrStmts_25;
    MR_Word EntryReturnRvals_26;
    MR_Word EntryProcContext_30;
    MR_Word ContainerVarDefns_31;
    MR_Word Stmts_32;
    MR_Word FuncBodyLocalVarDefns_33;
    MR_Integer EntryIdInTsccNum_34;
    MR_String EntryProcDesc_35;
    MR_String Comment0_36;
    MR_Word CommentStmt0_37;
    MR_Word CommentStmt1_39;
    MR_Word CommentStmt2_41;
    MR_Word EmptyCommentStmt_43;
    MR_Word ProcDescCommentStmts_44;
    MR_Word FuncBodyStmts_46;
    MR_Word FuncBodyStmt_47;
    MR_Word FuncBody_48;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_64;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_String Var_101;
    MR_String Var_103;
    MR_String Var_104;
    MR_String Var_111;
    MR_Box conv4_MaybeEntryProcInfo_17;
    MR_Box conv3_NonEntryTsccInLocalVarDefns_18;
    MR_Word _EntryPredProcId_27;
    MR_Word _EntryPredInfo_28;
    MR_Word _EntryProcInfo_29;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", EntryProc_13, ModuleInfo_8);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (EntryProc_13));
    }
    TypeCtorInfo_92_92 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0;
    mercury__list__map_foldl2_7_p_0(TypeCtorInfo_92_92, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], Var_52, PredProcCodes_10, &ProcStmtInfos_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_MaybeEntryProcInfo_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_NonEntryTsccInLocalVarDefns_18);
    MaybeEntryProcInfo_17 = ((MR_Word) conv4_MaybeEntryProcInfo_17);
    NonEntryTsccInLocalVarDefns_18 = ((MR_Word) conv3_NonEntryTsccInLocalVarDefns_18);
    if ((MaybeEntryProcInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.construct_tscc_entry_proc\'/7", (MR_String) "MaybeEntryProcInfo = no");
        return;
      }
    }
    else
    {
      MR_Word EntryProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeEntryProcInfo_17, (MR_Integer) 0)));
      MR_Word EntryReturnRvalsTypes_23;

      EntryIdInTscc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_19, (MR_Integer) 0)));
      EntryPredProcIdInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_19, (MR_Integer) 1)));
      EntryProcParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_19, (MR_Integer) 2)));
      EntryReturnRvalsTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_19, (MR_Integer) 3)));
      EntryTsccOutLocalVarDefns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_19, (MR_Integer) 4)));
      EntryCopyOutValThroughPtrStmts_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_19, (MR_Integer) 5)));
      mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, EntryReturnRvalsTypes_23, &EntryReturnRvals_26);
    }
    _EntryPredProcId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_21, (MR_Integer) 0)));
    _EntryPredInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_21, (MR_Integer) 1)));
    _EntryProcInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_21, (MR_Integer) 2)));
    EntryProcContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_21, (MR_Integer) 3)));
    ml_backend__ml_proc_gen__make_container_proc_8_p_0(LoopKind_9, EntryCopyOutValThroughPtrStmts_25, EntryReturnRvals_26, EntryIdInTscc_20, EntryProcContext_30, ProcStmtInfos_16, &ContainerVarDefns_31, &Stmts_32);
    TypeCtorInfo_98_98 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
    Var_57 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_98_98, NonEntryTsccInLocalVarDefns_18, EntryTsccOutLocalVarDefns_24);
    FuncBodyLocalVarDefns_33 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_98_98, ContainerVarDefns_31, Var_57);
    EntryIdInTsccNum_34 = (MR_Integer) EntryIdInTscc_20;
    EntryProcDesc_35 = hlds__hlds_desc__describe_proc_from_id_2_f_0(ModuleInfo_8, EntryProc_13);
    Var_101 = mercury__string__f_43_43_2_f_0(EntryProcDesc_35, (MR_String) ".");
    Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_101);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_14[0], EntryIdInTsccNum_34, &Var_104);
    Var_111 = mercury__string__f_43_43_2_f_0(Var_104, Var_103);
    Comment0_36 = mercury__string__f_43_43_2_f_0((MR_String) "The code for TSCC PROC ", Var_111);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Comment0_36));
    }
    {
      CommentStmt0_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt0_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt0_37, 1) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(3), CommentStmt0_37, 2) = ((MR_Box) (EntryProcContext_30));
    }
    {
      CommentStmt1_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt1_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt1_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_14[3])));
      MR_hl_field(MR_mktag(3), CommentStmt1_39, 2) = ((MR_Box) (EntryProcContext_30));
    }
    {
      CommentStmt2_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt2_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt2_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_14[4])));
      MR_hl_field(MR_mktag(3), CommentStmt2_41, 2) = ((MR_Box) (EntryProcContext_30));
    }
    {
      EmptyCommentStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EmptyCommentStmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), EmptyCommentStmt_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_14[5])));
      MR_hl_field(MR_mktag(3), EmptyCommentStmt_43, 2) = ((MR_Box) (EntryProcContext_30));
    }
    TypeCtorInfo_99_99 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    ProcDescCommentStmts_44 = mercury__list__map_2_f_0(TypeCtorInfo_92_92, TypeCtorInfo_99_99, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[17], PredProcCodes_10);
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (EmptyCommentStmt_43));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (ProcDescCommentStmts_44));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (CommentStmt2_41));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (CommentStmt1_39));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (CommentStmt0_37));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (EmptyCommentStmt_43));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (EntryProcDescComments_12));
    }
    Var_75 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_99_99, Var_76, Stmts_32);
    FuncBodyStmts_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_99_99, Var_71, Var_75);
    {
      FuncBodyStmt_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 0) = ((MR_Box) (FuncBodyLocalVarDefns_33));
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 2) = ((MR_Box) (FuncBodyStmts_46));
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 3) = ((MR_Box) (EntryProcContext_30));
    }
    {
      FuncBody_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FuncBody_48, 0) = ((MR_Box) (FuncBodyStmt_47));
    }
    ml_backend__ml_proc_gen__construct_func_defn_6_p_0(ModuleInfo_8, EntryPredProcIdInfo_21, EntryProcParams_22, FuncBody_48, EnvVarNames_11, FuncDefn_14);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LabelProcStmts_6;

    ml_backend__ml_proc_gen__make_wrapped_proc_with_label_goto_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LabelProcStmts_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_LabelProcStmts_6));
  }
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
  {
    MR_Word ReturnStmt_17;

    {
      ReturnStmt_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ReturnStmt_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ReturnStmt_17, 1) = ((MR_Box) (ReturnRvals_11));
      MR_hl_field(MR_mktag(3), ReturnStmt_17, 2) = ((MR_Box) (EntryProcContext_13));
    }
    switch (LoopKind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_33_44;
          MR_Word EndLabelStmt_25;
          MR_Word GotoEndStmt_26;
          MR_Word ProcWrappedStmtLists_27;
          MR_Word ProcWrappedStmts_28;
          MR_String EntryStartLabel_29;
          MR_Word GotoEntryStmt_30;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            EndLabelStmt_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), EndLabelStmt_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), EndLabelStmt_25, 1) = ((MR_Box) ((MR_String) "tscc_end"));
            MR_hl_field(MR_mktag(3), EndLabelStmt_25, 2) = ((MR_Box) (EntryProcContext_13));
          }
          {
            GotoEndStmt_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GotoEndStmt_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), GotoEndStmt_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_14[2])));
            MR_hl_field(MR_mktag(3), GotoEndStmt_26, 2) = ((MR_Box) (EntryProcContext_13));
          }
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[7]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_proc_gen__make_container_proc_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (GotoEndStmt_26));
          }
          mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10], Var_32, ProcStmtInfos_14, &ProcWrappedStmtLists_27);
          TypeCtorInfo_33_44 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
          mercury__list__condense_2_p_0(TypeCtorInfo_33_44, ProcWrappedStmtLists_27, &ProcWrappedStmts_28);
          EntryStartLabel_29 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, EntryProc_12);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (EntryStartLabel_29));
          }
          {
            GotoEntryStmt_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GotoEntryStmt_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), GotoEntryStmt_30, 1) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(3), GotoEntryStmt_30, 2) = ((MR_Box) (EntryProcContext_13));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (GotoEntryStmt_30));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (ProcWrappedStmts_28));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (EndLabelStmt_25));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (CopyOutValThroughPtrStmts_10));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ReturnStmt_17));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_36 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_33_44, Var_37, Var_38);
          *Stmts_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_33_44, Var_35, Var_36);
          *ContainerVarDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 0:
        ml_backend__ml_proc_gen__make_container_proc_with_while_continue_7_p_0(CopyOutValThroughPtrStmts_10, ReturnStmt_17, EntryProc_12, EntryProcContext_13, ProcStmtInfos_14, ContainerVarDefns_15, Stmts_16);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_with_while_continue_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_SwitchCase_8;
    MR_Word conv0_STATE_VARIABLE_PossibleSwitchValues_17;

    ml_backend__ml_proc_gen__make_wrapped_proc_with_while_continue_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_SwitchCase_8, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_PossibleSwitchValues_17);
    *wrapper_arg_2 = ((MR_Box) (conv1_SwitchCase_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PossibleSwitchValues_17));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_with_while_continue_7_p_0(
  MR_Word CopyOutValThroughPtrStmts_8,
  MR_Word ReturnStmt_9,
  MR_Word EntryProc_10,
  MR_Word EntryProcContext_11,
  MR_Word ProcStmtInfos_12,
  MR_Word * ContainerVarDefns_13,
  MR_Word * WrappedStmts_14)
{
  {
    MR_Word TypeCtorInfo_65_65;
    MR_Word TypeCtorInfo_69_69;
    MR_Word GotoEndStmts_15;
    MR_Word SwitchCases_16;
    MR_Word PossibleSwitchValues_17;
    MR_Word SelectorType_19;
    MR_Word SelectorVarDefn_20;
    MR_Integer EntryProcNum_21;
    MR_Word SetSelectorStmt_23;
    MR_Word PossibleSwitchValuesList_24;
    MR_Integer SwitchMin_25;
    MR_Integer SwitchMax_26;
    MR_Word SwitchRange_27;
    MR_Word SwitchStmt_29;
    MR_Word BreakStmt_30;
    MR_Word SwitchBreakStmt_31;
    MR_Word LoopStmt_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Box conv2_PossibleSwitchValues_17;
    MR_Box conv3_SwitchMin_25;
    MR_Box conv4_SwitchMax_26;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_33, 2) = ((MR_Box) (EntryProcContext_11));
    }
    {
      GotoEndStmts_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GotoEndStmts_15, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), GotoEndStmts_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__ml_proc_gen__make_container_proc_with_while_continue_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (GotoEndStmts_15));
    }
    TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_37 = mercury__set__init_0_f_0(TypeCtorInfo_65_65);
    mercury__list__map_foldl_5_p_0((MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[11], Var_36, ProcStmtInfos_12, &SwitchCases_16, ((MR_Box) (Var_37)), &conv2_PossibleSwitchValues_17);
    PossibleSwitchValues_17 = ((MR_Word) conv2_PossibleSwitchValues_17);
    SelectorType_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    {
      SelectorVarDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SelectorVarDefn_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[16])));
      MR_hl_field(MR_mktag(0), SelectorVarDefn_20, 1) = ((MR_Box) (EntryProcContext_11));
      MR_hl_field(MR_mktag(0), SelectorVarDefn_20, 2) = ((MR_Box) (SelectorType_19));
      MR_hl_field(MR_mktag(0), SelectorVarDefn_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SelectorVarDefn_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ContainerVarDefns_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SelectorVarDefn_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    EntryProcNum_21 = (MR_Integer) EntryProc_10;
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (EntryProcNum_21));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[16])));
      MR_hl_field(MR_mktag(2), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      SetSelectorStmt_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SetSelectorStmt_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), SetSelectorStmt_23, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(3), SetSelectorStmt_23, 2) = ((MR_Box) (EntryProcContext_11));
    }
    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_65_65, PossibleSwitchValues_17, &PossibleSwitchValuesList_24);
    conv3_SwitchMin_25 = mercury__list__det_head_1_f_0(TypeCtorInfo_65_65, PossibleSwitchValuesList_24);
    SwitchMin_25 = ((MR_Integer) conv3_SwitchMin_25);
    conv4_SwitchMax_26 = mercury__list__det_last_1_f_0(TypeCtorInfo_65_65, PossibleSwitchValuesList_24);
    SwitchMax_26 = ((MR_Integer) conv4_SwitchMax_26);
    {
      SwitchRange_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SwitchRange_27, 0) = ((MR_Box) (SwitchMin_25));
      MR_hl_field(MR_mktag(1), SwitchRange_27, 1) = ((MR_Box) (SwitchMax_26));
    }
    {
      SwitchStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 1) = ((MR_Box) (SelectorType_19));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_proc_gen_scalar_common_14[1])));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 3) = ((MR_Box) (SwitchRange_27));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 4) = ((MR_Box) (SwitchCases_16));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), SwitchStmt_29, 6) = ((MR_Box) (EntryProcContext_11));
    }
    {
      BreakStmt_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BreakStmt_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), BreakStmt_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), BreakStmt_30, 2) = ((MR_Box) (EntryProcContext_11));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (BreakStmt_30));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (SwitchStmt_29));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      SwitchBreakStmt_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SwitchBreakStmt_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SwitchBreakStmt_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SwitchBreakStmt_31, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), SwitchBreakStmt_31, 3) = ((MR_Box) (EntryProcContext_11));
    }
    {
      LoopStmt_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LoopStmt_32, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), LoopStmt_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[15])));
      MR_hl_field(MR_mktag(1), LoopStmt_32, 2) = ((MR_Box) (SwitchBreakStmt_31));
      MR_hl_field(MR_mktag(1), LoopStmt_32, 3) = ((MR_Box) (EntryProcContext_11));
    }
    TypeCtorInfo_69_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (LoopStmt_32));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (SetSelectorStmt_23));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ReturnStmt_9));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_69_69, CopyOutValThroughPtrStmts_8, Var_59);
    *WrappedStmts_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_69_69, Var_55, Var_58);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1231__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Target_12,
  MR_Word ConstStructMap_13,
  MR_Word TsccCodeModel_14,
  MR_Word PredProcIdArgsInfo_15,
  MR_Word * PredProcCode_16,
  MR_Word STATE_VARIABLE_GlobalData_0_61,
  MR_Word * STATE_VARIABLE_GlobalData_62,
  MR_Word STATE_VARIABLE_TsccInfo_0_63,
  MR_Word * STATE_VARIABLE_TsccInfo_64)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 0)));
    MR_Word PredInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 1)));
    MR_Word ProcInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 2)));
    MR_Word ProcContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 3)));
    MR_Word ProcIdInTscc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 4)));
    MR_Word ArgTuples_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 5)));
    MR_Word PredStatus_35;
    MR_Integer ProcId_38;
    MR_String ProcDesc_39;
    MR_Integer ProcNumInTscc_40;
    MR_String ProcDescComment_41;
    MR_Word CommentStmt_42;
    MR_Word ProcArgTuples_43;
    MR_Word FuncParams_44;
    MR_Word ByRefOutputVars_45;
    MR_Word CopiedOutputVars0_46;
    MR_Word CopiedOutputVars_47;
    MR_Word ByRefOutputVarsSet_48;
    MR_Word CodeModel_49;
    MR_Word InitSucceededStmts_50;
    MR_Word Goal_52;
    MR_Word LocalVarDefns0_53;
    MR_Word FuncDefns_54;
    MR_Word GoalStmts0_55;
    MR_Word GoalStmts_56;
    MR_Word SucceededVarDefns_57;
    MR_Word LocalVarDefns_58;
    MR_Word EnvVarNames_59;
    MR_Word ClosureWrapperFuncDefns_60;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_Info_79_79;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_Info_83_83;
    MR_Word STATE_VARIABLE_Info_85_85;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_String Var_97;
    MR_String Var_98;
    MR_String Var_105;
    MR_Word _FuncParams_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 6)));
    MR_Word _ReturnRvalsTypes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 7)));
    MR_Word _OwnLocalVarDefns_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 8)));
    MR_Word _TsscInLocalVarDefns_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 9)));
    MR_Word _TsccOutLocalVarDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 10)));
    MR_Word _CopyTsccInToOwnStmts_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 11)));
    MR_Word _CopyOwnToTsccOutStmts_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 12)));
    MR_Word _CopyOutValThroughPtrStmts_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 13)));
    MR_Word Var_69;
    MR_Word Var_36;
    MR_Word _PredId_37;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating in-TSCC MLDS code for ", PredProcId_19, ModuleInfo_11);
    STATE_VARIABLE_Info_68_68 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_11, Target_12, ConstStructMap_13, PredProcId_19, ProcInfo_21, STATE_VARIABLE_GlobalData_0_61, STATE_VARIABLE_TsccInfo_0_63);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_20, &PredStatus_35);
    Var_69 = (MR_Word) PredStatus_35;
    succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0)));
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc_proc_code\'/10", (MR_String) "status_external");
        return;
      }
    }
    else
    {
    }
    _PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_19, (MR_Integer) 0)));
    ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_19, (MR_Integer) 1)));
    ProcDesc_39 = hlds__hlds_desc__describe_proc_2_f_0(PredInfo_20, ProcId_38);
    ProcNumInTscc_40 = (MR_Integer) ProcIdInTscc_23;
    Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " in TSCC: ", ProcDesc_39);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_14[0], ProcNumInTscc_40, &Var_98);
    Var_105 = mercury__string__f_43_43_2_f_0(Var_98, Var_97);
    ProcDescComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "proc ", Var_105);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ProcDescComment_41));
    }
    {
      CommentStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt_42, 1) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(3), CommentStmt_42, 2) = ((MR_Box) (ProcContext_22));
    }
    ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_19, &ProcArgTuples_43, &FuncParams_44, &ByRefOutputVars_45, &CopiedOutputVars0_46, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_79_79);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (ArgTuples_24));
      MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (ProcArgTuples_43));
    }
    mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc_proc_code\'/10", (MR_String) "ArgTuples != ProcArgTuples");
    CopiedOutputVars_47 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], ByRefOutputVars_45, CopiedOutputVars0_46);
    parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &ByRefOutputVarsSet_48);
    ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVarsSet_48, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_83_83);
    switch (TsccCodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CodeModel_49 = (MR_Integer) 0;
          InitSucceededStmts_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_Info_85_85 = STATE_VARIABLE_Info_83_83;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitSucceededStmt_51;

          CodeModel_49 = (MR_Integer) 1;
          ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[15]), ProcContext_22, &InitSucceededStmt_51, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_85_85);
          {
            InitSucceededStmts_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), InitSucceededStmts_50, 0) = ((MR_Box) (InitSucceededStmt_51));
            MR_hl_field(MR_mktag(1), InitSucceededStmts_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_21, &Goal_52);
    ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0(CodeModel_49, ArgTuples_24, CopiedOutputVars_47, Goal_52, &LocalVarDefns0_53, &FuncDefns_54, &GoalStmts0_55, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_88_88);
    GoalStmts_56 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, InitSucceededStmts_50, GoalStmts0_55);
    ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(STATE_VARIABLE_Info_88_88, ProcContext_22, &SucceededVarDefns_57);
    LocalVarDefns_58 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, SucceededVarDefns_57, LocalVarDefns0_53);
    ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(STATE_VARIABLE_Info_88_88, &EnvVarNames_59, &ClosureWrapperFuncDefns_60, STATE_VARIABLE_GlobalData_62, STATE_VARIABLE_TsccInfo_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *PredProcCode_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredProcIdArgsInfo_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncParams_44));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LocalVarDefns_58));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FuncDefns_54));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CommentStmt_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GoalStmts_56));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ClosureWrapperFuncDefns_60));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (EnvVarNames_59));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredProcId_15,
  MR_Word * PredProcIdArgsInfo_16,
  MR_Integer STATE_VARIABLE_ProcNum_0_50,
  MR_Integer * STATE_VARIABLE_ProcNum_51,
  MR_Word STATE_VARIABLE_MaybeOutVarsTypes_0_52,
  MR_Word * STATE_VARIABLE_MaybeOutVarsTypes_53,
  MR_Word STATE_VARIABLE_CanGenerateTscc_0_54,
  MR_Word * STATE_VARIABLE_CanGenerateTscc_55,
  MR_Word STATE_VARIABLE_OutArgNames_0_56,
  MR_Word * STATE_VARIABLE_OutArgNames_57,
  MR_Word STATE_VARIABLE_InSccMap_0_58,
  MR_Word * STATE_VARIABLE_InSccMap_59)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_71_71;
    MR_Word TypeCtorInfo_72_72;
    MR_Word IdInTscc_23 = (MR_Word) STATE_VARIABLE_ProcNum_0_50;
    MR_Word PredInfo_24;
    MR_Word ProcInfo_25;
    MR_Word PredOrFunc_26;
    MR_Word CodeModel_27;
    MR_Word VarSet_28;
    MR_Word HeadVars_29;
    MR_Word HeadTypes_30;
    MR_Word HeadModes_31;
    MR_Word Goal_32;
    MR_Word GoalInfo_34;
    MR_Word ProcContext_35;
    MR_Word ArgTuples_36;
    MR_Word TsccInArgs_37;
    MR_Word FuncParams_38;
    MR_Word ReturnRvalsTypes_39;
    MR_Word OutVarsTypes_40;
    MR_Word OwnLocalVarDefns_41;
    MR_Word TsccInLocalVarDefns_42;
    MR_Word TsccValueLocalVarDefns_43;
    MR_Word CopyTsccToOwnStmts_44;
    MR_Word CopyOwnToTsccStmts_45;
    MR_Word CopyOutValThroughPtrStmts_46;
    MR_Word InSccInfo0_48;
    MR_Word InSccInfo_49;
    MR_Word Var_65;
    MR_Word _GoalExpr_33;
    MR_Box conv0_InSccInfo0_48;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_67;

    *STATE_VARIABLE_ProcNum_51 = (STATE_VARIABLE_ProcNum_0_50 + (MR_Integer) 1);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_14, PredProcId_15, &PredInfo_24, &ProcInfo_25);
    hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_24, &PredOrFunc_26);
    CodeModel_27 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_25);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_25, &VarSet_28);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_25, &HeadVars_29);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_24, &HeadTypes_30);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_25, &HeadModes_31);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &Goal_32);
    _GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_32, (MR_Integer) 0)));
    GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_32, (MR_Integer) 1)));
    ProcContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_34);
    ml_backend__ml_args_util__ml_gen_tscc_arg_params_22_p_0(ModuleInfo_14, PredOrFunc_26, CodeModel_27, ProcContext_35, IdInTscc_23, VarSet_28, HeadVars_29, HeadTypes_30, HeadModes_31, &ArgTuples_36, STATE_VARIABLE_OutArgNames_0_56, STATE_VARIABLE_OutArgNames_57, &TsccInArgs_37, &FuncParams_38, &ReturnRvalsTypes_39, &OutVarsTypes_40, &OwnLocalVarDefns_41, &TsccInLocalVarDefns_42, &TsccValueLocalVarDefns_43, &CopyTsccToOwnStmts_44, &CopyOwnToTsccStmts_45, &CopyOutValThroughPtrStmts_46);
    if ((STATE_VARIABLE_MaybeOutVarsTypes_0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeOutVarsTypes_53 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OutVarsTypes_40));
      }
      *STATE_VARIABLE_CanGenerateTscc_55 = STATE_VARIABLE_CanGenerateTscc_0_54;
    }
    else
    {
      MR_Word OldOutVarsTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeOutVarsTypes_0_52, (MR_Integer) 0)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[4], ((MR_Box) (OutVarsTypes_40)), ((MR_Box) (OldOutVarsTypes_47)));
      if (succeeded)
        *STATE_VARIABLE_CanGenerateTscc_55 = STATE_VARIABLE_CanGenerateTscc_0_54;
      else
        *STATE_VARIABLE_CanGenerateTscc_55 = (MR_Integer) 0;
      *STATE_VARIABLE_MaybeOutVarsTypes_53 = STATE_VARIABLE_MaybeOutVarsTypes_0_52;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *PredProcIdArgsInfo_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredProcId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredInfo_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcInfo_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ProcContext_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IdInTscc_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ArgTuples_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FuncParams_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ReturnRvalsTypes_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (OwnLocalVarDefns_41));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TsccInLocalVarDefns_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (TsccValueLocalVarDefns_43));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (CopyTsccToOwnStmts_44));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (CopyOwnToTsccStmts_45));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (CopyOutValThroughPtrStmts_46));
    }
    TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    TypeCtorInfo_72_72 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_71_71, TypeCtorInfo_72_72, STATE_VARIABLE_InSccMap_0_58, ((MR_Box) (PredProcId_15)), &conv0_InSccInfo0_48);
    InSccInfo0_48 = ((MR_Word) conv0_InSccInfo0_48);
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (IdInTscc_23));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (TsccInArgs_37));
    }
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_48, (MR_Integer) 0)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_48, (MR_Integer) 1)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_48, (MR_Integer) 2)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_48, (MR_Integer) 3)));
    {
      InSccInfo_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InSccInfo_49, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), InSccInfo_49, 1) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), InSccInfo_49, 2) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), InSccInfo_49, 3) = ((MR_Box) (Var_70));
    }
    mercury__map__det_update_4_p_0(TypeCtorInfo_71_71, TypeCtorInfo_72_72, ((MR_Box) (PredProcId_15)), ((MR_Box) (InSccInfo_49)), STATE_VARIABLE_InSccMap_0_58, STATE_VARIABLE_InSccMap_59);
  }
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
  {
    MR_Word IsTargetOfNonTRCalls_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_8, (MR_Integer) 3)));
    MR_Word IsTargetOfMutualTRCall_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_8, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_8, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_8, (MR_Integer) 1)));

    if ((IsTargetOfNonTRCalls_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_NonTailEntryPredProcIds_16 = STATE_VARIABLE_NonTailEntryPredProcIds_0_15;
    else
    {
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_7)), STATE_VARIABLE_NonTailEntryPredProcIds_0_15, STATE_VARIABLE_NonTailEntryPredProcIds_16);
    }
    switch (IsTargetOfMutualTRCall_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_7)), STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17, STATE_VARIABLE_NoMutualTailRecPredProcIds_18);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_NoMutualTailRecPredProcIds_18 = STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17;
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word _SCCEntryPredProcIds_16,
  MR_Word TsccCodeModel_17,
  MR_Word TSCCE_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_InSccMap_0_47,
  MR_Word * STATE_VARIABLE_InSccMap_48)
{
  ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0(ModuleInfo_13, Target_14, ConstStructMap_15, TsccCodeModel_17, TSCCE_18, STATE_VARIABLE_FuncDefns_0_43, STATE_VARIABLE_FuncDefns_44, STATE_VARIABLE_GlobalData_0_45, STATE_VARIABLE_GlobalData_46, STATE_VARIABLE_InSccMap_0_47, STATE_VARIABLE_InSccMap_48);
}

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_FuncDefns_28;
    MR_Word conv2_STATE_VARIABLE_GlobalData_30;
    MR_Word conv1_STATE_VARIABLE_InSccMap_32;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_FuncDefns_28, ((MR_Word) wrapper_arg_4), &conv2_STATE_VARIABLE_GlobalData_30, ((MR_Word) wrapper_arg_6), &conv1_STATE_VARIABLE_InSccMap_32);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_FuncDefns_28));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_GlobalData_30));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_InSccMap_32));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FuncDefn_14;

    ml_backend__ml_proc_gen__construct_tscc_entry_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), &conv0_FuncDefn_14);
    *wrapper_arg_2 = ((MR_Box) (conv0_FuncDefn_14));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word TsccCodeModel_17,
  MR_Word TSCCE_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_InSccMap_0_47,
  MR_Word * STATE_VARIABLE_InSccMap_48)
{
  {
    MR_Word TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word PredProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCCE_18, (MR_Integer) 0)));
    MR_Word PredProcIdList_25;
    MR_Word _CalledFromHigherTSCCs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCCE_18, (MR_Integer) 1)));
    MR_Word _ExportedTSCCPredProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCCE_18, (MR_Integer) 2)));

    PredProcIdList_25 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_69_69, PredProcIds_22);
    if ((PredProcIdList_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc\'/12", (MR_String) "empty TSCC");
        return;
      }
    }
    else
    {
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredProcIdList_25, (MR_Integer) 1)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredProcIdList_25, (MR_Integer) 0)));

      if ((Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(ModuleInfo_13, Target_14, ConstStructMap_15, (MR_Integer) 1, Var_84, STATE_VARIABLE_FuncDefns_0_43, STATE_VARIABLE_FuncDefns_44, STATE_VARIABLE_GlobalData_0_45, STATE_VARIABLE_GlobalData_46, STATE_VARIABLE_InSccMap_0_47, STATE_VARIABLE_InSccMap_48);
      }
      else
      {
        MR_Word NoMutualPredProcIds_31;
        MR_Word MutualPredProcIds_32;
        MR_Word MutualPredProcCodes_33;
        MR_Word CanGenerateTscc_34;
        MR_Word MutualEnvVarNames_35;
        MR_Word MutualClosureWrapperFuncDefns_36;
        MR_Word LoopKind_37;
        MR_Word TrialInSccMap_38;
        MR_Word TrialGlobalData_39;
        MR_Word OutsideTsccPredProcIds_40;
        MR_Word STATE_VARIABLE_InSccMap_50_50;
        MR_Word STATE_VARIABLE_GlobalData_51_51;
        MR_Word STATE_VARIABLE_FuncDefns_54_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word _NonTailEntryPredProcIds_30;
        MR_Box conv6_STATE_VARIABLE_FuncDefns_44;
        MR_Box conv5_STATE_VARIABLE_GlobalData_46;
        MR_Box conv4_STATE_VARIABLE_InSccMap_48;

        ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0(ModuleInfo_13, Target_14, ConstStructMap_15, TsccCodeModel_17, PredProcIds_22, &_NonTailEntryPredProcIds_30, &NoMutualPredProcIds_31, &MutualPredProcIds_32, &MutualPredProcCodes_33, &CanGenerateTscc_34, &MutualEnvVarNames_35, &MutualClosureWrapperFuncDefns_36, &LoopKind_37, STATE_VARIABLE_InSccMap_0_47, &TrialInSccMap_38, STATE_VARIABLE_GlobalData_0_45, &TrialGlobalData_39);
        switch (CanGenerateTscc_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_72_72;
              MR_Word TSCCFuncDefns_42;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_55;

              OutsideTsccPredProcIds_40 = NoMutualPredProcIds_31;
              STATE_VARIABLE_InSccMap_50_50 = TrialInSccMap_38;
              STATE_VARIABLE_GlobalData_51_51 = TrialGlobalData_39;
              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[1]));
                MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_1));
                MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_13));
                MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (LoopKind_37));
                MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (MutualPredProcCodes_33));
                MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (MutualEnvVarNames_35));
                MR_hl_field(MR_mktag(0), Var_52, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              Var_53 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_69_69, MutualPredProcIds_32);
              TypeCtorInfo_72_72 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
              mercury__list__map_3_p_0(TypeCtorInfo_69_69, TypeCtorInfo_72_72, Var_52, Var_53, &TSCCFuncDefns_42);
              Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_72, TSCCFuncDefns_42, STATE_VARIABLE_FuncDefns_0_43);
              STATE_VARIABLE_FuncDefns_54_54 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_72, MutualClosureWrapperFuncDefns_36, Var_55);
            }
            break;
          case (MR_Integer) 0:
            {
              OutsideTsccPredProcIds_40 = PredProcIds_22;
              STATE_VARIABLE_FuncDefns_54_54 = STATE_VARIABLE_FuncDefns_0_43;
              STATE_VARIABLE_GlobalData_51_51 = STATE_VARIABLE_GlobalData_0_45;
              STATE_VARIABLE_InSccMap_50_50 = STATE_VARIABLE_InSccMap_0_47;
            }
            break;
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_2));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Target_14));
          MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (ConstStructMap_15));
          MR_hl_field(MR_mktag(0), Var_56, 6) = ((MR_Box) ((MR_Integer) 1));
        }
        Var_57 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_69_69, OutsideTsccPredProcIds_40);
        mercury__list__foldl3_8_p_0(TypeCtorInfo_69_69, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], Var_56, Var_57, ((MR_Box) (STATE_VARIABLE_FuncDefns_54_54)), &conv6_STATE_VARIABLE_FuncDefns_44, ((MR_Box) (STATE_VARIABLE_GlobalData_51_51)), &conv5_STATE_VARIABLE_GlobalData_46, ((MR_Box) (STATE_VARIABLE_InSccMap_50_50)), &conv4_STATE_VARIABLE_InSccMap_48);
        *STATE_VARIABLE_FuncDefns_44 = ((MR_Word) conv6_STATE_VARIABLE_FuncDefns_44);
        *STATE_VARIABLE_GlobalData_46 = ((MR_Word) conv5_STATE_VARIABLE_GlobalData_46);
        *STATE_VARIABLE_InSccMap_48 = ((MR_Word) conv4_STATE_VARIABLE_InSccMap_48);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_NonTailEntryPredProcIds_16;
    MR_Word conv16_STATE_VARIABLE_NoMutualTailRecPredProcIds_18;

    ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv17_STATE_VARIABLE_NonTailEntryPredProcIds_16, ((MR_Word) wrapper_arg_5), &conv16_STATE_VARIABLE_NoMutualTailRecPredProcIds_18);
    *wrapper_arg_4 = ((MR_Box) (conv17_STATE_VARIABLE_NonTailEntryPredProcIds_16));
    *wrapper_arg_6 = ((MR_Box) (conv16_STATE_VARIABLE_NoMutualTailRecPredProcIds_18));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_PredProcCode_16;
    MR_Word conv12_STATE_VARIABLE_GlobalData_62;
    MR_Word conv11_STATE_VARIABLE_TsccInfo_64;

    ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), &conv13_PredProcCode_16, ((MR_Word) wrapper_arg_3), &conv12_STATE_VARIABLE_GlobalData_62, ((MR_Word) wrapper_arg_5), &conv11_STATE_VARIABLE_TsccInfo_64);
    *wrapper_arg_2 = ((MR_Box) (conv13_PredProcCode_16));
    *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_GlobalData_62));
    *wrapper_arg_6 = ((MR_Box) (conv11_STATE_VARIABLE_TsccInfo_64));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_1(
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
  MR_Box * wrapper_arg_12)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_PredProcIdArgsInfo_16;
    MR_Integer conv4_STATE_VARIABLE_ProcNum_51;
    MR_Word conv3_STATE_VARIABLE_MaybeOutVarsTypes_53;
    MR_Word conv2_STATE_VARIABLE_CanGenerateTscc_55;
    MR_Word conv1_STATE_VARIABLE_OutArgNames_57;
    MR_Word conv0_STATE_VARIABLE_InSccMap_59;

    ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv5_PredProcIdArgsInfo_16, ((MR_Integer) wrapper_arg_3), &conv4_STATE_VARIABLE_ProcNum_51, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_MaybeOutVarsTypes_53, ((MR_Word) wrapper_arg_7), &conv2_STATE_VARIABLE_CanGenerateTscc_55, ((MR_Word) wrapper_arg_9), &conv1_STATE_VARIABLE_OutArgNames_57, ((MR_Word) wrapper_arg_11), &conv0_STATE_VARIABLE_InSccMap_59);
    *wrapper_arg_2 = ((MR_Box) (conv5_PredProcIdArgsInfo_16));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_ProcNum_51));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeOutVarsTypes_53));
    *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_CanGenerateTscc_55));
    *wrapper_arg_10 = ((MR_Box) (conv1_STATE_VARIABLE_OutArgNames_57));
    *wrapper_arg_12 = ((MR_Box) (conv0_STATE_VARIABLE_InSccMap_59));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word ConstStructMap_20,
  MR_Word TsccCodeModel_21,
  MR_Word PredProcIds_22,
  MR_Word * NonTailEntryPredProcIds_23,
  MR_Word * NoMutualPredProcIds_24,
  MR_Word * MutualPredProcIds_25,
  MR_Word * MutualPredProcCodes_26,
  MR_Word * CanGenerateTscc_27,
  MR_Word * MutualEnvVarNames_28,
  MR_Word * MutualClosureWrapperFuncDefns_29,
  MR_Word * LoopKind_30,
  MR_Word STATE_VARIABLE_InSccMap_0_44,
  MR_Word * STATE_VARIABLE_InSccMap_45,
  MR_Word STATE_VARIABLE_GlobalData_0_46,
  MR_Word * STATE_VARIABLE_GlobalData_47)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_84_84;
    MR_Word TypeCtorInfo_85_85;
    MR_Word TypeCtorInfo_87_87;
    MR_Word TypeInfo_108_108;
    MR_Word PredProcIdArgsInfos_33;
    MR_Word CanGenerateTscc0_36;
    MR_Word TsccInfo0_38;
    MR_Word PredProcCodes_39;
    MR_Word TsccInfo_40;
    MR_Word TailRecInfo_41;
    MR_Word NoMutualPredProcIds0_42;
    MR_Word MutualContainsNestedFuncs_43;
    MR_Word STATE_VARIABLE_InSccMap_48_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_InSccMap_55_55;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Integer Var_34;
    MR_Word Var_35;
    MR_Word _OutArgNames_37;
    MR_Box conv10_Var_34;
    MR_Box conv9_Var_35;
    MR_Box conv8_CanGenerateTscc0_36;
    MR_Box conv7__OutArgNames_37;
    MR_Box conv6_STATE_VARIABLE_InSccMap_55_55;
    MR_Box conv15_STATE_VARIABLE_GlobalData_47;
    MR_Box conv14_TsccInfo_40;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Box conv19_NonTailEntryPredProcIds_23;
    MR_Box conv18_NoMutualPredProcIds0_42;

    ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0(STATE_VARIABLE_InSccMap_0_44, &STATE_VARIABLE_InSccMap_48_48);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleInfo_18));
    }
    TypeCtorInfo_84_84 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    Var_50 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_84_84, PredProcIds_22);
    TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_54 = mercury__map__init_0_f_0(TypeCtorInfo_85_85, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    TypeCtorInfo_87_87 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0;
    mercury__list__map_foldl5_13_p_1(TypeCtorInfo_84_84, TypeCtorInfo_87_87, TypeCtorInfo_85_85, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[5], (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_can_we_generate_code_for_tscc_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[4], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], Var_49, Var_50, &PredProcIdArgsInfos_33, ((MR_Box) ((MR_Integer) 1)), &conv10_Var_34, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv9_Var_35, ((MR_Box) ((MR_Integer) 1)), &conv8_CanGenerateTscc0_36, ((MR_Box) (Var_54)), &conv7__OutArgNames_37, ((MR_Box) (STATE_VARIABLE_InSccMap_48_48)), &conv6_STATE_VARIABLE_InSccMap_55_55);
    Var_34 = ((MR_Integer) conv10_Var_34);
    Var_35 = ((MR_Word) conv9_Var_35);
    CanGenerateTscc0_36 = ((MR_Word) conv8_CanGenerateTscc0_36);
    _OutArgNames_37 = ((MR_Word) conv7__OutArgNames_37);
    STATE_VARIABLE_InSccMap_55_55 = ((MR_Word) conv6_STATE_VARIABLE_InSccMap_55_55);
    ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(ModuleInfo_18, STATE_VARIABLE_InSccMap_55_55, (MR_Integer) 1, &TsccInfo0_38);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_17_p_0_2));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (ModuleInfo_18));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Target_19));
      MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (ConstStructMap_20));
      MR_hl_field(MR_mktag(0), Var_57, 6) = ((MR_Box) (TsccCodeModel_21));
    }
    mercury__list__map_foldl2_7_p_0(TypeCtorInfo_87_87, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0, Var_57, PredProcIdArgsInfos_33, &PredProcCodes_39, ((MR_Box) (STATE_VARIABLE_GlobalData_0_46)), &conv15_STATE_VARIABLE_GlobalData_47, ((MR_Box) (TsccInfo0_38)), &conv14_TsccInfo_40);
    *STATE_VARIABLE_GlobalData_47 = ((MR_Word) conv15_STATE_VARIABLE_GlobalData_47);
    TsccInfo_40 = ((MR_Word) conv14_TsccInfo_40);
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_40, (MR_Integer) 0)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_40, (MR_Integer) 1)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_40, (MR_Integer) 2)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_40, (MR_Integer) 3)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_40, (MR_Integer) 4)));
    TailRecInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_40, (MR_Integer) 5)));
    *STATE_VARIABLE_InSccMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_41, (MR_Integer) 0)));
    *LoopKind_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_41, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_41, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_61 = mercury__set__init_0_f_0(TypeCtorInfo_84_84);
    Var_62 = mercury__set__init_0_f_0(TypeCtorInfo_84_84);
    TypeInfo_108_108 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[6];
    mercury__map__foldl2_6_p_0(TypeCtorInfo_84_84, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0, TypeInfo_108_108, TypeInfo_108_108, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[15], *STATE_VARIABLE_InSccMap_45, ((MR_Box) (Var_61)), &conv19_NonTailEntryPredProcIds_23, ((MR_Box) (Var_62)), &conv18_NoMutualPredProcIds0_42);
    *NonTailEntryPredProcIds_23 = ((MR_Word) conv19_NonTailEntryPredProcIds_23);
    NoMutualPredProcIds0_42 = ((MR_Word) conv18_NoMutualPredProcIds0_42);
    ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0(NoMutualPredProcIds0_42, PredProcCodes_39, NoMutualPredProcIds_24, MutualPredProcIds_25, MutualPredProcCodes_26, &MutualContainsNestedFuncs_43, MutualClosureWrapperFuncDefns_29, MutualEnvVarNames_28);
    succeeded = (MutualContainsNestedFuncs_43 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (CanGenerateTscc0_36 == (MR_Integer) 1);
    if (succeeded)
      *CanGenerateTscc_27 = (MR_Integer) 1;
    else
      *CanGenerateTscc_27 = (MR_Integer) 0;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ContainsNestedFuncs_38;

    ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ContainsNestedFuncs_38);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContainsNestedFuncs_38));
  }
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
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

      *HeadVar__3_3 = mercury__set__init_0_f_0(TypeCtorInfo_65_65);
      *HeadVar__4_4 = mercury__set__init_0_f_0(TypeCtorInfo_65_65);
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Integer) 0;
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__8_8 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    else
    {
      MR_Word PredProcCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word PredProcCodes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
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
      MR_Word _FuncParams_20;
      MR_Word _LocalVarDefns_21;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;

      ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0(HeadVar__1_1, PredProcCodes_12, &STATE_VARIABLE_NoMutualPredProcIds_37_37, &STATE_VARIABLE_MutualPredProcIds_38_38, &STATE_VARIABLE_MutualPredProcCodes_39_39, &STATE_VARIABLE_MutualContainsNestedFuncs_40_40, &STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41, &STATE_VARIABLE_MutualEnvVarNames_42_42);
      PredProcIdArgsInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 0)));
      _FuncParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 1)));
      _LocalVarDefns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 2)));
      FuncDefns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 3)));
      DescCommentStmt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 4)));
      GoalStmts_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 5)));
      ProcClosureWrapperFuncDefns_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 6)));
      ProcEnvVarNames_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_11, (MR_Integer) 7)));
      PredProcId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 0)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 1)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 2)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 3)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 4)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 5)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 6)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 7)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 8)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 9)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 10)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 11)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 12)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_19, (MR_Integer) 13)));
      succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_27)), HeadVar__1_1);
      if (succeeded)
      {
        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_27)), STATE_VARIABLE_NoMutualPredProcIds_37_37, HeadVar__3_3);
        *HeadVar__8_8 = STATE_VARIABLE_MutualEnvVarNames_42_42;
        *HeadVar__7_7 = STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41;
        *HeadVar__6_6 = STATE_VARIABLE_MutualContainsNestedFuncs_40_40;
        *HeadVar__5_5 = STATE_VARIABLE_MutualPredProcCodes_39_39;
        *HeadVar__4_4 = STATE_VARIABLE_MutualPredProcIds_38_38;
      }
      else
      {
        {
          MR_Word Var_28;
          MR_Word Var_29;

          succeeded = ((MR_tag((MR_Word) FuncDefns_22)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), FuncDefns_22, (MR_Integer) 0)));
            Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), FuncDefns_22, (MR_Integer) 1)));
          }
        }
        if (!(succeeded))
        {
          MR_Word ContainsNestedFuncs_30;
          MR_Word Var_45;
          MR_Box conv1_ContainsNestedFuncs_30;

          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (DescCommentStmt_23));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (GoalStmts_24));
          }
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[14], Var_45, ((MR_Box) ((MR_Integer) 0)), &conv1_ContainsNestedFuncs_30);
          ContainsNestedFuncs_30 = ((MR_Word) conv1_ContainsNestedFuncs_30);
          succeeded = (ContainsNestedFuncs_30 == (MR_Integer) 1);
        }
        if (succeeded)
          *HeadVar__6_6 = (MR_Integer) 1;
        else
          *HeadVar__6_6 = STATE_VARIABLE_MutualContainsNestedFuncs_40_40;
        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_27)), STATE_VARIABLE_MutualPredProcIds_38_38, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcCode_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualPredProcCodes_39_39));
        }
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ProcClosureWrapperFuncDefns_25, STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41);
        mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ProcEnvVarNames_26, STATE_VARIABLE_MutualEnvVarNames_42_42, HeadVar__8_8);
        *HeadVar__3_3 = STATE_VARIABLE_NoMutualPredProcIds_37_37;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__get_var_rval_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * VarRval_6)
{
  {
    MR_Word VarLval_7;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_4, Var_5, &VarLval_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *VarRval_6 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarLval_7));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__get_var_mlds_lval_and_type_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word VarLval_6;
    MR_Word Type_7;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_4, Var_5, &VarLval_6);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_4, Var_5, &Type_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarLval_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_7));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcId_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_27,
  MR_Word * STATE_VARIABLE_FuncDefns_28,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30,
  MR_Word STATE_VARIABLE_InSccMap_0_31,
  MR_Word * STATE_VARIABLE_InSccMap_32)
{
  {
    MR_Word PredInfo_20;
    MR_Word ProcInfo_21;
    MR_Word Goal_22;
    MR_Word GoalInfo_24;
    MR_Word ProcContext_25;
    MR_Word PredProcIdInfo_26;
    MR_Word _GoalExpr_23;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_12, PredProcId_16, &PredInfo_20, &ProcInfo_21);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_21, &Goal_22);
    _GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 0)));
    GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 1)));
    ProcContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_24);
    {
      PredProcIdInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcIdInfo_26, 0) = ((MR_Box) (PredProcId_16));
      MR_hl_field(MR_mktag(0), PredProcIdInfo_26, 1) = ((MR_Box) (PredInfo_20));
      MR_hl_field(MR_mktag(0), PredProcIdInfo_26, 2) = ((MR_Box) (ProcInfo_21));
      MR_hl_field(MR_mktag(0), PredProcIdInfo_26, 3) = ((MR_Box) (ProcContext_25));
    }
    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(ModuleInfo_12, Target_13, ConstStructMap_14, NoneOrSelf_15, PredProcIdInfo_26, STATE_VARIABLE_FuncDefns_0_27, STATE_VARIABLE_FuncDefns_28, STATE_VARIABLE_GlobalData_0_29, STATE_VARIABLE_GlobalData_30, STATE_VARIABLE_InSccMap_0_31, STATE_VARIABLE_InSccMap_32);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_VarRval_6;

    ml_backend__ml_proc_gen__get_var_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_VarRval_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_VarRval_6));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ml_backend__ml_proc_gen__get_var_mlds_lval_and_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcIdInfo_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_55,
  MR_Word * STATE_VARIABLE_FuncDefns_56,
  MR_Word STATE_VARIABLE_GlobalData_0_57,
  MR_Word * STATE_VARIABLE_GlobalData_58,
  MR_Word STATE_VARIABLE_InSccMap_0_59,
  MR_Word * STATE_VARIABLE_InSccMap_60)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 0)));
    MR_Word PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 1)));
    MR_Word ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 2)));
    MR_Word ProcContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 3)));
    MR_Word TsccInfo0_26;
    MR_Word PredStatus_27;
    MR_Word FuncParams_30;
    MR_Word FuncBody_34;
    MR_Word EnvVarNames_35;
    MR_Word ClosureWrapperFuncDefns_36;
    MR_Word FuncDefn_54;
    MR_Word STATE_VARIABLE_InSccMap_64_64;
    MR_Word STATE_VARIABLE_InSccMap_65_65;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word Var_79;
    MR_Word Var_68;
    MR_Word Var_28;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", PredProcId_20, ModuleInfo_12);
    ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0(STATE_VARIABLE_InSccMap_0_59, &STATE_VARIABLE_InSccMap_64_64);
    ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_5_p_0(ModuleInfo_12, NoneOrSelf_15, PredProcId_20, STATE_VARIABLE_InSccMap_64_64, &STATE_VARIABLE_InSccMap_65_65);
    ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(ModuleInfo_12, STATE_VARIABLE_InSccMap_65_65, (MR_Integer) 0, &TsccInfo0_26);
    STATE_VARIABLE_Info_67_67 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_12, Target_13, ConstStructMap_14, PredProcId_20, ProcInfo_22, STATE_VARIABLE_GlobalData_0_57, TsccInfo0_26);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_21, &PredStatus_27);
    Var_68 = (MR_Word) PredStatus_27;
    succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
      {
        MR_Word _Tuples_29;
        MR_Word _ByRefOutputVars_31;
        MR_Word _CopiedOutputVars_32;
        MR_Word _Info_33;

        ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_20, &_Tuples_29, &FuncParams_30, &_ByRefOutputVars_31, &_CopiedOutputVars_32, STATE_VARIABLE_Info_67_67, &_Info_33);
        FuncBody_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &EnvVarNames_35);
        ClosureWrapperFuncDefns_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_InSccMap_60 = STATE_VARIABLE_InSccMap_65_65;
        *STATE_VARIABLE_GlobalData_58 = STATE_VARIABLE_GlobalData_0_57;
      }
    }
    else
    {
      MR_Word TypeCtorInfo_99_99;
      MR_Word FuncDefns_17;
      MR_Word CodeModel_37;
      MR_Word ArgTuples_38;
      MR_Word ByRefOutputVars_39;
      MR_Word CopiedOutputVars_40;
      MR_Word ByRefOutputVarsSet_41;
      MR_Word Goal_44;
      MR_Word LocalVarDefns0_45;
      MR_Word GoalStmts0_46;
      MR_Word CopiedOutputVarRvals_47;
      MR_Word GoalStmts_48;
      MR_Word OutputVarLocalDefns_49;
      MR_Word SucceededVarDefns_50;
      MR_Word LocalVarDefns_51;
      MR_Word TsccInfo_52;
      MR_Word TailRecInfo_53;
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word STATE_VARIABLE_Info_71_71;
      MR_Word STATE_VARIABLE_Info_72_72;
      MR_Word Var_73;
      MR_Word STATE_VARIABLE_Info_74_74;
      MR_Word Var_75;
      MR_Word _Info_80;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_22);
      ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_20, &ArgTuples_38, &FuncParams_30, &ByRefOutputVars_39, &CopiedOutputVars_40, STATE_VARIABLE_Info_67_67, &_Info_80);
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ByRefOutputVars_39, &ByRefOutputVarsSet_41);
      ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVarsSet_41, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
      switch (CodeModel_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_69_69;
          break;
        case (MR_Integer) 2:
          {
            MR_Word OutputVarLvalTypes_42;
            MR_Word InitialCont_43;
            MR_Word Var_70;

            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[4]));
              MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_11_p_0_1));
              MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (STATE_VARIABLE_Info_69_69));
            }
            mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], Var_70, CopiedOutputVars_40, &OutputVarLvalTypes_42);
            ml_backend__ml_code_util__ml_initial_cont_3_p_0(STATE_VARIABLE_Info_69_69, OutputVarLvalTypes_42, &InitialCont_43);
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(InitialCont_43, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_71_71);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_71_71 = STATE_VARIABLE_Info_69_69;
          break;
      }
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_22, &Goal_44);
      ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0(CodeModel_37, ArgTuples_38, CopiedOutputVars_40, Goal_44, &LocalVarDefns0_45, &FuncDefns_17, &GoalStmts0_46, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_72_72);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[5]));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_11_p_0_2));
        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (STATE_VARIABLE_Info_72_72));
      }
      mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, Var_73, CopiedOutputVars_40, &CopiedOutputVarRvals_47);
      ml_backend__ml_args_util__ml_append_return_statement_5_p_0(CodeModel_37, ProcContext_23, CopiedOutputVarRvals_47, GoalStmts0_46, &GoalStmts_48);
      ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0(ProcInfo_22, ProcContext_23, ArgTuples_38, CopiedOutputVars_40, &OutputVarLocalDefns_49, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_74_74);
      ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(STATE_VARIABLE_Info_74_74, ProcContext_23, &SucceededVarDefns_50);
      TypeCtorInfo_99_99 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
      Var_75 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_99_99, OutputVarLocalDefns_49, LocalVarDefns0_45);
      LocalVarDefns_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_99_99, SucceededVarDefns_50, Var_75);
      ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(STATE_VARIABLE_Info_74_74, &EnvVarNames_35, &ClosureWrapperFuncDefns_36, STATE_VARIABLE_GlobalData_58, &TsccInfo_52);
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_52, (MR_Integer) 0)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_52, (MR_Integer) 1)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_52, (MR_Integer) 2)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_52, (MR_Integer) 3)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_52, (MR_Integer) 4)));
      TailRecInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_52, (MR_Integer) 5)));
      *STATE_VARIABLE_InSccMap_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_53, (MR_Integer) 0)));
      Var_87 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_53, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_53, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0(PredProcId_20, CodeModel_37, ProcContext_23, LocalVarDefns_51, FuncDefns_17, GoalStmts_48, TailRecInfo_53, &FuncBody_34);
    }
    ml_backend__ml_proc_gen__construct_func_defn_6_p_0(ModuleInfo_12, PredProcIdInfo_16, FuncParams_30, FuncBody_34, EnvVarNames_35, &FuncDefn_54);
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (FuncDefn_54));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (STATE_VARIABLE_FuncDefns_0_55));
    }
    *STATE_VARIABLE_FuncDefns_56 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ClosureWrapperFuncDefns_36, Var_79);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(
  MR_Word Info_4,
  MR_Word Context_5,
  MR_Word * SucceededVarDefns_6)
{
  {
    MR_Word UsedSucceededVar_7;

    ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(Info_4, &UsedSucceededVar_7);
    switch (UsedSucceededVar_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *SucceededVarDefns_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8;

          Var_8 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(Context_5);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *SucceededVarDefns_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_36;

    conv1_LambdaHeadVar__2_36 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_local_var_defns_for_copied_output_vars__1733__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_36));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_33;

    conv0_LambdaHeadVar__2_33 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_local_var_defns_for_copied_output_vars__1731__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0(
  MR_Word ProcInfo_8,
  MR_Word Context_9,
  MR_Word ArgTuples_10,
  MR_Word CopiedOutputVars_11,
  MR_Word * OutputVarLocalDefns_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  if ((CopiedOutputVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *OutputVarLocalDefns_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
  }
  else
  {
    MR_Word TypeCtorInfo_52_52;
    MR_Word VarSet_16;
    MR_Word VarTypes_17;
    MR_Word HeadVars_18;
    MR_Word HeadTypes_23;
    MR_Word UpdatedVarTypes_28;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_8, &VarSet_16);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_8, &VarTypes_17);
    TypeCtorInfo_52_52 = (MR_Word) &ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0;
    HeadVars_18 = mercury__list__map_2_f_0(TypeCtorInfo_52_52, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[12], ArgTuples_10);
    HeadTypes_23 = mercury__list__map_2_f_0(TypeCtorInfo_52_52, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[13], ArgTuples_10);
    hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(HeadVars_18, HeadTypes_23, VarTypes_17, &UpdatedVarTypes_28);
    ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(VarSet_16, UpdatedVarTypes_28, Context_9, CopiedOutputVars_11, OutputVarLocalDefns_12, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__1_38;
    MR_Word conv6_LambdaHeadVar__2_39;
    MR_Word conv5_LambdaHeadVar__3_40;
    MR_Word conv4_LambdaHeadVar__5_42;

    ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1626__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_38, &conv6_LambdaHeadVar__2_39, &conv5_LambdaHeadVar__3_40, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_42);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_38));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_39));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_40));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_42));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;
    MR_Word conv2_HeadVar__4_4;
    MR_Word conv1_HeadVar__5_5;
    MR_Word conv0_HeadVar__7_7;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5, ((MR_Word) wrapper_arg_4), &conv0_HeadVar__7_7);
    *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__3_3));
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0(
  MR_Word CodeModel_10,
  MR_Word ArgTuples_11,
  MR_Word CopiedOutputVars_12,
  MR_Word Goal_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 1)));
    MR_Word Context_20;
    MR_Word ConvLocalVarDefns_21;
    MR_Word ConvInputStmts_22;
    MR_Word ConvOutputStmts_23;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0)));

    Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
    ml_backend__ml_proc_gen__ml_gen_convert_headvars_8_p_0(ArgTuples_11, CopiedOutputVars_12, Context_20, &ConvLocalVarDefns_21, &ConvInputStmts_22, &ConvOutputStmts_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_36_36);
    succeeded = (ConvLocalVarDefns_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (ConvInputStmts_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (ConvOutputStmts_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_10, Goal_13, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_35);
    else
    {
      MR_Word DoGenGoal_24;
      MR_Word DoConvOutputs_25;
      MR_Word LocalVarDefns0_31;
      MR_Word Stmts0_33;

      {
        DoGenGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenGoal_24, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), DoGenGoal_24, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenGoal_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), DoGenGoal_24, 3) = ((MR_Box) (CodeModel_10));
        MR_hl_field(MR_mktag(0), DoGenGoal_24, 4) = ((MR_Box) (Goal_13));
      }
      {
        DoConvOutputs_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoConvOutputs_25, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), DoConvOutputs_25, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_9_p_0_2));
        MR_hl_field(MR_mktag(0), DoConvOutputs_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoConvOutputs_25, 3) = ((MR_Box) (CodeModel_10));
        MR_hl_field(MR_mktag(0), DoConvOutputs_25, 4) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(0), DoConvOutputs_25, 5) = ((MR_Box) (ConvOutputStmts_23));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_10, Context_20, DoGenGoal_24, DoConvOutputs_25, &LocalVarDefns0_31, FuncDefns_15, &Stmts0_33, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_35);
      *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvInputStmts_22, Stmts0_33);
      *LocalVarDefns_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvLocalVarDefns_21, LocalVarDefns0_31);
    }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word ArgTuple_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgTuples_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTuple_14, (MR_Integer) 0)));
      MR_Word MLDSVarName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTuple_14, (MR_Integer) 1)));
      MR_Word HeadType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTuple_14, (MR_Integer) 2)));
      MR_Word TopFunctorMode_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTuple_14, (MR_Integer) 3)));
      MR_Word BodyType_26;

      ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_7, Var_22, &BodyType_26);
      {
        MR_Word TypeInfo_48_48 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[12];
        MR_Word TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        MR_Word Subst0_27;
        MR_Word Subst_28;

        mercury__map__init_1_p_0(TypeInfo_48_48, TypeCtorInfo_49_49, &Subst0_27);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(HeadType_24, BodyType_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Subst0_27, &Subst_28);
        if (succeeded)
          succeeded = mercury__map__is_empty_1_p_0(TypeInfo_48_48, TypeCtorInfo_49_49, Subst_28);
      }
      if (!(succeeded))
        succeeded = (TopFunctorMode_25 == (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = ArgTuples_15;

        // direct tailcall eliminated
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
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ByRefOutputVars_37, Var_22);
        if (!(succeeded))
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], ((MR_Box) (Var_22)), HeadVar__2_2);
        }
        if (succeeded)
        {
          *HeadVar__5_5 = InputStmtsTail_35;
          *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, OutputStmtsTail_36, ConvOutputStmts_33);
        }
        else
        {
          *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvInputStmts_32, InputStmtsTail_35);
          *HeadVar__6_6 = OutputStmtsTail_36;
        }
        *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvLocalVarDefns_31, LocalVarDefnsTail_34);
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
  {
    MR_bool succeeded;
    MR_Word PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 0)));
    MR_Word ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 2)));
    MR_Word PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0)));
    MR_Integer ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1)));
    MR_Word PlainFuncName_20;
    MR_Word ProcContext_21;
    MR_Word DeclFlags_22;
    MR_Word MaybePredProcId_23;
    MR_Word Var_25;
    MR_Word PredInfo_30;
    MR_Word Access_31;
    MR_Word _PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 1)));
    MR_Word _ProcContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 3)));
    MR_Word _ModuleName_19;

    ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_7, PredProcId_13, &_ModuleName_19, &PlainFuncName_20);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_15, &ProcContext_21);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_17, &PredInfo_30);
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_30, ProcId_18);
    if (succeeded)
      Access_31 = (MR_Integer) 0;
    else
      Access_31 = (MR_Integer) 1;
    {
      DeclFlags_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DeclFlags_22, 0) = ((MR_Box) (Access_31));
      MR_hl_field(MR_mktag(0), DeclFlags_22, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      MaybePredProcId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePredProcId_23, 0) = ((MR_Box) (PredProcId_13));
    }
    Var_25 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) PlainFuncName_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *FuncDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcContext_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeclFlags_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybePredProcId_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FuncParams_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncBody_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_11));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__644__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word InSccMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 0)));
    MR_Word LoopKind_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word TsccKind_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word InSccInfo_20;
    MR_Word MaybeInTscc_21;
    MR_Word IsTargetOfSelfTRCall_22;
    MR_Word FuncBodyStmt_33;
    MR_Word Var_36;
    MR_Box conv0_InSccInfo_20;
    MR_Word _IsTargetOfMutualTRCall_23;
    MR_Word _IsTargetOfNonTailRec_24;
    MR_Word IdInTscc_25;
    MR_Word _TsccInArgs_26;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TsccKind_19));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140ml_backend.ml_proc_gen.construct_func_body_maybe_wrap_in_loop\'/8", (MR_String) "TsccKind != tscc_self_rec_only");
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0, InSccMap_17, ((MR_Box) (PredProcId_9)), &conv0_InSccInfo_20);
    InSccInfo_20 = ((MR_Word) conv0_InSccInfo_20);
    MaybeInTscc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_20, (MR_Integer) 0)));
    IsTargetOfSelfTRCall_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_20, (MR_Integer) 1)));
    _IsTargetOfMutualTRCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_20, (MR_Integer) 2)));
    _IsTargetOfNonTailRec_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_20, (MR_Integer) 3)));
    succeeded = (IsTargetOfSelfTRCall_22 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeInTscc_21)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        IdInTscc_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInTscc_21, (MR_Integer) 0)));
        _TsccInArgs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInTscc_21, (MR_Integer) 1)));
      }
    }
    if (succeeded)
    {
      MR_String CodeModelStr_27;
      MR_String CommentStr_28;
      MR_Word Comment_29;
      MR_Word CommentStmt_30;
      MR_String Var_64;

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
      Var_64 = mercury__string__f_43_43_2_f_0(CodeModelStr_27, (MR_String) " tailcalls optimized into a loop");
      CommentStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "setup for ", Var_64);
      {
        Comment_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Comment_29, 0) = ((MR_Box) (CommentStr_28));
      }
      {
        CommentStmt_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CommentStmt_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), CommentStmt_30, 1) = ((MR_Box) (Comment_29));
        MR_hl_field(MR_mktag(3), CommentStmt_30, 2) = ((MR_Box) (Context_11));
      }
      switch (LoopKind_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String StartLabel_34;
            MR_Word LoopTopLabelStmt_35;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;

            StartLabel_34 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind_19, IdInTscc_25);
            {
              LoopTopLabelStmt_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LoopTopLabelStmt_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), LoopTopLabelStmt_35, 1) = ((MR_Box) (StartLabel_34));
              MR_hl_field(MR_mktag(3), LoopTopLabelStmt_35, 2) = ((MR_Box) (Context_11));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (LoopTopLabelStmt_35));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (CommentStmt_30));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
            }
            Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, Var_45, GoalStmts_14);
            {
              FuncBodyStmt_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FuncBodyStmt_33, 0) = ((MR_Box) (LocalVarDefns_12));
              MR_hl_field(MR_mktag(0), FuncBodyStmt_33, 1) = ((MR_Box) (FuncDefns_13));
              MR_hl_field(MR_mktag(0), FuncBodyStmt_33, 2) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(0), FuncBodyStmt_33, 3) = ((MR_Box) (Context_11));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word TypeCtorInfo_61_61;
            MR_Word BreakStmt_31;
            MR_Word LoopBodyStmt_32;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_52;
            MR_Word Var_53;

            {
              BreakStmt_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), BreakStmt_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), BreakStmt_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(3), BreakStmt_31, 2) = ((MR_Box) (Context_11));
            }
            TypeCtorInfo_61_61 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (CommentStmt_30));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (BreakStmt_31));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            Var_52 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_61_61, GoalStmts_14, Var_53);
            Var_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_61_61, Var_50, Var_52);
            {
              LoopBodyStmt_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LoopBodyStmt_32, 0) = ((MR_Box) (LocalVarDefns_12));
              MR_hl_field(MR_mktag(0), LoopBodyStmt_32, 1) = ((MR_Box) (FuncDefns_13));
              MR_hl_field(MR_mktag(0), LoopBodyStmt_32, 2) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), LoopBodyStmt_32, 3) = ((MR_Box) (Context_11));
            }
            {
              FuncBodyStmt_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_33, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[15])));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_33, 2) = ((MR_Box) (LoopBodyStmt_32));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_33, 3) = ((MR_Box) (Context_11));
            }
          }
          break;
      }
    }
    else
      FuncBodyStmt_33 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_12, FuncDefns_13, GoalStmts_14, Context_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *FuncBody_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncBodyStmt_33));
    }
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
        MR_Word TypeCtorInfo_23_23;
        MR_Word TypeCtorInfo_24_24;
        MR_Word InputParams_10;
        MR_Word InSccInfo0_11;
        MR_Word InSccInfo_12;
        MR_Word Var_15;
        MR_Box conv0_InSccInfo0_11;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_19;

        InputParams_10 = ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0(ModuleInfo_6, PredProcId_8);
        TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        TypeCtorInfo_24_24 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0;
        mercury__map__lookup_3_p_0(TypeCtorInfo_23_23, TypeCtorInfo_24_24, STATE_VARIABLE_InSccMap_0_13, ((MR_Box) (PredProcId_8)), &conv0_InSccInfo0_11);
        InSccInfo0_11 = ((MR_Word) conv0_InSccInfo0_11);
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (InputParams_10));
        }
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_11, (MR_Integer) 0)));
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_11, (MR_Integer) 1)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_11, (MR_Integer) 2)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo0_11, (MR_Integer) 3)));
        {
          InSccInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InSccInfo_12, 0) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(0), InSccInfo_12, 1) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), InSccInfo_12, 2) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), InSccInfo_12, 3) = ((MR_Box) (Var_22));
        }
        mercury__map__det_update_4_p_0(TypeCtorInfo_23_23, TypeCtorInfo_24_24, ((MR_Box) (PredProcId_8)), ((MR_Box) (InSccInfo_12)), STATE_VARIABLE_InSccMap_0_13, STATE_VARIABLE_InSccMap_14);
      }
      break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(
  MR_Word PredProcIdInfo_3)
{
  {
    MR_Word PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_3, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_3, (MR_Integer) 3)));

    return PredProcId_4;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__reset_scc_info_2_p_0(
  MR_Word STATE_VARIABLE_InSccInfo_0_4,
  MR_Word * STATE_VARIABLE_InSccInfo_5)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InSccInfo_0_4, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InSccInfo_0_4, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InSccInfo_0_4, (MR_Integer) 3)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InSccInfo_0_4, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InSccInfo_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InSccInfo_5;

    ml_backend__ml_proc_gen__reset_scc_info_2_p_0(((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_InSccInfo_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_InSccInfo_5));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0(
  MR_Word STATE_VARIABLE_InSccMap_0_4,
  MR_Word * STATE_VARIABLE_InSccMap_5)
{
  {
    MR_Word TypeCtorInfo_10_10 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0;

    mercury__map__map_values_only_3_p_0(TypeCtorInfo_10_10, TypeCtorInfo_10_10, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[11], STATE_VARIABLE_InSccMap_0_4, STATE_VARIABLE_InSccMap_5);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__add_to_in_scc_map_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_InSccMap_0_7,
  MR_Word * STATE_VARIABLE_InSccMap_8)
{
  {
    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0, ((MR_Box) (PredProcId_4)), ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[0])), STATE_VARIABLE_InSccMap_0_7, STATE_VARIABLE_InSccMap_8);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__report_nontail_rec_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word DefaultWarnParams_7,
  MR_Word NonTailRecCall_8,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Caller_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), NonTailRecCall_8, (MR_Integer) 0)));
    MR_Word Callee_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), NonTailRecCall_8, (MR_Integer) 1)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), NonTailRecCall_8, (MR_Integer) 2)));
    MR_Word Reason_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), NonTailRecCall_8, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word Obviousness_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), NonTailRecCall_8, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Status_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), NonTailRecCall_8, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

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
}

static void MR_CALL 
ml_backend__ml_proc_gen__gather_nontail_rec_calls_3_p_0(
  MR_Word InSccInfo_4,
  MR_Word STATE_VARIABLE_NonTailRecCalls_0_6,
  MR_Word * STATE_VARIABLE_NonTailRecCalls_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_4, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_4, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InSccInfo_4, (MR_Integer) 2)));

    *STATE_VARIABLE_NonTailRecCalls_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0, Var_9, STATE_VARIABLE_NonTailRecCalls_0_6);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9)
{
  {
    MR_Word TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
    MR_Word TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word ProcInfo0_6;
    MR_Word ProcInfo_7;
    MR_Box conv0_ProcInfo0_6;

    mercury__map__lookup_3_p_0(TypeCtorInfo_12_12, TypeCtorInfo_13_13, STATE_VARIABLE_ProcTable_0_8, ((MR_Box) (ProcId_4)), &conv0_ProcInfo0_6);
    ProcInfo0_6 = ((MR_Word) conv0_ProcInfo0_6);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo0_6, &ProcInfo_7);
    mercury__map__det_update_4_p_0(TypeCtorInfo_12_12, TypeCtorInfo_13_13, ((MR_Box) (ProcId_4)), ((MR_Box) (ProcInfo_7)), STATE_VARIABLE_ProcTable_0_8, STATE_VARIABLE_ProcTable_9);
  }
}

void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_preds_9_p_0(
  MR_Word Target_10,
  MR_Word ConstStructMap_11,
  MR_Word * FuncDefns_12,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_Word TypeCtorInfo_42_42;
    MR_Word TypeCtorInfo_43_43;
    MR_Word TypeCtorInfo_44_44;
    MR_Word PredTable0_16;
    MR_Word PredIdInfos0_17;
    MR_Word PredIdInfos_18;
    MR_Word PredProcIds_19;
    MR_Word PredTable_20;
    MR_Word SortedPredProcIds_21;
    MR_Word CodeGenPredProcIds_22;
    MR_Word DepInfo_23;
    MR_Word BottomUpSCCsWithEntryPoints_24;
    MR_Word Globals_25;
    MR_Word TailCalls_26;
    MR_Word OptTailCalls_27;
    MR_Word DefaultWarnParams_28;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_16);
    TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__to_sorted_assoc_list_2_p_0(TypeCtorInfo_42_42, TypeCtorInfo_43_43, PredTable0_16, &PredIdInfos0_17);
    ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(PredIdInfos0_17, &PredIdInfos_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PredProcIds_19);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_42_42, TypeCtorInfo_43_43, PredIdInfos_18, &PredTable_20);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_20, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
    TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__list__sort_2_p_0(TypeCtorInfo_44_44, PredProcIds_19, &SortedPredProcIds_21);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_44_44, SortedPredProcIds_21, &CodeGenPredProcIds_22);
    DepInfo_23 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(*STATE_VARIABLE_ModuleInfo_32, CodeGenPredProcIds_22, (MR_Integer) 1);
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(*STATE_VARIABLE_ModuleInfo_32, DepInfo_23, &BottomUpSCCsWithEntryPoints_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_32, &Globals_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 466, &TailCalls_26);
    switch (TailCalls_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptTailCalls_27 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        OptTailCalls_27 = (MR_Integer) 1;
        break;
    }
    hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_25, &DefaultWarnParams_28);
    ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0(*STATE_VARIABLE_ModuleInfo_32, OptTailCalls_27, DefaultWarnParams_28, Target_10, ConstStructMap_11, BottomUpSCCsWithEntryPoints_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FuncDefns_12, STATE_VARIABLE_GlobalData_0_29, STATE_VARIABLE_GlobalData_30, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_20;

    ml_backend__ml_proc_gen__report_nontail_rec_call_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_NonTailRecCalls_7;

    ml_backend__ml_proc_gen__gather_nontail_rec_calls_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_NonTailRecCalls_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NonTailRecCalls_7));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OptTailCalls_2,
  MR_Word DefaultWarnParams_3,
  MR_Word Target_4,
  MR_Word ConstStructMap_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_FuncDefns_0_7,
  MR_Word * STATE_VARIABLE_FuncDefns_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_GlobalData_10 = STATE_VARIABLE_GlobalData_0_9;
      *STATE_VARIABLE_FuncDefns_8 = STATE_VARIABLE_FuncDefns_0_7;
    }
    else
    {
      MR_Word SCCE_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
      MR_Word SCCEs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_FuncDefns_43_43;
      MR_Word STATE_VARIABLE_GlobalData_44_44;
      MR_Word STATE_VARIABLE_Specs_45_45;
      MR_Word InSccMap_64;
      MR_Word NonTailRecCalls_65;
      MR_Box conv1_NonTailRecCalls_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_FuncDefns_0_7;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0(ModuleInfo_1, OptTailCalls_2, Target_4, ConstStructMap_5, SCCE_32, &InSccMap_64, STATE_VARIABLE_FuncDefns_0_7, &STATE_VARIABLE_FuncDefns_43_43, STATE_VARIABLE_GlobalData_0_9, &STATE_VARIABLE_GlobalData_44_44);
      mercury__map__foldl_values_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[10], InSccMap_64, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_NonTailRecCalls_65);
      NonTailRecCalls_65 = ((MR_Word) conv1_NonTailRecCalls_65);
      succeeded = (OptTailCalls_2 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) NonTailRecCalls_65)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonTailRecCalls_65, (MR_Integer) 0)));
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonTailRecCalls_65, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        MR_Word Var_72;
        MR_Box conv3_STATE_VARIABLE_Specs_45_45;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_sccs_12_p_0_2));
          MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModuleInfo_1));
          MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (DefaultWarnParams_3));
        }
        mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], Var_72, NonTailRecCalls_65, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv3_STATE_VARIABLE_Specs_45_45);
        STATE_VARIABLE_Specs_45_45 = ((MR_Word) conv3_STATE_VARIABLE_Specs_45_45);
      }
      else
        STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_11;
      // direct tailcall eliminated
      next_value_of_HeadVar__6_6 = SCCEs_33;
      next_value_of_STATE_VARIABLE_FuncDefns_0_7 = STATE_VARIABLE_FuncDefns_43_43;
      next_value_of_STATE_VARIABLE_GlobalData_0_9 = STATE_VARIABLE_GlobalData_44_44;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_45_45;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_FuncDefns_0_7 = next_value_of_STATE_VARIABLE_FuncDefns_0_7;
      STATE_VARIABLE_GlobalData_0_9 = next_value_of_STATE_VARIABLE_GlobalData_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv39_STATE_VARIABLE_FuncDefns_44;
    MR_Word conv38_STATE_VARIABLE_GlobalData_46;
    MR_Word conv37_STATE_VARIABLE_InSccMap_48;

    ml_backend__ml_proc_gen__ml_gen_tscc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv39_STATE_VARIABLE_FuncDefns_44, ((MR_Word) wrapper_arg_4), &conv38_STATE_VARIABLE_GlobalData_46, ((MR_Word) wrapper_arg_6), &conv37_STATE_VARIABLE_InSccMap_48);
    *wrapper_arg_3 = ((MR_Box) (conv39_STATE_VARIABLE_FuncDefns_44));
    *wrapper_arg_5 = ((MR_Box) (conv38_STATE_VARIABLE_GlobalData_46));
    *wrapper_arg_7 = ((MR_Box) (conv37_STATE_VARIABLE_InSccMap_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv33_STATE_VARIABLE_FuncDefns_44;
    MR_Word conv32_STATE_VARIABLE_GlobalData_46;
    MR_Word conv31_STATE_VARIABLE_InSccMap_48;

    ml_backend__ml_proc_gen__ml_gen_tscc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv33_STATE_VARIABLE_FuncDefns_44, ((MR_Word) wrapper_arg_4), &conv32_STATE_VARIABLE_GlobalData_46, ((MR_Word) wrapper_arg_6), &conv31_STATE_VARIABLE_InSccMap_48);
    *wrapper_arg_3 = ((MR_Box) (conv33_STATE_VARIABLE_FuncDefns_44));
    *wrapper_arg_5 = ((MR_Box) (conv32_STATE_VARIABLE_GlobalData_46));
    *wrapper_arg_7 = ((MR_Box) (conv31_STATE_VARIABLE_InSccMap_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv24_STATE_VARIABLE_FuncDefns_28;
    MR_Word conv23_STATE_VARIABLE_GlobalData_30;
    MR_Word conv22_STATE_VARIABLE_InSccMap_32;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv24_STATE_VARIABLE_FuncDefns_28, ((MR_Word) wrapper_arg_4), &conv23_STATE_VARIABLE_GlobalData_30, ((MR_Word) wrapper_arg_6), &conv22_STATE_VARIABLE_InSccMap_32);
    *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_FuncDefns_28));
    *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_GlobalData_30));
    *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_InSccMap_32));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv21_PredProcId_4;

    conv21_PredProcId_4 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv21_PredProcId_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_PredProcId_4;

    conv20_PredProcId_4 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv20_PredProcId_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_FuncDefns_56;
    MR_Word conv15_STATE_VARIABLE_GlobalData_58;
    MR_Word conv14_STATE_VARIABLE_InSccMap_60;

    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv16_STATE_VARIABLE_FuncDefns_56, ((MR_Word) wrapper_arg_4), &conv15_STATE_VARIABLE_GlobalData_58, ((MR_Word) wrapper_arg_6), &conv14_STATE_VARIABLE_InSccMap_60);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_FuncDefns_56));
    *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_GlobalData_58));
    *wrapper_arg_7 = ((MR_Box) (conv14_STATE_VARIABLE_InSccMap_60));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_FuncDefns_56;
    MR_Word conv9_STATE_VARIABLE_GlobalData_58;
    MR_Word conv8_STATE_VARIABLE_InSccMap_60;

    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv10_STATE_VARIABLE_FuncDefns_56, ((MR_Word) wrapper_arg_4), &conv9_STATE_VARIABLE_GlobalData_58, ((MR_Word) wrapper_arg_6), &conv8_STATE_VARIABLE_InSccMap_60);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_FuncDefns_56));
    *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_GlobalData_58));
    *wrapper_arg_7 = ((MR_Box) (conv8_STATE_VARIABLE_InSccMap_60));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_FuncDefns_28;
    MR_Word conv3_STATE_VARIABLE_GlobalData_30;
    MR_Word conv2_STATE_VARIABLE_InSccMap_32;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_FuncDefns_28, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_GlobalData_30, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_InSccMap_32);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FuncDefns_28));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_GlobalData_30));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_InSccMap_32));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InSccMap_8;

    ml_backend__ml_proc_gen__add_to_in_scc_map_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_InSccMap_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InSccMap_8));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OptTailCalls_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word SCCE_15,
  MR_Word * STATE_VARIABLE_InSccMap_40,
  MR_Word STATE_VARIABLE_FuncDefns_0_41,
  MR_Word * STATE_VARIABLE_FuncDefns_42,
  MR_Word STATE_VARIABLE_GlobalData_0_43,
  MR_Word * STATE_VARIABLE_GlobalData_44)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_93_93 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word TypeInfo_98_98;
    MR_Word PredProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_15, (MR_Integer) 0)));
    MR_Word CalledFromHigherSCCs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_15, (MR_Integer) 1)));
    MR_Word ExportedProcs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_15, (MR_Integer) 2)));
    MR_Word SCCEntryProcs_22;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_InSccMap_47_47;
    MR_Box conv1_STATE_VARIABLE_InSccMap_47_47;

    mercury__set__union_3_p_0(TypeCtorInfo_93_93, CalledFromHigherSCCs_20, ExportedProcs_21, &SCCEntryProcs_22);
    Var_46 = mercury__map__init_0_f_0(TypeCtorInfo_93_93, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0);
    TypeInfo_98_98 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1];
    mercury__set__fold_4_p_0(TypeCtorInfo_93_93, TypeInfo_98_98, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[7], PredProcIds_19, ((MR_Box) (Var_46)), &conv1_STATE_VARIABLE_InSccMap_47_47);
    STATE_VARIABLE_InSccMap_47_47 = ((MR_Word) conv1_STATE_VARIABLE_InSccMap_47_47);
    switch (OptTailCalls_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_88;
          MR_Box conv7_STATE_VARIABLE_FuncDefns_42;
          MR_Box conv6_STATE_VARIABLE_GlobalData_44;
          MR_Box conv5_STATE_VARIABLE_InSccMap_40;

          {
            Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_2));
            MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (ModuleInfo_11));
            MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (Target_13));
            MR_hl_field(MR_mktag(0), Var_88, 5) = ((MR_Box) (ConstStructMap_14));
            MR_hl_field(MR_mktag(0), Var_88, 6) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__set__foldl3_8_p_0(TypeCtorInfo_93_93, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, TypeInfo_98_98, Var_88, PredProcIds_19, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_41)), &conv7_STATE_VARIABLE_FuncDefns_42, ((MR_Box) (STATE_VARIABLE_GlobalData_0_43)), &conv6_STATE_VARIABLE_GlobalData_44, ((MR_Box) (STATE_VARIABLE_InSccMap_47_47)), &conv5_STATE_VARIABLE_InSccMap_40);
          *STATE_VARIABLE_FuncDefns_42 = ((MR_Word) conv7_STATE_VARIABLE_FuncDefns_42);
          *STATE_VARIABLE_GlobalData_44 = ((MR_Word) conv6_STATE_VARIABLE_GlobalData_44);
          *STATE_VARIABLE_InSccMap_40 = ((MR_Word) conv5_STATE_VARIABLE_InSccMap_40);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_116_116;
          MR_Word TypeInfo_117_117;
          MR_Word TypeCtorInfo_118_118;
          MR_Word TypeCtorInfo_151_151;
          MR_Word NonePredProcIdInfos_23;
          MR_Word SelfPredProcIdInfos0_24;
          MR_Word MutualDetPredProcIdInfos0_25;
          MR_Word MutualSemiPredProcIdInfos0_26;
          MR_Word Globals_27;
          MR_Word GC_28;
          MR_Word SelfPredProcIdInfos_29;
          MR_Word MutualDetPredProcIdInfos_30;
          MR_Word MutualSemiPredProcIdInfos_31;
          MR_Word DetTSCCDepInfo_32;
          MR_Word SemiTSCCDepInfo_33;
          MR_Word DetTSCCEntries_34;
          MR_Word SemiTSCCEntries_35;
          MR_Word DetLonePredProcIds_36;
          MR_Word DetNonTrivialTSCCEntries_37;
          MR_Word SemiLonePredProcIds_38;
          MR_Word SemiNonTrivialTSCCEntries_39;
          MR_Word Var_48;
          MR_Word Var_50;
          MR_Word STATE_VARIABLE_FuncDefns_51_51;
          MR_Word STATE_VARIABLE_GlobalData_52_52;
          MR_Word STATE_VARIABLE_InSccMap_53_53;
          MR_Word Var_55;
          MR_Word STATE_VARIABLE_FuncDefns_56_56;
          MR_Word STATE_VARIABLE_GlobalData_57_57;
          MR_Word STATE_VARIABLE_InSccMap_58_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_68;
          MR_Word STATE_VARIABLE_FuncDefns_69_69;
          MR_Word STATE_VARIABLE_GlobalData_70_70;
          MR_Word STATE_VARIABLE_InSccMap_71_71;
          MR_Word STATE_VARIABLE_FuncDefns_74_74;
          MR_Word STATE_VARIABLE_GlobalData_75_75;
          MR_Word STATE_VARIABLE_InSccMap_76_76;
          MR_Word Var_78;
          MR_Word STATE_VARIABLE_FuncDefns_79_79;
          MR_Word STATE_VARIABLE_GlobalData_80_80;
          MR_Word STATE_VARIABLE_InSccMap_81_81;
          MR_Word Var_83;
          MR_Box conv13_STATE_VARIABLE_FuncDefns_51_51;
          MR_Box conv12_STATE_VARIABLE_GlobalData_52_52;
          MR_Box conv11_STATE_VARIABLE_InSccMap_53_53;
          MR_Box conv19_STATE_VARIABLE_FuncDefns_56_56;
          MR_Box conv18_STATE_VARIABLE_GlobalData_57_57;
          MR_Box conv17_STATE_VARIABLE_InSccMap_58_58;
          MR_Box conv27_STATE_VARIABLE_FuncDefns_69_69;
          MR_Box conv26_STATE_VARIABLE_GlobalData_70_70;
          MR_Box conv25_STATE_VARIABLE_InSccMap_71_71;
          MR_Box conv30_STATE_VARIABLE_FuncDefns_74_74;
          MR_Box conv29_STATE_VARIABLE_GlobalData_75_75;
          MR_Box conv28_STATE_VARIABLE_InSccMap_76_76;
          MR_Box conv36_STATE_VARIABLE_FuncDefns_79_79;
          MR_Box conv35_STATE_VARIABLE_GlobalData_80_80;
          MR_Box conv34_STATE_VARIABLE_InSccMap_81_81;
          MR_Box conv42_STATE_VARIABLE_FuncDefns_42;
          MR_Box conv41_STATE_VARIABLE_GlobalData_44;
          MR_Box conv40_STATE_VARIABLE_InSccMap_40;

          Var_48 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_93_93, PredProcIds_19);
          ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(ModuleInfo_11, Var_48, &NonePredProcIdInfos_23, &SelfPredProcIdInfos0_24, &MutualDetPredProcIdInfos0_25, &MutualSemiPredProcIdInfos0_26);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_27);
          libs__globals__get_gc_method_2_p_0(Globals_27, &GC_28);
          succeeded = (GC_28 == (MR_Integer) 5);
          if (succeeded)
          {
            MR_Word TypeCtorInfo_108_108 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0;
            MR_Word Var_49;

            Var_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_108_108, MutualDetPredProcIdInfos0_25, MutualSemiPredProcIdInfos0_26);
            SelfPredProcIdInfos_29 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_108_108, SelfPredProcIdInfos0_24, Var_49);
            MutualDetPredProcIdInfos_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MutualSemiPredProcIdInfos_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            SelfPredProcIdInfos_29 = SelfPredProcIdInfos0_24;
            MutualDetPredProcIdInfos_30 = MutualDetPredProcIdInfos0_25;
            MutualSemiPredProcIdInfos_31 = MutualSemiPredProcIdInfos0_26;
          }
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_3));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ModuleInfo_11));
            MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Target_13));
            MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (ConstStructMap_14));
            MR_hl_field(MR_mktag(0), Var_50, 6) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeCtorInfo_116_116 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0;
          TypeInfo_117_117 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2];
          TypeCtorInfo_118_118 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
          mercury__list__foldl3_8_p_0(TypeCtorInfo_116_116, TypeInfo_117_117, TypeCtorInfo_118_118, TypeInfo_98_98, Var_50, NonePredProcIdInfos_23, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_41)), &conv13_STATE_VARIABLE_FuncDefns_51_51, ((MR_Box) (STATE_VARIABLE_GlobalData_0_43)), &conv12_STATE_VARIABLE_GlobalData_52_52, ((MR_Box) (STATE_VARIABLE_InSccMap_47_47)), &conv11_STATE_VARIABLE_InSccMap_53_53);
          STATE_VARIABLE_FuncDefns_51_51 = ((MR_Word) conv13_STATE_VARIABLE_FuncDefns_51_51);
          STATE_VARIABLE_GlobalData_52_52 = ((MR_Word) conv12_STATE_VARIABLE_GlobalData_52_52);
          STATE_VARIABLE_InSccMap_53_53 = ((MR_Word) conv11_STATE_VARIABLE_InSccMap_53_53);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_4));
            MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ModuleInfo_11));
            MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Target_13));
            MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (ConstStructMap_14));
            MR_hl_field(MR_mktag(0), Var_55, 6) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__foldl3_8_p_0(TypeCtorInfo_116_116, TypeInfo_117_117, TypeCtorInfo_118_118, TypeInfo_98_98, Var_55, SelfPredProcIdInfos_29, ((MR_Box) (STATE_VARIABLE_FuncDefns_51_51)), &conv19_STATE_VARIABLE_FuncDefns_56_56, ((MR_Box) (STATE_VARIABLE_GlobalData_52_52)), &conv18_STATE_VARIABLE_GlobalData_57_57, ((MR_Box) (STATE_VARIABLE_InSccMap_53_53)), &conv17_STATE_VARIABLE_InSccMap_58_58);
          STATE_VARIABLE_FuncDefns_56_56 = ((MR_Word) conv19_STATE_VARIABLE_FuncDefns_56_56);
          STATE_VARIABLE_GlobalData_57_57 = ((MR_Word) conv18_STATE_VARIABLE_GlobalData_57_57);
          STATE_VARIABLE_InSccMap_58_58 = ((MR_Word) conv17_STATE_VARIABLE_InSccMap_58_58);
          Var_61 = mercury__list__map_2_f_0(TypeCtorInfo_116_116, TypeCtorInfo_93_93, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[8], MutualDetPredProcIdInfos_30);
          Var_60 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_93_93, Var_61);
          DetTSCCDepInfo_32 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_11, Var_60, (MR_Integer) 0);
          Var_65 = mercury__list__map_2_f_0(TypeCtorInfo_116_116, TypeCtorInfo_93_93, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[9], MutualSemiPredProcIdInfos_31);
          Var_64 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_93_93, Var_65);
          SemiTSCCDepInfo_33 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_11, Var_64, (MR_Integer) 0);
          hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_11, DetTSCCDepInfo_32, &DetTSCCEntries_34);
          hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_11, SemiTSCCDepInfo_33, &SemiTSCCEntries_35);
          ml_backend__ml_proc_gen__partition_tsccs_3_p_0(DetTSCCEntries_34, &DetLonePredProcIds_36, &DetNonTrivialTSCCEntries_37);
          ml_backend__ml_proc_gen__partition_tsccs_3_p_0(SemiTSCCEntries_35, &SemiLonePredProcIds_38, &SemiNonTrivialTSCCEntries_39);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_7));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (ModuleInfo_11));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Target_13));
            MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (ConstStructMap_14));
            MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__foldl3_8_p_0(TypeCtorInfo_93_93, TypeInfo_117_117, TypeCtorInfo_118_118, TypeInfo_98_98, Var_68, DetLonePredProcIds_36, ((MR_Box) (STATE_VARIABLE_FuncDefns_56_56)), &conv27_STATE_VARIABLE_FuncDefns_69_69, ((MR_Box) (STATE_VARIABLE_GlobalData_57_57)), &conv26_STATE_VARIABLE_GlobalData_70_70, ((MR_Box) (STATE_VARIABLE_InSccMap_58_58)), &conv25_STATE_VARIABLE_InSccMap_71_71);
          STATE_VARIABLE_FuncDefns_69_69 = ((MR_Word) conv27_STATE_VARIABLE_FuncDefns_69_69);
          STATE_VARIABLE_GlobalData_70_70 = ((MR_Word) conv26_STATE_VARIABLE_GlobalData_70_70);
          STATE_VARIABLE_InSccMap_71_71 = ((MR_Word) conv25_STATE_VARIABLE_InSccMap_71_71);
          mercury__list__foldl3_8_p_0(TypeCtorInfo_93_93, TypeInfo_117_117, TypeCtorInfo_118_118, TypeInfo_98_98, Var_68, SemiLonePredProcIds_38, ((MR_Box) (STATE_VARIABLE_FuncDefns_69_69)), &conv30_STATE_VARIABLE_FuncDefns_74_74, ((MR_Box) (STATE_VARIABLE_GlobalData_70_70)), &conv29_STATE_VARIABLE_GlobalData_75_75, ((MR_Box) (STATE_VARIABLE_InSccMap_71_71)), &conv28_STATE_VARIABLE_InSccMap_76_76);
          STATE_VARIABLE_FuncDefns_74_74 = ((MR_Word) conv30_STATE_VARIABLE_FuncDefns_74_74);
          STATE_VARIABLE_GlobalData_75_75 = ((MR_Word) conv29_STATE_VARIABLE_GlobalData_75_75);
          STATE_VARIABLE_InSccMap_76_76 = ((MR_Word) conv28_STATE_VARIABLE_InSccMap_76_76);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_8));
            MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ModuleInfo_11));
            MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (Target_13));
            MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (ConstStructMap_14));
            MR_hl_field(MR_mktag(0), Var_78, 6) = ((MR_Box) (SCCEntryProcs_22));
            MR_hl_field(MR_mktag(0), Var_78, 7) = ((MR_Box) ((MR_Integer) 0));
          }
          TypeCtorInfo_151_151 = (MR_Word) &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0;
          mercury__list__foldl3_8_p_0(TypeCtorInfo_151_151, TypeInfo_117_117, TypeCtorInfo_118_118, TypeInfo_98_98, Var_78, DetNonTrivialTSCCEntries_37, ((MR_Box) (STATE_VARIABLE_FuncDefns_74_74)), &conv36_STATE_VARIABLE_FuncDefns_79_79, ((MR_Box) (STATE_VARIABLE_GlobalData_75_75)), &conv35_STATE_VARIABLE_GlobalData_80_80, ((MR_Box) (STATE_VARIABLE_InSccMap_76_76)), &conv34_STATE_VARIABLE_InSccMap_81_81);
          STATE_VARIABLE_FuncDefns_79_79 = ((MR_Word) conv36_STATE_VARIABLE_FuncDefns_79_79);
          STATE_VARIABLE_GlobalData_80_80 = ((MR_Word) conv35_STATE_VARIABLE_GlobalData_80_80);
          STATE_VARIABLE_InSccMap_81_81 = ((MR_Word) conv34_STATE_VARIABLE_InSccMap_81_81);
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_10_p_0_9));
            MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (ModuleInfo_11));
            MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (Target_13));
            MR_hl_field(MR_mktag(0), Var_83, 5) = ((MR_Box) (ConstStructMap_14));
            MR_hl_field(MR_mktag(0), Var_83, 6) = ((MR_Box) (SCCEntryProcs_22));
            MR_hl_field(MR_mktag(0), Var_83, 7) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__foldl3_8_p_0(TypeCtorInfo_151_151, TypeInfo_117_117, TypeCtorInfo_118_118, TypeInfo_98_98, Var_83, SemiNonTrivialTSCCEntries_39, ((MR_Box) (STATE_VARIABLE_FuncDefns_79_79)), &conv42_STATE_VARIABLE_FuncDefns_42, ((MR_Box) (STATE_VARIABLE_GlobalData_80_80)), &conv41_STATE_VARIABLE_GlobalData_44, ((MR_Box) (STATE_VARIABLE_InSccMap_81_81)), &conv40_STATE_VARIABLE_InSccMap_40);
          *STATE_VARIABLE_FuncDefns_42 = ((MR_Word) conv42_STATE_VARIABLE_FuncDefns_42);
          *STATE_VARIABLE_GlobalData_44 = ((MR_Word) conv41_STATE_VARIABLE_GlobalData_44);
          *STATE_VARIABLE_InSccMap_40 = ((MR_Word) conv40_STATE_VARIABLE_InSccMap_40);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__partition_tsccs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word TSCC_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word TSCCs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word TSCCPredProcIdsSet_8;
    MR_Word TSCCPredProcIds_11;
    MR_Word STATE_VARIABLE_LonePredProcIds_18_18;
    MR_Word STATE_VARIABLE_NonTrivialTSCCS_19_19;
    MR_Word Var_9;
    MR_Word Var_10;

    ml_backend__ml_proc_gen__partition_tsccs_3_p_0(TSCCs_5, &STATE_VARIABLE_LonePredProcIds_18_18, &STATE_VARIABLE_NonTrivialTSCCS_19_19);
    TSCCPredProcIdsSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCC_4, (MR_Integer) 0)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCC_4, (MR_Integer) 1)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSCC_4, (MR_Integer) 2)));
    mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TSCCPredProcIdsSet_8, &TSCCPredProcIds_11);
    if ((TSCCPredProcIds_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.partition_tsccs\'/3", (MR_String) "empty TSCC");
        return;
      }
    }
    else
    {
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), TSCCPredProcIds_11, (MR_Integer) 1)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TSCCPredProcIds_11, (MR_Integer) 0)));

      if ((Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_LonePredProcIds_18_18));
        }
        *HeadVar__3_3 = STATE_VARIABLE_NonTrivialTSCCS_19_19;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TSCC_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NonTrivialTSCCS_19_19));
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
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word PredProcId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word PredProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
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
      MR_Word _GoalExpr_18;

      ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(HeadVar__1_1, PredProcIds_10, &STATE_VARIABLE_NoneIdInfos_33_33, &STATE_VARIABLE_SelfIdInfos_34_34, &STATE_VARIABLE_MutualDetIdInfos_35_35, &STATE_VARIABLE_MutualSemiIdInfos_36_36);
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(HeadVar__1_1, PredProcId_9, &PredInfo_15, &ProcInfo_16);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_17);
      _GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0)));
      GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 1)));
      ProcContext_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
      {
        IdInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IdInfo_21, 0) = ((MR_Box) (PredProcId_9));
        MR_hl_field(MR_mktag(0), IdInfo_21, 1) = ((MR_Box) (PredInfo_15));
        MR_hl_field(MR_mktag(0), IdInfo_21, 2) = ((MR_Box) (ProcInfo_16));
        MR_hl_field(MR_mktag(0), IdInfo_21, 3) = ((MR_Box) (ProcContext_20));
      }
      hlds__hlds_pred__proc_info_get_has_tail_rec_call_2_p_0(ProcInfo_16, &HasTailRecCall_22);
      HasSelfTailRecCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HasTailRecCall_22, (MR_Integer) 0)));
      HasMutualTailRecCall_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HasTailRecCall_22, (MR_Integer) 1)));
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
            {
              succeeded = (SolnCount_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              switch (CodeModel_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualDetIdInfos_35_35));
                    }
                    *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_36_36;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualSemiIdInfos_36_36));
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
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_33_33));
                    }
                    *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_34_34;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SelfIdInfos_34_34));
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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_33_33));
                  }
                  *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_34_34;
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SelfIdInfos_34_34));
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
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_33;

    conv2_LambdaHeadVar__2_33 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__154__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_33));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProcTable_9;

    ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ProcTable_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_9));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CodeGenPredProcIds_0_3,
  MR_Word * STATE_VARIABLE_CodeGenPredProcIds_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CodeGenPredProcIds_4 = STATE_VARIABLE_CodeGenPredProcIds_0_3;
    }
    else
    {
      MR_Word PredIdInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIdInfos0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredIdInfo_10;
      MR_Word PredIdInfos_11;
      MR_Word PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo0_8, (MR_Integer) 0)));
      MR_Word PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredIdInfo0_8, (MR_Integer) 1)));
      MR_Word PredStatus_15;
      MR_Word STATE_VARIABLE_CodeGenPredProcIds_34_34;

      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_14, &PredStatus_15);
      {
        MR_Word Var_28 = (MR_Word) PredStatus_15;
        MR_Word Var_16;

        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_28, (MR_Integer) 0)));
      }
      if (!(succeeded))
      {
        MR_Word Var_26;
        MR_Word Var_27;

        succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo0_14);
        if (succeeded)
        {
          Var_26 = (MR_Word) PredStatus_15;
          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
            succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
        MR_Word TypeCtorInfo_40_40;
        MR_Word TypeCtorInfo_42_42;
        MR_Word ProcIds_18;
        MR_Word ProcTable0_19;
        MR_Word ProcTable_20;
        MR_Word PredInfo_21;
        MR_Word PredProcIds_22;
        MR_Word Var_31;
        MR_Word Var_29 = (MR_Word) PredStatus_15;
        MR_Word Var_17;
        MR_Box conv1_ProcTable_20;

        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));
          ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_14);
        }
        else
          ProcIds_18 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo0_14);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_14, &ProcTable0_19);
        TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
        mercury__list__foldl_4_p_0(TypeCtorInfo_40_40, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[6], ProcIds_18, ((MR_Box) (ProcTable0_19)), &conv1_ProcTable_20);
        ProcTable_20 = ((MR_Word) conv1_ProcTable_20);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_20, PredInfo0_14, &PredInfo_21);
        {
          PredIdInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredIdInfo_10, 0) = ((MR_Box) (PredId_13));
          MR_hl_field(MR_mktag(0), PredIdInfo_10, 1) = ((MR_Box) (PredInfo_21));
        }
        TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (PredId_13));
        }
        PredProcIds_22 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeCtorInfo_42_42, Var_31, ProcIds_18);
        STATE_VARIABLE_CodeGenPredProcIds_34_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, PredProcIds_22, STATE_VARIABLE_CodeGenPredProcIds_0_3);
      }
      ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(PredIdInfos0_9, &PredIdInfos_11, STATE_VARIABLE_CodeGenPredProcIds_34_34, STATE_VARIABLE_CodeGenPredProcIds_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredIdInfo_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIdInfos_11));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
