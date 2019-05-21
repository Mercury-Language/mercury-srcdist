/*
** Automatically generated from `ml_gen_info.m'
** by the Mercury compiler,
** version rotd-2017-09-13
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


// :- module ml_backend.ml_gen_info.
// :- implementation.

/*
INIT mercury__ml_backend__ml_gen_info__init
ENDINIT
*/

#include "ml_backend.ml_gen_info.mih"


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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
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




static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0;

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_mutual_tail_rec_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_mutual_tail_rec_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_mutual_tail_rec_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_nontail_rec_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_nontail_rec_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_nontail_rec_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_self_tail_rec_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_self_tail_rec_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_self_tail_rec_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0[8];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0[14];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0[14];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0[14];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[5];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_tscc_info_0_0[6];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_tscc_info_0_0[6];

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

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_info_0_0[6];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_info_0_0[6];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_tail_rec_loop_kind_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tail_rec_loop_kind_0[2];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_loop_kind_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0;

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_target_info_0_0[5];

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_target_info_0_0[5];

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_tail_rec_target_info_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_target_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_target_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_target_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_target_info_0[1];

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_target_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_tscc_kind_0[2];

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
ml_backend__ml_gen_info____Unify____have_we_done_mutual_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_mutual_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_nontail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_nontail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_self_tail_rec_0_0_10001(
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
ml_backend__ml_gen_info____Unify____tail_rec_target_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_target_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_target_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_target_map_0_0_10001(
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


static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[10][2];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_3[1][1];




static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_2[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_gen_info_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_gen_info_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 = {
  (MR_String) "cond_seq",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "cond_seq",
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_cond_seq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_cond_seq_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 = {
  (MR_String) "conv_seq",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "conv_seq",
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
  {     &ml_backend__ml_gen_info__ml_backend__ml_gen_info__notag_functor_desc_conv_seq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_conv_seq_0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_0 = {
  (MR_String) "have_not_done_mutual_tail_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_1 = {
  (MR_String) "have_done_mutual_tail_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_mutual_tail_rec_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_mutual_tail_rec_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_mutual_tail_rec_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_mutual_tail_rec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_mutual_tail_rec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____have_we_done_mutual_tail_rec_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____have_we_done_mutual_tail_rec_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "have_we_done_mutual_tail_rec",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_mutual_tail_rec_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_mutual_tail_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_mutual_tail_rec_0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_0 = {
  (MR_String) "have_not_done_nontail_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_1 = {
  (MR_String) "have_done_nontail_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_nontail_rec_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_nontail_rec_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_nontail_rec_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_nontail_rec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_nontail_rec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____have_we_done_nontail_rec_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____have_we_done_nontail_rec_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "have_we_done_nontail_rec",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_nontail_rec_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_nontail_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_nontail_rec_0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_0 = {
  (MR_String) "have_not_done_self_tail_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_1 = {
  (MR_String) "have_done_self_tail_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_self_tail_rec_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_0,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_self_tail_rec_0[2] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_1,
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_have_we_done_self_tail_rec_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_self_tail_rec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_self_tail_rec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____have_we_done_self_tail_rec_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____have_we_done_self_tail_rec_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "have_we_done_self_tail_rec",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_have_we_done_self_tail_rec_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_have_we_done_self_tail_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_have_we_done_self_tail_rec_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_label_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____label_num_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____label_num_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "label_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_const_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_const_struct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0
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

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0 = {
  (MR_String) "ml_gen_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0[14] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_goal_warning_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0[14] = {
  (MR_String) "mgri_module_info",
  (MR_String) "mgri_pred_proc_id",
  (MR_String) "mgri_varset",
  (MR_String) "mgri_var_types",
  (MR_String) "mgri_high_level_data",
  (MR_String) "mgri_target",
  (MR_String) "mgri_gc",
  (MR_String) "mgri_det_copy_out",
  (MR_String) "mgri_nondet_copy_out",
  (MR_String) "mgri_const_struct_map",
  (MR_String) "mgri_var_lvals",
  (MR_String) "mgri_env_var_names",
  (MR_String) "mgri_disabled_warnings",
  (MR_String) "mgri_tail_rec_info"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0[14] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 7,
    (MR_Integer) 1
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
  (MR_Integer) 14,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_rare_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_rare_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_ml_gen_rare_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_rare_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_rare_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_rare_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_rare_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_rare_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_rare_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__stack__ti_stack_1ml_backend__ml_gen_info__type_ctor_info_success_cont_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0[5] = {
  (MR_String) "mgsi_byref_output_vars",
  (MR_String) "mgsi_label_counter",
  (MR_String) "mgsi_aux_var_counter",
  (MR_String) "mgsi_cond_var_counter",
  (MR_String) "mgsi_success_cont_stack"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0 = {
  (MR_String) "ml_gen_sub_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_sub_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_sub_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_sub_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_sub_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_sub_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_sub_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_sub_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_tscc_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_tscc_info_0_0[6] = {
  (MR_String) "mgti_func_label_counter",
  (MR_String) "mgti_label_counter",
  (MR_String) "mgti_aux_var_counter",
  (MR_String) "mgti_cond_var_counter",
  (MR_String) "mgti_conv_var_counter",
  (MR_String) "mgti_tail_rec_info"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0 = {
  (MR_String) "ml_gen_tscc_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_gen_tscc_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_ml_gen_tscc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_tscc_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_tscc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_gen_tscc_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_tscc_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_gen_tscc_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_tscc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_gen_tscc_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_gen_tscc_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_gen_tscc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_gen_tscc_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0 = {
  (MR_String) "ml_ground_term",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_ml_ground_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_ml_ground_term_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_ml_ground_term_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_ground_term",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_ml_ground_term_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_ml_ground_term_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_ml_ground_term_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "ml_ground_term_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_gen_info__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0 = {
  (MR_String) "success_cont",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_success_cont_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_success_cont_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_success_cont_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____success_cont_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____success_cont_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "success_cont",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_success_cont_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_success_cont_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_success_cont_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0,
  (MR_PseudoTypeInfo) &hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_info_0_0[6] = {
  (MR_String) "tri_target_map",
  (MR_String) "tri_tscc_kind",
  (MR_String) "tri_loop_kind",
  (MR_String) "tri_default_warn_params",
  (MR_String) "tri_proc_warn_params",
  (MR_String) "tri_msgs"
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0 = {
  (MR_String) "tail_rec_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tail_rec_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tail_rec_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tail_rec_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_info_0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_0 = {
  (MR_String) "tail_rec_loop_while_continue",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tail_rec_loop_kind_0_1 = {
  (MR_String) "tail_rec_loop_label_goto",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_tail_rec_loop_kind_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tail_rec_loop_kind",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tail_rec_loop_kind_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_tail_rec_loop_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_loop_kind_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_target_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_self_tail_rec_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_mutual_tail_rec_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_nontail_rec_0
};

static const MR_ConstString ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_target_info_0_0[5] = {
  (MR_String) "trti_id",
  (MR_String) "trti_input_args",
  (MR_String) "trti_done_self_tail_rec",
  (MR_String) "trti_done_mutual_tail_rec",
  (MR_String) "trti_done_nontail_rec"
};

static const MR_DuArgLocn ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_tail_rec_target_info_0_0[5] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_target_info_0_0 = {
  (MR_String) "tail_rec_target_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_types_tail_rec_target_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_names_tail_rec_target_info_0_0,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__field_locns_tail_rec_target_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_target_info_0_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_target_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_target_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_stag_ordered_tail_rec_target_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_target_info_0[1] = {
  &ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_functor_desc_tail_rec_target_info_0_0
};

static const MR_Integer ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_target_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tail_rec_target_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tail_rec_target_info_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tail_rec_target_info",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_name_ordered_tail_rec_target_info_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__du_ptag_ordered_tail_rec_target_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tail_rec_target_info_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tail_rec_target_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tail_rec_target_map_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tail_rec_target_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_0 = {
  (MR_String) "tscc_self_rec_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_functor_desc_tscc_kind_0_1 = {
  (MR_String) "tscc_self_and_mutual_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_tscc_kind_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_gen_info____Unify____tscc_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_gen_info____Compare____tscc_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_gen_info",
  (MR_String) "tscc_kind",
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_name_ordered_tscc_kind_0 },
  {     ml_backend__ml_gen_info__ml_backend__ml_gen_info__enum_value_ordered_tscc_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_gen_info__ml_backend__ml_gen_info__functor_number_map_tscc_kind_0
};

void MR_CALL 
ml_backend__ml_gen_info____Compare____tscc_kind_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tscc_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_target_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_target_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_target_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_14;
      MR_Integer Var_25 = (MR_Integer) ArgX1_4;
      MR_Integer Var_26 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, Var_25, Var_26);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[9], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;
          MR_Integer Var_27 = (MR_Integer) ArgX3_8;
          MR_Integer Var_28 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_27, Var_28);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;
            MR_Integer Var_29 = (MR_Integer) ArgX4_10;
            MR_Integer Var_30 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, Var_29, Var_30);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              MR_Integer Var_31 = (MR_Integer) ArgX5_12;
              MR_Integer Var_32 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_31, Var_32);
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_target_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Integer Var_17 = (MR_Integer) ArgX1_3;
      MR_Integer Var_18 = (MR_Integer) ArgY1_4;

      succeeded = (Var_17 == Var_18);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[9];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0(
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

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        ml_backend__mlds____Compare____mlds_rval_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0(
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[7];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0(
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

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        parse_tree__prog_data____Compare____mer_type_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0(
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
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0(
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

      mercury__counter____Compare____counter_0_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__counter____Compare____counter_0_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__counter____Compare____counter_0_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__counter____Compare____counter_0_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__counter____Compare____counter_0_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
                ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(HeadVar__1_1, ArgX6_14, ArgY6_15);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

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
                succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__counter____Compare____counter_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__counter____Compare____counter_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__counter____Compare____counter_0_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
              TypeInfo_19_19 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(
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
      MR_Word TypeInfo_35_35;
      MR_Word TypeCtorInfo_36_36;
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
      MR_Word ArgX5_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_35_35 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeCtorInfo_36_36 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_36_36, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
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
                        TypeInfo_37_37 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_38_38 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_39_39 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_40_40 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5];
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                                succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(ArgX14_29, ArgY14_30);
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

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], &Var_20, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        mercury__counter____Compare____counter_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__counter____Compare____counter_0_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;
            MR_Integer Var_37 = (MR_Integer) ArgX4_10;
            MR_Integer Var_38 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_23, Var_37, Var_38);
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2], &Var_24, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                ml_backend__ml_global_data____Compare____ml_global_data_0_0(&Var_25, ArgX6_14, ArgY6_15);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(&Var_26, ArgX7_16, ArgY7_17);
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                  {
                    MR_Integer CastX_53 = (MR_Integer) ArgX8_18;
                    MR_Integer CastY_54 = (MR_Integer) ArgY8_19;

                    succeeded = (CastX_53 == CastY_54);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                    {
                      MR_Word ArgX1_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_18, (MR_Integer) 0)));
                      MR_Word ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_19, (MR_Integer) 0)));
                      MR_Word ArgX2_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_18, (MR_Integer) 1)));
                      MR_Word ArgY2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_19, (MR_Integer) 1)));
                      MR_Word ArgX3_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_18, (MR_Integer) 2)));
                      MR_Word ArgY3_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_19, (MR_Integer) 2)));
                      MR_Word ArgX4_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_18, (MR_Integer) 3)));
                      MR_Word ArgY4_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_19, (MR_Integer) 3)));
                      MR_Word ArgX5_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_18, (MR_Integer) 4)));
                      MR_Word ArgY5_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_19, (MR_Integer) 4)));
                      MR_Word Var_49;

                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], &Var_49, ((MR_Box) (ArgX1_39)), ((MR_Box) (ArgY1_40)));
                      succeeded = (Var_49 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_49;
                      else
                      {
                        MR_Word Var_50;

                        mercury__counter____Compare____counter_0_0(&Var_50, ArgX2_41, ArgY2_42);
                        succeeded = (Var_50 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_50;
                        else
                        {
                          MR_Word Var_51;

                          mercury__counter____Compare____counter_0_0(&Var_51, ArgX3_43, ArgY3_44);
                          succeeded = (Var_51 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_51;
                          else
                          {
                            MR_Word Var_52;

                            mercury__counter____Compare____counter_0_0(&Var_52, ArgX4_45, ArgY4_46);
                            succeeded = (Var_52 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_52;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (ArgX5_47)), ((MR_Box) (ArgY5_48)));
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
      MR_Word ArgX5_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
      MR_Word ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word Var_32;

      hlds__hlds_module____Compare____module_info_0_0(&Var_32, ArgX1_4, ArgY1_5);
      succeeded = (Var_32 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_32;
      else
      {
        MR_Word Var_33;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_33, ArgX2_6, ArgY2_7);
        succeeded = (Var_33 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_33;
        else
        {
          MR_Word Var_34;

          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3], &Var_34, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_34 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_34;
          else
          {
            MR_Word Var_35;

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_35, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
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
                MR_Integer Var_63 = (MR_Integer) ArgX6_14;
                MR_Integer Var_64 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_63, Var_64);
                succeeded = (Var_37 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_37;
                else
                {
                  MR_Word Var_38;
                  MR_Integer Var_65 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_66 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_38, Var_65, Var_66);
                  succeeded = (Var_38 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_38;
                  else
                  {
                    MR_Word Var_39;
                    MR_Integer Var_67 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_68 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_39, Var_67, Var_68);
                    succeeded = (Var_39 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_39;
                    else
                    {
                      MR_Word Var_40;
                      MR_Integer Var_69 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_70 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_40, Var_69, Var_70);
                      succeeded = (Var_40 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_40;
                      else
                      {
                        MR_Word Var_41;

                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], &Var_41, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
                        succeeded = (Var_41 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_41;
                        else
                        {
                          MR_Word Var_42;

                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1], &Var_42, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_42 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_42;
                          else
                          {
                            MR_Word Var_43;

                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4], &Var_43, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_43 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_43;
                            else
                            {
                              MR_Word Var_44;

                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5], &Var_44, ((MR_Box) (ArgX13_28)), ((MR_Box) (ArgY13_29)));
                              succeeded = (Var_44 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_44;
                              else
                                ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(HeadVar__1_1, ArgX14_30, ArgY14_31);
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

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[4], &Var_16, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;
        MR_Integer Var_29 = (MR_Integer) ArgX2_6;
        MR_Integer Var_30 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, Var_29, Var_30);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;
          MR_Integer Var_31 = (MR_Integer) ArgX3_8;
          MR_Integer Var_32 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_18, Var_31, Var_32);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[8], HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
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
      MR_Integer CastX_54;
      MR_Integer CastY_55;
      MR_Integer CastX_74;
      MR_Integer CastY_75;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
              TypeInfo_24_24 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[2];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  CastX_54 = (MR_Integer) ArgX7_15;
                  CastY_55 = (MR_Integer) ArgY7_16;
                  succeeded = (CastX_54 == CastY_55);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word TypeInfo_35_58;
                    MR_Word TypeCtorInfo_36_59;
                    MR_Word TypeInfo_37_60;
                    MR_Word TypeInfo_38_61;
                    MR_Word TypeInfo_39_62;
                    MR_Word TypeInfo_40_63;
                    MR_Word ArgX1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 0)));
                    MR_Word ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 0)));
                    MR_Word ArgX2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 1)));
                    MR_Word ArgY2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 1)));
                    MR_Word ArgX3_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2)));
                    MR_Word ArgY3_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2)));
                    MR_Word ArgX4_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 3)));
                    MR_Word ArgY4_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 3)));
                    MR_Word ArgX5_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 4)))) & (MR_Integer) 1);
                    MR_Word ArgY5_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 4)))) & (MR_Integer) 1);
                    MR_Word ArgX6_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                    MR_Word ArgY6_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                    MR_Word ArgX7_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                    MR_Word ArgY7_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
                    MR_Word ArgX8_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                    MR_Word ArgY8_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                    MR_Word ArgX9_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                    MR_Word ArgY9_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                    MR_Word ArgX10_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 5)));
                    MR_Word ArgY10_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 5)));
                    MR_Word ArgX11_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 6)));
                    MR_Word ArgY11_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 6)));
                    MR_Word ArgX12_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 7)));
                    MR_Word ArgY12_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 7)));
                    MR_Word ArgX13_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 8)));
                    MR_Word ArgY13_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 8)));
                    MR_Word ArgX14_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 9)));
                    MR_Word ArgY14_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 9)));

                    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_26, ArgY1_27);
                    if (succeeded)
                    {
                      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_28, ArgY2_29);
                      if (succeeded)
                      {
                        TypeInfo_35_58 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[3];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_58, ((MR_Box) (ArgX3_30)), ((MR_Box) (ArgY3_31)));
                        if (succeeded)
                        {
                          TypeCtorInfo_36_59 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
                          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_36_59, ((MR_Box) (ArgX4_32)), ((MR_Box) (ArgY4_33)));
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
                                      TypeInfo_37_60 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2];
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_60, ((MR_Box) (ArgX10_44)), ((MR_Box) (ArgY10_45)));
                                      if (succeeded)
                                      {
                                        TypeInfo_38_61 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_2[1];
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_61, ((MR_Box) (ArgX11_46)), ((MR_Box) (ArgY11_47)));
                                        if (succeeded)
                                        {
                                          TypeInfo_39_62 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[4];
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_62, ((MR_Box) (ArgX12_48)), ((MR_Box) (ArgY12_49)));
                                          if (succeeded)
                                          {
                                            TypeInfo_40_63 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[5];
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_63, ((MR_Box) (ArgX13_50)), ((MR_Box) (ArgY13_51)));
                                            if (succeeded)
                                              succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(ArgX14_52, ArgY14_53);
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
                    CastX_74 = (MR_Integer) ArgX8_17;
                    CastY_75 = (MR_Integer) ArgY8_18;
                    succeeded = (CastX_74 == CastY_75);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word TypeInfo_19_80;
                      MR_Word ArgX1_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 0)));
                      MR_Word ArgY1_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 0)));
                      MR_Word ArgX2_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 1)));
                      MR_Word ArgY2_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 1)));
                      MR_Word ArgX3_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 2)));
                      MR_Word ArgY3_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 2)));
                      MR_Word ArgX4_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 3)));
                      MR_Word ArgY4_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 3)));
                      MR_Word ArgX5_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4)));
                      MR_Word ArgY5_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4)));

                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[1], ((MR_Box) (ArgX1_64)), ((MR_Box) (ArgY1_65)));
                      if (succeeded)
                      {
                        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_66, ArgY2_67);
                        if (succeeded)
                        {
                          succeeded = mercury__counter____Unify____counter_0_0(ArgX3_68, ArgY3_69);
                          if (succeeded)
                          {
                            succeeded = mercury__counter____Unify____counter_0_0(ArgX4_70, ArgY4_71);
                            if (succeeded)
                            {
                              TypeInfo_19_80 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[6];
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_80, ((MR_Box) (ArgX5_72)), ((MR_Box) (ArgY5_73)));
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(
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
      MR_Word TypeInfo_20_20;
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[4], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[8];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_self_tail_rec_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_self_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_nontail_rec_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_nontail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_mutual_tail_rec_0_0(
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

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_mutual_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;
    MR_Word SubInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 4)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_10));
    if (succeeded)
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
    else
    {
      MR_Word SubInfo_7;
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 1)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 2)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 3)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 4)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_6, (MR_Integer) 0)));
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;

      {
        SubInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SubInfo_7, 0) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), SubInfo_7, 1) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), SubInfo_7, 2) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), SubInfo_7, 3) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), SubInfo_7, 4) = ((MR_Box) (Var_27));
      }
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_7));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word RareInfo_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));

    {
      RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_7, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), RareInfo_7, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), RareInfo_7, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), RareInfo_7, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), RareInfo_7, 4) = ((MR_Box) ((Var_22 | ((((Var_23 << (MR_Integer) 1)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 6)) | ((Var_26 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_7, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), RareInfo_7, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), RareInfo_7, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), RareInfo_7, 8) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), RareInfo_7, 9) = ((MR_Box) (X_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word RareInfo_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));

    {
      RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_7, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), RareInfo_7, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), RareInfo_7, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), RareInfo_7, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), RareInfo_7, 4) = ((MR_Box) ((Var_22 | ((((Var_23 << (MR_Integer) 1)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 6)) | ((Var_26 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_7, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), RareInfo_7, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), RareInfo_7, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), RareInfo_7, 8) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), RareInfo_7, 9) = ((MR_Box) (Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word RareInfo_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));

    {
      RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_7, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), RareInfo_7, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), RareInfo_7, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), RareInfo_7, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), RareInfo_7, 4) = ((MR_Box) ((Var_22 | ((((Var_23 << (MR_Integer) 1)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 6)) | ((Var_26 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_7, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), RareInfo_7, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), RareInfo_7, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), RareInfo_7, 8) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), RareInfo_7, 9) = ((MR_Box) (Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word RareInfo_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));

    {
      RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_7, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), RareInfo_7, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), RareInfo_7, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), RareInfo_7, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), RareInfo_7, 4) = ((MR_Box) ((Var_22 | ((((Var_23 << (MR_Integer) 1)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 6)) | ((Var_26 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_7, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), RareInfo_7, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), RareInfo_7, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), RareInfo_7, 8) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), RareInfo_7, 9) = ((MR_Box) (Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word RareInfo_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));

    {
      RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_7, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), RareInfo_7, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), RareInfo_7, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), RareInfo_7, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), RareInfo_7, 4) = ((MR_Box) ((Var_22 | ((((Var_23 << (MR_Integer) 1)) | ((((Var_24 << (MR_Integer) 3)) | ((((Var_25 << (MR_Integer) 6)) | ((Var_26 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_7, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), RareInfo_7, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), RareInfo_7, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), RareInfo_7, 8) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), RareInfo_7, 9) = ((MR_Box) (Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    succeeded = (X_4 == Var_24);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_23));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_det_copy_out_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(
  MR_Word Info_6,
  MR_Word * EnvVarNames_7,
  MR_Word * ClosureWrapperDefns_8,
  MR_Word * GlobalData_9,
  MR_Word * TsccInfo_10)
{
  {
    MR_Word FuncLabelCounter_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    MR_Word ConvVarCounter_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Word RareInfo_15;
    MR_Word SubInfo_16;
    MR_Word TailRecInfo_29;
    MR_Word LabelCounter_31;
    MR_Word AuxVarCounter_32;
    MR_Word CondVarCounter_33;
    MR_Word _ConstVarMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_Word _UsedSucceededVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    MR_Word _ModuleInfo_17;
    MR_Word _PredProcId_18;
    MR_Word _VarSet_19;
    MR_Word _VarTypes_20;
    MR_Word _HighLevelData_21;
    MR_Word _Target_22;
    MR_Word _GC_23;
    MR_Word _DetCopyOut_24;
    MR_Word _NondetCopyOut_25;
    MR_Word _ConstStructMap_26;
    MR_Word _VarLvals_27;
    MR_Word _DisabledWarnings_28;
    MR_Word _ByRefOutputVars_30;
    MR_Word _SuccContStack_34;

    *ClosureWrapperDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    *GlobalData_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
    RareInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
    SubInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
    _ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 0)));
    _PredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 1)));
    _VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 2)));
    _VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 3)));
    _HighLevelData_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 4)))) & (MR_Integer) 1);
    _Target_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    _GC_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    _DetCopyOut_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    _NondetCopyOut_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    _ConstStructMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 5)));
    _VarLvals_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 6)));
    *EnvVarNames_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 7)));
    _DisabledWarnings_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 8)));
    TailRecInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo_15, (MR_Integer) 9)));
    _ByRefOutputVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo_16, (MR_Integer) 0)));
    LabelCounter_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo_16, (MR_Integer) 1)));
    AuxVarCounter_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo_16, (MR_Integer) 2)));
    CondVarCounter_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo_16, (MR_Integer) 3)));
    _SuccContStack_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo_16, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *TsccInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncLabelCounter_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LabelCounter_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AuxVarCounter_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CondVarCounter_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ConvVarCounter_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TailRecInfo_29));
    }
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
  {
    MR_Word Info_16;
    MR_Word TypeInfo_51_51;
    MR_Word Globals_17;
    MR_Word HighLevelData_18;
    MR_Word GC_19;
    MR_Word DetCopyOut_20;
    MR_Word NondetCopyOut_21;
    MR_Word VarSet_22;
    MR_Word VarTypes_23;
    MR_Word FuncLabelCounter_25;
    MR_Word LabelCounter_26;
    MR_Word AuxVarCounter_27;
    MR_Word CondVarCounter_28;
    MR_Word ConvVarCounter_29;
    MR_Word TailRecInfo0_30;
    MR_Word TailRecTargetMap_31;
    MR_Word TsccKind_32;
    MR_Word LoopKind_33;
    MR_Word DefaultWarnParams_34;
    MR_Word Specs0_36;
    MR_Word ProcWarnParams_37;
    MR_Word TailRecInfo_38;
    MR_Word ConstVarMap_39;
    MR_Word SuccContStack_40;
    MR_Word VarLvals_41;
    MR_Word EnvVarNames_43;
    MR_Word DisabledWarnings_44;
    MR_Word RareInfo_46;
    MR_Word SubInfo_47;
    MR_Word Var_35;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 265, &HighLevelData_18);
    libs__globals__get_gc_method_2_p_0(Globals_17, &GC_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 266, &DetCopyOut_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 267, &NondetCopyOut_21);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_13, &VarSet_22);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_13, &VarTypes_23);
    FuncLabelCounter_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_15, (MR_Integer) 0)));
    LabelCounter_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_15, (MR_Integer) 1)));
    AuxVarCounter_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_15, (MR_Integer) 2)));
    CondVarCounter_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_15, (MR_Integer) 3)));
    ConvVarCounter_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_15, (MR_Integer) 4)));
    TailRecInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), TsccInfo_15, (MR_Integer) 5)));
    TailRecTargetMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_30, (MR_Integer) 0)));
    TsccKind_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_30, (MR_Integer) 1)));
    LoopKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_30, (MR_Integer) 2)));
    DefaultWarnParams_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_30, (MR_Integer) 3)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_30, (MR_Integer) 4)));
    Specs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_30, (MR_Integer) 5)));
    hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(ProcInfo_13, DefaultWarnParams_34, &ProcWarnParams_37);
    {
      TailRecInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TailRecInfo_38, 0) = ((MR_Box) (TailRecTargetMap_31));
      MR_hl_field(MR_mktag(0), TailRecInfo_38, 1) = ((MR_Box) (TsccKind_32));
      MR_hl_field(MR_mktag(0), TailRecInfo_38, 2) = ((MR_Box) (LoopKind_33));
      MR_hl_field(MR_mktag(0), TailRecInfo_38, 3) = ((MR_Box) (DefaultWarnParams_34));
      MR_hl_field(MR_mktag(0), TailRecInfo_38, 4) = ((MR_Box) (ProcWarnParams_37));
      MR_hl_field(MR_mktag(0), TailRecInfo_38, 5) = ((MR_Box) (Specs0_36));
    }
    TypeInfo_51_51 = (MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0];
    mercury__map__init_1_p_0(TypeInfo_51_51, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, &ConstVarMap_39);
    mercury__stack__init_1_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, &SuccContStack_40);
    mercury__map__init_1_p_0(TypeInfo_51_51, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, &VarLvals_41);
    mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &EnvVarNames_43);
    mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, &DisabledWarnings_44);
    {
      RareInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_46, 0) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), RareInfo_46, 1) = ((MR_Box) (PredProcId_12));
      MR_hl_field(MR_mktag(0), RareInfo_46, 2) = ((MR_Box) (VarSet_22));
      MR_hl_field(MR_mktag(0), RareInfo_46, 3) = ((MR_Box) (VarTypes_23));
      MR_hl_field(MR_mktag(0), RareInfo_46, 4) = ((MR_Box) ((HighLevelData_18 | ((((Target_10 << (MR_Integer) 1)) | ((((GC_19 << (MR_Integer) 3)) | ((((DetCopyOut_20 << (MR_Integer) 6)) | ((NondetCopyOut_21 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_46, 5) = ((MR_Box) (ConstStructMap_11));
      MR_hl_field(MR_mktag(0), RareInfo_46, 6) = ((MR_Box) (VarLvals_41));
      MR_hl_field(MR_mktag(0), RareInfo_46, 7) = ((MR_Box) (EnvVarNames_43));
      MR_hl_field(MR_mktag(0), RareInfo_46, 8) = ((MR_Box) (DisabledWarnings_44));
      MR_hl_field(MR_mktag(0), RareInfo_46, 9) = ((MR_Box) (TailRecInfo_38));
    }
    {
      SubInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SubInfo_47, 1) = ((MR_Box) (LabelCounter_26));
      MR_hl_field(MR_mktag(0), SubInfo_47, 2) = ((MR_Box) (AuxVarCounter_27));
      MR_hl_field(MR_mktag(0), SubInfo_47, 3) = ((MR_Box) (CondVarCounter_28));
      MR_hl_field(MR_mktag(0), SubInfo_47, 4) = ((MR_Box) (SuccContStack_40));
    }
    {
      Info_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_16, 0) = ((MR_Box) (ConstVarMap_39));
      MR_hl_field(MR_mktag(0), Info_16, 1) = ((MR_Box) (FuncLabelCounter_25));
      MR_hl_field(MR_mktag(0), Info_16, 2) = ((MR_Box) (ConvVarCounter_29));
      MR_hl_field(MR_mktag(0), Info_16, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_16, 5) = ((MR_Box) (GlobalData_14));
      MR_hl_field(MR_mktag(0), Info_16, 6) = ((MR_Box) (RareInfo_46));
      MR_hl_field(MR_mktag(0), Info_16, 7) = ((MR_Box) (SubInfo_47));
    }
    return Info_16;
  }
}

MR_Word MR_CALL 
ml_backend__ml_gen_info__init_ml_gen_tscc_info_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word TailRecTargetMap_6,
  MR_Word TsccKind_7)
{
  {
    MR_bool succeeded;
    MR_Word TsccInfo_8;
    MR_Word FuncLabelCounter_9;
    MR_Word LabelCounter_10;
    MR_Word AuxVarCounter_11;
    MR_Word CondVarCounter_12;
    MR_Word ConvVarCounter_13;
    MR_Word Globals_14;
    MR_Word SupportsBreakContinue_15;
    MR_Word PreferBreakContinueOption_16;
    MR_Word PreferBreakContinue_17;
    MR_Word LoopKind_18;
    MR_Word DefaultWarnParams_19;
    MR_Word TailRecInfo_21;

    mercury__counter__init_2_p_0((MR_Integer) 1, &FuncLabelCounter_9);
    mercury__counter__init_2_p_0((MR_Integer) 0, &LabelCounter_10);
    mercury__counter__init_2_p_0((MR_Integer) 0, &AuxVarCounter_11);
    mercury__counter__init_2_p_0((MR_Integer) 0, &CondVarCounter_12);
    mercury__counter__init_2_p_0((MR_Integer) 0, &ConvVarCounter_13);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_14);
    SupportsBreakContinue_15 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(Globals_14);
    switch (TsccKind_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PreferBreakContinueOption_16 = (MR_Integer) 327;
        break;
      case (MR_Integer) 0:
        PreferBreakContinueOption_16 = (MR_Integer) 326;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_14, PreferBreakContinueOption_16, &PreferBreakContinue_17);
    succeeded = (SupportsBreakContinue_15 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (PreferBreakContinue_17 == (MR_Integer) 1);
    if (succeeded)
      LoopKind_18 = (MR_Integer) 0;
    else
      LoopKind_18 = (MR_Integer) 1;
    hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_14, &DefaultWarnParams_19);
    {
      TailRecInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TailRecInfo_21, 0) = ((MR_Box) (TailRecTargetMap_6));
      MR_hl_field(MR_mktag(0), TailRecInfo_21, 1) = ((MR_Box) (TsccKind_7));
      MR_hl_field(MR_mktag(0), TailRecInfo_21, 2) = ((MR_Box) (LoopKind_18));
      MR_hl_field(MR_mktag(0), TailRecInfo_21, 3) = ((MR_Box) (DefaultWarnParams_19));
      MR_hl_field(MR_mktag(0), TailRecInfo_21, 4) = ((MR_Box) (DefaultWarnParams_19));
      MR_hl_field(MR_mktag(0), TailRecInfo_21, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      TsccInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TsccInfo_8, 0) = ((MR_Box) (FuncLabelCounter_9));
      MR_hl_field(MR_mktag(0), TsccInfo_8, 1) = ((MR_Box) (LabelCounter_10));
      MR_hl_field(MR_mktag(0), TsccInfo_8, 2) = ((MR_Box) (AuxVarCounter_11));
      MR_hl_field(MR_mktag(0), TsccInfo_8, 3) = ((MR_Box) (CondVarCounter_12));
      MR_hl_field(MR_mktag(0), TsccInfo_8, 4) = ((MR_Box) (ConvVarCounter_13));
      MR_hl_field(MR_mktag(0), TsccInfo_8, 5) = ((MR_Box) (TailRecInfo_21));
    }
    return TsccInfo_8;
  }
}

MR_String MR_CALL 
ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(
  MR_Word TsccKind_4,
  MR_Word Id_5)
{
  {
    MR_String Label_6;

    switch (TsccKind_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer IdNum_7 = (MR_Integer) Id_5;
          MR_String Var_12;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_3[0], IdNum_7, &Var_12);
          Label_6 = mercury__string__f_43_43_2_f_0((MR_String) "top_of_proc_", Var_12);
        }
        break;
      case (MR_Integer) 0:
        Label_6 = (MR_String) "top_of_proc";
        break;
    }
    return Label_6;
  }
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
        MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
        MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
        MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
        MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
        MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
        MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
        MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
        MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
        MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
        MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
        MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
        MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
        MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;

        *CopyOut_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7)));
        Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
        MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
        MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
        MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
        MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
        MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
        MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
        MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
        MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0)));
        MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1)));
        MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 2)));
        MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 3)));
        MR_Word Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;

        *CopyOut_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 5)));
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 6)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 7)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 8)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 9)));
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
  {
    MR_Word EnvVarNames0_6;
    MR_Word EnvVarNames_7;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word RareInfo0_39;
    MR_Word RareInfo_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3)));
    MR_Word Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 5)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 6)));
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_60;

    EnvVarNames0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 7)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 8)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 9)));
    mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Name_4)), EnvVarNames0_6, &EnvVarNames_7);
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    RareInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 0)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 1)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 2)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 3)));
    Var_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 5)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 6)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 7)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 8)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_39, (MR_Integer) 9)));
    {
      RareInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RareInfo_40, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), RareInfo_40, 1) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), RareInfo_40, 2) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), RareInfo_40, 3) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), RareInfo_40, 4) = ((MR_Box) ((Var_53 | ((((Var_54 << (MR_Integer) 1)) | ((((Var_55 << (MR_Integer) 3)) | ((((Var_56 << (MR_Integer) 6)) | ((Var_57 << (MR_Integer) 7)))))))))));
      MR_hl_field(MR_mktag(0), RareInfo_40, 5) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), RareInfo_40, 6) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), RareInfo_40, 7) = ((MR_Box) (EnvVarNames_7));
      MR_hl_field(MR_mktag(0), RareInfo_40, 8) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), RareInfo_40, 9) = ((MR_Box) (Var_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_48));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(
  MR_Word ClosureWrapperDefn_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word ClosureWrapperDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word ClosureWrapperDefns_7;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

    {
      ClosureWrapperDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClosureWrapperDefns_7, 0) = ((MR_Box) (ClosureWrapperDefn_4));
      MR_hl_field(MR_mktag(1), ClosureWrapperDefns_7, 1) = ((MR_Box) (ClosureWrapperDefns0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ClosureWrapperDefns_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word VarLvals0_8;
    MR_Word VarLvals_9;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)));
    MR_Word Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 5)));
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    VarLvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 6)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 7)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 8)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 9)));
    mercury__map__set_4_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ((MR_Box) (Var_5)), ((MR_Box) (Lval_6)), VarLvals0_8, &VarLvals_9);
    ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(VarLvals_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;
    MR_Word RareInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_10));
    if (succeeded)
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
    else
    {
      MR_Word RareInfo_7;
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 0)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 1)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 2)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 3)));
      MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
      MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 5)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 7)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 8)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 9)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), RareInfo0_6, (MR_Integer) 6)));
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_52;

      {
        RareInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RareInfo_7, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), RareInfo_7, 1) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), RareInfo_7, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), RareInfo_7, 3) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), RareInfo_7, 4) = ((MR_Box) ((Var_36 | ((((Var_37 << (MR_Integer) 1)) | ((((Var_38 << (MR_Integer) 3)) | ((((Var_39 << (MR_Integer) 6)) | ((Var_40 << (MR_Integer) 7)))))))))));
        MR_hl_field(MR_mktag(0), RareInfo_7, 5) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), RareInfo_7, 6) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), RareInfo_7, 7) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), RareInfo_7, 8) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), RareInfo_7, 9) = ((MR_Box) (Var_45));
      }
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (RareInfo_7));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(
  MR_Word Info_3,
  MR_Word * SuccCont_4)
{
  {
    MR_Word Stack_5;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    MR_Box conv0_SuccCont_4;

    Stack_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    mercury__stack__det_top_2_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, Stack_5, &conv0_SuccCont_4);
    *SuccCont_4 = ((MR_Word) conv0_SuccCont_4);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_Word Stack0_4;
    MR_Word Stack_6;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    MR_Word SubInfo0_29;
    MR_Word SubInfo_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3)));
    MR_Word _SuccCont_5;
    MR_Box conv0__SuccCont_5;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    Stack0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4)));
    mercury__stack__det_pop_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, &conv0__SuccCont_5, Stack0_4, &Stack_6);
    _SuccCont_5 = ((MR_Word) conv0__SuccCont_5);
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
    SubInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 0)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 1)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 2)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 3)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 4)));
    {
      SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_30, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), SubInfo_30, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), SubInfo_30, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), SubInfo_30, 3) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), SubInfo_30, 4) = ((MR_Box) (Stack_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_30));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(
  MR_Word SuccCont_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Stack0_6;
    MR_Word Stack_7;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word SubInfo0_30;
    MR_Word SubInfo_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3)));
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    Stack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)));
    mercury__stack__push_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0, ((MR_Box) (SuccCont_4)), Stack0_6, &Stack_7);
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    SubInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_30, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_30, (MR_Integer) 1)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_30, (MR_Integer) 2)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_30, (MR_Integer) 3)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_30, (MR_Integer) 4)));
    {
      SubInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_31, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), SubInfo_31, 1) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), SubInfo_31, 2) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), SubInfo_31, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), SubInfo_31, 4) = ((MR_Box) (Stack_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_31));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * GroundTerm_6)
{
  {
    MR_bool succeeded;
    MR_Word ConstVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
    MR_Box conv0_GroundTerm_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstVarMap_7, ((MR_Box) (Var_5)), &conv0_GroundTerm_6);
    if (succeeded)
    {
      *GroundTerm_6 = ((MR_Word) conv0_GroundTerm_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * GroundTerm_6)
{
  {
    MR_Word ConstVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
    MR_Box conv0_GroundTerm_6;

    mercury__map__lookup_3_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstVarMap_7, ((MR_Box) (Var_5)), &conv0_GroundTerm_6);
    *GroundTerm_6 = ((MR_Word) conv0_GroundTerm_6);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(
  MR_Word Var_5,
  MR_Word GroundTerm_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word ConstVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word ConstVarMap_9;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));

    mercury__map__set_4_p_0((MR_Word) &ml_backend__ml_gen_info_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_5)), ((MR_Box) (GroundTerm_6)), ConstVarMap0_8, &ConstVarMap_9);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ConstVarMap_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Integer ConvNum_4;
    MR_Word ConvCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word ConvCounter_7;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_27;

    mercury__counter__allocate_3_p_0(&ConvNum_4, ConvCounter0_6, &ConvCounter_7);
    *HeadVar__1_1 = (MR_Word) ConvNum_4;
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConvCounter_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_32));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Integer CondNum_4;
    MR_Word CondCounter0_6;
    MR_Word CondCounter_7;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word SubInfo0_29;
    MR_Word SubInfo_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2)));
    MR_Word Var_24;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_42;

    CondCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4)));
    mercury__counter__allocate_3_p_0(&CondNum_4, CondCounter0_6, &CondCounter_7);
    *HeadVar__1_1 = (MR_Word) CondNum_4;
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    SubInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 0)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 1)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 2)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 3)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 4)));
    {
      SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_30, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), SubInfo_30, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), SubInfo_30, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), SubInfo_30, 3) = ((MR_Box) (CondCounter_7));
      MR_hl_field(MR_mktag(0), SubInfo_30, 4) = ((MR_Box) (Var_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_30));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0(
  MR_Word AuxVar_5,
  MR_Word * VarName_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word AuxVarCounter0_8;
    MR_Integer AuxVarNum_9;
    MR_Word AuxVarCounter_10;
    MR_Word Var_14;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    MR_Word SubInfo0_33;
    MR_Word SubInfo_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_45;

    AuxVarCounter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 3)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4)));
    mercury__counter__allocate_3_p_0(&AuxVarNum_9, AuxVarCounter0_8, &AuxVarCounter_10);
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    SubInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_33, (MR_Integer) 0)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_33, (MR_Integer) 1)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_33, (MR_Integer) 2)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_33, (MR_Integer) 3)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_33, (MR_Integer) 4)));
    {
      SubInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_34, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), SubInfo_34, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), SubInfo_34, 2) = ((MR_Box) (AuxVarCounter_10));
      MR_hl_field(MR_mktag(0), SubInfo_34, 3) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), SubInfo_34, 4) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_34));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (AuxVar_5));
      MR_hl_field(MR_mktag(3), Var_14, 2) = ((MR_Box) (AuxVarNum_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *VarName_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_14));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word FuncLabelCounter0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Integer FuncLabel_5;
    MR_Word FuncLabelCounter_7;
    MR_Integer Var_10;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_6;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_28;

    mercury__counter__allocate_3_p_0(&FuncLabel_5, FuncLabelCounter0_4, &Var_6);
    Var_10 = (FuncLabel_5 + (MR_Integer) 10000);
    FuncLabelCounter_7 = mercury__counter__init_1_f_0(Var_10);
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncLabelCounter_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_aux_func_id_3_p_0(
  MR_Word * MaybeAux_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    MR_Integer Num_7;
    MR_Word Counter_8;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_27;

    mercury__counter__allocate_3_p_0(&Num_7, Counter0_6, &Counter_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAux_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Num_7));
    }
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Counter_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_33));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(
  MR_Integer * Label_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Counter0_6;
    MR_Word Counter_7;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word SubInfo0_29;
    MR_Word SubInfo_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_40;

    Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4)));
    mercury__counter__allocate_3_p_0(Label_4, Counter0_6, &Counter_7);
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    SubInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 0)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 1)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 2)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 3)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfo0_29, (MR_Integer) 4)));
    {
      SubInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_30, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), SubInfo_30, 1) = ((MR_Box) (Counter_7));
      MR_hl_field(MR_mktag(0), SubInfo_30, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), SubInfo_30, 3) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), SubInfo_30, 4) = ((MR_Box) (Var_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_30));
    }
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_p_0(
  MR_Word Info_3,
  MR_Word * PutCommitInNestedFunc_4)
{
  {
    MR_Word Globals_5;
    MR_Word ModuleInfo_9;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 3)));
    Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 5)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 6)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 7)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 8)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 9)));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 268, PutCommitInNestedFunc_4);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(
  MR_Word Info_3,
  MR_Word * ModuleName_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 8)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 9)));
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, ModuleName_4);
  }
}

