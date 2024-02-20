/*
** Automatically generated from `ml_gen_info.m'
** by the Mercury compiler,
** version rotd-2024-02-20
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


// :- module ml_backend.ml_gen_info.
// :- implementation.

/*
INIT mercury__ml_backend__ml_gen_info__init
ENDINIT
*/

#include "ml_backend.ml_gen_info.mih"


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
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_0_0[3];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_bitfield_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_bitfield_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_bitfield_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_bitfield_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_1;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_2[1];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_2;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_1[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_2[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_bitfield_value_0[3];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_bitfield_value_0[3];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_bitfield_value_0[3];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0;

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_filled_bitfield_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_filled_bitfield_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_filled_bitfield_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_filled_bitfield_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_filled_bitfield_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_filled_bitfield_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_in_scc_info_0_0[4];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_in_scc_info_0_0[4];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_in_scc_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_in_scc_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_in_scc_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_in_scc_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_in_scc_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_in_scc_info_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0;

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_maybe_in_tscc_target_info_0_1[2];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_maybe_in_tscc_target_info_0_1[2];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_maybe_in_tscc_target_info_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_maybe_in_tscc_target_info_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_maybe_in_tscc_target_info_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_maybe_in_tscc_target_info_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_maybe_in_tscc_target_info_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_info_0_0[8];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0[16];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0[16];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0[16];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[8];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[8];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_tscc_info_0_0[7];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_tscc_info_0_0[7];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_tscc_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_tscc_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_tscc_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_tscc_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_nontail_rec_call_0_0[6];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_nontail_rec_call_0_0[6];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_nontail_rec_call_0_0[6];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_nontail_rec_call_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_nontail_rec_call_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_nontail_rec_call_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_nontail_rec_call_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_nontail_rec_call_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_nontail_rec_call_warn_status_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_nontail_rec_call_warn_status_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_nontail_rec_call_warn_status_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_packed_word_instance_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_packed_word_instance_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_packed_word_instance_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_packed_word_instance_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_packed_word_instance_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_packed_word_instance_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_info_0_0[3];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_info_0_0[3];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_tail_rec_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_tail_rec_loop_kind_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tail_rec_loop_kind_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_loop_kind_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_target_of_mutual_tail_rec_call_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_target_of_mutual_tail_rec_call_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_target_of_mutual_tail_rec_call_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_target_of_self_tail_rec_call_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_target_of_self_tail_rec_call_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_target_of_self_tail_rec_call_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_tscc_kind_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tscc_kind_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tscc_kind_0[2];

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
ml_backend__ml_gen_info__get_unfilled_bitfield_1_f_0(
  MR_Word FilledBitfield_3);

static MR_Box MR_CALL 
ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____bitfield_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____bitfield_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____bitfield_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____bitfield_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____filled_bitfield_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____filled_bitfield_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____filled_packed_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____filled_packed_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____in_scc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____in_scc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____in_scc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____in_scc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____maybe_in_tscc_target_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____maybe_in_tscc_target_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____nontail_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____nontail_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____nontail_rec_call_warn_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____nontail_rec_call_warn_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_instance_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_instance_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____target_of_mutual_tail_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____target_of_mutual_tail_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____target_of_self_tail_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____target_of_self_tail_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tscc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tscc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[12][2];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[7][3];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_4[1][5];




static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_2[5]))
  },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[1])),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_shift_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_num_bits_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_fill_kind_0)
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_bitfield_0_0[3] = {
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
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_0_0 = {
  (MR_String) "bitfield",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_0_0,
  NULL,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_bitfield_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_bitfield_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_bitfield_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_bitfield_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____bitfield_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____bitfield_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "bitfield",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_bitfield_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_bitfield_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_bitfield_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_0[1] = { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_0 = {
  (MR_String) "bv_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_1[1] = { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) };

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_1 = {
  (MR_String) "bv_rval",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) };

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_2 = {
  (MR_String) "bv_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_bitfield_value_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_0 };

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_1[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_1 };

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_2[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_2 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_bitfield_value_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_bitfield_value_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_bitfield_value_0[3] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_2,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_bitfield_value_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_bitfield_value_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_value_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____bitfield_value_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____bitfield_value_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "bitfield_value",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_bitfield_value_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_bitfield_value_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_bitfield_value_0,

};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 = {
  (MR_String) "cond_seq",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "cond_seq",
  { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
  { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0,

};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 = {
  (MR_String) "conv_seq",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "conv_seq",
  { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
  { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_filled_bitfield_0_0[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_value_0)
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_filled_bitfield_0_0 = {
  (MR_String) "filled_bitfield",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_filled_bitfield_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_filled_bitfield_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_filled_bitfield_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_filled_bitfield_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_filled_bitfield_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_filled_bitfield_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_filled_bitfield_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_filled_bitfield_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____filled_bitfield_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____filled_bitfield_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "filled_bitfield",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_filled_bitfield_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_filled_bitfield_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_filled_bitfield_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0) }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_packed_word_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____filled_packed_word_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____filled_packed_word_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "filled_packed_word",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_in_scc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_maybe_in_tscc_target_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_target_of_self_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_target_of_mutual_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__list__ti_list_1ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_in_scc_info_0_0[4] = {
  (MR_String) "isi_maybe_in_tscc",
  (MR_String) "isi_is_target_of_self_tr",
  (MR_String) "isi_is_target_of_mutual_tr",
  (MR_String) "isi_is_target_of_non_tail_rec"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_in_scc_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_in_scc_info_0_0 = {
  (MR_String) "in_scc_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_in_scc_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_in_scc_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_in_scc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_in_scc_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_in_scc_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_in_scc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_in_scc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_in_scc_info_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_in_scc_info_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_in_scc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____in_scc_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____in_scc_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "in_scc_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_in_scc_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_in_scc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_in_scc_info_0,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____in_scc_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____in_scc_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "in_scc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_label_num_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____label_num_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____label_num_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "label_num",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_0 = {
  (MR_String) "not_in_tscc",
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_maybe_in_tscc_target_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_maybe_in_tscc_target_info_0_1[2] = {
  (MR_String) "itti_id",
  (MR_String) "itti_input_args"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_1 = {
  (MR_String) "in_tscc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_maybe_in_tscc_target_info_0_1,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_maybe_in_tscc_target_info_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_maybe_in_tscc_target_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_0 };

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_maybe_in_tscc_target_info_0_1[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_1 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_maybe_in_tscc_target_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_maybe_in_tscc_target_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_maybe_in_tscc_target_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_maybe_in_tscc_target_info_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_maybe_in_tscc_target_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_maybe_in_tscc_target_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_maybe_in_tscc_target_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____maybe_in_tscc_target_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____maybe_in_tscc_target_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "maybe_in_tscc_target_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_maybe_in_tscc_target_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_maybe_in_tscc_target_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_maybe_in_tscc_target_info_0,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_const_struct_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_const_struct_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8] = {
  (MR_String) "mgi_const_var_map",
  (MR_String) "mgi_func_counter",
  (MR_String) "mgi_conv_var_counter",
  (MR_String) "mgi_used_succeeded_var",
  (MR_String) "mgi_closure_wrapper_defns",
  (MR_String) "mgi_global_data",
  (MR_String) "mgi_rare_info",
  (MR_String) "mgi_sub_info"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_info_0_0[8] = {
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
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 = {
  (MR_String) "ml_gen_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0[16] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_gc_method_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_use_atomic_cells_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0[16] = {
  (MR_String) "mgri_module_info",
  (MR_String) "mgri_pred_proc_id",
  (MR_String) "mgri_var_table",
  (MR_String) "mgri_high_level_data",
  (MR_String) "mgri_target",
  (MR_String) "mgri_gc",
  (MR_String) "mgri_det_copy_out",
  (MR_String) "mgri_nondet_copy_out",
  (MR_String) "mgri_use_atomic_cells",
  (MR_String) "mgri_profile_memory",
  (MR_String) "mgri_num_ptag_bits",
  (MR_String) "mgri_const_struct_map",
  (MR_String) "mgri_var_lvals",
  (MR_String) "mgri_env_var_names",
  (MR_String) "mgri_disabled_warnings",
  (MR_String) "mgri_tail_rec_info"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0[16] = {
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
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 7,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
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
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0 = {
  (MR_String) "ml_gen_rare_info",
  INT16_C(16),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_rare_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0) }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[8] = {
  (MR_String) "mgsi_byref_output_vars",
  (MR_String) "mgsi_label_counter",
  (MR_String) "mgsi_aux_var_counter",
  (MR_String) "mgsi_cond_var_counter",
  (MR_String) "mgsi_packed_word_counter",
  (MR_String) "mgsi_packed_word_map",
  (MR_String) "mgsi_success_cont_stack",
  (MR_String) "mgsi_func_nest_depth"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 = {
  (MR_String) "ml_gen_sub_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_sub_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_tscc_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_tscc_info_0_0[7] = {
  (MR_String) "mgti_func_label_counter",
  (MR_String) "mgti_label_counter",
  (MR_String) "mgti_aux_var_counter",
  (MR_String) "mgti_cond_var_counter",
  (MR_String) "mgti_conv_var_counter",
  (MR_String) "mgti_packed_word_counter",
  (MR_String) "mgti_tail_rec_info"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0 = {
  (MR_String) "ml_gen_tscc_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_tscc_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_tscc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_tscc_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_tscc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_tscc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_tscc_info_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_tscc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_tscc_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_tscc_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_tscc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_tscc_info_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0 = {
  (MR_String) "ml_ground_term",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_ground_term",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0,

};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_ground_term_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_nontail_rec_call_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_call_reason_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_obviousness_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_warn_status_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_nontail_rec_call_0_0[6] = {
  (MR_String) "ntrc_caller",
  (MR_String) "ntrc_callee",
  (MR_String) "ntrc_context",
  (MR_String) "ntrc_reason",
  (MR_String) "ntrc_obviousness",
  (MR_String) "ntrc_warn_status"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_nontail_rec_call_0_0[6] = {
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
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_nontail_rec_call_0_0 = {
  (MR_String) "nontail_rec_call",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_nontail_rec_call_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_nontail_rec_call_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_nontail_rec_call_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_nontail_rec_call_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_nontail_rec_call_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_nontail_rec_call_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_nontail_rec_call_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_nontail_rec_call_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_nontail_rec_call_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_nontail_rec_call_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____nontail_rec_call_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____nontail_rec_call_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "nontail_rec_call",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_nontail_rec_call_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_nontail_rec_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_nontail_rec_call_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_0 = {
  (MR_String) "nontail_rec_call_warn_disabled",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_1 = {
  (MR_String) "nontail_rec_call_warn_enabled",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_nontail_rec_call_warn_status_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_nontail_rec_call_warn_status_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_nontail_rec_call_warn_status_0_1
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_nontail_rec_call_warn_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_warn_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____nontail_rec_call_warn_status_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____nontail_rec_call_warn_status_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "nontail_rec_call_warn_status",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_nontail_rec_call_warn_status_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_nontail_rec_call_warn_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_nontail_rec_call_warn_status_0,

};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____packed_word_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____packed_word_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "packed_word",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_packed_word_instance_0_0[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_packed_word_instance_0_0 = {
  (MR_String) "packed_word_instance",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_packed_word_instance_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_packed_word_instance_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_packed_word_instance_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_packed_word_instance_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_packed_word_instance_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_packed_word_instance_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_packed_word_instance_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_packed_word_instance_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____packed_word_instance_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____packed_word_instance_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "packed_word_instance",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_packed_word_instance_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_packed_word_instance_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_packed_word_instance_0,

};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____packed_word_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____packed_word_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "packed_word_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_bitfield_0one_or_more__ti_one_or_more_1ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__ml_gen_info__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0)
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0 = {
  (MR_String) "success_cont",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____success_cont_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____success_cont_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "success_cont",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0)
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_info_0_0[3] = {
  (MR_String) "tri_in_scc_map",
  (MR_String) "tri_loop_kind",
  (MR_String) "tri_tscc_kind"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_tail_rec_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0 = {
  (MR_String) "tail_rec_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_tail_rec_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_info_0_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_info_0[1] = { &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0 };

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tail_rec_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tail_rec_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tail_rec_info",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_info_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_info_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_0 = {
  (MR_String) "tail_rec_loop_while_continue",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_1 = {
  (MR_String) "tail_rec_loop_label_goto",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_tail_rec_loop_kind_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tail_rec_loop_kind_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_loop_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tail_rec_loop_kind",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tail_rec_loop_kind_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_tail_rec_loop_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_loop_kind_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_0 = {
  (MR_String) "is_not_target_of_mutual_trcall",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_1 = {
  (MR_String) "is_target_of_mutual_trcall",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_target_of_mutual_tail_rec_call_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_target_of_mutual_tail_rec_call_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_mutual_tail_rec_call_0_1
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_target_of_mutual_tail_rec_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_target_of_mutual_tail_rec_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____target_of_mutual_tail_rec_call_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____target_of_mutual_tail_rec_call_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "target_of_mutual_tail_rec_call",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_target_of_mutual_tail_rec_call_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_target_of_mutual_tail_rec_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_target_of_mutual_tail_rec_call_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_0 = {
  (MR_String) "is_not_target_of_self_trcall",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_1 = {
  (MR_String) "is_target_of_self_trcall",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_target_of_self_tail_rec_call_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_target_of_self_tail_rec_call_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_target_of_self_tail_rec_call_0_1
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_target_of_self_tail_rec_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_target_of_self_tail_rec_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____target_of_self_tail_rec_call_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____target_of_self_tail_rec_call_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "target_of_self_tail_rec_call",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_target_of_self_tail_rec_call_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_target_of_self_tail_rec_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_target_of_self_tail_rec_call_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_0 = {
  (MR_String) "tscc_self_rec_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_1 = {
  (MR_String) "tscc_self_and_mutual_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_tscc_kind_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tscc_kind_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tscc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tscc_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tscc_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tscc_kind",
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tscc_kind_0 },
  { ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_ordinal_ordered_tscc_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tscc_kind_0,

};

void MR_CALL 
ml_backend__ml_gen_info____Compare____tscc_kind_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tscc_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____target_of_self_tail_rec_call_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____target_of_self_tail_rec_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____target_of_mutual_tail_rec_call_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____target_of_mutual_tail_rec_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[11]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_instance_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      ml_backend__mlds____Compare____mlds_rval_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_instance_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____nontail_rec_call_warn_status_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____nontail_rec_call_warn_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____nontail_rec_call_0_0(
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
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_29 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_30 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_29 < Var_30);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_29 > Var_30);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_31 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_32 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_31 < Var_32);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_31 > Var_32);
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
              MR_Integer Var_33 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_34 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_33 < Var_34);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_33 > Var_34);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____nontail_rec_call_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
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
    MR_Word SubResult1_6;

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__counter____Compare____counter_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__counter____Compare____counter_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__counter____Compare____counter_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__counter____Compare____counter_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
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
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__counter____Unify____counter_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = mercury__counter____Unify____counter_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
                succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(ArgX7_15, ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(
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
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__counter____Compare____counter_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__counter____Compare____counter_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__counter____Compare____counter_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[10]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(
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
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__counter____Unify____counter_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[10]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                  succeeded = (ArgX8_17 == ArgY8_18);
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
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    uint8_t ArgX11_23 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4)));
    uint8_t ArgY11_24 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4)));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          TypeInfo_40_40 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[4]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_41_41 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[1]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_42_42 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[8]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_43_43 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[9]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                  succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(ArgX16_33, ArgY16_34);
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

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0(
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
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__counter____Compare____counter_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_37 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_38 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_37 < Var_38);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_37 > Var_38);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[7]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              ml_backend__ml_global_data____Compare____ml_global_data_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Integer CastX_62 = (MR_Integer) (ArgX8_25);
                  MR_Integer CastY_63 = (MR_Integer) (ArgY8_26);

                  succeeded = (CastX_62 == CastY_63);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                  {
                    MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 0))));
                    MR_Word ArgY1_40 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 0))));
                    MR_Word ArgX2_42 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 1))));
                    MR_Word ArgY2_43 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 1))));
                    MR_Word ArgX3_45 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 2))));
                    MR_Word ArgY3_46 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 2))));
                    MR_Word ArgX4_48 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 3))));
                    MR_Word ArgY4_49 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 3))));
                    MR_Word ArgX5_51 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 4))));
                    MR_Word ArgY5_52 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 4))));
                    MR_Word ArgX6_54 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 5))));
                    MR_Word ArgY6_55 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 5))));
                    MR_Word ArgX7_57 = ((MR_Word) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 6))));
                    MR_Word ArgY7_58 = ((MR_Word) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 6))));
                    MR_Integer ArgX8_60 = ((MR_Integer) ((MR_hl_field(0, ArgX8_25, (MR_Integer) 7))));
                    MR_Integer ArgY8_61 = ((MR_Integer) ((MR_hl_field(0, ArgY8_26, (MR_Integer) 7))));
                    MR_Word SubResult1_41;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[3]), &SubResult1_41, ((MR_Box) (ArgX1_39)), ((MR_Box) (ArgY1_40)));
                    succeeded = (SubResult1_41 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult1_41;
                    else
                    {
                      MR_Word SubResult2_44;

                      mercury__counter____Compare____counter_0_0(&SubResult2_44, ArgX2_42, ArgY2_43);
                      succeeded = (SubResult2_44 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult2_44;
                      else
                      {
                        MR_Word SubResult3_47;

                        mercury__counter____Compare____counter_0_0(&SubResult3_47, ArgX3_45, ArgY3_46);
                        succeeded = (SubResult3_47 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult3_47;
                        else
                        {
                          MR_Word SubResult4_50;

                          mercury__counter____Compare____counter_0_0(&SubResult4_50, ArgX4_48, ArgY4_49);
                          succeeded = (SubResult4_50 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult4_50;
                          else
                          {
                            MR_Word SubResult5_53;

                            mercury__counter____Compare____counter_0_0(&SubResult5_53, ArgX5_51, ArgY5_52);
                            succeeded = (SubResult5_53 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult5_53;
                            else
                            {
                              MR_Word SubResult6_56;

                              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[2]), &SubResult6_56, ((MR_Box) (ArgX6_54)), ((MR_Box) (ArgY6_55)));
                              succeeded = (SubResult6_56 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult6_56;
                              else
                              {
                                MR_Word SubResult7_59;

                                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[10]), &SubResult7_59, ((MR_Box) (ArgX7_57)), ((MR_Box) (ArgY7_58)));
                                succeeded = (SubResult7_59 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult7_59;
                                else
                                {
                                  succeeded = (ArgX8_60 < ArgY8_61);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (ArgX8_60 > ArgY8_61);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 2;
                                    else
                                      *HeadVar__1_1 = (MR_Integer) 0;
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
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_51 == CastY_52);
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
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    uint8_t ArgX11_34 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4)));
    uint8_t ArgY11_35 = ((uint8_t) (MR_Word) (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4)));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_69 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_70 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_69 < Var_70);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_69 > Var_70);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_71 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_72 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_71 < Var_72);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_71 > Var_72);
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
              MR_Integer Var_73 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_74 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_73 < Var_74);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_73 > Var_74);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_75 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_76 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_75 < Var_76);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_75 > Var_76);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_77 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_78 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_77 < Var_78);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_77 > Var_78);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_79 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_80 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_79 < Var_80);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_79 > Var_80);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_81 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_82 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_81 < Var_82);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_81 > Var_82);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[4]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[1]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[8]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[9]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                  ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(HeadVar__1_1, ArgX16_49, ArgY16_50);
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

