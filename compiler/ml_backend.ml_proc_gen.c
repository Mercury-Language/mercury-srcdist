/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-09-10
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0[3];

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

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_maybe_tail_call_opt_in_code_gen_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_maybe_tail_call_opt_in_code_gen_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_maybe_tail_call_opt_in_code_gen_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_mutual_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_mutual_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_mutual_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_none_or_self_tail_rec_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0[9];

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_code_0_0[9];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_code_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_code_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_code_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_code_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0[12];

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0[12];

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

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1505__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_26,
  MR_Word ConvOutputStmts_30,
  MR_Word * LambdaHeadVar__1_46,
  MR_Word * LambdaHeadVar__2_47,
  MR_Word * LambdaHeadVar__3_48,
  MR_Word LambdaHeadVar__4_49,
  MR_Word * LambdaHeadVar__5_50);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1291__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_37,
  MR_Word HeadVar__2_44);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1240__1_1_f_0(
  MR_Word LambdaHeadVar__1_70);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1164__1_2_p_0(
  MR_Word CopiedOutputVars_45,
  MR_Word HeadVar__2_84);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1133__1_2_p_0(
  MR_Word TailRecSpecs0_34,
  MR_Word HeadVar__2_67);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__compute_initial_tail_rec_map_for_mutual__1076__1_2_p_0(
  MR_Integer NumOutputs_33,
  MR_Integer OldNumOutputs_39);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__562__1_2_p_0(
  MR_Word TsccKind_19,
  MR_Word HeadVar__2_42);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__162__1_2_f_0(
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
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_mutual_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_mutual_0_0(
  MR_Word HeadVar__2_1,
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

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen__prefix_proc_stmt_with_switch_cond_4_p_0(
  MR_Word ProcStmtInfo_5,
  MR_Word * SwitchCase_6,
  MR_Word STATE_VARIABLE_PossibleSwitchValues_0_13,
  MR_Word * STATE_VARIABLE_PossibleSwitchValues_14);

static void MR_CALL 
ml_backend__ml_proc_gen__prefix_proc_stmt_with_start_label_2_p_0(
  MR_Word ProcStmtInfo_3,
  MR_Word * LabelProcStmts_4);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(
  MR_Word EntryProc_8,
  MR_Word PredProcCode_9,
  MR_Word * ProcStmtInfo_10,
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_37,
  MR_Word * STATE_VARIABLE_MaybeEntryProcInfo_38,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_39,
  MR_Word * STATE_VARIABLE_LocalVarDefns_40);

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
  MR_Word ModuleInfo_9,
  MR_Word LoopKind_10,
  MR_Word TsccCodeModel_11,
  MR_Word PredProcCodes_12,
  MR_Word EnvVarNames_13,
  MR_Word EntryProcDescComments_14,
  MR_Word EntryProc_15,
  MR_Word * FuncDefn_16);

static void MR_CALL 
ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0(
  MR_Word LoopKind_7,
  MR_Word EntryProc_8,
  MR_Word EntryProcContext_9,
  MR_Word ProcStmtInfos_10,
  MR_Word * SelectorVarDefns_11,
  MR_Word * Stmts_12);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_2(
  MR_Box closure_arg);

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
  MR_Word STATE_VARIABLE_GlobalData_0_57,
  MR_Word * STATE_VARIABLE_GlobalData_58,
  MR_Word STATE_VARIABLE_TsccInfo_0_59,
  MR_Word * STATE_VARIABLE_TsccInfo_60);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredProcId_13,
  MR_Word * PredProcIdArgsInfo_14,
  MR_Integer STATE_VARIABLE_ProcNum_0_41,
  MR_Integer * STATE_VARIABLE_ProcNum_42,
  MR_Word STATE_VARIABLE_MaybeNumOutputs_0_43,
  MR_Word * STATE_VARIABLE_MaybeNumOutputs_44,
  MR_Word STATE_VARIABLE_OutArgNames_0_45,
  MR_Word * STATE_VARIABLE_OutArgNames_46,
  MR_Word STATE_VARIABLE_TailRecMap0_0_47,
  MR_Word * STATE_VARIABLE_TailRecMap0_48);

static void MR_CALL 
ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(
  MR_Word PredProcId_7,
  MR_Word TargetInfo_8,
  MR_Word STATE_VARIABLE_NonTailEntryPredProcIds_0_13,
  MR_Word * STATE_VARIABLE_NonTailEntryPredProcIds_14,
  MR_Word STATE_VARIABLE_NoMutualTailRecPredProcIds_0_15,
  MR_Word * STATE_VARIABLE_NoMutualTailRecPredProcIds_16);

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
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

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
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_1(
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
  MR_Box * wrapper_arg_10);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Target_18,
  MR_Word ConstStructMap_19,
  MR_Word TsccCodeModel_20,
  MR_Word PredProcIds_21,
  MR_Word * NonTailEntryPredProcIds_22,
  MR_Word * NoMutualPredProcIds_23,
  MR_Word * MutualPredProcIds_24,
  MR_Word * MutualPredProcCodes_25,
  MR_Word * MutualContainsNestedFuncs_26,
  MR_Word * MutualEnvVarNames_27,
  MR_Word * MutualClosureWrapperFuncDefns_28,
  MR_Word * MutualTailRecSpecs_29,
  MR_Word * LoopKind_30,
  MR_Word STATE_VARIABLE_GlobalData_0_43,
  MR_Word * STATE_VARIABLE_GlobalData_44);

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

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
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcIdInfo_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_54,
  MR_Word * STATE_VARIABLE_FuncDefns_55,
  MR_Word STATE_VARIABLE_GlobalData_0_56,
  MR_Word * STATE_VARIABLE_GlobalData_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_post_process_locals_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word Context_11,
  MR_Word HeadVars_12,
  MR_Word HeadTypes_13,
  MR_Word CopiedOutputVars_14,
  MR_Word LocalVarDefns0_15,
  MR_Word * LocalVarDefns_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0(
  MR_Word CodeModel_13,
  MR_Word SoloOrTscc_14,
  MR_Word HeadVars_15,
  MR_Word ArgTypes_16,
  MR_Word TopFunctorModes_17,
  MR_Word CopiedOutputVars_18,
  MR_Word Goal_19,
  MR_Word * LocalVarDefns_20,
  MR_Word * FuncDefns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
  MR_Word Vars_11,
  MR_Word HeadTypes_12,
  MR_Word TopFunctorModes_13,
  MR_Word CopiedOutputVars_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * InputStmts_17,
  MR_Word * OutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcIdInfo_8,
  MR_Word FuncParams_9,
  MR_Word FuncBody_10,
  MR_Word EnvVarNames_11,
  MR_Word * FuncDefn_12);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0(
  MR_Word PredProcId_10,
  MR_Word Context_11,
  MR_Word LocalVarDefns_12,
  MR_Word FuncDefns_13,
  MR_Word GoalStmts_14,
  MR_Word TailRecInfo_15,
  MR_Word * FuncBody_16,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word NoneOrSelf_6,
  MR_Word PredProcId_7,
  MR_Word * TailRecMap0_8);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(
  MR_Word PredProcIdInfo_3);