void MR_CALL 
ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(
  MR_Word Info_3,
  MR_Word * Globals_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 8)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 9)));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, Globals_4);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____cond_seq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____cond_seq_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____cond_seq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____cond_seq_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____conv_seq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____conv_seq_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____conv_seq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____conv_seq_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_mutual_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____have_we_done_mutual_tail_rec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_mutual_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____have_we_done_mutual_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_nontail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____have_we_done_nontail_rec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_nontail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____have_we_done_nontail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____have_we_done_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____have_we_done_self_tail_rec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____have_we_done_self_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____have_we_done_self_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____label_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____label_num_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____label_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____label_num_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_const_struct_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_const_struct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_gen_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_gen_rare_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_gen_rare_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_gen_sub_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_gen_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_gen_tscc_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_gen_tscc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_ground_term_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____ml_ground_term_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____ml_ground_term_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____success_cont_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____success_cont_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____success_cont_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____success_cont_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____tail_rec_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____tail_rec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____tail_rec_loop_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____tail_rec_loop_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_target_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____tail_rec_target_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_target_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____tail_rec_target_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tail_rec_target_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____tail_rec_target_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tail_rec_target_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____tail_rec_target_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_gen_info____Unify____tscc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____tscc_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_gen_info____Compare____tscc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_gen_info____Compare____tscc_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_gen_info__init(void)
{
}

void mercury__ml_backend__ml_gen_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_cond_seq_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_conv_seq_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_mutual_tail_rec_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_nontail_rec_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_have_we_done_self_tail_rec_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_label_num_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_const_struct_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_rare_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_sub_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_success_cont_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_map_0);
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