void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0(
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
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer CastX_58;
    MR_Integer CastY_59;
    MR_Integer CastX_83;
    MR_Integer CastY_84;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                CastX_58 = (MR_Integer) (ArgX7_15);
                CastY_59 = (MR_Integer) (ArgY7_16);
                succeeded = (CastX_58 == CastY_59);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word TypeInfo_40_63;
                  MR_Word TypeInfo_41_64;
                  MR_Word TypeInfo_42_65;
                  MR_Word TypeInfo_43_66;
                  MR_Word ArgX1_26 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 0))));
                  MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 0))));
                  MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 1))));
                  MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 1))));
                  MR_Word ArgX3_30 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 2))));
                  MR_Word ArgY3_31 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 2))));
                  MR_Word ArgX4_32 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
                  MR_Word ArgY4_33 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
                  MR_Word ArgX5_34 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
                  MR_Word ArgY5_35 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
                  MR_Word ArgX6_36 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
                  MR_Word ArgY6_37 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
                  MR_Word ArgX7_38 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgY7_39 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgX8_40 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgY8_41 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgX9_42 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY9_43 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgX10_44 = ((MR_Unsigned) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 3))) & (MR_Integer) 1);
                  MR_Word ArgY10_45 = ((MR_Unsigned) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 3))) & (MR_Integer) 1);
                  uint8_t ArgX11_46 = ((uint8_t) (MR_Word) (MR_hl_field(0, ArgX7_15, (MR_Integer) 4)));
                  uint8_t ArgY11_47 = ((uint8_t) (MR_Word) (MR_hl_field(0, ArgY7_16, (MR_Integer) 4)));
                  MR_Word ArgX12_48 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 5))));
                  MR_Word ArgY12_49 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 5))));
                  MR_Word ArgX13_50 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 6))));
                  MR_Word ArgY13_51 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 6))));
                  MR_Word ArgX14_52 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 7))));
                  MR_Word ArgY14_53 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 7))));
                  MR_Word ArgX15_54 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 8))));
                  MR_Word ArgY15_55 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 8))));
                  MR_Word ArgX16_56 = ((MR_Word) ((MR_hl_field(0, ArgX7_15, (MR_Integer) 9))));
                  MR_Word ArgY16_57 = ((MR_Word) ((MR_hl_field(0, ArgY7_16, (MR_Integer) 9))));

                  succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_26, ArgY1_27);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_28, ArgY2_29);
                    if (succeeded)
                    {
                      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_30, ArgY3_31);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_32 == ArgY4_33);
                        if (succeeded)
                        {
                          succeeded = (ArgX5_34 == ArgY5_35);
                          if (succeeded)
                          {
                            succeeded = (ArgX6_36 == ArgY6_37);
                            if (succeeded)
                            {
                              succeeded = (ArgX7_38 == ArgY7_39);
                              if (succeeded)
                              {
                                succeeded = (ArgX8_40 == ArgY8_41);
                                if (succeeded)
                                {
                                  succeeded = (ArgX9_42 == ArgY9_43);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX10_44 == ArgY10_45);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX11_46 == ArgY11_47);
                                      if (succeeded)
                                      {
                                        TypeInfo_40_63 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[4]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_63, ((MR_Box) (ArgX12_48)), ((MR_Box) (ArgY12_49)));
                                        if (succeeded)
                                        {
                                          TypeInfo_41_64 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[1]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_64, ((MR_Box) (ArgX13_50)), ((MR_Box) (ArgY13_51)));
                                          if (succeeded)
                                          {
                                            TypeInfo_42_65 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[8]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_65, ((MR_Box) (ArgX14_52)), ((MR_Box) (ArgY14_53)));
                                            if (succeeded)
                                            {
                                              TypeInfo_43_66 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[9]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_66, ((MR_Box) (ArgX15_54)), ((MR_Box) (ArgY15_55)));
                                              if (succeeded)
                                                succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(ArgX16_56, ArgY16_57);
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
                if (succeeded)
                {
                  CastX_83 = (MR_Integer) (ArgX8_17);
                  CastY_84 = (MR_Integer) (ArgY8_18);
                  succeeded = (CastX_83 == CastY_84);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word TypeInfo_26_90;
                    MR_Word TypeInfo_27_91;
                    MR_Word ArgX1_67 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 0))));
                    MR_Word ArgY1_68 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 0))));
                    MR_Word ArgX2_69 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 1))));
                    MR_Word ArgY2_70 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 1))));
                    MR_Word ArgX3_71 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 2))));
                    MR_Word ArgY3_72 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 2))));
                    MR_Word ArgX4_73 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 3))));
                    MR_Word ArgY4_74 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 3))));
                    MR_Word ArgX5_75 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 4))));
                    MR_Word ArgY5_76 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 4))));
                    MR_Word ArgX6_77 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 5))));
                    MR_Word ArgY6_78 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 5))));
                    MR_Word ArgX7_79 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 6))));
                    MR_Word ArgY7_80 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 6))));
                    MR_Integer ArgX8_81 = ((MR_Integer) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 7))));
                    MR_Integer ArgY8_82 = ((MR_Integer) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 7))));

                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[3]), ((MR_Box) (ArgX1_67)), ((MR_Box) (ArgY1_68)));
                    if (succeeded)
                    {
                      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_69, ArgY2_70);
                      if (succeeded)
                      {
                        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_71, ArgY3_72);
                        if (succeeded)
                        {
                          succeeded = mercury__counter____Unify____counter_0_0(ArgX4_73, ArgY4_74);
                          if (succeeded)
                          {
                            succeeded = mercury__counter____Unify____counter_0_0(ArgX5_75, ArgY5_76);
                            if (succeeded)
                            {
                              TypeInfo_26_90 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[2]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_90, ((MR_Box) (ArgX6_77)), ((MR_Box) (ArgY6_78)));
                              if (succeeded)
                              {
                                TypeInfo_27_91 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[10]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_91, ((MR_Box) (ArgX7_79)), ((MR_Box) (ArgY7_80)));
                                if (succeeded)
                                  succeeded = (ArgX8_81 == ArgY8_82);
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____in_scc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____in_scc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____in_scc_info_0_0(
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
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    ml_backend__ml_gen_info____Compare____maybe_in_tscc_target_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
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
          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____maybe_in_tscc_target_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_10;
      MR_Integer Var_19 = (MR_Integer) (Var_18);
      MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult1_10 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_10;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____in_scc_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = ml_backend__ml_gen_info____Unify____maybe_in_tscc_target_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____maybe_in_tscc_target_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Integer Var_13;
    MR_Integer Var_14;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      Var_13 = (MR_Integer) (ArgX1_5);
      Var_14 = (MR_Integer) (ArgY1_6);
      succeeded = (Var_13 == Var_14);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____filled_packed_word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____filled_packed_word_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____filled_bitfield_0_0(
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

    ml_backend__ml_gen_info____Compare____bitfield_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      ml_backend__ml_gen_info____Compare____bitfield_value_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____filled_bitfield_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = ml_backend__ml_gen_info____Unify____bitfield_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____bitfield_value_0_0(
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
        {
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_5)));
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                ml_backend__mlds____Compare____mlds_rval_0_0(HeadVar__1_1, Var_28, ArgY1_13);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned Var_27 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Unsigned ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_27 < ArgY1_21);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_27 > ArgY1_21);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____bitfield_value_0_0(
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
        {
          MR_Word TypeInfo_12_12;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_12_12 = (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Unsigned ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____bitfield_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____bitfield_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
    MR_Integer Var_13 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_4);
    MR_Integer Var_15;
    MR_Integer Var_16;

    succeeded = (Var_13 == Var_14);
    if (succeeded)
    {
      Var_15 = (MR_Integer) (ArgX2_5);
      Var_16 = (MR_Integer) (ArgY2_6);
      succeeded = (Var_15 == Var_16);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_gen_info__get_unfilled_bitfield_1_f_0(
  MR_Word FilledBitfield_3)
{
  MR_Word Bitfield_4 = ((MR_Word) ((MR_hl_field(0, FilledBitfield_3, (MR_Integer) 0))));

  return Bitfield_4;
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word SubInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 5))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_10));
  if (succeeded)
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  else
  {
    MR_Word SubInfo_7;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 4))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 6))));
    MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 7))));
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      SubInfo_7 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubInfo_7, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, SubInfo_7, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, SubInfo_7, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, SubInfo_7, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, SubInfo_7, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, SubInfo_7, 5) = ((MR_Box) (X_4));
      MR_hl_field(0, SubInfo_7, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, SubInfo_7, 7) = ((MR_Box) (Var_32));
    }
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_36));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_7));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word SubInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 0))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_10));
  if (succeeded)
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  else
  {
    MR_Word SubInfo_7;
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 6))));
    MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_6, (MR_Integer) 7))));
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      SubInfo_7 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubInfo_7, 0) = ((MR_Box) (X_4));
      MR_hl_field(0, SubInfo_7, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, SubInfo_7, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, SubInfo_7, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, SubInfo_7, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, SubInfo_7, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, SubInfo_7, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, SubInfo_7, 7) = ((MR_Box) (Var_32));
    }
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_36));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_7));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word RareInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word RareInfo_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 0))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 1))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 2))));
  uint8_t Var_27 = ((uint8_t) (MR_Word) (MR_hl_field(0, RareInfo0_6, (MR_Integer) 4)));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 8))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 3)));

  {
    RareInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RareInfo_7, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, RareInfo_7, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, RareInfo_7, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, RareInfo_7, 3) = (MR_Box) (packed_word_1);
    MR_hl_field(0, RareInfo_7, 4) = ((MR_Box) (MR_Word) (Var_27));
    MR_hl_field(0, RareInfo_7, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, RareInfo_7, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, RareInfo_7, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, RareInfo_7, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, RareInfo_7, 9) = ((MR_Box) (X_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (RareInfo_7));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word RareInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word RareInfo_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 0))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 1))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 2))));
  uint8_t Var_27 = ((uint8_t) (MR_Word) (MR_hl_field(0, RareInfo0_6, (MR_Integer) 4)));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 7))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 9))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 3)));

  {
    RareInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RareInfo_7, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, RareInfo_7, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, RareInfo_7, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, RareInfo_7, 3) = (MR_Box) (packed_word_1);
    MR_hl_field(0, RareInfo_7, 4) = ((MR_Box) (MR_Word) (Var_27));
    MR_hl_field(0, RareInfo_7, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, RareInfo_7, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, RareInfo_7, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, RareInfo_7, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, RareInfo_7, 9) = ((MR_Box) (Var_32));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (RareInfo_7));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word RareInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word RareInfo_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 0))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 1))));
  uint8_t Var_27 = ((uint8_t) (MR_Word) (MR_hl_field(0, RareInfo0_6, (MR_Integer) 4)));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 9))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 3)));

  {
    RareInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RareInfo_7, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, RareInfo_7, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, RareInfo_7, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, RareInfo_7, 3) = (MR_Box) (packed_word_1);
    MR_hl_field(0, RareInfo_7, 4) = ((MR_Box) (MR_Word) (Var_27));
    MR_hl_field(0, RareInfo_7, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, RareInfo_7, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, RareInfo_7, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, RareInfo_7, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, RareInfo_7, 9) = ((MR_Box) (Var_32));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (RareInfo_7));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word RareInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word RareInfo_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 1))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 2))));
  uint8_t Var_27 = ((uint8_t) (MR_Word) (MR_hl_field(0, RareInfo0_6, (MR_Integer) 4)));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 9))));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 3)));

  {
    RareInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RareInfo_7, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, RareInfo_7, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, RareInfo_7, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, RareInfo_7, 3) = (MR_Box) (packed_word_1);
    MR_hl_field(0, RareInfo_7, 4) = ((MR_Box) (MR_Word) (Var_27));
    MR_hl_field(0, RareInfo_7, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, RareInfo_7, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, RareInfo_7, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, RareInfo_7, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, RareInfo_7, 9) = ((MR_Box) (Var_32));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (RareInfo_7));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);

  succeeded = (X_4 == Var_23);
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (X_4));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_22));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_func_nest_depth_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 7))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 9))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 8))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_num_ptag_bits_2_p_0(
  MR_Word Info_3,
  uint8_t * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((uint8_t) (MR_Word) (MR_hl_field(0, Var_5, (MR_Integer) 4)));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) & (MR_Integer) 1);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_det_copy_out_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) >> 4)) & (MR_Integer) 7);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) >> 7)) & (MR_Integer) 3);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 3))) >> 9)) & (MR_Integer) 1);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 5))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 4))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 3))) & (MR_Integer) 1);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(
  MR_Word Info_6,
  MR_Word * EnvVarNames_7,
  MR_Word * ClosureWrapperDefns_8,
  MR_Word * GlobalData_9,
  MR_Word * TsccInfo_10)
{
  MR_Word FuncLabelCounter_12 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 1))));
  MR_Word ConvVarCounter_13 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 2))));
  MR_Word RareInfo_15;
  MR_Word SubInfo_16;
  MR_Word TailRecInfo_31;
  MR_Word LabelCounter_33;
  MR_Word AuxVarCounter_34;
  MR_Word CondVarCounter_35;
  MR_Word PackedWordCounter_36;

  *ClosureWrapperDefns_8 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
  *GlobalData_9 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 5))));
  RareInfo_15 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 6))));
  SubInfo_16 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 7))));
  *EnvVarNames_7 = ((MR_Word) ((MR_hl_field(0, RareInfo_15, (MR_Integer) 7))));
  TailRecInfo_31 = ((MR_Word) ((MR_hl_field(0, RareInfo_15, (MR_Integer) 9))));
  LabelCounter_33 = ((MR_Word) ((MR_hl_field(0, SubInfo_16, (MR_Integer) 1))));
  AuxVarCounter_34 = ((MR_Word) ((MR_hl_field(0, SubInfo_16, (MR_Integer) 2))));
  CondVarCounter_35 = ((MR_Word) ((MR_hl_field(0, SubInfo_16, (MR_Integer) 3))));
  PackedWordCounter_36 = ((MR_Word) ((MR_hl_field(0, SubInfo_16, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *TsccInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FuncLabelCounter_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (LabelCounter_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (AuxVarCounter_34));
    MR_hl_field(0, base, 3) = ((MR_Box) (CondVarCounter_35));
    MR_hl_field(0, base, 4) = ((MR_Box) (PackedWordCounter_36));
    MR_hl_field(0, base, 5) = ((MR_Box) (ConvVarCounter_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (TailRecInfo_31));
  }
}

MR_Word MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(
  MR_Word ModuleInfo_9,
  MR_Word Target_10,
  MR_Word ConstStructMap_11,
  MR_Word PredProcId_12,
  MR_Word ProcInfo_13,
  MR_Word GlobalData_14,
  MR_Word TsccInfo_15)
{
  MR_Word Info_16;
  MR_Word FuncLabelCounter_17 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 0))));
  MR_Word LabelCounter_18 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 1))));
  MR_Word AuxVarCounter_19 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 2))));
  MR_Word CondVarCounter_20 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 3))));
  MR_Word PackedWordCounter_21 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 4))));
  MR_Word ConvVarCounter_22 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 5))));
  MR_Word TailRecInfo_23 = ((MR_Word) ((MR_hl_field(0, TsccInfo_15, (MR_Integer) 6))));
  MR_Word VarTable_24;
  MR_Word HighLevelData_25;
  MR_Word Globals_26;
  MR_Word GC_27;
  MR_Word DetCopyOut_28;
  MR_Word NondetCopyOut_29;
  MR_Word OptTuple_30;
  MR_Word UseAtomicCells_31;
  MR_Word ProfileMemory_32;
  MR_Integer NumPtagBitsInt_33;
  uint8_t NumPtagBits_34;
  MR_Word VarLvals_35;
  MR_Word EnvVarNames_36;
  MR_Word DisabledWarnings_37;
  MR_Word RareInfo_38;
  MR_Word ByRefOutputVars_39;
  MR_Word PackedWordMap_40;
  MR_Word SuccContStack_41;
  MR_Word SubInfo_43;
  MR_Word ConstVarMap_44;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_13, &VarTable_24);
  HighLevelData_25 = ml_backend__ml_util__mlds_target_high_level_data_1_f_0(Target_10);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_26);
  libs__globals__get_gc_method_2_p_0(Globals_26, &GC_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 315, &DetCopyOut_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 316, &NondetCopyOut_29);
  libs__globals__get_opt_tuple_2_p_0(Globals_26, &OptTuple_30);
  UseAtomicCells_31 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_30, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 248, &ProfileMemory_32);
  libs__globals__lookup_int_option_3_p_0(Globals_26, (MR_Integer) 289, &NumPtagBitsInt_33);
  NumPtagBits_34 = mercury__uint8__det_from_int_1_f_0(NumPtagBitsInt_33);
  mercury__map__init_1_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), &VarLvals_35);
  mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNames_36);
  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), &DisabledWarnings_37);
  {
    RareInfo_38 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RareInfo_38, 0) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(0, RareInfo_38, 1) = ((MR_Box) (PredProcId_12));
    MR_hl_field(0, RareInfo_38, 2) = ((MR_Box) (VarTable_24));
    MR_hl_field(0, RareInfo_38, 3) = (MR_Box) (((((MR_Unsigned) (HighLevelData_25) << 9)) | (((((MR_Unsigned) (Target_10) << 7)) | (((((MR_Unsigned) (GC_27) << 4)) | (((((MR_Unsigned) (DetCopyOut_28) << 3)) | (((((MR_Unsigned) (NondetCopyOut_29) << 2)) | (((((MR_Unsigned) (UseAtomicCells_31) << 1)) | (MR_Unsigned) (ProfileMemory_32)))))))))))));
    MR_hl_field(0, RareInfo_38, 4) = ((MR_Box) (MR_Word) (NumPtagBits_34));
    MR_hl_field(0, RareInfo_38, 5) = ((MR_Box) (ConstStructMap_11));
    MR_hl_field(0, RareInfo_38, 6) = ((MR_Box) (VarLvals_35));
    MR_hl_field(0, RareInfo_38, 7) = ((MR_Box) (EnvVarNames_36));
    MR_hl_field(0, RareInfo_38, 8) = ((MR_Box) (DisabledWarnings_37));
    MR_hl_field(0, RareInfo_38, 9) = ((MR_Box) (TailRecInfo_23));
  }
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ByRefOutputVars_39);
  mercury__map__init_1_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[2]), &PackedWordMap_40);
  mercury__stack__init_1_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0), &SuccContStack_41);
  {
    SubInfo_43 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_43, 0) = ((MR_Box) (ByRefOutputVars_39));
    MR_hl_field(0, SubInfo_43, 1) = ((MR_Box) (LabelCounter_18));
    MR_hl_field(0, SubInfo_43, 2) = ((MR_Box) (AuxVarCounter_19));
    MR_hl_field(0, SubInfo_43, 3) = ((MR_Box) (CondVarCounter_20));
    MR_hl_field(0, SubInfo_43, 4) = ((MR_Box) (PackedWordCounter_21));
    MR_hl_field(0, SubInfo_43, 5) = ((MR_Box) (PackedWordMap_40));
    MR_hl_field(0, SubInfo_43, 6) = ((MR_Box) (SuccContStack_41));
    MR_hl_field(0, SubInfo_43, 7) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__map__init_1_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), &ConstVarMap_44);
  {
    Info_16 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_16, 0) = ((MR_Box) (ConstVarMap_44));
    MR_hl_field(0, Info_16, 1) = ((MR_Box) (FuncLabelCounter_17));
    MR_hl_field(0, Info_16, 2) = ((MR_Box) (ConvVarCounter_22));
    MR_hl_field(0, Info_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Info_16, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_16, 5) = ((MR_Box) (GlobalData_14));
    MR_hl_field(0, Info_16, 6) = ((MR_Box) (RareInfo_38));
    MR_hl_field(0, Info_16, 7) = ((MR_Box) (SubInfo_43));
  }
  return Info_16;
}