static void MR_CALL 
ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OptTailCalls_2,
  MR_Word Target_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefns_0_6,
  MR_Word * STATE_VARIABLE_FuncDefns_7,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word OptTailCalls_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word SCCE_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

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
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_mutual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_mutual_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[14][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[18][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[5][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[3][14];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[8][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[1][15];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[6][1];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[2][10];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[2][11];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][13];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][9];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_12[1][7];




static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_11[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[5])),
    ((MR_Box) (ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_12[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[5][6] = {
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[3][14] = {
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
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[8][5] = {
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
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[1][15] = {
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
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "setup for tailcalls optimized into a loop"))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[10])))
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[2][10] = {
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[2][11] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_tscc_code_model_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[1][13] = {
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_12[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0 = {
  (MR_String) "entry_proc_info",
  (MR_Integer) 3,
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

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_0 = {
  (MR_String) "no_tail_call_opt_in_code_gen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_maybe_tail_call_opt_in_code_gen_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_mutual_0
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_1 = {
  (MR_String) "tail_call_opt_in_code_gen",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_maybe_tail_call_opt_in_code_gen_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_maybe_tail_call_opt_in_code_gen_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_maybe_tail_call_opt_in_code_gen_0_1[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_1
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_maybe_tail_call_opt_in_code_gen_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_maybe_tail_call_opt_in_code_gen_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_maybe_tail_call_opt_in_code_gen_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_in_code_gen_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_tail_call_opt_in_code_gen",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_maybe_tail_call_opt_in_code_gen_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_maybe_tail_call_opt_in_code_gen_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_0 = {
  (MR_String) "no_tail_call_opt_mutual",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_1 = {
  (MR_String) "tail_call_opt_mutual",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_mutual_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_mutual_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_mutual_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_mutual_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_mutual_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_mutual_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_mutual_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_tail_call_opt_mutual",
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_mutual_0 },
  {     ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_value_ordered_maybe_tail_call_opt_mutual_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_mutual_0
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0[9] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_code_0_0[9] = {
  (MR_String) "ppc_id_args_info",
  (MR_String) "ppc_func_params",
  (MR_String) "ppc_local_var_defns",
  (MR_String) "ppc_local_func_defns",
  (MR_String) "ppc_desc_comment_stmt",
  (MR_String) "ppc_goal_stmts",
  (MR_String) "ppc_closure_wrapper_funcs",
  (MR_String) "ppc_env_var_names",
  (MR_String) "ppc_tail_rec_specs"
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0 = {
  (MR_String) "pred_proc_code",
  (MR_Integer) 9,
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0[12] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1hlds__hlds_pred__type_ctor_info_top_functor_mode_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0
};

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0[12] = {
  (MR_String) "ppiai_pred_proc_id",
  (MR_String) "ppiai_pred_info",
  (MR_String) "ppiai_proc_info",
  (MR_String) "ppiai_proc_context",
  (MR_String) "ppiai_id_in_tscc",
  (MR_String) "ppiai_head_vars",
  (MR_String) "ppiai_head_var_types",
  (MR_String) "ppiai_head_var_modes",
  (MR_String) "ppiai_tscc_in_local_var_defns",
  (MR_String) "ppiai_tscc_args",
  (MR_String) "ppiai_own_local_var_defns",
  (MR_String) "ppiai_tscc_to_own_copy_stmts"
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0 = {
  (MR_String) "pred_proc_id_args_info",
  (MR_Integer) 12,
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

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1505__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_26,
  MR_Word ConvOutputStmts_30,
  MR_Word * LambdaHeadVar__1_46,
  MR_Word * LambdaHeadVar__2_47,
  MR_Word * LambdaHeadVar__3_48,
  MR_Word LambdaHeadVar__4_49,
  MR_Word * LambdaHeadVar__5_50)
{
  {
    MR_Word SuccStmts_38;

    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_26, &SuccStmts_38, LambdaHeadVar__4_49, LambdaHeadVar__5_50);
    *LambdaHeadVar__1_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__3_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_30, SuccStmts_38);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1291__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_37,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[6], ((MR_Box) (STATE_VARIABLE_MaybeEntryProcInfo_0_37)), ((MR_Box) (HeadVar__2_44)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1240__1_1_f_0(
  MR_Word LambdaHeadVar__1_70)
{
  {
    MR_Word LambdaHeadVar__2_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 4)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 0)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 1)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 2)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 3)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 5)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 6)));
    MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 7)));
    MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_70, (MR_Integer) 8)));

    return LambdaHeadVar__2_71;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1164__1_2_p_0(
  MR_Word CopiedOutputVars_45,
  MR_Word HeadVar__2_84)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[5], ((MR_Box) (CopiedOutputVars_45)), ((MR_Box) (HeadVar__2_84)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1133__1_2_p_0(
  MR_Word TailRecSpecs0_34,
  MR_Word HeadVar__2_67)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], ((MR_Box) (TailRecSpecs0_34)), ((MR_Box) (HeadVar__2_67)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__compute_initial_tail_rec_map_for_mutual__1076__1_2_p_0(
  MR_Integer NumOutputs_33,
  MR_Integer OldNumOutputs_39)
{
  {
    MR_bool succeeded = (OldNumOutputs_39 == NumOutputs_33);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__562__1_2_p_0(
  MR_Word TsccKind_19,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (TsccKind_19 == HeadVar__2_42);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__162__1_2_f_0(
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
    MR_Integer CastX_30 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_31 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_30 == CastY_31);
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
      MR_Word Var_22;

      ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(&Var_22, ArgX1_4, ArgY1_5);
      succeeded = (Var_22 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_22;
      else
      {
        MR_Word Var_23;

        ml_backend__mlds____Compare____mlds_func_params_0_0(&Var_23, ArgX2_6, ArgY2_7);
        succeeded = (Var_23 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_23;
        else
        {
          MR_Word Var_24;

          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], &Var_24, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_24 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_24;
          else
          {
            MR_Word Var_25;

            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], &Var_25, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_25 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_25;
            else
            {
              MR_Word Var_26;

              ml_backend__mlds____Compare____mlds_stmt_0_0(&Var_26, ArgX5_12, ArgY5_13);
              succeeded = (Var_26 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_26;
              else
              {
                MR_Word Var_27;

                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8], &Var_27, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_27 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_27;
                else
                {
                  MR_Word Var_28;

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], &Var_28, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_28 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_28;
                  else
                  {
                    MR_Word Var_29;

                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[12], &Var_29, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_29 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_29;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
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

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_39 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_40 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_39 == CastY_40);
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
      MR_Word Var_28;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_28, ArgX1_4, ArgY1_5);
      succeeded = (Var_28 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_28;
      else
      {
        MR_Word Var_29;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_29, ArgX2_6, ArgY2_7);
        succeeded = (Var_29 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_29;
        else
        {
          MR_Word Var_30;

          hlds__hlds_pred____Compare____proc_info_0_0(&Var_30, ArgX3_8, ArgY3_9);
          succeeded = (Var_30 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_30;
          else
          {
            MR_Word Var_31;

            mercury__term____Compare____context_0_0(&Var_31, ArgX4_10, ArgY4_11);
            succeeded = (Var_31 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_31;
            else
            {
              MR_Word Var_32;
              MR_Integer Var_53 = (MR_Integer) ArgX5_12;
              MR_Integer Var_54 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_53, Var_54);
              succeeded = (Var_32 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_32;
              else
              {
                MR_Word Var_33;

                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[5], &Var_33, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_33 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_33;
                else
                {
                  MR_Word Var_34;

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[13], &Var_34, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_34 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_34;
                  else
                  {
                    MR_Word Var_35;

                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[14], &Var_35, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_35 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_35;
                    else
                    {
                      MR_Word Var_36;

                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], &Var_36, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_36 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_36;
                      else
                      {
                        MR_Word Var_37;

                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[11], &Var_37, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
                        succeeded = (Var_37 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_37;
                        else
                        {
                          MR_Word Var_38;

                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], &Var_38, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_38 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_38;
                          else
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8], HeadVar__1_1, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
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
    MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
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

      succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[12];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_30_30 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
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

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_34_34;
      MR_Word TypeInfo_35_35;
      MR_Word TypeInfo_36_36;
      MR_Word TypeInfo_37_37;
      MR_Word TypeInfo_38_38;
      MR_Word TypeInfo_39_39;
      MR_Word TypeInfo_40_40;
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
      MR_Integer Var_41;
      MR_Integer Var_42;

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
              Var_41 = (MR_Integer) ArgX5_11;
              Var_42 = (MR_Integer) ArgY5_12;
              succeeded = (Var_41 == Var_42);
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[5];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[13];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[14];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_37_37 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_38_38 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[11];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_39_39 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_40_40 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
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
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_mutual_0_0(
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
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_mutual_0_0(
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
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer Var_12 = (MR_Integer) Var_11;
        MR_Integer Var_13 = (MR_Integer) ArgY1_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_12, Var_13);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
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

        ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[11], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_13 = (MR_Integer) ArgX1_3;
      MR_Integer Var_14 = (MR_Integer) ArgY1_4;

      succeeded = (Var_13 == Var_14);
      if (succeeded)
      {
        succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[11];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
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
    MR_Word conv0_STATE_VARIABLE_ContainsNestedFuncs_39;

    ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ContainsNestedFuncs_39);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContainsNestedFuncs_39));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(
  MR_Word Stmt_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_38,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_39)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
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
            MR_Box conv1_STATE_VARIABLE_ContainsNestedFuncs_39;

            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[12], SubStmts_8, ((MR_Box) (STATE_VARIABLE_ContainsNestedFuncs_0_38)), &conv1_STATE_VARIABLE_ContainsNestedFuncs_39);
            *STATE_VARIABLE_ContainsNestedFuncs_39 = ((MR_Word) conv1_STATE_VARIABLE_ContainsNestedFuncs_39);
          }
          else
            *STATE_VARIABLE_ContainsNestedFuncs_39 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStmt_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 2)));
          MR_Word _LoopKind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 0)));
          MR_Word _CondRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 1)));
          MR_Word _Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 3)));
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
          MR_Word STATE_VARIABLE_ContainsNestedFuncs_45_45;
          MR_Word _Context_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 3)));
          MR_Word _CondRval_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 0)));

          ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(ThenStmt_15, STATE_VARIABLE_ContainsNestedFuncs_0_38, &STATE_VARIABLE_ContainsNestedFuncs_45_45);
          if ((MaybeElseStmt_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_45_45;
          else
          {
            MR_Word ElseStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElseStmt_16, (MR_Integer) 0)));
            MR_Word next_value_of_Stmt_4 = ElseStmt_17;
            MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38 = STATE_VARIABLE_ContainsNestedFuncs_45_45;

            // direct tailcall eliminated
            Stmt_4 = next_value_of_Stmt_4;
            STATE_VARIABLE_ContainsNestedFuncs_0_38 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38;
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
              MR_Word STATE_VARIABLE_ContainsNestedFuncs_43_43;
              MR_Word _Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word _Range_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word _Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 6)));
              MR_Box conv3_STATE_VARIABLE_ContainsNestedFuncs_43_43;

              mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[13], Cases_21, ((MR_Box) (STATE_VARIABLE_ContainsNestedFuncs_0_38)), &conv3_STATE_VARIABLE_ContainsNestedFuncs_43_43);
              STATE_VARIABLE_ContainsNestedFuncs_43_43 = ((MR_Word) conv3_STATE_VARIABLE_ContainsNestedFuncs_43_43);
              switch (MR_tag((MR_Word) Default_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_43_43;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_43_43;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word DefaultStmt_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_22, (MR_Integer) 0)));
                    MR_Word next_value_of_Stmt_4 = DefaultStmt_23;
                    MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38 = STATE_VARIABLE_ContainsNestedFuncs_43_43;

                    // direct tailcall eliminated
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
              MR_Word GoalStmt_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2)));
              MR_Word HandlerStmt_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3)));
              MR_Word STATE_VARIABLE_ContainsNestedFuncs_40_40;
              MR_Word _Lval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 1)));
              MR_Word _Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4)));
              MR_Word next_value_of_Stmt_4;
              MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38;

              ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(GoalStmt_25, STATE_VARIABLE_ContainsNestedFuncs_0_38, &STATE_VARIABLE_ContainsNestedFuncs_40_40);
              // direct tailcall eliminated
              next_value_of_Stmt_4 = HandlerStmt_26;
              next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38 = STATE_VARIABLE_ContainsNestedFuncs_40_40;
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

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Type_5 = (MR_Word) HeadVar__2_2;
    MR_Word Var_6;

    Var_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_4, Type_5);
    HeadVar__3_3 = (MR_Word) Var_6;
    return HeadVar__3_3;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__prefix_proc_stmt_with_switch_cond_4_p_0(
  MR_Word ProcStmtInfo_5,
  MR_Word * SwitchCase_6,
  MR_Word STATE_VARIABLE_PossibleSwitchValues_0_13,
  MR_Word * STATE_VARIABLE_PossibleSwitchValues_14)
{
  {
    MR_Word IdInTscc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_5, (MR_Integer) 0)));
    MR_Word ProcStmt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_5, (MR_Integer) 1)));
    MR_Integer IdInTsccNum_11 = (MR_Integer) IdInTscc_8;
    MR_Word MatchCond_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word _ProcContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_5, (MR_Integer) 2)));

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (IdInTsccNum_11));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      MatchCond_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MatchCond_12, 0) = ((MR_Box) (Var_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *SwitchCase_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MatchCond_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcStmt_9));
    }
    mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (IdInTsccNum_11)), STATE_VARIABLE_PossibleSwitchValues_0_13, STATE_VARIABLE_PossibleSwitchValues_14);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__prefix_proc_stmt_with_start_label_2_p_0(
  MR_Word ProcStmtInfo_3,
  MR_Word * LabelProcStmts_4)
{
  {
    MR_Word IdInTscc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_3, (MR_Integer) 0)));
    MR_Word ProcStmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_3, (MR_Integer) 1)));
    MR_Word ProcContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcStmtInfo_3, (MR_Integer) 2)));
    MR_String StartLabel_8;
    MR_Word StartLabelStmt_9;
    MR_Word Var_11;

    StartLabel_8 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, IdInTscc_5);
    {
      StartLabelStmt_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartLabelStmt_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), StartLabelStmt_9, 1) = ((MR_Box) (StartLabel_8));
      MR_hl_field(MR_mktag(3), StartLabelStmt_9, 2) = ((MR_Box) (ProcContext_7));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ProcStmt_6));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *LabelProcStmts_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartLabelStmt_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_11));
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

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1291__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(
  MR_Word EntryProc_8,
  MR_Word PredProcCode_9,
  MR_Word * ProcStmtInfo_10,
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_37,
  MR_Word * STATE_VARIABLE_MaybeEntryProcInfo_38,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_39,
  MR_Word * STATE_VARIABLE_LocalVarDefns_40)
{
  {
    MR_bool succeeded;
    MR_Word PredProcIdArgsInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 0)));
    MR_Word GoalLocalVarDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 2)));
    MR_Word GoalFuncDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 3)));
    MR_Word GoalStmts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 5)));
    MR_Word PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 0)));
    MR_Word PredInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 1)));
    MR_Word ProcInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 2)));
    MR_Word ProcContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 3)));
    MR_Word IdInTscc_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 4)));
    MR_Word TsccInLocalVarDefns_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 8)));
    MR_Word TsccArgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 9)));
    MR_Word OwnLocalVarDefns_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 10)));
    MR_Word CopyTsccToOwnStmts_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 11)));
    MR_Word ProcStmt_36;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word _FuncParams_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 1)));
    MR_Word _DescCommentStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 4)));
    MR_Word _ClosureWrapperFuncDefns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 6)));
    MR_Word _EnvVarNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 7)));
    MR_Word _TailRecSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_9, (MR_Integer) 8)));
    MR_Word _HeadVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 5)));
    MR_Word _HeadTypes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 6)));
    MR_Word _TopFunctorModes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_13, (MR_Integer) 7)));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_22, EntryProc_8);
    if (succeeded)
    {
      MR_Word PredProcIdInfo_34;
      MR_Word EntryProcInfo_35;
      MR_Word Var_41;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[7]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (STATE_VARIABLE_MaybeEntryProcInfo_0_37));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ml_backend.ml_proc_gen.construct_func_body_for_tscc\'/7", (MR_String) "!.MaybeEntryProcInfo != no");
      {
        PredProcIdInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredProcIdInfo_34, 0) = ((MR_Box) (PredProcId_22));
        MR_hl_field(MR_mktag(0), PredProcIdInfo_34, 1) = ((MR_Box) (PredInfo_23));
        MR_hl_field(MR_mktag(0), PredProcIdInfo_34, 2) = ((MR_Box) (ProcInfo_24));
        MR_hl_field(MR_mktag(0), PredProcIdInfo_34, 3) = ((MR_Box) (ProcContext_25));
      }
      {
        EntryProcInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EntryProcInfo_35, 0) = ((MR_Box) (IdInTscc_26));
        MR_hl_field(MR_mktag(0), EntryProcInfo_35, 1) = ((MR_Box) (PredProcIdInfo_34));
        MR_hl_field(MR_mktag(0), EntryProcInfo_35, 2) = ((MR_Box) (TsccArgs_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeEntryProcInfo_38 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EntryProcInfo_35));
      }
      *STATE_VARIABLE_LocalVarDefns_40 = STATE_VARIABLE_LocalVarDefns_0_39;
    }
    else
    {
      *STATE_VARIABLE_LocalVarDefns_40 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, STATE_VARIABLE_LocalVarDefns_0_39, TsccInLocalVarDefns_30);
      *STATE_VARIABLE_MaybeEntryProcInfo_38 = STATE_VARIABLE_MaybeEntryProcInfo_0_37;
    }
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, OwnLocalVarDefns_32, GoalLocalVarDefns_15);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CopyTsccToOwnStmts_33, GoalStmts_18);
    {
      ProcStmt_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcStmt_36, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), ProcStmt_36, 1) = ((MR_Box) (GoalFuncDefns_16));
      MR_hl_field(MR_mktag(0), ProcStmt_36, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), ProcStmt_36, 3) = ((MR_Box) (ProcContext_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ProcStmtInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (IdInTscc_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcStmt_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcContext_25));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__2_71;

    conv5_LambdaHeadVar__2_71 = ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1240__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_71));
    return wrapper_arg_2;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ProcStmtInfo_10;
    MR_Word conv1_STATE_VARIABLE_MaybeEntryProcInfo_38;
    MR_Word conv0_STATE_VARIABLE_LocalVarDefns_40;

    ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_ProcStmtInfo_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_MaybeEntryProcInfo_38, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_LocalVarDefns_40);
    *wrapper_arg_2 = ((MR_Box) (conv2_ProcStmtInfo_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeEntryProcInfo_38));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_LocalVarDefns_40));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word LoopKind_10,
  MR_Word TsccCodeModel_11,
  MR_Word PredProcCodes_12,
  MR_Word EnvVarNames_13,
  MR_Word EntryProcDescComments_14,
  MR_Word EntryProc_15,
  MR_Word * FuncDefn_16)
{
  {
    MR_Word TypeCtorInfo_94_94;
    MR_Word TypeCtorInfo_99_99;
    MR_Word ProcStmtInfos_18;
    MR_Word MaybeEntryProcInfo_19;
    MR_Word TsccInLocalDefns_20;
    MR_Word EntryIdInTscc_22;
    MR_Word EntryPredProcIdInfo_23;
    MR_Word EntryProcArgs_24;
    MR_Word ReturnArgTypes_25;
    MR_Word EntryProcParams_26;
    MR_Word EntryProcContext_30;
    MR_Word SelectorVarDefns_31;
    MR_Word Stmts_32;
    MR_Word LocalVarDefns_33;
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
    MR_Word Var_65;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_String Var_101;
    MR_String Var_102;
    MR_String Var_109;
    MR_Box conv4_MaybeEntryProcInfo_19;
    MR_Box conv3_TsccInLocalDefns_20;
    MR_Word _EntryPredProcId_27;
    MR_Word _EntryPredInfo_28;
    MR_Word _EntryProcInfo_29;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", EntryProc_15, ModuleInfo_9);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (EntryProc_15));
    }
    TypeCtorInfo_94_94 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0;
    mercury__list__map_foldl2_7_p_0(TypeCtorInfo_94_94, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[6], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[7], Var_52, PredProcCodes_12, &ProcStmtInfos_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_MaybeEntryProcInfo_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_TsccInLocalDefns_20);
    MaybeEntryProcInfo_19 = ((MR_Word) conv4_MaybeEntryProcInfo_19);
    TsccInLocalDefns_20 = ((MR_Word) conv3_TsccInLocalDefns_20);
    if ((MaybeEntryProcInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.construct_tscc_entry_proc\'/8", (MR_String) "MaybeEntryProcInfo = no");
        return;
      }
    }
    else
    {
      MR_Word EntryProcInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeEntryProcInfo_19, (MR_Integer) 0)));

      EntryIdInTscc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_21, (MR_Integer) 0)));
      EntryPredProcIdInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_21, (MR_Integer) 1)));
      EntryProcArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryProcInfo_21, (MR_Integer) 2)));
    }
    switch (TsccCodeModel_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ReturnArgTypes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          ReturnArgTypes_25 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_2[17]);
        }
        break;
    }
    {
      EntryProcParams_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EntryProcParams_26, 0) = ((MR_Box) (EntryProcArgs_24));
      MR_hl_field(MR_mktag(0), EntryProcParams_26, 1) = ((MR_Box) (ReturnArgTypes_25));
    }
    _EntryPredProcId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_23, (MR_Integer) 0)));
    _EntryPredInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_23, (MR_Integer) 1)));
    _EntryProcInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_23, (MR_Integer) 2)));
    EntryProcContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), EntryPredProcIdInfo_23, (MR_Integer) 3)));
    ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0(LoopKind_10, EntryIdInTscc_22, EntryProcContext_30, ProcStmtInfos_18, &SelectorVarDefns_31, &Stmts_32);
    LocalVarDefns_33 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, SelectorVarDefns_31, TsccInLocalDefns_20);
    EntryIdInTsccNum_34 = (MR_Integer) EntryIdInTscc_22;
    EntryProcDesc_35 = hlds__hlds_desc__describe_proc_from_id_2_f_0(ModuleInfo_9, EntryProc_15);
    Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ": ", EntryProcDesc_35);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_7[1], EntryIdInTsccNum_34, &Var_102);
    Var_109 = mercury__string__f_43_43_2_f_0(Var_102, Var_101);
    Comment0_36 = mercury__string__f_43_43_2_f_0((MR_String) "The code for TSCC PROC ", Var_109);
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Comment0_36));
    }
    {
      CommentStmt0_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt0_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt0_37, 1) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(3), CommentStmt0_37, 2) = ((MR_Box) (EntryProcContext_30));
    }
    {
      CommentStmt1_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt1_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt1_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_7[3])));
      MR_hl_field(MR_mktag(3), CommentStmt1_39, 2) = ((MR_Box) (EntryProcContext_30));
    }
    {
      CommentStmt2_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CommentStmt2_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), CommentStmt2_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_7[4])));
      MR_hl_field(MR_mktag(3), CommentStmt2_41, 2) = ((MR_Box) (EntryProcContext_30));
    }
    {
      EmptyCommentStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EmptyCommentStmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), EmptyCommentStmt_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_7[5])));
      MR_hl_field(MR_mktag(3), EmptyCommentStmt_43, 2) = ((MR_Box) (EntryProcContext_30));
    }
    TypeCtorInfo_99_99 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    ProcDescCommentStmts_44 = mercury__list__map_2_f_0(TypeCtorInfo_94_94, TypeCtorInfo_99_99, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[11], PredProcCodes_12);
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (EmptyCommentStmt_43));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (ProcDescCommentStmts_44));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (CommentStmt2_41));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (CommentStmt1_39));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (CommentStmt0_37));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (EmptyCommentStmt_43));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (EntryProcDescComments_14));
    }
    Var_76 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_99_99, Var_77, Stmts_32);
    FuncBodyStmts_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_99_99, Var_72, Var_76);
    {
      FuncBodyStmt_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 0) = ((MR_Box) (LocalVarDefns_33));
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 2) = ((MR_Box) (FuncBodyStmts_46));
      MR_hl_field(MR_mktag(0), FuncBodyStmt_47, 3) = ((MR_Box) (EntryProcContext_30));
    }
    {
      FuncBody_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FuncBody_48, 0) = ((MR_Box) (FuncBodyStmt_47));
    }
    ml_backend__ml_proc_gen__construct_func_defn_6_p_0(ModuleInfo_9, EntryPredProcIdInfo_23, EntryProcParams_26, FuncBody_48, EnvVarNames_13, FuncDefn_16);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_SwitchCase_6;
    MR_Word conv1_STATE_VARIABLE_PossibleSwitchValues_14;

    ml_backend__ml_proc_gen__prefix_proc_stmt_with_switch_cond_4_p_0(((MR_Word) wrapper_arg_1), &conv2_SwitchCase_6, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_PossibleSwitchValues_14);
    *wrapper_arg_2 = ((MR_Box) (conv2_SwitchCase_6));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_PossibleSwitchValues_14));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LabelProcStmts_4;

    ml_backend__ml_proc_gen__prefix_proc_stmt_with_start_label_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LabelProcStmts_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_LabelProcStmts_4));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__wrap_proc_stmts_6_p_0(
  MR_Word LoopKind_7,
  MR_Word EntryProc_8,
  MR_Word EntryProcContext_9,
  MR_Word ProcStmtInfos_10,
  MR_Word * SelectorVarDefns_11,
  MR_Word * Stmts_12)
{
  switch (LoopKind_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ProcWrappedStmtLists_19;
        MR_Word ProcWrappedStmts_20;
        MR_String EntryStartLabel_21;
        MR_Word GotoEntryStmt_22;
        MR_Word Var_25;

        mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[8], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[8], ProcStmtInfos_10, &ProcWrappedStmtLists_19);
        mercury__list__condense_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ProcWrappedStmtLists_19, &ProcWrappedStmts_20);
        EntryStartLabel_21 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, EntryProc_8);
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (EntryStartLabel_21));
        }
        {
          GotoEntryStmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GotoEntryStmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), GotoEntryStmt_22, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(3), GotoEntryStmt_22, 2) = ((MR_Box) (EntryProcContext_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GotoEntryStmt_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProcWrappedStmts_20));
        }
        *SelectorVarDefns_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorInfo_43_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word SelectorVarDefn_13;
        MR_Word SwitchCases_36;
        MR_Word PossibleSwitchValues_37;
        MR_Word SelectorType_39;
        MR_Integer EntryProcNum_40;
        MR_Word SetSelectorStmt_42;
        MR_Word PossibleSwitchValuesList_43;
        MR_Integer SwitchMin_44;
        MR_Integer SwitchMax_45;
        MR_Word SwitchRange_46;
        MR_Word SwitchStmt_48;
        MR_Word LoopStmt_49;
        MR_Word Var_51;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_62;
        MR_Box conv3_PossibleSwitchValues_37;
        MR_Box conv4_SwitchMin_44;
        MR_Box conv5_SwitchMax_45;

        Var_51 = mercury__set__init_0_f_0(TypeCtorInfo_43_68);
        mercury__list__map_foldl_5_p_0((MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[9], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[9], ProcStmtInfos_10, &SwitchCases_36, ((MR_Box) (Var_51)), &conv3_PossibleSwitchValues_37);
        PossibleSwitchValues_37 = ((MR_Word) conv3_PossibleSwitchValues_37);
        SelectorType_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        {
          SelectorVarDefn_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SelectorVarDefn_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[16])));
          MR_hl_field(MR_mktag(0), SelectorVarDefn_13, 1) = ((MR_Box) (EntryProcContext_9));
          MR_hl_field(MR_mktag(0), SelectorVarDefn_13, 2) = ((MR_Box) (SelectorType_39));
          MR_hl_field(MR_mktag(0), SelectorVarDefn_13, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), SelectorVarDefn_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        EntryProcNum_40 = (MR_Integer) EntryProc_8;
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (EntryProcNum_40));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[10])));
          MR_hl_field(MR_mktag(2), Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          SetSelectorStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SetSelectorStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), SetSelectorStmt_42, 1) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(3), SetSelectorStmt_42, 2) = ((MR_Box) (EntryProcContext_9));
        }
        mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_43_68, PossibleSwitchValues_37, &PossibleSwitchValuesList_43);
        conv4_SwitchMin_44 = mercury__list__det_head_1_f_0(TypeCtorInfo_43_68, PossibleSwitchValuesList_43);
        SwitchMin_44 = ((MR_Integer) conv4_SwitchMin_44);
        conv5_SwitchMax_45 = mercury__list__det_last_1_f_0(TypeCtorInfo_43_68, PossibleSwitchValuesList_43);
        SwitchMax_45 = ((MR_Integer) conv5_SwitchMax_45);
        {
          SwitchRange_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SwitchRange_46, 0) = ((MR_Box) (SwitchMin_44));
          MR_hl_field(MR_mktag(1), SwitchRange_46, 1) = ((MR_Box) (SwitchMax_45));
        }
        {
          SwitchStmt_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 1) = ((MR_Box) (SelectorType_39));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_proc_gen_scalar_common_7[2])));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 3) = ((MR_Box) (SwitchRange_46));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 4) = ((MR_Box) (SwitchCases_36));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), SwitchStmt_48, 6) = ((MR_Box) (EntryProcContext_9));
        }
        {
          LoopStmt_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LoopStmt_49, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), LoopStmt_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[15])));
          MR_hl_field(MR_mktag(1), LoopStmt_49, 2) = ((MR_Box) (SwitchStmt_48));
          MR_hl_field(MR_mktag(1), LoopStmt_49, 3) = ((MR_Box) (EntryProcContext_9));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (LoopStmt_49));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetSelectorStmt_42));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_62));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *SelectorVarDefns_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SelectorVarDefn_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1164__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1133__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Word STATE_VARIABLE_GlobalData_0_57,
  MR_Word * STATE_VARIABLE_GlobalData_58,
  MR_Word STATE_VARIABLE_TsccInfo_0_59,
  MR_Word * STATE_VARIABLE_TsccInfo_60)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 0)));
    MR_Word PredInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 1)));
    MR_Word ProcInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 2)));
    MR_Word ProcContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 3)));
    MR_Word ProcIdInTscc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 4)));
    MR_Word HeadVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 5)));
    MR_Word HeadTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 6)));
    MR_Word TopFunctorModes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 7)));
    MR_Word TailRecInfo0_33;
    MR_Word TailRecSpecs0_34;
    MR_Word PredStatus_35;
    MR_Integer ProcId_38;
    MR_String ProcDesc_39;
    MR_Integer ProcNumInTscc_40;
    MR_String ProcDescComment_41;
    MR_Word CommentStmt_42;
    MR_Word FuncParams_43;
    MR_Word ByRefOutputVars_44;
    MR_Word CopiedOutputVars_45;
    MR_Word CodeModel_46;
    MR_Word Goal_47;
    MR_Word LocalVarDefns0_48;
    MR_Word FuncDefns_49;
    MR_Word GoalStmts_50;
    MR_Word LocalVarDefns_51;
    MR_Word EnvVarNames_52;
    MR_Word ClosureWrapperFuncDefns_53;
    MR_Word TailRecInfo1_54;
    MR_Word TailRecSpecs_55;
    MR_Word TailRecInfo_56;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_Info_79_79;
    MR_Word STATE_VARIABLE_Info_80_80;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Word STATE_VARIABLE_Info_87_87;
    MR_Word STATE_VARIABLE_TsccInfo_89_89;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_String Var_127;
    MR_String Var_128;
    MR_String Var_135;
    MR_Word _TsscInLocalVarDefns_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 8)));
    MR_Word _TsccArgs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 9)));
    MR_Word _OwnLocalVarDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 10)));
    MR_Word _CopyTsccToOwnStmts_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_15, (MR_Integer) 11)));
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_69;
    MR_Word Var_36;
    MR_Word _PredId_37;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating in-TSCC MLDS code for ", PredProcId_19, ModuleInfo_11);
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_0_59, (MR_Integer) 0)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_0_59, (MR_Integer) 1)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_0_59, (MR_Integer) 2)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_0_59, (MR_Integer) 3)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_0_59, (MR_Integer) 4)));
    TailRecInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_0_59, (MR_Integer) 5)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_33, (MR_Integer) 0)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_33, (MR_Integer) 1)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_33, (MR_Integer) 2)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_33, (MR_Integer) 3)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_33, (MR_Integer) 4)));
    TailRecSpecs0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_33, (MR_Integer) 5)));
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (TailRecSpecs0_34));
      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc_proc_code\'/10", (MR_String) "TailRecSpecs0 != []");
    STATE_VARIABLE_Info_68_68 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_11, Target_12, ConstStructMap_13, PredProcId_19, ProcInfo_21, STATE_VARIABLE_GlobalData_0_57, STATE_VARIABLE_TsccInfo_0_59);
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
    Var_127 = mercury__string__f_43_43_2_f_0((MR_String) " in TSCC: ", ProcDesc_39);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_7[1], ProcNumInTscc_40, &Var_128);
    Var_135 = mercury__string__f_43_43_2_f_0(Var_128, Var_127);
    ProcDescComment_41 = mercury__string__f_43_43_2_f_0((MR_String) "proc ", Var_135);
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
    ml_backend__ml_args_util__ml_gen_info_proc_params_6_p_0(PredProcId_19, &FuncParams_43, &ByRefOutputVars_44, &CopiedOutputVars_45, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_79_79);
    ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVars_44, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_80_80);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (CopiedOutputVars_45));
      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_81, (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc_proc_code\'/10", (MR_String) "CopiedOutputVars != []");
    switch (TsccCodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CodeModel_46 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        CodeModel_46 = (MR_Integer) 1;
        break;
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_21, &Goal_47);
    ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0(CodeModel_46, (MR_Integer) 1, HeadVars_24, HeadTypes_25, TopFunctorModes_26, CopiedOutputVars_45, Goal_47, &LocalVarDefns0_48, &FuncDefns_49, &GoalStmts_50, STATE_VARIABLE_Info_80_80, &STATE_VARIABLE_Info_86_86);
    ml_backend__ml_proc_gen__ml_gen_post_process_locals_9_p_0(ProcInfo_21, ProcContext_22, HeadVars_24, HeadTypes_25, CopiedOutputVars_45, LocalVarDefns0_48, &LocalVarDefns_51, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_87_87);
    ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(STATE_VARIABLE_Info_87_87, &EnvVarNames_52, &ClosureWrapperFuncDefns_53, STATE_VARIABLE_GlobalData_58, &STATE_VARIABLE_TsccInfo_89_89);
    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_89_89, (MR_Integer) 0)));
    Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_89_89, (MR_Integer) 1)));
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_89_89, (MR_Integer) 2)));
    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_89_89, (MR_Integer) 3)));
    Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_89_89, (MR_Integer) 4)));
    TailRecInfo1_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TsccInfo_89_89, (MR_Integer) 5)));
    Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo1_54, (MR_Integer) 0)));
    Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo1_54, (MR_Integer) 1)));
    Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo1_54, (MR_Integer) 2)));
    Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo1_54, (MR_Integer) 3)));
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo1_54, (MR_Integer) 4)));
    TailRecSpecs_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo1_54, (MR_Integer) 5)));
    {
      TailRecInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TailRecInfo_56, 0) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), TailRecInfo_56, 1) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), TailRecInfo_56, 2) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), TailRecInfo_56, 3) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), TailRecInfo_56, 4) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), TailRecInfo_56, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TsccInfo_60 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TailRecInfo_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *PredProcCode_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredProcIdArgsInfo_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncParams_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LocalVarDefns_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FuncDefns_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CommentStmt_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GoalStmts_50));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ClosureWrapperFuncDefns_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (EnvVarNames_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TailRecSpecs_55));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__compute_initial_tail_rec_map_for_mutual__1076__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word PredProcId_13,
  MR_Word * PredProcIdArgsInfo_14,
  MR_Integer STATE_VARIABLE_ProcNum_0_41,
  MR_Integer * STATE_VARIABLE_ProcNum_42,
  MR_Word STATE_VARIABLE_MaybeNumOutputs_0_43,
  MR_Word * STATE_VARIABLE_MaybeNumOutputs_44,
  MR_Word STATE_VARIABLE_OutArgNames_0_45,
  MR_Word * STATE_VARIABLE_OutArgNames_46,
  MR_Word STATE_VARIABLE_TailRecMap0_0_47,
  MR_Word * STATE_VARIABLE_TailRecMap0_48)
{
  {
    MR_bool succeeded;
    MR_Word IdInTscc_20 = (MR_Word) STATE_VARIABLE_ProcNum_0_41;
    MR_Word PredInfo_21;
    MR_Word ProcInfo_22;
    MR_Word HeadVars_23;
    MR_Word HeadTypes_24;
    MR_Word HeadModes_25;
    MR_Word TopFunctorModes_26;
    MR_Word VarSet_27;
    MR_Word HeadVarNames_28;
    MR_Word Goal_29;
    MR_Word GoalInfo_31;
    MR_Word ProcContext_32;
    MR_Integer NumOutputs_33;
    MR_Word TsccInArgs_34;
    MR_Word TsccInLocalVarDefns_35;
    MR_Word TsccArgs_36;
    MR_Word OwnLocalVarDefns_37;
    MR_Word CopyTsccToOwnStmts_38;
    MR_Word TailRecTargetInfo0_40;
    MR_Word _GoalExpr_30;

    *STATE_VARIABLE_ProcNum_42 = (STATE_VARIABLE_ProcNum_0_41 + (MR_Integer) 1);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_12, PredProcId_13, &PredInfo_21, &ProcInfo_22);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_22, &HeadVars_23);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &HeadTypes_24);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &HeadModes_25);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_12, HeadModes_25, HeadTypes_24, &TopFunctorModes_26);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_22, &VarSet_27);
    HeadVarNames_28 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_27, HeadVars_23);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_22, &Goal_29);
    _GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 0)));
    GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 1)));
    ProcContext_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_31);
    ml_backend__ml_args_util__ml_gen_tscc_arg_decls_17_p_0(ModuleInfo_12, HeadVarNames_28, HeadTypes_24, TopFunctorModes_26, VarSet_27, ProcContext_32, IdInTscc_20, (MR_Integer) 1, (MR_Integer) 1, &NumOutputs_33, STATE_VARIABLE_OutArgNames_0_45, STATE_VARIABLE_OutArgNames_46, &TsccInArgs_34, &TsccInLocalVarDefns_35, &TsccArgs_36, &OwnLocalVarDefns_37, &CopyTsccToOwnStmts_38);
    if ((STATE_VARIABLE_MaybeNumOutputs_0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeNumOutputs_44 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NumOutputs_33));
      }
    else
    {
      MR_Integer OldNumOutputs_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeNumOutputs_0_43, (MR_Integer) 0)));
      MR_Word Var_54;

      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (NumOutputs_33));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (OldNumOutputs_39));
      }
      mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.ml_proc_gen.compute_initial_tail_rec_map_for_mutual\'/11", (MR_String) "different procedures in TSCC have different number of outputs");
      *STATE_VARIABLE_MaybeNumOutputs_44 = STATE_VARIABLE_MaybeNumOutputs_0_43;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *PredProcIdArgsInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredProcId_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredInfo_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcInfo_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ProcContext_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IdInTscc_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (HeadVars_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (HeadTypes_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TopFunctorModes_26));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TsccInLocalVarDefns_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TsccArgs_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (OwnLocalVarDefns_37));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (CopyTsccToOwnStmts_38));
    }
    {
      TailRecTargetInfo0_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TailRecTargetInfo0_40, 0) = ((MR_Box) (IdInTscc_20));
      MR_hl_field(MR_mktag(0), TailRecTargetInfo0_40, 1) = ((MR_Box) (TsccInArgs_34));
      MR_hl_field(MR_mktag(0), TailRecTargetInfo0_40, 2) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_13)), ((MR_Box) (TailRecTargetInfo0_40)), STATE_VARIABLE_TailRecMap0_0_47, STATE_VARIABLE_TailRecMap0_48);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(
  MR_Word PredProcId_7,
  MR_Word TargetInfo_8,
  MR_Word STATE_VARIABLE_NonTailEntryPredProcIds_0_13,
  MR_Word * STATE_VARIABLE_NonTailEntryPredProcIds_14,
  MR_Word STATE_VARIABLE_NoMutualTailRecPredProcIds_0_15,
  MR_Word * STATE_VARIABLE_NoMutualTailRecPredProcIds_16)
{
  {
    MR_Word HaveDoneNonTailRec_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo_8, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word HaveDoneMutualTailRec_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo_8, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo_8, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo_8, (MR_Integer) 2)))) & (MR_Integer) 1);

    switch (HaveDoneNonTailRec_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_7)), STATE_VARIABLE_NonTailEntryPredProcIds_0_13, STATE_VARIABLE_NonTailEntryPredProcIds_14);
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_NonTailEntryPredProcIds_14 = STATE_VARIABLE_NonTailEntryPredProcIds_0_13;
        break;
    }
    switch (HaveDoneMutualTailRec_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_NoMutualTailRecPredProcIds_16 = STATE_VARIABLE_NoMutualTailRecPredProcIds_0_15;
        break;
      case (MR_Integer) 0:
        {
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_7)), STATE_VARIABLE_NoMutualTailRecPredProcIds_0_15, STATE_VARIABLE_NoMutualTailRecPredProcIds_16);
        }
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
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0(ModuleInfo_13, Target_14, ConstStructMap_15, TsccCodeModel_17, TSCCE_18, STATE_VARIABLE_FuncDefns_0_43, STATE_VARIABLE_FuncDefns_44, STATE_VARIABLE_GlobalData_0_45, STATE_VARIABLE_GlobalData_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
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
    MR_Word conv1_STATE_VARIABLE_Specs_32;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_FuncDefns_28, ((MR_Word) wrapper_arg_4), &conv2_STATE_VARIABLE_GlobalData_30, ((MR_Word) wrapper_arg_6), &conv1_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_FuncDefns_28));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_GlobalData_30));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_32));
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
    MR_Word conv0_FuncDefn_16;

    ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) wrapper_arg_1), &conv0_FuncDefn_16);
    *wrapper_arg_2 = ((MR_Box) (conv0_FuncDefn_16));
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
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
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
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredProcIdList_25, (MR_Integer) 1)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredProcIdList_25, (MR_Integer) 0)));

      if ((Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(ModuleInfo_13, Target_14, ConstStructMap_15, (MR_Integer) 1, Var_85, STATE_VARIABLE_FuncDefns_0_43, STATE_VARIABLE_FuncDefns_44, STATE_VARIABLE_GlobalData_0_45, STATE_VARIABLE_GlobalData_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
      }
      else
      {
        MR_Word NoMutualPredProcIds_31;
        MR_Word MutualPredProcIds_32;
        MR_Word MutualPredProcCodes_33;
        MR_Word MutualContainsNestedFuncs_34;
        MR_Word MutualEnvVarNames_35;
        MR_Word MutualClosureWrapperFuncDefns_36;
        MR_Word MutualTailRecSpecs_37;
        MR_Word LoopKind_38;
        MR_Word TrialGlobalData_39;
        MR_Word OutsideTsccPredProcIds_40;
        MR_Word STATE_VARIABLE_Specs_50_50;
        MR_Word STATE_VARIABLE_GlobalData_51_51;
        MR_Word STATE_VARIABLE_FuncDefns_54_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word _NonTailEntryPredProcIds_30;
        MR_Box conv6_STATE_VARIABLE_FuncDefns_44;
        MR_Box conv5_STATE_VARIABLE_GlobalData_46;
        MR_Box conv4_STATE_VARIABLE_Specs_48;

        ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0(ModuleInfo_13, Target_14, ConstStructMap_15, TsccCodeModel_17, PredProcIds_22, &_NonTailEntryPredProcIds_30, &NoMutualPredProcIds_31, &MutualPredProcIds_32, &MutualPredProcCodes_33, &MutualContainsNestedFuncs_34, &MutualEnvVarNames_35, &MutualClosureWrapperFuncDefns_36, &MutualTailRecSpecs_37, &LoopKind_38, STATE_VARIABLE_GlobalData_0_45, &TrialGlobalData_39);
        switch (MutualContainsNestedFuncs_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              OutsideTsccPredProcIds_40 = PredProcIds_22;
              STATE_VARIABLE_FuncDefns_54_54 = STATE_VARIABLE_FuncDefns_0_43;
              STATE_VARIABLE_GlobalData_51_51 = STATE_VARIABLE_GlobalData_0_45;
              STATE_VARIABLE_Specs_50_50 = STATE_VARIABLE_Specs_0_47;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_73_73;
              MR_Word TSCCFuncDefns_42;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_55;

              OutsideTsccPredProcIds_40 = NoMutualPredProcIds_31;
              STATE_VARIABLE_Specs_50_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, MutualTailRecSpecs_37, STATE_VARIABLE_Specs_0_47);
              STATE_VARIABLE_GlobalData_51_51 = TrialGlobalData_39;
              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[1]));
                MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_1));
                MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_13));
                MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (LoopKind_38));
                MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (TsccCodeModel_17));
                MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (MutualPredProcCodes_33));
                MR_hl_field(MR_mktag(0), Var_52, 7) = ((MR_Box) (MutualEnvVarNames_35));
                MR_hl_field(MR_mktag(0), Var_52, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              Var_53 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_69_69, MutualPredProcIds_32);
              TypeCtorInfo_73_73 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
              mercury__list__map_3_p_0(TypeCtorInfo_69_69, TypeCtorInfo_73_73, Var_52, Var_53, &TSCCFuncDefns_42);
              Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_73_73, TSCCFuncDefns_42, STATE_VARIABLE_FuncDefns_0_43);
              STATE_VARIABLE_FuncDefns_54_54 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_73_73, MutualClosureWrapperFuncDefns_36, Var_55);
            }
            break;
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_52_93_95_48_12_p_0_2));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Target_14));
          MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (ConstStructMap_15));
          MR_hl_field(MR_mktag(0), Var_56, 6) = ((MR_Box) ((MR_Integer) 1));
        }
        Var_57 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_69_69, OutsideTsccPredProcIds_40);
        mercury__list__foldl3_8_p_0(TypeCtorInfo_69_69, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], Var_56, Var_57, ((MR_Box) (STATE_VARIABLE_FuncDefns_54_54)), &conv6_STATE_VARIABLE_FuncDefns_44, ((MR_Box) (STATE_VARIABLE_GlobalData_51_51)), &conv5_STATE_VARIABLE_GlobalData_46, ((MR_Box) (STATE_VARIABLE_Specs_50_50)), &conv4_STATE_VARIABLE_Specs_48);
        *STATE_VARIABLE_FuncDefns_44 = ((MR_Word) conv6_STATE_VARIABLE_FuncDefns_44);
        *STATE_VARIABLE_GlobalData_46 = ((MR_Word) conv5_STATE_VARIABLE_GlobalData_46);
        *STATE_VARIABLE_Specs_48 = ((MR_Word) conv4_STATE_VARIABLE_Specs_48);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_3(
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
    MR_Word conv15_STATE_VARIABLE_NonTailEntryPredProcIds_14;
    MR_Word conv14_STATE_VARIABLE_NoMutualTailRecPredProcIds_16;

    ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv15_STATE_VARIABLE_NonTailEntryPredProcIds_14, ((MR_Word) wrapper_arg_5), &conv14_STATE_VARIABLE_NoMutualTailRecPredProcIds_16);
    *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_NonTailEntryPredProcIds_14));
    *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_NoMutualTailRecPredProcIds_16));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_2(
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
    MR_Word conv11_PredProcCode_16;
    MR_Word conv10_STATE_VARIABLE_GlobalData_58;
    MR_Word conv9_STATE_VARIABLE_TsccInfo_60;

    ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), &conv11_PredProcCode_16, ((MR_Word) wrapper_arg_3), &conv10_STATE_VARIABLE_GlobalData_58, ((MR_Word) wrapper_arg_5), &conv9_STATE_VARIABLE_TsccInfo_60);
    *wrapper_arg_2 = ((MR_Box) (conv11_PredProcCode_16));
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_GlobalData_58));
    *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_TsccInfo_60));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_1(
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
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_PredProcIdArgsInfo_14;
    MR_Integer conv3_STATE_VARIABLE_ProcNum_42;
    MR_Word conv2_STATE_VARIABLE_MaybeNumOutputs_44;
    MR_Word conv1_STATE_VARIABLE_OutArgNames_46;
    MR_Word conv0_STATE_VARIABLE_TailRecMap0_48;

    ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv4_PredProcIdArgsInfo_14, ((MR_Integer) wrapper_arg_3), &conv3_STATE_VARIABLE_ProcNum_42, ((MR_Word) wrapper_arg_5), &conv2_STATE_VARIABLE_MaybeNumOutputs_44, ((MR_Word) wrapper_arg_7), &conv1_STATE_VARIABLE_OutArgNames_46, ((MR_Word) wrapper_arg_9), &conv0_STATE_VARIABLE_TailRecMap0_48);
    *wrapper_arg_2 = ((MR_Box) (conv4_PredProcIdArgsInfo_14));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ProcNum_42));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_MaybeNumOutputs_44));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_OutArgNames_46));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_TailRecMap0_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Target_18,
  MR_Word ConstStructMap_19,
  MR_Word TsccCodeModel_20,
  MR_Word PredProcIds_21,
  MR_Word * NonTailEntryPredProcIds_22,
  MR_Word * NoMutualPredProcIds_23,
  MR_Word * MutualPredProcIds_24,
  MR_Word * MutualPredProcCodes_25,
  MR_Word * MutualContainsNestedFuncs_26,
  MR_Word * MutualEnvVarNames_27,
  MR_Word * MutualClosureWrapperFuncDefns_28,
  MR_Word * MutualTailRecSpecs_29,
  MR_Word * LoopKind_30,
  MR_Word STATE_VARIABLE_GlobalData_0_43,
  MR_Word * STATE_VARIABLE_GlobalData_44)
{
  {
    MR_Word TypeCtorInfo_82_82;
    MR_Word TypeCtorInfo_83_83;
    MR_Word TypeCtorInfo_85_85;
    MR_Word TypeCtorInfo_86_86;
    MR_Word TypeInfo_105_105;
    MR_Word PredProcIdArgsInfos_32;
    MR_Word TailRecMap0_36;
    MR_Word TsccInfo0_37;
    MR_Word PredProcCodes_38;
    MR_Word TsccInfo_39;
    MR_Word TailRecInfo_40;
    MR_Word TargetMap_41;
    MR_Word NoMutualPredProcIds0_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_33;
    MR_Word _MaybeNumOutputs_34;
    MR_Word _OutArgNames_35;
    MR_Box conv8_Var_33;
    MR_Box conv7__MaybeNumOutputs_34;
    MR_Box conv6__OutArgNames_35;
    MR_Box conv5_TailRecMap0_36;
    MR_Box conv13_STATE_VARIABLE_GlobalData_44;
    MR_Box conv12_TsccInfo_39;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Box conv17_NonTailEntryPredProcIds_22;
    MR_Box conv16_NoMutualPredProcIds0_42;

    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_1));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleInfo_17));
    }
    TypeCtorInfo_82_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    Var_46 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_82_82, PredProcIds_21);
    TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_49 = mercury__map__init_0_f_0(TypeCtorInfo_83_83, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    TypeCtorInfo_85_85 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0;
    Var_50 = mercury__map__init_0_f_0(TypeCtorInfo_82_82, TypeCtorInfo_85_85);
    TypeCtorInfo_86_86 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0;
    mercury__list__map_foldl4_11_p_1(TypeCtorInfo_82_82, TypeCtorInfo_86_86, TypeCtorInfo_83_83, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], Var_45, Var_46, &PredProcIdArgsInfos_32, ((MR_Box) ((MR_Integer) 1)), &conv8_Var_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv7__MaybeNumOutputs_34, ((MR_Box) (Var_49)), &conv6__OutArgNames_35, ((MR_Box) (Var_50)), &conv5_TailRecMap0_36);
    Var_33 = ((MR_Integer) conv8_Var_33);
    _MaybeNumOutputs_34 = ((MR_Word) conv7__MaybeNumOutputs_34);
    _OutArgNames_35 = ((MR_Word) conv6__OutArgNames_35);
    TailRecMap0_36 = ((MR_Word) conv5_TailRecMap0_36);
    TsccInfo0_37 = ml_backend__ml_gen_info__init_ml_gen_tscc_info_3_f_0(ModuleInfo_17, TailRecMap0_36, (MR_Integer) 1);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_16_p_0_2));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_17));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Target_18));
      MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (ConstStructMap_19));
      MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (TsccCodeModel_20));
    }
    mercury__list__map_foldl2_7_p_0(TypeCtorInfo_86_86, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0, Var_52, PredProcIdArgsInfos_32, &PredProcCodes_38, ((MR_Box) (STATE_VARIABLE_GlobalData_0_43)), &conv13_STATE_VARIABLE_GlobalData_44, ((MR_Box) (TsccInfo0_37)), &conv12_TsccInfo_39);
    *STATE_VARIABLE_GlobalData_44 = ((MR_Word) conv13_STATE_VARIABLE_GlobalData_44);
    TsccInfo_39 = ((MR_Word) conv12_TsccInfo_39);
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_39, (MR_Integer) 0)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_39, (MR_Integer) 1)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_39, (MR_Integer) 2)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_39, (MR_Integer) 3)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_39, (MR_Integer) 4)));
    TailRecInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_39, (MR_Integer) 5)));
    TargetMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_40, (MR_Integer) 0)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_40, (MR_Integer) 1)));
    *LoopKind_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_40, (MR_Integer) 2)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_40, (MR_Integer) 3)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_40, (MR_Integer) 4)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_40, (MR_Integer) 5)));
    Var_55 = mercury__set__init_0_f_0(TypeCtorInfo_82_82);
    Var_56 = mercury__set__init_0_f_0(TypeCtorInfo_82_82);
    TypeInfo_105_105 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3];
    mercury__map__foldl2_6_p_0(TypeCtorInfo_82_82, TypeCtorInfo_85_85, TypeInfo_105_105, TypeInfo_105_105, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[7], TargetMap_41, ((MR_Box) (Var_55)), &conv17_NonTailEntryPredProcIds_22, ((MR_Box) (Var_56)), &conv16_NoMutualPredProcIds0_42);
    *NonTailEntryPredProcIds_22 = ((MR_Word) conv17_NonTailEntryPredProcIds_22);
    NoMutualPredProcIds0_42 = ((MR_Word) conv16_NoMutualPredProcIds0_42);
    ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0(NoMutualPredProcIds0_42, PredProcCodes_38, NoMutualPredProcIds_23, MutualPredProcIds_24, MutualPredProcCodes_25, MutualContainsNestedFuncs_26, MutualClosureWrapperFuncDefns_28, MutualEnvVarNames_27, MutualTailRecSpecs_29);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ContainsNestedFuncs_39;

    ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ContainsNestedFuncs_39);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContainsNestedFuncs_39));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

      *HeadVar__3_3 = mercury__set__init_0_f_0(TypeCtorInfo_69_69);
      *HeadVar__4_4 = mercury__set__init_0_f_0(TypeCtorInfo_69_69);
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Integer) 0;
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__8_8 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
      *HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word PredProcCode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word PredProcCodes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word PredProcIdArgsInfo_21;
      MR_Word FuncDefns_24;
      MR_Word DescCommentStmt_25;
      MR_Word GoalStmts_26;
      MR_Word ProcClosureWrapperFuncDefns_27;
      MR_Word ProcEnvVarNames_28;
      MR_Word ProcTailRecSpecs_29;
      MR_Word PredProcId_30;
      MR_Word STATE_VARIABLE_NoMutualPredProcIds_41_41;
      MR_Word STATE_VARIABLE_MutualPredProcIds_42_42;
      MR_Word STATE_VARIABLE_MutualPredProcCodes_43_43;
      MR_Word STATE_VARIABLE_MutualContainsNestedFuncs_44_44;
      MR_Word STATE_VARIABLE_MutualClosureWrapperFuncDefns_45_45;
      MR_Word STATE_VARIABLE_MutualEnvVarNames_46_46;
      MR_Word STATE_VARIABLE_MutualTailRecSpecs_47_47;
      MR_Word _FuncParams_22;
      MR_Word _LocalVarDefns_23;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;

      ml_backend__ml_proc_gen__separate_mutually_recursive_procs_9_p_0(HeadVar__1_1, PredProcCodes_13, &STATE_VARIABLE_NoMutualPredProcIds_41_41, &STATE_VARIABLE_MutualPredProcIds_42_42, &STATE_VARIABLE_MutualPredProcCodes_43_43, &STATE_VARIABLE_MutualContainsNestedFuncs_44_44, &STATE_VARIABLE_MutualClosureWrapperFuncDefns_45_45, &STATE_VARIABLE_MutualEnvVarNames_46_46, &STATE_VARIABLE_MutualTailRecSpecs_47_47);
      PredProcIdArgsInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 0)));
      _FuncParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 1)));
      _LocalVarDefns_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 2)));
      FuncDefns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 3)));
      DescCommentStmt_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 4)));
      GoalStmts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 5)));
      ProcClosureWrapperFuncDefns_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 6)));
      ProcEnvVarNames_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 7)));
      ProcTailRecSpecs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcCode_12, (MR_Integer) 8)));
      PredProcId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 0)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 1)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 2)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 3)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 4)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 5)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 6)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 7)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 8)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 9)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 10)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdArgsInfo_21, (MR_Integer) 11)));
      succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_30)), HeadVar__1_1);
      if (succeeded)
      {
        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_30)), STATE_VARIABLE_NoMutualPredProcIds_41_41, HeadVar__3_3);
        *HeadVar__9_9 = STATE_VARIABLE_MutualTailRecSpecs_47_47;
        *HeadVar__8_8 = STATE_VARIABLE_MutualEnvVarNames_46_46;
        *HeadVar__7_7 = STATE_VARIABLE_MutualClosureWrapperFuncDefns_45_45;
        *HeadVar__6_6 = STATE_VARIABLE_MutualContainsNestedFuncs_44_44;
        *HeadVar__5_5 = STATE_VARIABLE_MutualPredProcCodes_43_43;
        *HeadVar__4_4 = STATE_VARIABLE_MutualPredProcIds_42_42;
      }
      else
      {
        {
          MR_Word Var_31;
          MR_Word Var_32;

          succeeded = ((MR_tag((MR_Word) FuncDefns_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), FuncDefns_24, (MR_Integer) 0)));
            Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), FuncDefns_24, (MR_Integer) 1)));
          }
        }
        if (!(succeeded))
        {
          MR_Word ContainsNestedFuncs_33;
          MR_Word Var_50;
          MR_Box conv1_ContainsNestedFuncs_33;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (DescCommentStmt_25));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (GoalStmts_26));
          }
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[6], Var_50, ((MR_Box) ((MR_Integer) 0)), &conv1_ContainsNestedFuncs_33);
          ContainsNestedFuncs_33 = ((MR_Word) conv1_ContainsNestedFuncs_33);
          succeeded = (ContainsNestedFuncs_33 == (MR_Integer) 1);
        }
        if (succeeded)
          *HeadVar__6_6 = (MR_Integer) 1;
        else
          *HeadVar__6_6 = STATE_VARIABLE_MutualContainsNestedFuncs_44_44;
        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_30)), STATE_VARIABLE_MutualPredProcIds_42_42, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcCode_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualPredProcCodes_43_43));
        }
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ProcClosureWrapperFuncDefns_27, STATE_VARIABLE_MutualClosureWrapperFuncDefns_45_45);
        mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ProcEnvVarNames_28, STATE_VARIABLE_MutualEnvVarNames_46_46, HeadVar__8_8);
        *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ProcTailRecSpecs_29, STATE_VARIABLE_MutualTailRecSpecs_47_47);
        *HeadVar__3_3 = STATE_VARIABLE_NoMutualPredProcIds_41_41;
      }
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
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
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
    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(ModuleInfo_12, Target_13, ConstStructMap_14, NoneOrSelf_15, PredProcIdInfo_26, STATE_VARIABLE_FuncDefns_0_27, STATE_VARIABLE_FuncDefns_28, STATE_VARIABLE_GlobalData_0_29, STATE_VARIABLE_GlobalData_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Target_13,
  MR_Word ConstStructMap_14,
  MR_Word NoneOrSelf_15,
  MR_Word PredProcIdInfo_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_54,
  MR_Word * STATE_VARIABLE_FuncDefns_55,
  MR_Word STATE_VARIABLE_GlobalData_0_56,
  MR_Word * STATE_VARIABLE_GlobalData_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 0)));
    MR_Word PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 1)));
    MR_Word ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 2)));
    MR_Word ProcContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_16, (MR_Integer) 3)));
    MR_Word TailRecMap0_26;
    MR_Word TsccInfo0_27;
    MR_Word PredStatus_28;
    MR_Word FuncParams_30;
    MR_Word FuncBody_34;
    MR_Word EnvVarNames_35;
    MR_Word ClosureWrapperFuncDefns_36;
    MR_Word FuncDefn_53;
    MR_Word STATE_VARIABLE_Info_64_64;
    MR_Word Var_74;
    MR_Word Var_65;
    MR_Word Var_29;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", PredProcId_20, ModuleInfo_12);
    ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_4_p_0(ModuleInfo_12, NoneOrSelf_15, PredProcId_20, &TailRecMap0_26);
    TsccInfo0_27 = ml_backend__ml_gen_info__init_ml_gen_tscc_info_3_f_0(ModuleInfo_12, TailRecMap0_26, (MR_Integer) 0);
    STATE_VARIABLE_Info_64_64 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_12, Target_13, ConstStructMap_14, PredProcId_20, ProcInfo_22, STATE_VARIABLE_GlobalData_0_56, TsccInfo0_27);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_21, &PredStatus_28);
    Var_65 = (MR_Word) PredStatus_28;
    succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 0)));
      {
        MR_Word _ByRefOutputVars_31;
        MR_Word _CopiedOutputVars_32;
        MR_Word _Info_33;

        ml_backend__ml_args_util__ml_gen_info_proc_params_6_p_0(PredProcId_20, &FuncParams_30, &_ByRefOutputVars_31, &_CopiedOutputVars_32, STATE_VARIABLE_Info_64_64, &_Info_33);
        FuncBody_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &EnvVarNames_35);
        ClosureWrapperFuncDefns_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_0_58;
        *STATE_VARIABLE_GlobalData_57 = STATE_VARIABLE_GlobalData_0_56;
      }
    }
    else
    {
      MR_Word FuncDefns_17;
      MR_Word CodeModel_37;
      MR_Word ByRefOutputVars_38;
      MR_Word CopiedOutputVars_39;
      MR_Word HeadVars_43;
      MR_Word HeadModes_44;
      MR_Word HeadTypes_45;
      MR_Word TopFunctorModes_46;
      MR_Word Goal_47;
      MR_Word LocalVarDefns0_48;
      MR_Word GoalStmts_49;
      MR_Word LocalVarDefns_50;
      MR_Word TsccInfo_51;
      MR_Word TailRecInfo_52;
      MR_Word STATE_VARIABLE_Info_66_66;
      MR_Word STATE_VARIABLE_Info_67_67;
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word STATE_VARIABLE_Info_70_77;
      MR_Word _Info_75;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;

      CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_22);
      ml_backend__ml_args_util__ml_gen_info_proc_params_6_p_0(PredProcId_20, &FuncParams_30, &ByRefOutputVars_38, &CopiedOutputVars_39, STATE_VARIABLE_Info_64_64, &_Info_75);
      ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVars_38, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_66_66);
      switch (CodeModel_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_67_67 = STATE_VARIABLE_Info_66_66;
          break;
        case (MR_Integer) 2:
          {
            MR_Word OutputVarLvals_40;
            MR_Word OutputVarTypes_41;
            MR_Word InitialCont_42;

            ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_66_66, CopiedOutputVars_39, &OutputVarLvals_40);
            ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_66_66, CopiedOutputVars_39, &OutputVarTypes_41);
            ml_backend__ml_code_util__ml_initial_cont_4_p_0(STATE_VARIABLE_Info_66_66, OutputVarLvals_40, OutputVarTypes_41, &InitialCont_42);
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(InitialCont_42, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_67_67);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_67_67 = STATE_VARIABLE_Info_66_66;
          break;
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_22, &HeadVars_43);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &HeadModes_44);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &HeadTypes_45);
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_12, HeadModes_44, HeadTypes_45, &TopFunctorModes_46);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_22, &Goal_47);
      ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0(CodeModel_37, (MR_Integer) 0, HeadVars_43, HeadTypes_45, TopFunctorModes_46, CopiedOutputVars_39, Goal_47, &LocalVarDefns0_48, &FuncDefns_17, &GoalStmts_49, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
      ml_backend__ml_proc_gen__ml_gen_post_process_locals_9_p_0(ProcInfo_22, ProcContext_23, HeadVars_43, HeadTypes_45, CopiedOutputVars_39, LocalVarDefns0_48, &LocalVarDefns_50, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_70_77);
      ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(STATE_VARIABLE_Info_70_77, &EnvVarNames_35, &ClosureWrapperFuncDefns_36, STATE_VARIABLE_GlobalData_57, &TsccInfo_51);
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_51, (MR_Integer) 0)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_51, (MR_Integer) 1)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_51, (MR_Integer) 2)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_51, (MR_Integer) 3)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_51, (MR_Integer) 4)));
      TailRecInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_51, (MR_Integer) 5)));
      ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0(PredProcId_20, ProcContext_23, LocalVarDefns_50, FuncDefns_17, GoalStmts_49, TailRecInfo_52, &FuncBody_34, STATE_VARIABLE_Specs_0_58, STATE_VARIABLE_Specs_59);
    }
    ml_backend__ml_proc_gen__construct_func_defn_6_p_0(ModuleInfo_12, PredProcIdInfo_16, FuncParams_30, FuncBody_34, EnvVarNames_35, &FuncDefn_53);
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (FuncDefn_53));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (STATE_VARIABLE_FuncDefns_0_54));
    }
    *STATE_VARIABLE_FuncDefns_55 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ClosureWrapperFuncDefns_36, Var_74);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_post_process_locals_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word Context_11,
  MR_Word HeadVars_12,
  MR_Word HeadTypes_13,
  MR_Word CopiedOutputVars_14,
  MR_Word LocalVarDefns0_15,
  MR_Word * LocalVarDefns_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_Word OutputVarLocalDefns_18;
    MR_Word UsedSucceededVar_24;
    MR_Word ProcLocalVarDefns_25;

    if ((CopiedOutputVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      OutputVarLocalDefns_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    }
    else
    {
      MR_Word VarSet_21;
      MR_Word VarTypes_22;
      MR_Word UpdatedVarTypes_23;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_21);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_22);
      hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(HeadVars_12, HeadTypes_13, VarTypes_22, &UpdatedVarTypes_23);
      ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(VarSet_21, UpdatedVarTypes_23, Context_11, CopiedOutputVars_14, &OutputVarLocalDefns_18, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
    }
    ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(*STATE_VARIABLE_Info_27, &UsedSucceededVar_24);
    switch (UsedSucceededVar_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProcLocalVarDefns_25 = OutputVarLocalDefns_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_29;

          Var_29 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(Context_11);
          {
            ProcLocalVarDefns_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ProcLocalVarDefns_25, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), ProcLocalVarDefns_25, 1) = ((MR_Box) (OutputVarLocalDefns_18));
          }
        }
        break;
    }
    *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ProcLocalVarDefns_25, LocalVarDefns0_15);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__1_46;
    MR_Word conv6_LambdaHeadVar__2_47;
    MR_Word conv5_LambdaHeadVar__3_48;
    MR_Word conv4_LambdaHeadVar__5_50;

    ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1505__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_46, &conv6_LambdaHeadVar__2_47, &conv5_LambdaHeadVar__3_48, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_50);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_46));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_47));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_48));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_50));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0_1(
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
ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0(
  MR_Word CodeModel_13,
  MR_Word SoloOrTscc_14,
  MR_Word HeadVars_15,
  MR_Word ArgTypes_16,
  MR_Word TopFunctorModes_17,
  MR_Word CopiedOutputVars_18,
  MR_Word Goal_19,
  MR_Word * LocalVarDefns_20,
  MR_Word * FuncDefns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_19, (MR_Integer) 1)));
    MR_Word Context_26;
    MR_Word CopiedOutputVarOriginalLvals_27;
    MR_Word ConvLocalVarDefns_28;
    MR_Word ConvInputStmts_29;
    MR_Word ConvOutputStmts_30;
    MR_Word Stmts1_31;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_19, (MR_Integer) 0)));

    Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_25);
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_0_42, CopiedOutputVars_18, &CopiedOutputVarOriginalLvals_27);
    ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(HeadVars_15, ArgTypes_16, TopFunctorModes_17, CopiedOutputVars_18, Context_26, &ConvLocalVarDefns_28, &ConvInputStmts_29, &ConvOutputStmts_30, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_44_44);
    succeeded = (ConvLocalVarDefns_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (ConvInputStmts_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (ConvOutputStmts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_13, Goal_19, LocalVarDefns_20, FuncDefns_21, &Stmts1_31, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
    else
    {
      MR_Word DoGenGoal_32;
      MR_Word DoConvOutputs_33;
      MR_Word LocalVarDefns0_39;
      MR_Word Stmts0_41;

      {
        DoGenGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenGoal_32, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), DoGenGoal_32, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenGoal_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), DoGenGoal_32, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), DoGenGoal_32, 4) = ((MR_Box) (Goal_19));
      }
      {
        DoConvOutputs_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoConvOutputs_33, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), DoConvOutputs_33, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_12_p_0_2));
        MR_hl_field(MR_mktag(0), DoConvOutputs_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoConvOutputs_33, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), DoConvOutputs_33, 4) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(0), DoConvOutputs_33, 5) = ((MR_Box) (ConvOutputStmts_30));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_26, DoGenGoal_32, DoConvOutputs_33, &LocalVarDefns0_39, FuncDefns_21, &Stmts0_41, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
      Stmts1_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvInputStmts_29, Stmts0_41);
      *LocalVarDefns_20 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvLocalVarDefns_28, LocalVarDefns0_39);
    }
    ml_backend__ml_args_util__ml_append_return_statement_8_p_0(CodeModel_13, SoloOrTscc_14, CopiedOutputVarOriginalLvals_27, Context_26, Stmts1_31, Stmts_22, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_43);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(
  MR_Word Vars_11,
  MR_Word HeadTypes_12,
  MR_Word TopFunctorModes_13,
  MR_Word CopiedOutputVars_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * InputStmts_17,
  MR_Word * OutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Vars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    // setup for tailcalls optimized into a loop
    if (succeeded)
    {
      succeeded = (HeadTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (TopFunctorModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *InputStmts_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *OutputStmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
    }
    else
    {
      MR_Word Var_20;
      MR_Word VarsTail_21;
      MR_Word HeadType_22;
      MR_Word HeadTypesTail_23;
      MR_Word TopFunctorMode_24;
      MR_Word TopFunctorModesTail_25;

      succeeded = ((MR_tag((MR_Word) Vars_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_11, (MR_Integer) 0)));
        VarsTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_11, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadTypes_12)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTypes_12, (MR_Integer) 0)));
          HeadTypesTail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTypes_12, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) TopFunctorModes_13)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            TopFunctorMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TopFunctorModes_13, (MR_Integer) 0)));
            TopFunctorModesTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TopFunctorModes_13, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word BodyType_26;

        ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_40, Var_20, &BodyType_26);
        {
          MR_Word TypeInfo_52_52 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[10];
          MR_Word TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          MR_Word Subst0_27;
          MR_Word Subst_28;

          mercury__map__init_1_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, &Subst0_27);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(HeadType_22, BodyType_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Subst0_27, &Subst_28);
          if (succeeded)
            succeeded = mercury__map__is_empty_1_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, Subst_28);
        }
        if (!(succeeded))
          succeeded = (TopFunctorMode_24 == (MR_Integer) 2);
        if (succeeded)
        {
          MR_Word next_value_of_Vars_11 = VarsTail_21;
          MR_Word next_value_of_HeadTypes_12 = HeadTypesTail_23;
          MR_Word next_value_of_TopFunctorModes_13 = TopFunctorModesTail_25;

          // direct tailcall eliminated
          Vars_11 = next_value_of_Vars_11;
          HeadTypes_12 = next_value_of_HeadTypes_12;
          TopFunctorModes_13 = next_value_of_TopFunctorModes_13;
          continue;
        }
        else
        {
          MR_Word HeadVarLval_29;
          MR_Word VarSet_30;
          MR_Word VarName_31;
          MR_Word BodyLval_32;
          MR_Word ConvLocalVarDefns_33;
          MR_Word ConvInputStmts_34;
          MR_Word ConvOutputStmts_35;
          MR_Word LocalVarDefnsTail_36;
          MR_Word InputStmtsTail_37;
          MR_Word OutputStmtsTail_38;
          MR_Word ByRefOutputVars_39;
          MR_Word STATE_VARIABLE_Info_47_47;
          MR_Word STATE_VARIABLE_Info_48_48;

          ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(STATE_VARIABLE_Info_0_40, Var_20, HeadType_22, &HeadVarLval_29);
          ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_40, &VarSet_30);
          VarName_31 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(VarSet_30, Var_20);
          ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(HeadType_22, BodyType_26, (MR_Integer) 0, HeadVarLval_29, VarName_31, Context_15, (MR_Integer) 0, (MR_Integer) 0, &BodyLval_32, &ConvLocalVarDefns_33, &ConvInputStmts_34, &ConvOutputStmts_35, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_47_47);
          ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(Var_20, BodyLval_32, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
          ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(VarsTail_21, HeadTypesTail_23, TopFunctorModesTail_25, CopiedOutputVars_14, Context_15, &LocalVarDefnsTail_36, &InputStmtsTail_37, &OutputStmtsTail_38, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_41);
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(*STATE_VARIABLE_Info_41, &ByRefOutputVars_39);
          succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[4], ((MR_Box) (Var_20)), ByRefOutputVars_39);
          if (!(succeeded))
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[4], ((MR_Box) (Var_20)), CopiedOutputVars_14);
          }
          if (succeeded)
          {
            *InputStmts_17 = InputStmtsTail_37;
            *OutputStmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, OutputStmtsTail_38, ConvOutputStmts_35);
          }
          else
          {
            *InputStmts_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvInputStmts_34, InputStmtsTail_37);
            *OutputStmts_18 = OutputStmtsTail_38;
          }
          *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvLocalVarDefns_33, LocalVarDefnsTail_36);
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_convert_headvars\'/10", (MR_String) "length mismatch");
          return;
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
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
    MR_Word PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 1)));
    MR_Word ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 2)));
    MR_Word PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0)));
    MR_Integer ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1)));
    MR_Word PlainFuncName_20;
    MR_Word ProcContext_21;
    MR_Word DeclFlags_22;
    MR_Word MaybePredProcId_23;
    MR_Word Attributes_24;
    MR_Word AttributeList_25;
    MR_Word MLDS_Attributes_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word PredInfo_38;
    MR_Word Access_39;
    MR_Word _ProcContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcIdInfo_8, (MR_Integer) 3)));
    MR_Word _ModuleName_19;

    ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_7, PredProcId_13, &_ModuleName_19, &PlainFuncName_20);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_15, &ProcContext_21);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_17, &PredInfo_38);
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_38, ProcId_18);
    if (succeeded)
      Access_39 = (MR_Integer) 0;
    else
      Access_39 = (MR_Integer) 1;
    DeclFlags_22 = ml_backend__mlds__init_function_decl_flags_2_f_0(Access_39, (MR_Integer) 0);
    {
      MaybePredProcId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePredProcId_23, 0) = ((MR_Box) (PredProcId_13));
    }
    hlds__hlds_pred__pred_info_get_attributes_2_p_0(PredInfo_14, &Attributes_24);
    hlds__hlds_pred__attributes_to_attribute_list_2_p_0(Attributes_24, &AttributeList_25);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ModuleInfo_7));
    }
    MLDS_Attributes_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0, Var_28, AttributeList_25);
    Var_29 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) PlainFuncName_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *FuncDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcContext_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeclFlags_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybePredProcId_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FuncParams_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncBody_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MLDS_Attributes_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (EnvVarNames_11));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__562__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0(
  MR_Word PredProcId_10,
  MR_Word Context_11,
  MR_Word LocalVarDefns_12,
  MR_Word FuncDefns_13,
  MR_Word GoalStmts_14,
  MR_Word TailRecInfo_15,
  MR_Word * FuncBody_16,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_bool succeeded;
    MR_Word TargetMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 0)));
    MR_Word TsccKind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 1)));
    MR_Word LoopKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 2)));
    MR_Word TailRecSpecs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 5)));
    MR_Word FuncBodyStmt_34;
    MR_Word Var_39;
    MR_Word _WarnDefaultParams_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 3)));
    MR_Word _WarnProcParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo_15, (MR_Integer) 4)));
    MR_Word IdInTscc_25;
    MR_Word TailRecTargetInfo_24;
    MR_Word HaveDoneSelfTailRec_27;
    MR_Box conv0_TailRecTargetInfo_24;
    MR_Word _InputParams_26;
    MR_Word _HaveDoneMutualTailRec_28;
    MR_Word _HaveDoneNonTailRec_29;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TsccKind_19));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ml_backend.ml_proc_gen.construct_func_body_maybe_wrap_in_loop\'/9", (MR_String) "TsccKind != tscc_self_rec_only");
    *STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, TailRecSpecs_23, STATE_VARIABLE_Specs_0_37);
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TargetMap_18, ((MR_Box) (PredProcId_10)), &conv0_TailRecTargetInfo_24);
    if (succeeded)
    {
      TailRecTargetInfo_24 = ((MR_Word) conv0_TailRecTargetInfo_24);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IdInTscc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_24, (MR_Integer) 0)));
      _InputParams_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_24, (MR_Integer) 1)));
      HaveDoneSelfTailRec_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_24, (MR_Integer) 2)))) & (MR_Integer) 1);
      _HaveDoneMutualTailRec_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_24, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      _HaveDoneNonTailRec_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo_24, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      succeeded = (HaveDoneSelfTailRec_27 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word CommentStmt_31;

      {
        CommentStmt_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CommentStmt_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), CommentStmt_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_7[0])));
        MR_hl_field(MR_mktag(3), CommentStmt_31, 2) = ((MR_Box) (Context_11));
      }
      switch (LoopKind_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String StartLabel_35;
            MR_Word LoopTopLabelStmt_36;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;

            StartLabel_35 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind_19, IdInTscc_25);
            {
              LoopTopLabelStmt_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LoopTopLabelStmt_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), LoopTopLabelStmt_36, 1) = ((MR_Box) (StartLabel_35));
              MR_hl_field(MR_mktag(3), LoopTopLabelStmt_36, 2) = ((MR_Box) (Context_11));
            }
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (LoopTopLabelStmt_36));
              MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (CommentStmt_31));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
            }
            Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, Var_46, GoalStmts_14);
            {
              FuncBodyStmt_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FuncBodyStmt_34, 0) = ((MR_Box) (LocalVarDefns_12));
              MR_hl_field(MR_mktag(0), FuncBodyStmt_34, 1) = ((MR_Box) (FuncDefns_13));
              MR_hl_field(MR_mktag(0), FuncBodyStmt_34, 2) = ((MR_Box) (Var_45));
              MR_hl_field(MR_mktag(0), FuncBodyStmt_34, 3) = ((MR_Box) (Context_11));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word TypeCtorInfo_63_63;
            MR_Word BreakStmt_32;
            MR_Word LoopBodyStmt_33;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_53;
            MR_Word Var_54;

            {
              BreakStmt_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), BreakStmt_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), BreakStmt_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), BreakStmt_32, 2) = ((MR_Box) (Context_11));
            }
            TypeCtorInfo_63_63 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (CommentStmt_31));
              MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (BreakStmt_32));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            Var_53 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, GoalStmts_14, Var_54);
            Var_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, Var_51, Var_53);
            {
              LoopBodyStmt_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LoopBodyStmt_33, 0) = ((MR_Box) (LocalVarDefns_12));
              MR_hl_field(MR_mktag(0), LoopBodyStmt_33, 1) = ((MR_Box) (FuncDefns_13));
              MR_hl_field(MR_mktag(0), LoopBodyStmt_33, 2) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), LoopBodyStmt_33, 3) = ((MR_Box) (Context_11));
            }
            {
              FuncBodyStmt_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_34, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_2[15])));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_34, 2) = ((MR_Box) (LoopBodyStmt_33));
              MR_hl_field(MR_mktag(1), FuncBodyStmt_34, 3) = ((MR_Box) (Context_11));
            }
          }
          break;
      }
    }
    else
      FuncBodyStmt_34 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_12, FuncDefns_13, GoalStmts_14, Context_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *FuncBody_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncBodyStmt_34));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word NoneOrSelf_6,
  MR_Word PredProcId_7,
  MR_Word * TailRecMap0_8)
{
  switch (NoneOrSelf_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TailRecMap0_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InputParams_9;
        MR_Word TailRecTargetInfo0_10;

        InputParams_9 = ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0(ModuleInfo_5, PredProcId_7);
        {
          TailRecTargetInfo0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TailRecTargetInfo0_10, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), TailRecTargetInfo0_10, 1) = ((MR_Box) (InputParams_9));
          MR_hl_field(MR_mktag(0), TailRecTargetInfo0_10, 2) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
        }
        *TailRecMap0_8 = mercury__map__singleton_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_7)), ((MR_Box) (TailRecTargetInfo0_10)));
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
    MR_bool succeeded;
    MR_Word TypeCtorInfo_46_46;
    MR_Word TypeCtorInfo_47_47;
    MR_Word TypeCtorInfo_48_48;
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
    MR_Word OptTailCalls_28;
    MR_Word Var_40;
    MR_Word Var_41;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_16);
    TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__to_sorted_assoc_list_2_p_0(TypeCtorInfo_46_46, TypeCtorInfo_47_47, PredTable0_16, &PredIdInfos0_17);
    ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_4_p_0(PredIdInfos0_17, &PredIdInfos_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PredProcIds_19);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_46_46, TypeCtorInfo_47_47, PredIdInfos_18, &PredTable_20);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_20, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
    TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__list__sort_2_p_0(TypeCtorInfo_48_48, PredProcIds_19, &SortedPredProcIds_21);
    mercury__set__sorted_list_to_set_2_p_0(TypeCtorInfo_48_48, SortedPredProcIds_21, &CodeGenPredProcIds_22);
    DepInfo_23 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(*STATE_VARIABLE_ModuleInfo_32, CodeGenPredProcIds_22, (MR_Integer) 1);
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(*STATE_VARIABLE_ModuleInfo_32, DepInfo_23, &BottomUpSCCsWithEntryPoints_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_32, &Globals_25);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, (MR_Integer) 464, (MR_Integer) 1);
    if (succeeded)
    {
      Var_40 = (MR_Integer) 465;
      Var_41 = (MR_Integer) 1;
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, Var_40, Var_41);
    }
    if (succeeded)
    {
      MR_Word TailCallsMutual_26;
      MR_Word OptTailCallsMutual_27;

      libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 466, &TailCallsMutual_26);
      switch (TailCallsMutual_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OptTailCallsMutual_27 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          OptTailCallsMutual_27 = (MR_Integer) 1;
          break;
      }
      {
        OptTailCalls_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OptTailCalls_28, 0) = ((MR_Box) (OptTailCallsMutual_27));
      }
    }
    else
      OptTailCalls_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_proc_gen__ml_gen_sccs_11_p_0(*STATE_VARIABLE_ModuleInfo_32, OptTailCalls_28, Target_10, ConstStructMap_11, BottomUpSCCsWithEntryPoints_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FuncDefns_12, STATE_VARIABLE_GlobalData_0_29, STATE_VARIABLE_GlobalData_30, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OptTailCalls_2,
  MR_Word Target_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefns_0_6,
  MR_Word * STATE_VARIABLE_FuncDefns_7,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_GlobalData_9 = STATE_VARIABLE_GlobalData_0_8;
      *STATE_VARIABLE_FuncDefns_7 = STATE_VARIABLE_FuncDefns_0_6;
    }
    else
    {
      MR_Word SCCE_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word SCCEs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_FuncDefns_40_40;
      MR_Word STATE_VARIABLE_GlobalData_41_41;
      MR_Word STATE_VARIABLE_Specs_42_42;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_FuncDefns_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      ml_backend__ml_proc_gen__ml_gen_scc_11_p_0(ModuleInfo_1, OptTailCalls_2, Target_3, ConstStructMap_4, SCCE_29, STATE_VARIABLE_FuncDefns_0_6, &STATE_VARIABLE_FuncDefns_40_40, STATE_VARIABLE_GlobalData_0_8, &STATE_VARIABLE_GlobalData_41_41, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_42_42);
      // direct tailcall eliminated
      next_value_of_HeadVar__5_5 = SCCEs_30;
      next_value_of_STATE_VARIABLE_FuncDefns_0_6 = STATE_VARIABLE_FuncDefns_40_40;
      next_value_of_STATE_VARIABLE_GlobalData_0_8 = STATE_VARIABLE_GlobalData_41_41;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_42_42;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_FuncDefns_0_6 = next_value_of_STATE_VARIABLE_FuncDefns_0_6;
      STATE_VARIABLE_GlobalData_0_8 = next_value_of_STATE_VARIABLE_GlobalData_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_8(
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
    MR_Word conv37_STATE_VARIABLE_FuncDefns_44;
    MR_Word conv36_STATE_VARIABLE_GlobalData_46;
    MR_Word conv35_STATE_VARIABLE_Specs_48;

    ml_backend__ml_proc_gen__ml_gen_tscc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv37_STATE_VARIABLE_FuncDefns_44, ((MR_Word) wrapper_arg_4), &conv36_STATE_VARIABLE_GlobalData_46, ((MR_Word) wrapper_arg_6), &conv35_STATE_VARIABLE_Specs_48);
    *wrapper_arg_3 = ((MR_Box) (conv37_STATE_VARIABLE_FuncDefns_44));
    *wrapper_arg_5 = ((MR_Box) (conv36_STATE_VARIABLE_GlobalData_46));
    *wrapper_arg_7 = ((MR_Box) (conv35_STATE_VARIABLE_Specs_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_7(
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
    MR_Word conv31_STATE_VARIABLE_FuncDefns_44;
    MR_Word conv30_STATE_VARIABLE_GlobalData_46;
    MR_Word conv29_STATE_VARIABLE_Specs_48;

    ml_backend__ml_proc_gen__ml_gen_tscc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv31_STATE_VARIABLE_FuncDefns_44, ((MR_Word) wrapper_arg_4), &conv30_STATE_VARIABLE_GlobalData_46, ((MR_Word) wrapper_arg_6), &conv29_STATE_VARIABLE_Specs_48);
    *wrapper_arg_3 = ((MR_Box) (conv31_STATE_VARIABLE_FuncDefns_44));
    *wrapper_arg_5 = ((MR_Box) (conv30_STATE_VARIABLE_GlobalData_46));
    *wrapper_arg_7 = ((MR_Box) (conv29_STATE_VARIABLE_Specs_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_6(
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
    MR_Word conv22_STATE_VARIABLE_FuncDefns_28;
    MR_Word conv21_STATE_VARIABLE_GlobalData_30;
    MR_Word conv20_STATE_VARIABLE_Specs_32;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv22_STATE_VARIABLE_FuncDefns_28, ((MR_Word) wrapper_arg_4), &conv21_STATE_VARIABLE_GlobalData_30, ((MR_Word) wrapper_arg_6), &conv20_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_FuncDefns_28));
    *wrapper_arg_5 = ((MR_Box) (conv21_STATE_VARIABLE_GlobalData_30));
    *wrapper_arg_7 = ((MR_Box) (conv20_STATE_VARIABLE_Specs_32));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv19_PredProcId_4;

    conv19_PredProcId_4 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv19_PredProcId_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_PredProcId_4;

    conv18_PredProcId_4 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv18_PredProcId_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_3(
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
    MR_Word conv14_STATE_VARIABLE_FuncDefns_55;
    MR_Word conv13_STATE_VARIABLE_GlobalData_57;
    MR_Word conv12_STATE_VARIABLE_Specs_59;

    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv14_STATE_VARIABLE_FuncDefns_55, ((MR_Word) wrapper_arg_4), &conv13_STATE_VARIABLE_GlobalData_57, ((MR_Word) wrapper_arg_6), &conv12_STATE_VARIABLE_Specs_59);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_FuncDefns_55));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_GlobalData_57));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_59));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_2(
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
    MR_Word conv8_STATE_VARIABLE_FuncDefns_55;
    MR_Word conv7_STATE_VARIABLE_GlobalData_57;
    MR_Word conv6_STATE_VARIABLE_Specs_59;

    ml_backend__ml_proc_gen__ml_gen_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_STATE_VARIABLE_FuncDefns_55, ((MR_Word) wrapper_arg_4), &conv7_STATE_VARIABLE_GlobalData_57, ((MR_Word) wrapper_arg_6), &conv6_STATE_VARIABLE_Specs_59);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FuncDefns_55));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_GlobalData_57));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_59));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_1(
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
    MR_Word conv2_STATE_VARIABLE_FuncDefns_28;
    MR_Word conv1_STATE_VARIABLE_GlobalData_30;
    MR_Word conv0_STATE_VARIABLE_Specs_32;

    ml_backend__ml_proc_gen__ml_gen_proc_lookup_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_FuncDefns_28, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_GlobalData_30, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FuncDefns_28));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_30));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word OptTailCalls_13,
  MR_Word Target_14,
  MR_Word ConstStructMap_15,
  MR_Word SCCE_16,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word PredProcIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_16, (MR_Integer) 0)));
    MR_Word CalledFromHigherSCCs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_16, (MR_Integer) 1)));
    MR_Word ExportedProcs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCCE_16, (MR_Integer) 2)));
    MR_Word SCCEntryProcs_23;

    mercury__set__union_3_p_0(TypeCtorInfo_95_95, CalledFromHigherSCCs_21, ExportedProcs_22, &SCCEntryProcs_23);
    if ((OptTailCalls_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_90;
      MR_Box conv5_STATE_VARIABLE_FuncDefns_44;
      MR_Box conv4_STATE_VARIABLE_GlobalData_46;
      MR_Box conv3_STATE_VARIABLE_Specs_48;

      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Target_14));
        MR_hl_field(MR_mktag(0), Var_90, 5) = ((MR_Box) (ConstStructMap_15));
        MR_hl_field(MR_mktag(0), Var_90, 6) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__set__foldl3_8_p_0(TypeCtorInfo_95_95, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], Var_90, PredProcIds_20, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_43)), &conv5_STATE_VARIABLE_FuncDefns_44, ((MR_Box) (STATE_VARIABLE_GlobalData_0_45)), &conv4_STATE_VARIABLE_GlobalData_46, ((MR_Box) (STATE_VARIABLE_Specs_0_47)), &conv3_STATE_VARIABLE_Specs_48);
      *STATE_VARIABLE_FuncDefns_44 = ((MR_Word) conv5_STATE_VARIABLE_FuncDefns_44);
      *STATE_VARIABLE_GlobalData_46 = ((MR_Word) conv4_STATE_VARIABLE_GlobalData_46);
      *STATE_VARIABLE_Specs_48 = ((MR_Word) conv3_STATE_VARIABLE_Specs_48);
    }
    else
    {
      MR_Word TypeCtorInfo_114_114;
      MR_Word TypeInfo_115_115;
      MR_Word TypeCtorInfo_116_116;
      MR_Word TypeInfo_117_117;
      MR_Word TypeCtorInfo_150_150;
      MR_Word OptTailCallsMutual_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptTailCalls_13, (MR_Integer) 0)));
      MR_Word NonePredProcIdInfos_25;
      MR_Word SelfPredProcIdInfos0_26;
      MR_Word MutualDetPredProcIdInfos0_27;
      MR_Word MutualSemiPredProcIdInfos0_28;
      MR_Word Globals_29;
      MR_Word DetCopyOut_30;
      MR_Word GC_31;
      MR_Word SelfPredProcIdInfos_32;
      MR_Word MutualDetPredProcIdInfos_33;
      MR_Word MutualSemiPredProcIdInfos_34;
      MR_Word DetTSCCDepInfo_35;
      MR_Word SemiTSCCDepInfo_36;
      MR_Word DetTSCCEntries_37;
      MR_Word SemiTSCCEntries_38;
      MR_Word DetLonePredProcIds_39;
      MR_Word DetNonTrivialTSCCEntries_40;
      MR_Word SemiLonePredProcIds_41;
      MR_Word SemiNonTrivialTSCCEntries_42;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word STATE_VARIABLE_FuncDefns_53_53;
      MR_Word STATE_VARIABLE_GlobalData_54_54;
      MR_Word STATE_VARIABLE_Specs_55_55;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_FuncDefns_58_58;
      MR_Word STATE_VARIABLE_GlobalData_59_59;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_70;
      MR_Word STATE_VARIABLE_FuncDefns_71_71;
      MR_Word STATE_VARIABLE_GlobalData_72_72;
      MR_Word STATE_VARIABLE_Specs_73_73;
      MR_Word STATE_VARIABLE_FuncDefns_76_76;
      MR_Word STATE_VARIABLE_GlobalData_77_77;
      MR_Word STATE_VARIABLE_Specs_78_78;
      MR_Word Var_80;
      MR_Word STATE_VARIABLE_FuncDefns_81_81;
      MR_Word STATE_VARIABLE_GlobalData_82_82;
      MR_Word STATE_VARIABLE_Specs_83_83;
      MR_Word Var_85;
      MR_Box conv11_STATE_VARIABLE_FuncDefns_53_53;
      MR_Box conv10_STATE_VARIABLE_GlobalData_54_54;
      MR_Box conv9_STATE_VARIABLE_Specs_55_55;
      MR_Box conv17_STATE_VARIABLE_FuncDefns_58_58;
      MR_Box conv16_STATE_VARIABLE_GlobalData_59_59;
      MR_Box conv15_STATE_VARIABLE_Specs_60_60;
      MR_Box conv25_STATE_VARIABLE_FuncDefns_71_71;
      MR_Box conv24_STATE_VARIABLE_GlobalData_72_72;
      MR_Box conv23_STATE_VARIABLE_Specs_73_73;
      MR_Box conv28_STATE_VARIABLE_FuncDefns_76_76;
      MR_Box conv27_STATE_VARIABLE_GlobalData_77_77;
      MR_Box conv26_STATE_VARIABLE_Specs_78_78;
      MR_Box conv34_STATE_VARIABLE_FuncDefns_81_81;
      MR_Box conv33_STATE_VARIABLE_GlobalData_82_82;
      MR_Box conv32_STATE_VARIABLE_Specs_83_83;
      MR_Box conv40_STATE_VARIABLE_FuncDefns_44;
      MR_Box conv39_STATE_VARIABLE_GlobalData_46;
      MR_Box conv38_STATE_VARIABLE_Specs_48;

      Var_49 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_95_95, PredProcIds_20);
      ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(ModuleInfo_12, Var_49, &NonePredProcIdInfos_25, &SelfPredProcIdInfos0_26, &MutualDetPredProcIdInfos0_27, &MutualSemiPredProcIdInfos0_28);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_29);
      libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 266, &DetCopyOut_30);
      libs__globals__get_gc_method_2_p_0(Globals_29, &GC_31);
      succeeded = (DetCopyOut_30 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (GC_31 == (MR_Integer) 5);
        succeeded = !(succeeded);
        if (succeeded)
          succeeded = (OptTailCallsMutual_24 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        SelfPredProcIdInfos_32 = SelfPredProcIdInfos0_26;
        MutualDetPredProcIdInfos_33 = MutualDetPredProcIdInfos0_27;
        MutualSemiPredProcIdInfos_34 = MutualSemiPredProcIdInfos0_28;
      }
      else
      {
        MR_Word TypeCtorInfo_106_106 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0;
        MR_Word Var_51;

        Var_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, MutualDetPredProcIdInfos0_27, MutualSemiPredProcIdInfos0_28);
        SelfPredProcIdInfos_32 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, SelfPredProcIdInfos0_26, Var_51);
        MutualDetPredProcIdInfos_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MutualSemiPredProcIdInfos_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_2));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Target_14));
        MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (ConstStructMap_15));
        MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) ((MR_Integer) 0));
      }
      TypeCtorInfo_114_114 = (MR_Word) &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0;
      TypeInfo_115_115 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0];
      TypeCtorInfo_116_116 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
      TypeInfo_117_117 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1];
      mercury__list__foldl3_8_p_0(TypeCtorInfo_114_114, TypeInfo_115_115, TypeCtorInfo_116_116, TypeInfo_117_117, Var_52, NonePredProcIdInfos_25, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_43)), &conv11_STATE_VARIABLE_FuncDefns_53_53, ((MR_Box) (STATE_VARIABLE_GlobalData_0_45)), &conv10_STATE_VARIABLE_GlobalData_54_54, ((MR_Box) (STATE_VARIABLE_Specs_0_47)), &conv9_STATE_VARIABLE_Specs_55_55);
      STATE_VARIABLE_FuncDefns_53_53 = ((MR_Word) conv11_STATE_VARIABLE_FuncDefns_53_53);
      STATE_VARIABLE_GlobalData_54_54 = ((MR_Word) conv10_STATE_VARIABLE_GlobalData_54_54);
      STATE_VARIABLE_Specs_55_55 = ((MR_Word) conv9_STATE_VARIABLE_Specs_55_55);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_3));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Target_14));
        MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (ConstStructMap_15));
        MR_hl_field(MR_mktag(0), Var_57, 6) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__list__foldl3_8_p_0(TypeCtorInfo_114_114, TypeInfo_115_115, TypeCtorInfo_116_116, TypeInfo_117_117, Var_57, SelfPredProcIdInfos_32, ((MR_Box) (STATE_VARIABLE_FuncDefns_53_53)), &conv17_STATE_VARIABLE_FuncDefns_58_58, ((MR_Box) (STATE_VARIABLE_GlobalData_54_54)), &conv16_STATE_VARIABLE_GlobalData_59_59, ((MR_Box) (STATE_VARIABLE_Specs_55_55)), &conv15_STATE_VARIABLE_Specs_60_60);
      STATE_VARIABLE_FuncDefns_58_58 = ((MR_Word) conv17_STATE_VARIABLE_FuncDefns_58_58);
      STATE_VARIABLE_GlobalData_59_59 = ((MR_Word) conv16_STATE_VARIABLE_GlobalData_59_59);
      STATE_VARIABLE_Specs_60_60 = ((MR_Word) conv15_STATE_VARIABLE_Specs_60_60);
      Var_63 = mercury__list__map_2_f_0(TypeCtorInfo_114_114, TypeCtorInfo_95_95, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[4], MutualDetPredProcIdInfos_33);
      Var_62 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_95_95, Var_63);
      DetTSCCDepInfo_35 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_12, Var_62, (MR_Integer) 0);
      Var_67 = mercury__list__map_2_f_0(TypeCtorInfo_114_114, TypeCtorInfo_95_95, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[5], MutualSemiPredProcIdInfos_34);
      Var_66 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_95_95, Var_67);
      SemiTSCCDepInfo_36 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_12, Var_66, (MR_Integer) 0);
      hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_12, DetTSCCDepInfo_35, &DetTSCCEntries_37);
      hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_12, SemiTSCCDepInfo_36, &SemiTSCCEntries_38);
      ml_backend__ml_proc_gen__partition_tsccs_3_p_0(DetTSCCEntries_37, &DetLonePredProcIds_39, &DetNonTrivialTSCCEntries_40);
      ml_backend__ml_proc_gen__partition_tsccs_3_p_0(SemiTSCCEntries_38, &SemiLonePredProcIds_41, &SemiNonTrivialTSCCEntries_42);
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_6));
        MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Target_14));
        MR_hl_field(MR_mktag(0), Var_70, 5) = ((MR_Box) (ConstStructMap_15));
        MR_hl_field(MR_mktag(0), Var_70, 6) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__list__foldl3_8_p_0(TypeCtorInfo_95_95, TypeInfo_115_115, TypeCtorInfo_116_116, TypeInfo_117_117, Var_70, DetLonePredProcIds_39, ((MR_Box) (STATE_VARIABLE_FuncDefns_58_58)), &conv25_STATE_VARIABLE_FuncDefns_71_71, ((MR_Box) (STATE_VARIABLE_GlobalData_59_59)), &conv24_STATE_VARIABLE_GlobalData_72_72, ((MR_Box) (STATE_VARIABLE_Specs_60_60)), &conv23_STATE_VARIABLE_Specs_73_73);
      STATE_VARIABLE_FuncDefns_71_71 = ((MR_Word) conv25_STATE_VARIABLE_FuncDefns_71_71);
      STATE_VARIABLE_GlobalData_72_72 = ((MR_Word) conv24_STATE_VARIABLE_GlobalData_72_72);
      STATE_VARIABLE_Specs_73_73 = ((MR_Word) conv23_STATE_VARIABLE_Specs_73_73);
      mercury__list__foldl3_8_p_0(TypeCtorInfo_95_95, TypeInfo_115_115, TypeCtorInfo_116_116, TypeInfo_117_117, Var_70, SemiLonePredProcIds_41, ((MR_Box) (STATE_VARIABLE_FuncDefns_71_71)), &conv28_STATE_VARIABLE_FuncDefns_76_76, ((MR_Box) (STATE_VARIABLE_GlobalData_72_72)), &conv27_STATE_VARIABLE_GlobalData_77_77, ((MR_Box) (STATE_VARIABLE_Specs_73_73)), &conv26_STATE_VARIABLE_Specs_78_78);
      STATE_VARIABLE_FuncDefns_76_76 = ((MR_Word) conv28_STATE_VARIABLE_FuncDefns_76_76);
      STATE_VARIABLE_GlobalData_77_77 = ((MR_Word) conv27_STATE_VARIABLE_GlobalData_77_77);
      STATE_VARIABLE_Specs_78_78 = ((MR_Word) conv26_STATE_VARIABLE_Specs_78_78);
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_7));
        MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (Target_14));
        MR_hl_field(MR_mktag(0), Var_80, 5) = ((MR_Box) (ConstStructMap_15));
        MR_hl_field(MR_mktag(0), Var_80, 6) = ((MR_Box) (SCCEntryProcs_23));
        MR_hl_field(MR_mktag(0), Var_80, 7) = ((MR_Box) ((MR_Integer) 0));
      }
      TypeCtorInfo_150_150 = (MR_Word) &hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0;
      mercury__list__foldl3_8_p_0(TypeCtorInfo_150_150, TypeInfo_115_115, TypeCtorInfo_116_116, TypeInfo_117_117, Var_80, DetNonTrivialTSCCEntries_40, ((MR_Box) (STATE_VARIABLE_FuncDefns_76_76)), &conv34_STATE_VARIABLE_FuncDefns_81_81, ((MR_Box) (STATE_VARIABLE_GlobalData_77_77)), &conv33_STATE_VARIABLE_GlobalData_82_82, ((MR_Box) (STATE_VARIABLE_Specs_78_78)), &conv32_STATE_VARIABLE_Specs_83_83);
      STATE_VARIABLE_FuncDefns_81_81 = ((MR_Word) conv34_STATE_VARIABLE_FuncDefns_81_81);
      STATE_VARIABLE_GlobalData_82_82 = ((MR_Word) conv33_STATE_VARIABLE_GlobalData_82_82);
      STATE_VARIABLE_Specs_83_83 = ((MR_Word) conv32_STATE_VARIABLE_Specs_83_83);
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_11_p_0_8));
        MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (Target_14));
        MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (ConstStructMap_15));
        MR_hl_field(MR_mktag(0), Var_85, 6) = ((MR_Box) (SCCEntryProcs_23));
        MR_hl_field(MR_mktag(0), Var_85, 7) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__list__foldl3_8_p_0(TypeCtorInfo_150_150, TypeInfo_115_115, TypeCtorInfo_116_116, TypeInfo_117_117, Var_85, SemiNonTrivialTSCCEntries_42, ((MR_Box) (STATE_VARIABLE_FuncDefns_81_81)), &conv40_STATE_VARIABLE_FuncDefns_44, ((MR_Box) (STATE_VARIABLE_GlobalData_82_82)), &conv39_STATE_VARIABLE_GlobalData_46, ((MR_Box) (STATE_VARIABLE_Specs_83_83)), &conv38_STATE_VARIABLE_Specs_48);
      *STATE_VARIABLE_FuncDefns_44 = ((MR_Word) conv40_STATE_VARIABLE_FuncDefns_44);
      *STATE_VARIABLE_GlobalData_46 = ((MR_Word) conv39_STATE_VARIABLE_GlobalData_46);
      *STATE_VARIABLE_Specs_48 = ((MR_Word) conv38_STATE_VARIABLE_Specs_48);
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
      MR_Word CodeModel_22;
      MR_Word STATE_VARIABLE_NoneIdInfos_34_34;
      MR_Word STATE_VARIABLE_SelfIdInfos_35_35;
      MR_Word STATE_VARIABLE_MutualDetIdInfos_36_36;
      MR_Word STATE_VARIABLE_MutualSemiIdInfos_37_37;
      MR_Word _GoalExpr_18;

      ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(HeadVar__1_1, PredProcIds_10, &STATE_VARIABLE_NoneIdInfos_34_34, &STATE_VARIABLE_SelfIdInfos_35_35, &STATE_VARIABLE_MutualDetIdInfos_36_36, &STATE_VARIABLE_MutualSemiIdInfos_37_37);
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
      CodeModel_22 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_16);
      switch (CodeModel_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word Detism_23;
            MR_Word SolnCount_25;
            MR_Word HasTailRecCall_26;
            MR_Word HasSelfTailRecCall_27;
            MR_Word HasMutualTailRecCall_28;
            MR_Word _CanFail_24;
            MR_Word Var_29;

            hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_16, &Detism_23);
            parse_tree__prog_data__determinism_components_3_p_0(Detism_23, &_CanFail_24, &SolnCount_25);
            hlds__hlds_pred__proc_info_get_has_tail_rec_call_2_p_0(ProcInfo_16, &HasTailRecCall_26);
            HasSelfTailRecCall_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HasTailRecCall_26, (MR_Integer) 0)));
            HasMutualTailRecCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HasTailRecCall_26, (MR_Integer) 1)));
            succeeded = (HasMutualTailRecCall_28 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ml_backend__ml_code_util__proc_is_output_det_function_4_p_0(HeadVar__1_1, PredInfo_15, ProcInfo_16, &Var_29);
              succeeded = !(succeeded);
              if (succeeded)
              {
                succeeded = (SolnCount_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              switch (CodeModel_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualDetIdInfos_36_36));
                    }
                    *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_37_37;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MutualSemiIdInfos_37_37));
                    }
                    *HeadVar__5_5 = STATE_VARIABLE_MutualDetIdInfos_36_36;
                  }
                  break;
              }
              *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_35_35;
              *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_34_34;
            }
            else
            {
              switch (HasSelfTailRecCall_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_34_34));
                    }
                    *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_35_35;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SelfIdInfos_35_35));
                    }
                    *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_34_34;
                  }
                  break;
              }
              *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_37_37;
              *HeadVar__5_5 = STATE_VARIABLE_MutualDetIdInfos_36_36;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IdInfo_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_34_34));
            }
            *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_35_35;
            *HeadVar__5_5 = STATE_VARIABLE_MutualDetIdInfos_36_36;
            *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_37_37;
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

    conv2_LambdaHeadVar__2_33 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__162__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
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
        mercury__list__foldl_4_p_0(TypeCtorInfo_40_40, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[3], ProcIds_18, ((MR_Box) (ProcTable0_19)), &conv1_ProcTable_20);
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
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[1]));
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
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_mutual_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_mutual_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_mutual_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_mutual_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_in_code_gen_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_mutual_0);
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