void MR_CALL 
ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InSccMap_6,
  MR_Word TsccKind_7,
  MR_Word * TsccInfo_8)
{
  MR_Word FuncLabelCounter_9;
  MR_Word LabelCounter_10;
  MR_Word AuxVarCounter_11;
  MR_Word CondVarCounter_12;
  MR_Word PackedWordCounter_13;
  MR_Word ConvVarCounter_14;
  MR_Word Globals_15;
  MR_Word Target_16;
  MR_Word SupportsGoto_17;
  MR_Word LoopKind_19;
  MR_Word TailRecInfo_22;

  mercury__counter__init_2_p_0((MR_Integer) 1, &FuncLabelCounter_9);
  mercury__counter__init_2_p_0((MR_Integer) 0, &LabelCounter_10);
  mercury__counter__init_2_p_0((MR_Integer) 0, &AuxVarCounter_11);
  mercury__counter__init_2_p_0((MR_Integer) 0, &CondVarCounter_12);
  mercury__counter__init_2_p_0((MR_Integer) 0, &PackedWordCounter_13);
  mercury__counter__init_2_p_0((MR_Integer) 0, &ConvVarCounter_14);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_15);
  libs__globals__get_target_2_p_0(Globals_15, &Target_16);
  SupportsGoto_17 = ml_backend__ml_target_util__target_supports_goto_1_f_0(Target_16);
  switch (SupportsGoto_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LoopKind_19 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word PreferBreakContinueOption_20;
        MR_Word PreferBreakContinue_21;

        switch (TsccKind_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PreferBreakContinueOption_20 = (MR_Integer) 370;
            break;
          case (MR_Integer) 0:
            PreferBreakContinueOption_20 = (MR_Integer) 369;
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_15, PreferBreakContinueOption_20, &PreferBreakContinue_21);
        switch (PreferBreakContinue_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            LoopKind_19 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            LoopKind_19 = (MR_Integer) 0;
            break;
        }
      }
      break;
  }
  {
    TailRecInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TailRecInfo_22, 0) = ((MR_Box) (InSccMap_6));
    MR_hl_field(0, TailRecInfo_22, 1) = (MR_Box) (((((MR_Unsigned) (LoopKind_19) << 1)) | (MR_Unsigned) (TsccKind_7)));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *TsccInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FuncLabelCounter_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (LabelCounter_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (AuxVarCounter_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (CondVarCounter_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (PackedWordCounter_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (ConvVarCounter_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (TailRecInfo_22));
  }
}

MR_Word MR_CALL 
ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(
  MR_Word TsccKind_4,
  MR_Word Id_5)
{
  MR_Word Label_6;

  switch (TsccKind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer IdNum_7 = (MR_Integer) (Id_5);
        MR_String Var_9;
        MR_String Var_14;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_3[0]), IdNum_7, &Var_14);
        Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "top_of_proc_", Var_14);
        Label_6 = (MR_Word) (Var_9);
      }
      break;
    case (MR_Integer) 0:
      Label_6 = (MR_Word) (((MR_Box) ((MR_String) "top_of_proc")));
      break;
  }
  return Label_6;
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_copy_out_3_p_0(
  MR_Word Info_4,
  MR_Word CodeModel_5,
  MR_Word * CopyOut_6)
{
  switch (CodeModel_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 6))));

        *CopyOut_6 = ((((MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 6))));

        *CopyOut_6 = ((((MR_Unsigned) ((MR_hl_field(0, Var_30, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(
  MR_String Name_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word EnvVarNames0_6;
  MR_Word EnvVarNames_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word RareInfo0_34;
  MR_Word RareInfo_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  uint8_t Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Unsigned packed_word_3;

  EnvVarNames0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
  mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_4)), EnvVarNames0_6, &EnvVarNames_7);
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_39 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  RareInfo0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 0))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 1))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 2))));
  packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 3)));
  Var_53 = ((uint8_t) (MR_Word) (MR_hl_field(0, RareInfo0_34, (MR_Integer) 4)));
  Var_54 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 5))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 6))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 8))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, RareInfo0_34, (MR_Integer) 9))));
  {
    RareInfo_35 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RareInfo_35, 0) = ((MR_Box) (Var_43));
    MR_hl_field(0, RareInfo_35, 1) = ((MR_Box) (Var_44));
    MR_hl_field(0, RareInfo_35, 2) = ((MR_Box) (Var_45));
    MR_hl_field(0, RareInfo_35, 3) = (MR_Box) (packed_word_3);
    MR_hl_field(0, RareInfo_35, 4) = ((MR_Box) (MR_Word) (Var_53));
    MR_hl_field(0, RareInfo_35, 5) = ((MR_Box) (Var_54));
    MR_hl_field(0, RareInfo_35, 6) = ((MR_Box) (Var_55));
    MR_hl_field(0, RareInfo_35, 7) = ((MR_Box) (EnvVarNames_7));
    MR_hl_field(0, RareInfo_35, 8) = ((MR_Box) (Var_57));
    MR_hl_field(0, RareInfo_35, 9) = ((MR_Box) (Var_58));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_39));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 6) = ((MR_Box) (RareInfo_35));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_42));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(
  MR_Word ClosureWrapperDefn_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word ClosureWrapperDefns0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word ClosureWrapperDefns_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));

  {
    ClosureWrapperDefns_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClosureWrapperDefns_7, 0) = ((MR_Box) (ClosureWrapperDefn_4));
    MR_hl_field(1, ClosureWrapperDefns_7, 1) = ((MR_Box) (ClosureWrapperDefns0_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (ClosureWrapperDefns_7));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word VarLvals0_8;
  MR_Word VarLvals_9;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));

  VarLvals0_8 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 6))));
  mercury__map__set_4_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), ((MR_Box) (Var_5)), ((MR_Box) (Lval_6)), VarLvals0_8, &VarLvals_9);
  ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(VarLvals_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word RareInfo0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 6))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_10));
  if (succeeded)
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  else
  {
    MR_Word RareInfo_7;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 0))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 2))));
    uint8_t Var_43 = ((uint8_t) (MR_Word) (MR_hl_field(0, RareInfo0_6, (MR_Integer) 4)));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 5))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 7))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 8))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 9))));
    MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, RareInfo0_6, (MR_Integer) 3)));
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;

    {
      RareInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RareInfo_7, 0) = ((MR_Box) (Var_33));
      MR_hl_field(0, RareInfo_7, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, RareInfo_7, 2) = ((MR_Box) (Var_35));
      MR_hl_field(0, RareInfo_7, 3) = (MR_Box) (packed_word_2);
      MR_hl_field(0, RareInfo_7, 4) = ((MR_Box) (MR_Word) (Var_43));
      MR_hl_field(0, RareInfo_7, 5) = ((MR_Box) (Var_44));
      MR_hl_field(0, RareInfo_7, 6) = ((MR_Box) (X_4));
      MR_hl_field(0, RareInfo_7, 7) = ((MR_Box) (Var_46));
      MR_hl_field(0, RareInfo_7, 8) = ((MR_Box) (Var_47));
      MR_hl_field(0, RareInfo_7, 9) = ((MR_Box) (Var_48));
    }
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    Var_52 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_52));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 6) = ((MR_Box) (RareInfo_7));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_56));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Integer Depth0_4;
  MR_Integer Depth_5;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word SubInfo0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word SubInfo_25;

  Var_17 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 0))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 1))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 2))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 3))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 4))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 5))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 6))));
  Depth0_4 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 7))));
  Depth_5 = (MR_Integer) ((MR_Unsigned) Depth0_4 - (MR_Unsigned) 1);
  {
    SubInfo_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_25, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, SubInfo_25, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, SubInfo_25, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, SubInfo_25, 3) = ((MR_Box) (Var_20));
    MR_hl_field(0, SubInfo_25, 4) = ((MR_Box) (Var_21));
    MR_hl_field(0, SubInfo_25, 5) = ((MR_Box) (Var_22));
    MR_hl_field(0, SubInfo_25, 6) = ((MR_Box) (Var_23));
    MR_hl_field(0, SubInfo_25, 7) = ((MR_Box) (Depth_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_25));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Integer Depth0_4;
  MR_Integer Depth_5;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word SubInfo0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word SubInfo_25;

  Var_17 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 0))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 1))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 2))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 3))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 4))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 5))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 6))));
  Depth0_4 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_24, (MR_Integer) 7))));
  Depth_5 = (MR_Integer) ((MR_Unsigned) Depth0_4 + (MR_Unsigned) 1);
  {
    SubInfo_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_25, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, SubInfo_25, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, SubInfo_25, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, SubInfo_25, 3) = ((MR_Box) (Var_20));
    MR_hl_field(0, SubInfo_25, 4) = ((MR_Box) (Var_21));
    MR_hl_field(0, SubInfo_25, 5) = ((MR_Box) (Var_22));
    MR_hl_field(0, SubInfo_25, 6) = ((MR_Box) (Var_23));
    MR_hl_field(0, SubInfo_25, 7) = ((MR_Box) (Depth_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_25));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(
  MR_Word Info_3,
  MR_Word * SuccCont_4)
{
  MR_Word Stack_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 7))));
  MR_Box conv0_SuccCont_4;

  Stack_5 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 6))));
  mercury__stack__det_top_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0), Stack_5, &conv0_SuccCont_4);
  *SuccCont_4 = ((MR_Word) (conv0_SuccCont_4));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_Word Stack0_4;
  MR_Word Stack_6;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 7))));
  MR_Word SubInfo0_25;
  MR_Word SubInfo_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Box conv0__SuccCont_5;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Integer Var_41;

  Stack0_4 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 6))));
  mercury__stack__det_pop_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0), &conv0__SuccCont_5, Stack0_4, &Stack_6);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 2))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 5))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 6))));
  SubInfo0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 7))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 0))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 1))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 2))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 3))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 4))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 5))));
  Var_41 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 7))));
  {
    SubInfo_26 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_26, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, SubInfo_26, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, SubInfo_26, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, SubInfo_26, 3) = ((MR_Box) (Var_37));
    MR_hl_field(0, SubInfo_26, 4) = ((MR_Box) (Var_38));
    MR_hl_field(0, SubInfo_26, 5) = ((MR_Box) (Var_39));
    MR_hl_field(0, SubInfo_26, 6) = ((MR_Box) (Stack_6));
    MR_hl_field(0, SubInfo_26, 7) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_26));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(
  MR_Word SuccCont_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Stack0_6;
  MR_Word Stack_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word SubInfo0_26;
  MR_Word SubInfo_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Integer Var_42;

  Stack0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
  mercury__stack__push_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0), ((MR_Box) (SuccCont_4)), Stack0_6, &Stack_7);
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_31 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  SubInfo0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 0))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 1))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 2))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 3))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 4))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 5))));
  Var_42 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 7))));
  {
    SubInfo_27 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_27, 0) = ((MR_Box) (Var_35));
    MR_hl_field(0, SubInfo_27, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, SubInfo_27, 2) = ((MR_Box) (Var_37));
    MR_hl_field(0, SubInfo_27, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, SubInfo_27, 4) = ((MR_Box) (Var_39));
    MR_hl_field(0, SubInfo_27, 5) = ((MR_Box) (Var_40));
    MR_hl_field(0, SubInfo_27, 6) = ((MR_Box) (Stack_7));
    MR_hl_field(0, SubInfo_27, 7) = ((MR_Box) (Var_42));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_31));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_27));
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * GroundTerm_6)
{
  MR_bool succeeded;
  MR_Word ConstVarMap_7 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
  MR_Box conv0_GroundTerm_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstVarMap_7, ((MR_Box) (Var_5)), &conv0_GroundTerm_6);
  if (succeeded)
  {
    *GroundTerm_6 = ((MR_Word) (conv0_GroundTerm_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * GroundTerm_6)
{
  MR_Word ConstVarMap_7 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
  MR_Box conv0_GroundTerm_6;

  mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstVarMap_7, ((MR_Box) (Var_5)), &conv0_GroundTerm_6);
  *GroundTerm_6 = ((MR_Word) (conv0_GroundTerm_6));
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(
  MR_Word Var_5,
  MR_Word GroundTerm_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word ConstVarMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
  MR_Word ConstVarMap_9;

  mercury__map__set_4_p_0((MR_Word) (&ml_backend__ml_gen_info_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_5)), ((MR_Box) (GroundTerm_6)), ConstVarMap0_8, &ConstVarMap_9);
  ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ConstVarMap_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_packed_word_var_3_p_0(
  MR_Word * LocalVarName_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word PackedWordCounter0_6;
  MR_Integer PackedWordNum_7;
  MR_Word PackedWordCounter_8;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));
  MR_Word SubInfo0_26;
  MR_Word SubInfo_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Integer Var_42;

  PackedWordCounter0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
  mercury__counter__allocate_3_p_0(&PackedWordNum_7, PackedWordCounter0_6, &PackedWordCounter_8);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LocalVarName_4 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, base, 1) = ((MR_Box) (PackedWordNum_7));
  }
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
  Var_31 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
  SubInfo0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 0))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 1))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 2))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 3))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 5))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 6))));
  Var_42 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_26, (MR_Integer) 7))));
  {
    SubInfo_27 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_27, 0) = ((MR_Box) (Var_35));
    MR_hl_field(0, SubInfo_27, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, SubInfo_27, 2) = ((MR_Box) (Var_37));
    MR_hl_field(0, SubInfo_27, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, SubInfo_27, 4) = ((MR_Box) (PackedWordCounter_8));
    MR_hl_field(0, SubInfo_27, 5) = ((MR_Box) (Var_40));
    MR_hl_field(0, SubInfo_27, 6) = ((MR_Box) (Var_41));
    MR_hl_field(0, SubInfo_27, 7) = ((MR_Box) (Var_42));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_31));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_27));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Bitfield_4;

  conv0_Bitfield_4 = ml_backend__ml_gen_info__get_unfilled_bitfield_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Bitfield_4));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0(
  MR_Word HeadFilledBitfield_5,
  MR_Word TailFilledBitfields_6,
  MR_Word * PackedWord_7,
  MR_Word * FilledPackedWord_8)
{
  MR_Word HeadBitfield_9 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfield_5, (MR_Integer) 0))));
  MR_Word TailBitfields_10;

  TailBitfields_10 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0), (MR_Word) (&ml_backend__ml_gen_info_scalar_common_2[6]), TailFilledBitfields_6);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PackedWord_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadBitfield_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailBitfields_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FilledPackedWord_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadFilledBitfield_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailFilledBitfields_6));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Integer ConvNum_4;
  MR_Word ConvCounter0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word ConvCounter_7;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  mercury__counter__allocate_3_p_0(&ConvNum_4, ConvCounter0_6, &ConvCounter_7);
  *HeadVar__1_1 = (MR_Word) (ConvNum_4);
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (ConvCounter_7));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Integer CondNum_4;
  MR_Word CondCounter0_6;
  MR_Word CondCounter_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word SubInfo0_25;
  MR_Word SubInfo_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Integer Var_41;

  CondCounter0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 3))));
  mercury__counter__allocate_3_p_0(&CondNum_4, CondCounter0_6, &CondCounter_7);
  *HeadVar__1_1 = (MR_Word) (CondNum_4);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  SubInfo0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 0))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 1))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 2))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 4))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 5))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 6))));
  Var_41 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 7))));
  {
    SubInfo_26 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_26, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, SubInfo_26, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, SubInfo_26, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, SubInfo_26, 3) = ((MR_Box) (CondCounter_7));
    MR_hl_field(0, SubInfo_26, 4) = ((MR_Box) (Var_38));
    MR_hl_field(0, SubInfo_26, 5) = ((MR_Box) (Var_39));
    MR_hl_field(0, SubInfo_26, 6) = ((MR_Box) (Var_40));
    MR_hl_field(0, SubInfo_26, 7) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_26));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0(
  MR_Word AuxVar_5,
  MR_Word * VarName_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word AuxVarCounter0_8;
  MR_Integer AuxVarNum_9;
  MR_Word AuxVarCounter_10;
  MR_Word Var_14;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
  MR_Word SubInfo0_30;
  MR_Word SubInfo_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Integer Var_46;

  AuxVarCounter0_8 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 2))));
  mercury__counter__allocate_3_p_0(&AuxVarNum_9, AuxVarCounter0_8, &AuxVarCounter_10);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
  Var_35 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
  SubInfo0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 6))));
  Var_46 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_30, (MR_Integer) 7))));
  {
    SubInfo_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_31, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, SubInfo_31, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, SubInfo_31, 2) = ((MR_Box) (AuxVarCounter_10));
    MR_hl_field(0, SubInfo_31, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, SubInfo_31, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, SubInfo_31, 5) = ((MR_Box) (Var_44));
    MR_hl_field(0, SubInfo_31, 6) = ((MR_Box) (Var_45));
    MR_hl_field(0, SubInfo_31, 7) = ((MR_Box) (Var_46));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_35));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_31));
  }
  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_14, 1) = (MR_Box) ((MR_Unsigned) (AuxVar_5));
    MR_hl_field(3, Var_14, 2) = ((MR_Box) (AuxVarNum_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *VarName_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_14));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word FuncLabelCounter0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Integer FuncLabel_5;
  MR_Word FuncLabelCounter_7;
  MR_Integer Var_10;
  MR_Word Var_6;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  mercury__counter__allocate_3_p_0(&FuncLabel_5, FuncLabelCounter0_4, &Var_6);
  Var_10 = (MR_Integer) ((MR_Unsigned) FuncLabel_5 + (MR_Unsigned) 10000);
  FuncLabelCounter_7 = mercury__counter__init_1_f_0(Var_10);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (FuncLabelCounter_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_aux_func_id_3_p_0(
  MR_Word * MaybeAux_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
  MR_Integer Num_7;
  MR_Word Counter_8;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  mercury__counter__allocate_3_p_0(&Num_7, Counter0_6, &Counter_8);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *MaybeAux_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Num_7));
  }
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
  Var_21 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Counter_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_25));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(
  MR_Integer * Label_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Counter0_6;
  MR_Word Counter_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  MR_Word SubInfo0_25;
  MR_Word SubInfo_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Integer Var_41;

  Counter0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  mercury__counter__allocate_3_p_0(Label_4, Counter0_6, &Counter_7);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  SubInfo0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 0))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 2))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 3))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 4))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 5))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 6))));
  Var_41 = ((MR_Integer) ((MR_hl_field(0, SubInfo0_25, (MR_Integer) 7))));
  {
    SubInfo_26 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_26, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, SubInfo_26, 1) = ((MR_Box) (Counter_7));
    MR_hl_field(0, SubInfo_26, 2) = ((MR_Box) (Var_36));
    MR_hl_field(0, SubInfo_26, 3) = ((MR_Box) (Var_37));
    MR_hl_field(0, SubInfo_26, 4) = ((MR_Box) (Var_38));
    MR_hl_field(0, SubInfo_26, 5) = ((MR_Box) (Var_39));
    MR_hl_field(0, SubInfo_26, 6) = ((MR_Box) (Var_40));
    MR_hl_field(0, SubInfo_26, 7) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (SubInfo_26));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_p_0(
  MR_Word Info_3,
  MR_Word * PutCommitInNestedFunc_4)
{
  MR_Word Globals_5;
  MR_Word ModuleInfo_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_5);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 317, PutCommitInNestedFunc_4);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(
  MR_Word Info_3,
  MR_Word * ModuleName_4)
{
  MR_Word ModuleInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, ModuleName_4);
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(
  MR_Word Info_3,
  MR_Word * Globals_4)
{
  MR_Word ModuleInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, Globals_4);
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____bitfield_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____bitfield_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____bitfield_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____bitfield_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____bitfield_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____bitfield_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____bitfield_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____cond_seq_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____cond_seq_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____conv_seq_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____conv_seq_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____filled_bitfield_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____filled_bitfield_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____filled_bitfield_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____filled_bitfield_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____filled_packed_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____filled_packed_word_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____filled_packed_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____filled_packed_word_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____in_scc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____in_scc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____in_scc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____in_scc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____in_scc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____in_scc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____in_scc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____in_scc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____label_num_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____label_num_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____maybe_in_tscc_target_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____maybe_in_tscc_target_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____maybe_in_tscc_target_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____maybe_in_tscc_target_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_gen_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_ground_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____nontail_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____nontail_rec_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____nontail_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____nontail_rec_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____nontail_rec_call_warn_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____nontail_rec_call_warn_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____nontail_rec_call_warn_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____nontail_rec_call_warn_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____packed_word_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____packed_word_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_instance_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____packed_word_instance_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_instance_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____packed_word_instance_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____packed_word_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____packed_word_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____packed_word_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____packed_word_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____success_cont_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____success_cont_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____target_of_mutual_tail_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____target_of_mutual_tail_rec_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____target_of_mutual_tail_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____target_of_mutual_tail_rec_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____target_of_self_tail_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____target_of_self_tail_rec_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____target_of_self_tail_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____target_of_self_tail_rec_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tscc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____tscc_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tscc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_gen_info____Compare____tscc_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_gen_info__init(void)
{
}

void mercury__ml_backend__ml_gen_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_value_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_packed_word_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_label_num_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_maybe_in_tscc_target_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_const_struct_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_warn_status_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_target_of_mutual_tail_rec_call_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_target_of_self_tail_rec_call_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0);
}

void mercury__ml_backend__ml_gen_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_gen_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_gen_info.
