/*
** Automatically generated from `mode_errors.m'
** by the Mercury compiler,
** version rotd-2019-04-10
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


// :- module check_hlds.mode_errors.
// :- implementation.

/*
INIT mercury__check_hlds__mode_errors__init
ENDINIT
*/

#include "check_hlds.mode_errors.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.error_msg_inst.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_errors__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_errors__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_delayed_goal_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_delayed_goal_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_delayed_goal_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_delayed_goal_0[1];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_delayed_goal_0[1];

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2;

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_final_inst_error_0[3];

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_final_inst_error_0[3];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_final_inst_error_0[3];

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_include_detism_on_modes_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_include_detism_on_modes_0[2];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_include_detism_on_modes_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_maybe_report_is_ground_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_maybe_report_is_ground_0[2];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_maybe_report_is_ground_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_2;

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_merge_context_0[3];

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_merge_context_0[3];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_merge_context_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_errors__pair__ti_pair_2term__type_ctor_info_context_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_merge_error_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_merge_error_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_merge_error_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_merge_error_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_merge_error_0[1];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_merge_error_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_0[2];

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_1;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_2[4];

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_2[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_2;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_3[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_3;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_4[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_4;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__maybe__ti_maybe_1check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_5[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_5;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_6[4];

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_6[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_6;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_7[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_7;

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_8;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_9[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_9;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_10[5];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_10;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_11[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_11;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_12[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_12;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_13[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_13;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_14[5];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_14;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_15[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_15;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_16[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_16;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_17[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_17;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_18[5];

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_18[5];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_18;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_19[2];

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_19[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_19;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_20[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_20;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_3[18];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_0[4];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_0[21];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_0[21];

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_info_0[1];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_info_0[1];

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_1[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_from_to_insts_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_2[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_2[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_unify_rhs_0[3];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_unify_rhs_0[3];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_unify_rhs_0[3];

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_0[4];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_1[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_1;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_2[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_2;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_2[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_warning_0[3];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_warning_0[3];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_warning_0[3];

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_warning_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_warning_info_0[1];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_warning_info_0[1];

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_negated_context_desc_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_negated_context_desc_0[2];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_negated_context_desc_0[2];

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_pred_var_multimode_pred_error_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_pred_var_multimode_pred_error_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_pred_var_multimode_pred_error_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_pred_var_multimode_pred_error_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_pred_var_multimode_pred_error_0[1];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_pred_var_multimode_pred_error_0[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_schedule_culprit_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1;

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_1[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_schedule_culprit_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_schedule_culprit_0[3];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_schedule_culprit_0[3];

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_1;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_2[1];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_2;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_2[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_var_multimode_pred_error_0[3];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_var_multimode_pred_error_0[3];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_var_multimode_pred_error_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_write_indented_goal_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_write_indented_goal_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_write_indented_goal_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_write_indented_goal_0[1];

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_write_indented_goal_0[1];

static MR_bool MR_CALL 
check_hlds__mode_errors__IntroducedFrom__pred__named_and_unnamed_vars_to_pieces__1447__1_3_p_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_17,
  MR_String * HeadVar__3_18);

static MR_bool MR_CALL 
check_hlds__mode_errors__IntroducedFrom__pred__mode_error_no_matching_mode_to_spec__1040__1_2_p_0(
  MR_Integer NumVars_9,
  MR_Integer NumInsts_10);

static MR_Word MR_CALL 
check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__458__1_1_f_0(
  MR_Word LambdaHeadVar__1_48);

static void MR_CALL 
check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__mode_errors____Compare____write_indented_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____write_indented_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____maybe_report_is_ground_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____maybe_report_is_ground_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__mode_errors__report_inst_in_context_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word VarNamePiece_7,
  MR_Word ReportIsGround_8,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
check_hlds__mode_errors__report_inst_in_branch_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word IntroPieces_6,
  MR_Word Inst_7);

static MR_Box MR_CALL 
check_hlds__mode_errors__merge_error_to_msgs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_errors__merge_error_to_msgs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_errors__merge_error_to_msgs_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word MainContext_7,
  MR_Word IsDisjunctive_8,
  MR_Word MergeError_9);

static void MR_CALL 
check_hlds__mode_errors__count_ground_insts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumGroundInsts_0_3,
  MR_Integer * STATE_VARIABLE_NumGroundInsts_4,
  MR_Integer STATE_VARIABLE_NumAllInsts_0_5,
  MR_Integer * STATE_VARIABLE_NumAllInsts_6);

static MR_bool MR_CALL 
check_hlds__mode_errors__is_error_important_1_p_0(
  MR_Word Error_2);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_warning_cannot_succeed_var_functor_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word X_7,
  MR_Word InstX_8,
  MR_Word ConsId_9);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word InstX_10,
  MR_Word InstY_11);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word ModeError_5);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_in_callee_to_spec_6_f_0(
  MR_Word STATE_VARIABLE_ModeInfo_0_50,
  MR_Word Vars_9,
  MR_Word Insts_10,
  MR_Word CalleePredId_11,
  MR_Integer CalleeProcId_12,
  MR_Word CalleeModeErrors_13);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_f_0(
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word DelayedGoal_7);

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Errors_6,
  MR_Word Culprit_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word Vars_5);

static MR_Word MR_CALL 
check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_f_0(
  MR_Word NegCtxtDesc_5,
  MR_Word ModeInfo_6,
  MR_Word Var_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_final_inst_to_spec_6_f_0(
  MR_Word ModeInfo_8,
  MR_Integer ArgNum_9,
  MR_Word Var_10,
  MR_Word VarInst_11,
  MR_Word ExpInst_12,
  MR_Word Reason_13);

static MR_Word MR_CALL 
check_hlds__mode_errors__report_inst_6_f_0(
  MR_Word ModeInfo_8,
  MR_Word ShortInstQF_9,
  MR_Word ShortInstSuffix_10,
  MR_Word LongInstPrefix_11,
  MR_Word LongInstSuffix_12,
  MR_Word Inst0_13);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_f_0(
  MR_Word ModeInfo_8,
  MR_Word X_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word InstX_12,
  MR_Word ArgInsts_13);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word X_7,
  MR_Word InstX_8,
  MR_Word InstY_9);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word InstX_10,
  MR_Word InstY_11);

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word X_8,
  MR_Word RHS_9,
  MR_Word Type_10,
  MR_Word PredOrFunc_11);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word Var_7,
  MR_Word VarInst_8,
  MR_Word Inst_9);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_var_has_inst_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word Var_8,
  MR_Word VarInst_9,
  MR_Word Inst_10,
  MR_Word MaybeMultiModeError_11);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word X_7,
  MR_Word PredId_8,
  MR_Word MultiModeError_9);

static MR_bool MR_CALL 
check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Vars_5);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Var_6,
  MR_Word VarInst_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word PredOrFunc_8,
  MR_Word Var_9,
  MR_Word VarInst_10,
  MR_Integer Arity_11);

static MR_bool MR_CALL 
check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Vars_6,
  MR_Word Insts_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__arg_inst_mismatch_pieces_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word ArgPieces_8,
  MR_Word PredOrFunc_9,
  MR_Word Vars_10,
  MR_Word Insts_11);

static MR_Word MR_CALL 
check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Var_6,
  MR_Word VarInst_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_bind_var_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word Reason_8,
  MR_Word Var_9,
  MR_Word VarInst_10,
  MR_Word Inst_11);

static MR_Word MR_CALL 
check_hlds__mode_errors__has_inst_expected_inst_was_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word ActualInst_6,
  MR_Word ExpectedInst_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__has_instantiatedness_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Inst_6,
  MR_String Suffix_7);

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_par_conj_to_spec_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_par_conj_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word MergeErrors_5);

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_disj_to_spec_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_disj_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word MergeContext_6,
  MR_Word MergeErrors_7);

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_info_context_preamble_1_f_0(
  MR_Word ModeInfo_3);

static void MR_CALL 
check_hlds__mode_errors__report_mode_inference_messages_for_procs_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word PredInfo_3,
  MR_Word Procs_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static MR_Box MR_CALL 
check_hlds__mode_errors__report_mode_inference_message_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_errors__report_mode_inference_message_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word OutputDetism_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____delayed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____delayed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____final_inst_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____final_inst_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____include_detism_on_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____include_detism_on_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____maybe_report_is_ground_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____maybe_report_is_ground_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____merge_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____merge_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____merge_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_unify_rhs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_unify_rhs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_warning_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_warning_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____negated_context_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____negated_context_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____pred_var_multimode_pred_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____pred_var_multimode_pred_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____schedule_culprit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____schedule_culprit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____write_indented_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_errors____Compare____write_indented_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_1[6][3];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_2[324][2];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_3[9][1];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_4[4][5];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_5[2][8];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_6[1][6];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_7[1][4];

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_8[1][7];




static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 58U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_errors__report_mode_inference_message_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_4[3])),
    ((MR_Box) (check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_7[0])),
    ((MR_Box) (check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_2[324][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__error_util__print_anything__arity1__check_hlds__mode_errors__write_indented_goal__arity0__)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_write_indented_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_2[2]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to enable mode inference.)"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-modes"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Use"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: duplicate mode declaration."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_2[27]))
  },
  /* row 29 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__mode_errors_scalar_common_2[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "possible causes of this error."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error messages indicate"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because it was impure."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The goal could not be reordered,"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because it was followed by an impure goal."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "}:"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "parallel conjunctions to fail.)"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The current implementation does not permit"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in parallel conjunction."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error: mutually exclusive bindings"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "branches."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has the following instantiation states."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the following branches."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has non-ground instantiation states"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the following instantiation states."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "belonging to the outer scope."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "An atomic goal may not use the state variables"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and the"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "condition or which occur only in the condition"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "allowed to bind variables which are local to the"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The condition of an if-then-else is only"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "lambda expression."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "its arguments and variables local to the "))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A lambda goal is only allowed to bind"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inside the scope of the negation."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "implicitly existentially quantified"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which are local to the negation, i.e. those which are"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A negation is only allowed to bind variables"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be bound in at most one conjunct."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A nonlocal variable of a parallel conjunction"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which are local to the trace goal."))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A trace goal is only allowed to bind variables"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ground"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of lambda goals is"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected instantiatedness for non-local variables"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the following inst:"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have the following insts:"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[107])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the callee"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because of the following error."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the callee, because of the following error."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected instantiatedness was"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "partially instantiated modes are not allowed."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[130]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Unifications of polymorphically-typed variables with"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[135])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "be ground (or have inst"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "will not be known until runtime, the variables must both"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "When unifying two variables whose type"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is still live."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the following error."))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This may have been caused by"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "no mode declaration for called predicate."))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "P = Q"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instead of"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[155])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all [X] call(P, X) <=> call(Q, X)"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "writing an explicit universal quantification, e.g."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In some cases, you can achieve the same effect by"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and so this is not allowed by the Mercury mode system."))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is an undecidable problem,"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "modes."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "\'s"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[169])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be ground, but are not."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be equal to a term containing itself."))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[178]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[179])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and appears in the condition."))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has inst"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[185]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[184])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and appears in the body."))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[185]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_func(Args) = Result is det :- ..."))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can be written"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[192])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[194])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Function expressions with inst"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[195])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[197])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any_pred(Args) is det :- ..."))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[198])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[200])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with inst"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[203]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[202])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Predicate expressions"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[204])))
  },
  /* row 207 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[206])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is ground."))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[208]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is free."))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[212]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[213])))
  },
  /* row 215 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration for"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[215]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[21])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__mode_errors_scalar_common_2[217]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no mode declaration for exported"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In mode declarations for "))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[221]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Modes"))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 225 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are indistinguishable."))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[225]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the conflicting mode declaration."))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[227]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 229 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type class method implementation for"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[230]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 232 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 233 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[233]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 235 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode mismatch in "))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has instantiatedness"))
  },
  /* row 237 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[237]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[239]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 241 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected instantiatedness was"))
  },
  /* row 242 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope error:"))
  },
  /* row 243 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Variable"))
  },
  /* row 244 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error: variable"))
  },
  /* row 245 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the return value"))
  },
  /* row 246 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and the return value"))
  },
  /* row 247 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[247]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 249 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error:"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[249]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 251 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[251]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 253 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the compiler-generated argument"))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[253]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 255 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which does not match any of the modes for"))
  },
  /* row 256 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expecting higher-order func inst"))
  },
  /* row 257 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expecting higher-order pred inst"))
  },
  /* row 258 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in polymorphically-typed unification:"))
  },
  /* row 259 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[142])))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__mode_errors_scalar_common_2[259]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 261 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unique-mode error: the called procedure"))
  },
  /* row 262 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "would clobber its argument, but variable"))
  },
  /* row 263 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "including"))
  },
  /* row 264 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error in unification of"))
  },
  /* row 265 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and higher-order term based on multi-moded"))
  },
  /* row 266 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "more than one"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[266]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 268 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 269 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the argument"))
  },
  /* row 270 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the called"))
  },
  /* row 271 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not match any"))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[271]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 273 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The higher order argument"))
  },
  /* row 274 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 275 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "sorry, implied modes not implemented."))
  },
  /* row 276 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In unification of"))
  },
  /* row 277 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 278 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 279 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error: attempt at higher-order unification."))
  },
  /* row 280 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot unify two terms of type"))
  },
  /* row 281 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Your code is trying to test whether two "))
  },
  /* row 282 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are equal, by unifying them."))
  },
  /* row 283 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the general case, testing equivalence of"))
  },
  /* row 284 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 285 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 286 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and lambda expression."))
  },
  /* row 287 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "lambda expression"))
  },
  /* row 288 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "term"))
  },
  /* row 289 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error: argument"))
  },
  /* row 290 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Final instantiatedness of"))
  },
  /* row 291 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was"))
  },
  /* row 292 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected final instantiatedness was"))
  },
  /* row 293 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "purity error: if-then-else should be inside"))
  },
  /* row 294 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a promise_purity scope because non-local variable"))
  },
  /* row 295 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "purity error: negation should be inside"))
  },
  /* row 296 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "purity error: lambda is"))
  },
  /* row 297 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "ground"))
  },
  /* row 298 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but contains the following non-local variables"))
  },
  /* row 299 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose insts contain"))
  },
  /* row 300 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "any"))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__mode_errors_scalar_common_2[207]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 302 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error in conjunction. The next"))
  },
  /* row 303 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 304 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is the location of the impure goal."))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[304]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 306 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 307 */
  {
    ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 308 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Floundered goal, waiting on {"))
  },
  /* row 309 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode error: arguments"))
  },
  /* row 310 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which does not match any of the valid modes for"))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[310]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 312 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: unification of"))
  },
  /* row 313 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row 314 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot succeed, because"))
  },
  /* row 315 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The variable"))
  },
  /* row 316 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is ground"))
  },
  /* row 317 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "out of"))
  },
  /* row 318 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In this branch,"))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[236]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 320 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the ground instantiatedness"))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[320]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 322 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has the non-ground instantiatedness"))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[322]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_3[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[228])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[148])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[38])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[41])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[305])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])))
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_errors__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0)),
    ((MR_Box) (&check_hlds__mode_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_maybe_report_is_ground_0)),
    ((MR_Box) (&check_hlds__mode_errors__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_errors_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)),
    ((MR_Box) (&check_hlds__mode_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_errors__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_errors__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_delayed_goal_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0 = {
  (MR_String) "delayed_goal",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_delayed_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_delayed_goal_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_delayed_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_delayed_goal_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_delayed_goal_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_delayed_goal_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_delayed_goal_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____delayed_goal_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____delayed_goal_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "delayed_goal",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_delayed_goal_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_delayed_goal_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_delayed_goal_0
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0 = {
  (MR_String) "too_instantiated",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1 = {
  (MR_String) "not_instantiated_enough",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2 = {
  (MR_String) "wrongly_instantiated",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_final_inst_error_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_final_inst_error_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_final_inst_error_0_2
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_final_inst_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_final_inst_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_errors____Unify____final_inst_error_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____final_inst_error_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "final_inst_error",
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_final_inst_error_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_final_inst_error_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_final_inst_error_0
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0 = {
  (MR_String) "include_detism_on_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1 = {
  (MR_String) "do_not_include_detism_on_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_include_detism_on_modes_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_include_detism_on_modes_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_include_detism_on_modes_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_include_detism_on_modes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_include_detism_on_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_errors____Unify____include_detism_on_modes_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____include_detism_on_modes_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "include_detism_on_modes",
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_include_detism_on_modes_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_include_detism_on_modes_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_include_detism_on_modes_0
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_0 = {
  (MR_String) "dont_report_is_ground",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_1 = {
  (MR_String) "report_is_ground_v_and_nonv",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_maybe_report_is_ground_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_maybe_report_is_ground_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_maybe_report_is_ground_0_1
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_maybe_report_is_ground_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_maybe_report_is_ground_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_errors____Unify____maybe_report_is_ground_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____maybe_report_is_ground_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "maybe_report_is_ground",
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_maybe_report_is_ground_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_maybe_report_is_ground_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_maybe_report_is_ground_0
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_0 = {
  (MR_String) "merge_disj",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_1 = {
  (MR_String) "merge_if_then_else",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_2 = {
  (MR_String) "merge_stm_atomic",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_merge_context_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_merge_context_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_merge_context_0_2
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_merge_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_errors____Unify____merge_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____merge_context_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "merge_context",
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_merge_context_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_merge_context_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_merge_context_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_errors__pair__ti_pair_2term__type_ctor_info_context_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__pair__ti_pair_2term__type_ctor_info_context_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_merge_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_merge_error_0_0 = {
  (MR_String) "merge_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_merge_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_merge_error_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_merge_error_0_0
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_merge_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_merge_error_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_merge_error_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_merge_error_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_merge_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____merge_error_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____merge_error_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "merge_error",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_merge_error_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_merge_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_merge_error_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_errors____Unify____merge_errors_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____merge_errors_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "merge_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0)
};

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_0 = {
  (MR_String) "mode_error_disj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_0,
  NULL,
  check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_merge_error_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_1 = {
  (MR_String) "mode_error_par_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_2[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_2[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_2 = {
  (MR_String) "mode_error_higher_order_pred_var",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_2,
  NULL,
  check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_3[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_3 = {
  (MR_String) "mode_error_poly_unify",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_4[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_4 = {
  (MR_String) "mode_error_var_is_live",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__maybe__ti_maybe_1check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_5[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__maybe__ti_maybe_1check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_5 = {
  (MR_String) "mode_error_var_has_inst",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_6[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_6[4] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_6 = {
  (MR_String) "mode_error_unify_pred",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_6,
  NULL,
  check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_7[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_7 = {
  (MR_String) "mode_error_implied_mode",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_8 = {
  (MR_String) "mode_error_no_mode_decl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_9[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_9 = {
  (MR_String) "mode_error_no_matching_mode",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_10[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_10 = {
  (MR_String) "mode_error_in_callee",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_11[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_11 = {
  (MR_String) "mode_error_bind_var",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_12[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_12 = {
  (MR_String) "mode_error_non_local_lambda_var",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_13[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_13 = {
  (MR_String) "mode_error_unify_var_var",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_14[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_14 = {
  (MR_String) "mode_error_unify_var_functor",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_15[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_15 = {
  (MR_String) "mode_error_unify_var_lambda",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_16[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_var_multimode_pred_error_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_16 = {
  (MR_String) "mode_error_unify_var_multimode_pred",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_17[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1check_hlds__mode_errors__type_ctor_info_delayed_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_schedule_culprit_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_17 = {
  (MR_String) "mode_error_conj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_18[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_final_inst_error_0)
};

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_18[5] = {
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
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_18 = {
  (MR_String) "mode_error_final_inst",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_18,
  NULL,
  check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_18,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_19[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_negated_context_desc_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_19[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_19 = {
  (MR_String) "purity_error_should_be_in_promise_purity_scope",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_19,
  NULL,
  check_hlds__mode_errors__check_hlds__mode_errors__field_locns_mode_error_0_19,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_20[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_20 = {
  (MR_String) "purity_error_lambda_should_be_any",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 17,
  INT32_C(20),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_0_20,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_8
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_1[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_2[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_1
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_3[18] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_2,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_3,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_4,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_5,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_6,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_7,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_9,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_10,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_11,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_12,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_13,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_14,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_15,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_16,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_17,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_18,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_19,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_20
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(18),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_0[21] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_11,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_17,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_18,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_2,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_7,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_10,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_9,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_8,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_12,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_3,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_6,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_14,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_15,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_16,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_13,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_5,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_4,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_20,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_0_19
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_0[21] = {
  (MR_Integer) 2,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 11,
  (MR_Integer) 18,
  (MR_Integer) 17,
  (MR_Integer) 12,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 20,
  (MR_Integer) 19
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____mode_error_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____mode_error_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "mode_error",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_0 },
  (MR_Integer) 21,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_0
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0 = {
  (MR_String) "mode_error_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_info_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_info_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_info_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____mode_error_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____mode_error_info_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "mode_error_info",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_info_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_info_0
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0 = {
  (MR_String) "error_at_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1 = {
  (MR_String) "error_at_functor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_from_to_insts_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_from_to_insts_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2 = {
  (MR_String) "error_at_lambda",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_error_unify_rhs_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_1[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_2[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_unify_rhs_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_error_unify_rhs_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_unify_rhs_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_2,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_error_unify_rhs_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_unify_rhs_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____mode_error_unify_rhs_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____mode_error_unify_rhs_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "mode_error_unify_rhs",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_error_unify_rhs_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_error_unify_rhs_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_error_unify_rhs_0
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_0 = {
  (MR_String) "cannot_succeed_var_var",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_1 = {
  (MR_String) "cannot_succeed_var_functor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_2 = {
  (MR_String) "cannot_succeed_ground_occur_check",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_1[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_1
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_2[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_2
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_warning_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_warning_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_2,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_warning_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____mode_warning_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____mode_warning_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "mode_warning",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_warning_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_warning_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_warning_0
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0 = {
  (MR_String) "mode_warning_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_mode_warning_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_info_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_warning_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_mode_warning_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_warning_info_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_mode_warning_info_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_warning_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____mode_warning_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____mode_warning_info_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "mode_warning_info",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_mode_warning_info_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_mode_warning_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_mode_warning_info_0
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0 = {
  (MR_String) "if_then_else",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1 = {
  (MR_String) "negation",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_negated_context_desc_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_negated_context_desc_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__enum_functor_desc_negated_context_desc_0_1
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_negated_context_desc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_negated_context_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_errors____Unify____negated_context_desc_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____negated_context_desc_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "negated_context_desc",
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_name_ordered_negated_context_desc_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__enum_value_ordered_negated_context_desc_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_negated_context_desc_0
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_pred_var_multimode_pred_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_var_multimode_pred_error_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_pred_var_multimode_pred_error_0_0 = {
  (MR_String) "pred_var_multimode_pred_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_pred_var_multimode_pred_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_pred_var_multimode_pred_error_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_pred_var_multimode_pred_error_0_0
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_pred_var_multimode_pred_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_pred_var_multimode_pred_error_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_pred_var_multimode_pred_error_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_pred_var_multimode_pred_error_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_pred_var_multimode_pred_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____pred_var_multimode_pred_error_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____pred_var_multimode_pred_error_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "pred_var_multimode_pred_error",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_pred_var_multimode_pred_error_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_pred_var_multimode_pred_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_pred_var_multimode_pred_error_0
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0 = {
  (MR_String) "goal_itself_was_impure",
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

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_schedule_culprit_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1 = {
  (MR_String) "goals_followed_by_impure_goal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_schedule_culprit_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2 = {
  (MR_String) "conj_floundered",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_0[2] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_1[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_schedule_culprit_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_schedule_culprit_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_schedule_culprit_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_2,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_schedule_culprit_0_1
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_schedule_culprit_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_schedule_culprit_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____schedule_culprit_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____schedule_culprit_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "schedule_culprit",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_schedule_culprit_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_schedule_culprit_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_schedule_culprit_0
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_0 = {
  (MR_String) "no_matching_mode",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_1 = {
  (MR_String) "more_than_one_matching_mode",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_2[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_2 = {
  (MR_String) "some_ho_args_non_ground",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_var_multimode_pred_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_1[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_1
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_2[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_2
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_var_multimode_pred_error_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_var_multimode_pred_error_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_var_multimode_pred_error_0[3] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_1,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_0,
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_var_multimode_pred_error_0_2
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_var_multimode_pred_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_var_multimode_pred_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "var_multimode_pred_error",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_var_multimode_pred_error_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_var_multimode_pred_error_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_var_multimode_pred_error_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_errors__check_hlds__mode_errors__field_types_write_indented_goal_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0 = {
  (MR_String) "write_indented_goal",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_errors__check_hlds__mode_errors__field_types_write_indented_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_write_indented_goal_0_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0
};

static const MR_DuPtagLayout check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_write_indented_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_errors__check_hlds__mode_errors__du_stag_ordered_write_indented_goal_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_write_indented_goal_0[1] = {
  &check_hlds__mode_errors__check_hlds__mode_errors__du_functor_desc_write_indented_goal_0_0
};

static const MR_Integer check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_write_indented_goal_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_write_indented_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_errors____Unify____write_indented_goal_0_0_10001)),
  ((MR_Box) (check_hlds__mode_errors____Compare____write_indented_goal_0_0_10001)),
  (MR_String) "check_hlds.mode_errors",
  (MR_String) "write_indented_goal",
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_name_ordered_write_indented_goal_0 },
  {     check_hlds__mode_errors__check_hlds__mode_errors__du_ptag_ordered_write_indented_goal_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_errors__check_hlds__mode_errors__functor_number_map_write_indented_goal_0
};

const MR_BaseTypeclassInfo base_typeclass_info_parse_tree__error_util__print_anything__arity1__check_hlds__mode_errors__write_indented_goal__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_p_0_10001))
};

static MR_bool MR_CALL 
check_hlds__mode_errors__IntroducedFrom__pred__named_and_unnamed_vars_to_pieces__1447__1_3_p_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_17,
  MR_String * HeadVar__3_18)
{
  {
    MR_bool succeeded;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, HeadVar__2_17, HeadVar__3_18);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors__IntroducedFrom__pred__mode_error_no_matching_mode_to_spec__1040__1_2_p_0(
  MR_Integer NumVars_9,
  MR_Integer NumInsts_10)
{
  {
    MR_bool succeeded = (NumVars_9 == NumInsts_10);

    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__458__1_1_f_0(
  MR_Word LambdaHeadVar__1_48)
{
  {
    MR_Word LambdaHeadVar__2_49;
    MR_Word I_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 0))));
    MR_Word F_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_49, 0) = ((MR_Box) (I_77));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_49, 1) = ((MR_Box) (F_78));
    }
    return LambdaHeadVar__2_49;
  }
}

static void MR_CALL 
check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ModuleInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarSet_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Globals_8;
    MR_Word OutInfo_9;

    mercury__io__write_string_3_p_0((MR_String) "\t\t");
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_8);
    OutInfo_9 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_8, (MR_Integer) 1);
    hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(OutInfo_9, ModuleInfo_4, VarSet_5, (MR_Integer) 0, (MR_Integer) 2, (MR_String) ".\n", Goal_6);
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____write_indented_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[12]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____write_indented_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[12]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____pred_var_multimode_pred_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____pred_var_multimode_pred_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____negated_context_desc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____negated_context_desc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____mode_warning_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      check_hlds__mode_errors____Compare____mode_warning_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__term____Compare____context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          check_hlds__mode_info____Compare____mode_context_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_warning_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = check_hlds__mode_errors____Unify____mode_warning_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = check_hlds__mode_info____Unify____mode_context_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____mode_warning_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_64 == CastY_65);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_6;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (Var_83)), ((MR_Box) (ArgY1_5)));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Word SubResult2_9;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (Var_82)), ((MR_Box) (ArgY2_8)));
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                    {
                      MR_Word SubResult3_12;

                      parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult3_12, Var_81, ArgY3_11);
                      succeeded = (SubResult3_12 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_12;
                      else
                        parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, Var_80, ArgY4_14);
                    }
                  }
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
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_37;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult1_37, ((MR_Box) (Var_79)), ((MR_Box) (ArgY1_36)));
                  succeeded = (SubResult1_37 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_37;
                  else
                  {
                    MR_Word SubResult2_40;

                    parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_40, Var_78, ArgY2_39);
                    succeeded = (SubResult2_40 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_40;
                    else
                      parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_77, ArgY3_42);
                  }
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
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_61;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult1_61, ((MR_Box) (Var_76)), ((MR_Box) (ArgY1_60)));
                  succeeded = (SubResult1_61 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_61;
                  else
                    parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_75, ArgY2_63);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_warning_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_28_28;
            MR_Word TypeInfo_29_29;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_8;
            MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
              TypeInfo_28_28 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_7, ArgY3_8);
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_9, ArgY4_10);
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_25_25;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_25_25 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_13, ArgY2_14);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_15, ArgY3_16);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_23_23;
            MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_18;
            MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_23_23 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_19, ArgY2_20);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____merge_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____merge_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____merge_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_context_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____maybe_report_is_ground_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____maybe_report_is_ground_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____include_detism_on_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____include_detism_on_modes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____final_inst_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____final_inst_error_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____delayed_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        check_hlds__mode_errors____Compare____mode_error_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        check_hlds__mode_errors____Compare____mode_error_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__term____Compare____context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            check_hlds__mode_info____Compare____mode_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_164 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_165 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_164 == CastY_165);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      check_hlds__mode_errors____Index____mode_error_0_0(HeadVar__2_2, &Var_4);
      check_hlds__mode_errors____Index____mode_error_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Var_6 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word ArgY1_8;
                MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
                MR_Word ArgY2_11;
                MR_Word SubResult1_9;
                MR_Integer Var_225;
                MR_Integer Var_226;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  Var_225 = (MR_Integer) (ArgX1_7);
                  Var_226 = (MR_Integer) (ArgY1_8);
                  succeeded = (Var_225 < Var_226);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_225 > Var_226);
                    if (succeeded)
                    {
                      SubResult1_9 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_9 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    Var_6 = SubResult1_9;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[5]), &Var_6, ((MR_Box) (ArgX2_10)), ((MR_Box) (ArgY2_11)));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_168_168;
                MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Word ArgY1_13;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  TypeInfo_168_168 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[5]);
                  mercury__builtin__compare_3_p_0(TypeInfo_168_168, &Var_6, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgX1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word ArgY1_15;
                    MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_18;
                    MR_Word ArgX3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_21;
                    MR_Integer ArgX4_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Integer ArgY4_24;
                    MR_Word SubResult1_16;
                    MR_Integer Var_229;
                    MR_Integer Var_230;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      Var_229 = (MR_Integer) (ArgX1_14);
                      Var_230 = (MR_Integer) (ArgY1_15);
                      succeeded = (Var_229 < Var_230);
                      if (succeeded)
                      {
                        SubResult1_16 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_229 > Var_230);
                        if (succeeded)
                        {
                          SubResult1_16 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult1_16 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult1_16;
                      else
                      {
                        MR_Word SubResult2_19;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult2_19, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                        succeeded = (SubResult2_19 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_19;
                        else
                        {
                          MR_Word SubResult3_22;

                          parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult3_22, ArgX3_20, ArgY3_21);
                          succeeded = (SubResult3_22 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_22;
                          else
                          {
                            succeeded = (ArgX4_23 < ArgY4_24);
                            if (succeeded)
                              Var_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX4_23 > ArgY4_24);
                              if (succeeded)
                                Var_6 = (MR_Integer) 2;
                              else
                                Var_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_26;
                    MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_29;
                    MR_Word SubResult1_27;
                    MR_Word TypeInfo_173_173;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      TypeInfo_173_173 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_173_173, &SubResult1_27, ((MR_Box) (ArgX1_25)), ((MR_Box) (ArgY1_26)));
                      succeeded = (SubResult1_27 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_27;
                      else
                        parse_tree__prog_data____Compare____mer_inst_0_0(&Var_6, ArgX2_28, ArgY2_29);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeInfo_175_175;
                    MR_Word ArgX1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_31;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_175_175 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_175_175, &Var_6, ((MR_Box) (ArgX1_30)), ((MR_Box) (ArgY1_31)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ArgX1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_33;
                    MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_36;
                    MR_Word ArgX3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_39;
                    MR_Word ArgX4_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Word ArgY4_42;
                    MR_Word SubResult1_34;
                    MR_Word TypeInfo_176_176;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      TypeInfo_176_176 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_176_176, &SubResult1_34, ((MR_Box) (ArgX1_32)), ((MR_Box) (ArgY1_33)));
                      succeeded = (SubResult1_34 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_34;
                      else
                      {
                        MR_Word SubResult2_37;

                        parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_37, ArgX2_35, ArgY2_36);
                        succeeded = (SubResult2_37 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_37;
                        else
                        {
                          MR_Word SubResult3_40;

                          parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult3_40, ArgX3_38, ArgY3_39);
                          succeeded = (SubResult3_40 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_40;
                          else
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[6]), &Var_6, ((MR_Box) (ArgX4_41)), ((MR_Box) (ArgY4_42)));
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_44;
                    MR_Word ArgX2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_47;
                    MR_Word ArgX3_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_50;
                    MR_Word ArgX4_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
                    MR_Word ArgY4_53;
                    MR_Word SubResult1_45;
                    MR_Word TypeInfo_180_180;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
                      TypeInfo_180_180 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_180_180, &SubResult1_45, ((MR_Box) (ArgX1_43)), ((MR_Box) (ArgY1_44)));
                      succeeded = (SubResult1_45 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_45;
                      else
                      {
                        MR_Word SubResult2_48;

                        check_hlds__mode_errors____Compare____mode_error_unify_rhs_0_0(&SubResult2_48, ArgX2_46, ArgY2_47);
                        succeeded = (SubResult2_48 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_48;
                        else
                        {
                          MR_Word SubResult3_51;

                          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_51, ArgX3_49, ArgY3_50);
                          succeeded = (SubResult3_51 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_51;
                          else
                          {
                            MR_Integer Var_231 = (MR_Integer) (ArgX4_52);
                            MR_Integer Var_232 = (MR_Integer) (ArgY4_53);

                            succeeded = (Var_231 < Var_232);
                            if (succeeded)
                              Var_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_231 > Var_232);
                              if (succeeded)
                                Var_6 = (MR_Integer) 2;
                              else
                                Var_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word ArgX1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_55;
                    MR_Word ArgX2_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_58;
                    MR_Word ArgX3_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_61;
                    MR_Word SubResult1_56;
                    MR_Word TypeInfo_184_184;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      TypeInfo_184_184 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_184_184, &SubResult1_56, ((MR_Box) (ArgX1_54)), ((MR_Box) (ArgY1_55)));
                      succeeded = (SubResult1_56 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_56;
                      else
                      {
                        MR_Word SubResult2_59;

                        parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_59, ArgX2_57, ArgY2_58);
                        succeeded = (SubResult2_59 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_59;
                        else
                          parse_tree__prog_data____Compare____mer_inst_0_0(&Var_6, ArgX3_60, ArgY3_61);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ArgX1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_63;
                    MR_Word ArgX2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_66;
                    MR_Word SubResult1_64;
                    MR_Word TypeInfo_187_187;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      TypeInfo_187_187 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                      mercury__builtin__compare_3_p_0(TypeInfo_187_187, &SubResult1_64, ((MR_Box) (ArgX1_62)), ((MR_Box) (ArgY1_63)));
                      succeeded = (SubResult1_64 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_64;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[8]), &Var_6, ((MR_Box) (ArgX2_65)), ((MR_Box) (ArgY2_66)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ArgX1_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_68;
                    MR_Word ArgX2_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_71;
                    MR_Word ArgX3_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_74;
                    MR_Integer ArgX4_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Integer ArgY4_77;
                    MR_Word ArgX5_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                    MR_Word ArgY5_80;
                    MR_Word SubResult1_69;
                    MR_Word TypeInfo_189_189;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      ArgY5_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                      TypeInfo_189_189 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                      mercury__builtin__compare_3_p_0(TypeInfo_189_189, &SubResult1_69, ((MR_Box) (ArgX1_67)), ((MR_Box) (ArgY1_68)));
                      succeeded = (SubResult1_69 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_69;
                      else
                      {
                        MR_Word SubResult2_72;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[8]), &SubResult2_72, ((MR_Box) (ArgX2_70)), ((MR_Box) (ArgY2_71)));
                        succeeded = (SubResult2_72 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_72;
                        else
                        {
                          MR_Word SubResult3_75;

                          hlds__hlds_pred____Compare____pred_id_0_0(&SubResult3_75, ArgX3_73, ArgY3_74);
                          succeeded = (SubResult3_75 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_75;
                          else
                          {
                            MR_Word SubResult4_78;

                            succeeded = (ArgX4_76 < ArgY4_77);
                            if (succeeded)
                            {
                              SubResult4_78 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX4_76 > ArgY4_77);
                              if (succeeded)
                              {
                                SubResult4_78 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult4_78 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              Var_6 = SubResult4_78;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[9]), &Var_6, ((MR_Box) (ArgX5_79)), ((MR_Box) (ArgY5_80)));
                            }
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word ArgX1_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_82;
                    MR_Word ArgX2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_85;
                    MR_Word ArgX3_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_88;
                    MR_Word ArgX4_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Word ArgY4_91;
                    MR_Word SubResult1_83;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                      ArgY1_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      check_hlds__mode_info____Compare____var_lock_reason_0_0(&SubResult1_83, ArgX1_81, ArgY1_82);
                      succeeded = (SubResult1_83 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_83;
                      else
                      {
                        MR_Word SubResult2_86;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult2_86, ((MR_Box) (ArgX2_84)), ((MR_Box) (ArgY2_85)));
                        succeeded = (SubResult2_86 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_86;
                        else
                        {
                          MR_Word SubResult3_89;

                          parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult3_89, ArgX3_87, ArgY3_88);
                          succeeded = (SubResult3_89 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_89;
                          else
                            parse_tree__prog_data____Compare____mer_inst_0_0(&Var_6, ArgX4_90, ArgY4_91);
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word ArgX1_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_93;
                    MR_Word ArgX2_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_96;
                    MR_Word SubResult1_94;
                    MR_Word TypeInfo_198_198;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (succeeded)
                    {
                      ArgY1_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      TypeInfo_198_198 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_198_198, &SubResult1_94, ((MR_Box) (ArgX1_92)), ((MR_Box) (ArgY1_93)));
                      succeeded = (SubResult1_94 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_94;
                      else
                        parse_tree__prog_data____Compare____mer_inst_0_0(&Var_6, ArgX2_95, ArgY2_96);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word ArgX1_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_98;
                    MR_Word ArgX2_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_101;
                    MR_Word ArgX3_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_104;
                    MR_Word ArgX4_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Word ArgY4_107;
                    MR_Word SubResult1_99;
                    MR_Word TypeInfo_200_200;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                    if (succeeded)
                    {
                      ArgY1_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      TypeInfo_200_200 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_200_200, &SubResult1_99, ((MR_Box) (ArgX1_97)), ((MR_Box) (ArgY1_98)));
                      succeeded = (SubResult1_99 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_99;
                      else
                      {
                        MR_Word SubResult2_102;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult2_102, ((MR_Box) (ArgX2_100)), ((MR_Box) (ArgY2_101)));
                        succeeded = (SubResult2_102 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_102;
                        else
                        {
                          MR_Word SubResult3_105;

                          parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult3_105, ArgX3_103, ArgY3_104);
                          succeeded = (SubResult3_105 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_105;
                          else
                            parse_tree__prog_data____Compare____mer_inst_0_0(&Var_6, ArgX4_106, ArgY4_107);
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_Word ArgX1_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_109;
                    MR_Word ArgX2_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_112;
                    MR_Word ArgX3_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_115;
                    MR_Word ArgX4_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Word ArgY4_118;
                    MR_Word ArgX5_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                    MR_Word ArgY5_121;
                    MR_Word SubResult1_110;
                    MR_Word TypeInfo_204_204;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      ArgY1_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      ArgY5_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                      TypeInfo_204_204 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_204_204, &SubResult1_110, ((MR_Box) (ArgX1_108)), ((MR_Box) (ArgY1_109)));
                      succeeded = (SubResult1_110 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_110;
                      else
                      {
                        MR_Word SubResult2_113;

                        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_113, ArgX2_111, ArgY2_112);
                        succeeded = (SubResult2_113 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_113;
                        else
                        {
                          MR_Word SubResult3_116;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]), &SubResult3_116, ((MR_Box) (ArgX3_114)), ((MR_Box) (ArgY3_115)));
                          succeeded = (SubResult3_116 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_116;
                          else
                          {
                            MR_Word SubResult4_119;

                            parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult4_119, ArgX4_117, ArgY4_118);
                            succeeded = (SubResult4_119 != (MR_Integer) 0);
                            if (succeeded)
                              Var_6 = SubResult4_119;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[8]), &Var_6, ((MR_Box) (ArgX5_120)), ((MR_Box) (ArgY5_121)));
                            }
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    MR_Word ArgX1_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_123;
                    MR_Word ArgX2_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_126;
                    MR_Word ArgX3_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_129;
                    MR_Word SubResult1_124;
                    MR_Word TypeInfo_209_209;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                    if (succeeded)
                    {
                      ArgY1_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      TypeInfo_209_209 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_209_209, &SubResult1_124, ((MR_Box) (ArgX1_122)), ((MR_Box) (ArgY1_123)));
                      succeeded = (SubResult1_124 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_124;
                      else
                      {
                        MR_Word SubResult2_127;

                        parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_127, ArgX2_125, ArgY2_126);
                        succeeded = (SubResult2_127 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_127;
                        else
                          parse_tree__prog_data____Compare____mer_inst_0_0(&Var_6, ArgX3_128, ArgY3_129);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    MR_Word ArgX1_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_131;
                    MR_Word ArgX2_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_134;
                    MR_Word ArgX3_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_137;
                    MR_Word SubResult1_132;
                    MR_Word TypeInfo_212_212;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                    if (succeeded)
                    {
                      ArgY1_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      TypeInfo_212_212 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                      mercury__builtin__compare_3_p_0(TypeInfo_212_212, &SubResult1_132, ((MR_Box) (ArgX1_130)), ((MR_Box) (ArgY1_131)));
                      succeeded = (SubResult1_132 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_132;
                      else
                      {
                        MR_Word SubResult2_135;

                        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_135, ArgX2_133, ArgY2_134);
                        succeeded = (SubResult2_135 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_135;
                        else
                          check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0(&Var_6, ArgX3_136, ArgY3_137);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    MR_Word ArgX1_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_139;
                    MR_Word ArgX2_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_142;
                    MR_Word SubResult1_140;
                    MR_Word TypeInfo_215_215;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                    if (succeeded)
                    {
                      ArgY1_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      TypeInfo_215_215 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[10]);
                      mercury__builtin__compare_3_p_0(TypeInfo_215_215, &SubResult1_140, ((MR_Box) (ArgX1_138)), ((MR_Box) (ArgY1_139)));
                      succeeded = (SubResult1_140 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult1_140;
                      else
                        check_hlds__mode_errors____Compare____schedule_culprit_0_0(&Var_6, ArgX2_141, ArgY2_142);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    MR_Integer ArgX1_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_144;
                    MR_Word ArgX2_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_147;
                    MR_Word ArgX3_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    MR_Word ArgY3_150;
                    MR_Word ArgX4_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    MR_Word ArgY4_153;
                    MR_Word ArgX5_155 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);
                    MR_Word ArgY5_156;
                    MR_Word SubResult1_145;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                    if (succeeded)
                    {
                      ArgY1_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      ArgY3_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                      ArgY4_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                      ArgY5_156 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 3);
                      succeeded = (ArgX1_143 < ArgY1_144);
                      if (succeeded)
                      {
                        SubResult1_145 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_143 > ArgY1_144);
                        if (succeeded)
                        {
                          SubResult1_145 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult1_145 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult1_145;
                      else
                      {
                        MR_Word SubResult2_148;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &SubResult2_148, ((MR_Box) (ArgX2_146)), ((MR_Box) (ArgY2_147)));
                        succeeded = (SubResult2_148 != (MR_Integer) 0);
                        if (succeeded)
                          Var_6 = SubResult2_148;
                        else
                        {
                          MR_Word SubResult3_151;

                          parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult3_151, ArgX3_149, ArgY3_150);
                          succeeded = (SubResult3_151 != (MR_Integer) 0);
                          if (succeeded)
                            Var_6 = SubResult3_151;
                          else
                          {
                            MR_Word SubResult4_154;

                            parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult4_154, ArgX4_152, ArgY4_153);
                            succeeded = (SubResult4_154 != (MR_Integer) 0);
                            if (succeeded)
                              Var_6 = SubResult4_154;
                            else
                            {
                              MR_Integer Var_227 = (MR_Integer) (ArgX5_155);
                              MR_Integer Var_228 = (MR_Integer) (ArgY5_156);

                              succeeded = (Var_227 < Var_228);
                              if (succeeded)
                                Var_6 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_227 > Var_228);
                                if (succeeded)
                                  Var_6 = (MR_Integer) 2;
                                else
                                  Var_6 = (MR_Integer) 0;
                              }
                            }
                          }
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    MR_Word ArgX1_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word ArgY1_158;
                    MR_Word ArgX2_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Word ArgY2_161;
                    MR_Word SubResult1_159;
                    MR_Integer Var_233;
                    MR_Integer Var_234;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                    if (succeeded)
                    {
                      ArgY1_158 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgY2_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      Var_233 = (MR_Integer) (ArgX1_157);
                      Var_234 = (MR_Integer) (ArgY1_158);
                      succeeded = (Var_233 < Var_234);
                      if (succeeded)
                      {
                        SubResult1_159 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_233 > Var_234);
                        if (succeeded)
                        {
                          SubResult1_159 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult1_159 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult1_159;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), &Var_6, ((MR_Box) (ArgX2_160)), ((MR_Box) (ArgY2_161)));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 17:
                  {
                    MR_Word TypeInfo_224_224;
                    MR_Word ArgX1_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_163;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 17)));
                    if (succeeded)
                    {
                      ArgY1_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_224_224 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                      mercury__builtin__compare_3_p_0(TypeInfo_224_224, &Var_6, ((MR_Box) (ArgX1_162)), ((MR_Box) (ArgY1_163)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
          else
            {
              mercury__private_builtin__compare_error_0_p_0();
              return;
            }
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY1_5)));
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
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Var_27)), ((MR_Box) (ArgY1_13)));
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
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_21)));
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____schedule_culprit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, Var_13, ArgY1_7);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_unify_rhs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_47)), ((MR_Box) (ArgY1_5)));
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
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_17;

                  parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_17, Var_44, ArgY1_16);
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Var_43)), ((MR_Box) (ArgY2_19)));
                  }
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
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_33;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]), &SubResult1_33, ((MR_Box) (Var_46)), ((MR_Box) (ArgY1_32)));
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (Var_45)), ((MR_Box) (ArgY2_35)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
check_hlds__mode_errors____Index____mode_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 8;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____delayed_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = check_hlds__mode_errors____Unify____mode_error_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = check_hlds__mode_errors____Unify____mode_error_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = check_hlds__mode_info____Unify____mode_context_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_123 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_124 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_123 == CastY_124);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_46 == CastX_45);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_130_130;
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
              {
                TypeInfo_130_130 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_130_130, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_148_148;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_148_148 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_148_148, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_134_134;
                MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_10;
                MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_12;
                MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_14;
                MR_Integer ArgX4_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  succeeded = (ArgX1_9 == ArgY1_10);
                  if (succeeded)
                  {
                    TypeInfo_134_134 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_134_134, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_13, ArgY3_14);
                      if (succeeded)
                        succeeded = (ArgX4_15 == ArgY4_16);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_149_149;
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_149_149 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_149_149, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_19, ArgY2_20);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_171_171;
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_171_171 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_171_171, ((MR_Box) (ArgX1_21)), ((MR_Box) (ArgY1_22)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_167_167;
                MR_Word TypeInfo_170_170;
                MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_24;
                MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_26;
                MR_Word ArgX3_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_28;
                MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  TypeInfo_167_167 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_167_167, ((MR_Box) (ArgX1_23)), ((MR_Box) (ArgY1_24)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_25, ArgY2_26);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_27, ArgY3_28);
                      if (succeeded)
                      {
                        TypeInfo_170_170 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[6]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (ArgX4_29)), ((MR_Box) (ArgY4_30)));
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeInfo_151_151;
                MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_32;
                MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_34;
                MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_36;
                MR_Word ArgX4_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
                MR_Word ArgY4_38;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
                  TypeInfo_151_151 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_151_151, ((MR_Box) (ArgX1_31)), ((MR_Box) (ArgY1_32)));
                  if (succeeded)
                  {
                    succeeded = check_hlds__mode_errors____Unify____mode_error_unify_rhs_0_0(ArgX2_33, ArgY2_34);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_35, ArgY3_36);
                      if (succeeded)
                        succeeded = (ArgX4_37 == ArgY4_38);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeInfo_136_136;
                MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_40;
                MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_42;
                MR_Word ArgX3_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_44;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  TypeInfo_136_136 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_136_136, ((MR_Box) (ArgX1_39)), ((MR_Box) (ArgY1_40)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_41, ArgY2_42);
                    if (succeeded)
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_43, ArgY3_44);
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word TypeInfo_144_144;
                MR_Word TypeInfo_145_145;
                MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_48;
                MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_50;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_144_144 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_144_144, ((MR_Box) (ArgX1_47)), ((MR_Box) (ArgY1_48)));
                  if (succeeded)
                  {
                    TypeInfo_145_145 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[8]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_145_145, ((MR_Box) (ArgX2_49)), ((MR_Box) (ArgY2_50)));
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word TypeInfo_139_139;
                MR_Word TypeInfo_140_140;
                MR_Word TypeInfo_143_143;
                MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_52;
                MR_Word ArgX2_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_54;
                MR_Word ArgX3_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_56;
                MR_Integer ArgX4_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_58;
                MR_Word ArgX5_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_60;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  TypeInfo_139_139 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_139_139, ((MR_Box) (ArgX1_51)), ((MR_Box) (ArgY1_52)));
                  if (succeeded)
                  {
                    TypeInfo_140_140 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[8]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_140_140, ((MR_Box) (ArgX2_53)), ((MR_Box) (ArgY2_54)));
                    if (succeeded)
                    {
                      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX3_55, ArgY3_56);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_57 == ArgY4_58);
                        if (succeeded)
                        {
                          TypeInfo_143_143 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[9]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_143_143, ((MR_Box) (ArgX5_59)), ((MR_Box) (ArgY5_60)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word TypeInfo_126_126;
                MR_Word ArgX1_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_62;
                MR_Word ArgX2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_64;
                MR_Word ArgX3_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_66;
                MR_Word ArgX4_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_68;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(ArgX1_61, ArgY1_62);
                  if (succeeded)
                  {
                    TypeInfo_126_126 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_126_126, ((MR_Box) (ArgX2_63)), ((MR_Box) (ArgY2_64)));
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_65, ArgY3_66);
                      if (succeeded)
                        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_67, ArgY4_68);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word TypeInfo_146_146;
                MR_Word ArgX1_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_70;
                MR_Word ArgX2_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_72;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ArgY1_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_146_146 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_146_146, ((MR_Box) (ArgX1_69)), ((MR_Box) (ArgY1_70)));
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_71, ArgY2_72);
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word TypeInfo_163_163;
                MR_Word TypeInfo_164_164;
                MR_Word ArgX1_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_74;
                MR_Word ArgX2_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_76;
                MR_Word ArgX3_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_78;
                MR_Word ArgX4_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_80;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  ArgY1_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  TypeInfo_163_163 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_163_163, ((MR_Box) (ArgX1_73)), ((MR_Box) (ArgY1_74)));
                  if (succeeded)
                  {
                    TypeInfo_164_164 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_164_164, ((MR_Box) (ArgX2_75)), ((MR_Box) (ArgY2_76)));
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_77, ArgY3_78);
                      if (succeeded)
                        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_79, ArgY4_80);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word TypeInfo_153_153;
                MR_Word TypeInfo_155_155;
                MR_Word TypeInfo_157_157;
                MR_Word ArgX1_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_82;
                MR_Word ArgX2_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_84;
                MR_Word ArgX3_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_86;
                MR_Word ArgX4_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_88;
                MR_Word ArgX5_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_90;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (succeeded)
                {
                  ArgY1_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  TypeInfo_153_153 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_153_153, ((MR_Box) (ArgX1_81)), ((MR_Box) (ArgY1_82)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_83, ArgY2_84);
                    if (succeeded)
                    {
                      TypeInfo_155_155 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_155_155, ((MR_Box) (ArgX3_85)), ((MR_Box) (ArgY3_86)));
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_87, ArgY4_88);
                        if (succeeded)
                        {
                          TypeInfo_157_157 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[8]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_157_157, ((MR_Box) (ArgX5_89)), ((MR_Box) (ArgY5_90)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word TypeInfo_158_158;
                MR_Word ArgX1_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_92;
                MR_Word ArgX2_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_94;
                MR_Word ArgX3_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_96;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
                if (succeeded)
                {
                  ArgY1_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  TypeInfo_158_158 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_158_158, ((MR_Box) (ArgX1_91)), ((MR_Box) (ArgY1_92)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_93, ArgY2_94);
                    if (succeeded)
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_95, ArgY3_96);
                  }
                }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word TypeInfo_161_161;
                MR_Word ArgX1_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_98;
                MR_Word ArgX2_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_100;
                MR_Word ArgX3_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_102;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  ArgY1_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  TypeInfo_161_161 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_161_161, ((MR_Box) (ArgX1_97)), ((MR_Box) (ArgY1_98)));
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_99, ArgY2_100);
                    if (succeeded)
                      succeeded = check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0(ArgX3_101, ArgY3_102);
                  }
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word TypeInfo_129_129;
                MR_Word ArgX1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_104;
                MR_Word ArgX2_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_106;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
                if (succeeded)
                {
                  ArgY1_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_129_129 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[10]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_129_129, ((MR_Box) (ArgX1_103)), ((MR_Box) (ArgY1_104)));
                  if (succeeded)
                    succeeded = check_hlds__mode_errors____Unify____schedule_culprit_0_0(ArgX2_105, ArgY2_106);
                }
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TypeInfo_131_131;
                MR_Integer ArgX1_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_108;
                MR_Word ArgX2_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_110;
                MR_Word ArgX3_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_112;
                MR_Word ArgX4_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_114;
                MR_Word ArgX5_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 3);
                MR_Word ArgY5_116;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
                if (succeeded)
                {
                  ArgY1_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);
                  succeeded = (ArgX1_107 == ArgY1_108);
                  if (succeeded)
                  {
                    TypeInfo_131_131 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_131_131, ((MR_Box) (ArgX2_109)), ((MR_Box) (ArgY2_110)));
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX3_111, ArgY3_112);
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX4_113, ArgY4_114);
                        if (succeeded)
                          succeeded = (ArgX5_115 == ArgY5_116);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word TypeInfo_173_173;
                MR_Word ArgX1_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_118;
                MR_Word ArgX2_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_120;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
                if (succeeded)
                {
                  ArgY1_118 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_117 == ArgY1_118);
                  if (succeeded)
                  {
                    TypeInfo_173_173 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_173_173, ((MR_Box) (ArgX2_119)), ((MR_Box) (ArgY2_120)));
                  }
                }
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word TypeInfo_172_172;
                MR_Word ArgX1_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_122;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17)));
                if (succeeded)
                {
                  ArgY1_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_172_172 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_172_172, ((MR_Box) (ArgX1_121)), ((MR_Box) (ArgY1_122)));
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_12_12 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____schedule_culprit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_unify_rhs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_19_19;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_19_19 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_16_16;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                TypeInfo_16_16 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_17_17;
            MR_Word TypeInfo_18_18;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_17_17 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
              if (succeeded)
              {
                TypeInfo_18_18 = (MR_Word) (&check_hlds__mode_errors_scalar_common_2[11]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__report_inst_in_context_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word VarNamePiece_7,
  MR_Word ReportIsGround_8,
  MR_Word HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word Msg_11;
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));

    switch (ReportIsGround_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntroPieces_12;
          MR_Word Pieces_13;
          MR_Word Var_59;
          MR_Word Var_64;
          MR_Word Var_65;

          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (VarNamePiece_7));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[319])));
          }
          {
            IntroPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IntroPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[318])));
            MR_hl_field(MR_mktag(1), IntroPieces_12, 1) = ((MR_Box) (Var_59));
          }
          Pieces_13 = check_hlds__mode_errors__report_inst_in_branch_3_f_0(ModeInfo_6, IntroPieces_12, Inst_10);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Pieces_13));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_64));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_14;

          check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_6, &ModuleInfo_14);
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_14, Inst_10);
          if (succeeded)
          {
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Pieces_70;
            MR_Word Var_16;
            MR_Word Var_17;

            succeeded = ((((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
              Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));
              succeeded = (Var_16 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Var_20;

              {
                Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (VarNamePiece_7));
                MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[209])));
              }
              {
                Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[318])));
                MR_hl_field(MR_mktag(1), Pieces_70, 1) = ((MR_Box) (Var_20));
              }
            }
            else
            {
              MR_Word Var_29;
              MR_Word IntroPieces_67;

              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (VarNamePiece_7));
                MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[321])));
              }
              {
                IntroPieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), IntroPieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[318])));
                MR_hl_field(MR_mktag(1), IntroPieces_67, 1) = ((MR_Box) (Var_29));
              }
              Pieces_70 = check_hlds__mode_errors__report_inst_in_branch_3_f_0(ModeInfo_6, IntroPieces_67, Inst_10);
            }
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Pieces_70));
              MR_hl_field(MR_mktag(3), Var_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_9));
              MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_34));
            }
          }
          else
          {
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Pieces_74;

            if ((Inst_10 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 1))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              MR_Word Var_40;

              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (VarNamePiece_7));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[211])));
              }
              {
                Pieces_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[318])));
                MR_hl_field(MR_mktag(1), Pieces_74, 1) = ((MR_Box) (Var_40));
              }
            }
            else
            {
              MR_Word Var_49;
              MR_Word IntroPieces_71;

              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (VarNamePiece_7));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[323])));
              }
              {
                IntroPieces_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), IntroPieces_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[318])));
                MR_hl_field(MR_mktag(1), IntroPieces_71, 1) = ((MR_Box) (Var_49));
              }
              Pieces_74 = check_hlds__mode_errors__report_inst_in_branch_3_f_0(ModeInfo_6, IntroPieces_71, Inst_10);
            }
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces_74));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_9));
              MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_54));
            }
          }
        }
        break;
    }
    return Msg_11;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__report_inst_in_branch_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word IntroPieces_6,
  MR_Word Inst_7)
{
  {
    MR_Word Pieces_8;
    MR_Word Var_9;
    MR_Word Var_10 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[237]));
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word ModuleInfo_40;
    MR_Word InstVarSet_41;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (IntroPieces_6));
    }
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_5, &ModuleInfo_40);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_5, &InstVarSet_41);
    Var_15 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_40, InstVarSet_41, (MR_Integer) 1, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[214])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[214])), Inst_7);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_9, Var_12);
    return Pieces_8;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__merge_error_to_msgs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Msg_11;

    conv1_Msg_11 = check_hlds__mode_errors__report_inst_in_context_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Msg_11));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__merge_error_to_msgs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Msg_11;

    conv0_Msg_11 = check_hlds__mode_errors__report_inst_in_context_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Msg_11));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__merge_error_to_msgs_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word MainContext_7,
  MR_Word IsDisjunctive_8,
  MR_Word MergeError_9)
{
  {
    MR_bool succeeded;
    MR_Word Msgs_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeError_9, (MR_Integer) 0))));
    MR_Word ContextsInsts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MergeError_9, (MR_Integer) 1))));
    MR_Word ModuleInfo_13;
    MR_Word VarSet_14;
    MR_Word VarNamePiece_15;
    MR_Word ContextsInsts_16;
    MR_Integer NumGroundInsts_17;
    MR_Integer NumAllInsts_18;
    MR_String Var_25;
    MR_Integer Var_28;
    MR_Integer Var_29;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_6, &ModuleInfo_13);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_6, &VarSet_14);
    Var_25 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_14, Var_11);
    {
      VarNamePiece_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarNamePiece_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), VarNamePiece_15, 1) = ((MR_Box) (Var_25));
    }
    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_1[1]), ContextsInsts0_12, &ContextsInsts_16);
    check_hlds__mode_errors__count_ground_insts_6_p_0(ModuleInfo_13, ContextsInsts_16, (MR_Integer) 0, &NumGroundInsts_17, (MR_Integer) 0, &NumAllInsts_18);
    succeeded = (IsDisjunctive_8 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (NumGroundInsts_17 < NumAllInsts_18);
      if (succeeded)
      {
        Var_29 = (MR_Integer) 2;
        Var_28 = (MR_Integer) ((MR_Unsigned) NumGroundInsts_17 * (MR_Unsigned) Var_29);
        succeeded = (Var_28 > NumAllInsts_18);
      }
    }
    if (succeeded)
    {
      MR_Word CommonPieces_19;
      MR_Word NonVerbosePieces_21;
      MR_Word VarMsg_22;
      MR_Word InstMsgs_23;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Integer Var_57;

      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (NumGroundInsts_17));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (NumAllInsts_18));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[53])));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[317])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[232])));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[316])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (VarNamePiece_15));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        CommonPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CommonPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[315])));
        MR_hl_field(MR_mktag(1), CommonPieces_19, 1) = ((MR_Box) (Var_32));
      }
      Var_57 = (MR_Integer) ((MR_Unsigned) NumAllInsts_18 - (MR_Unsigned) NumGroundInsts_17);
      succeeded = (Var_57 > (MR_Integer) 1);
      if (succeeded)
        NonVerbosePieces_21 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[59]));
      else
        NonVerbosePieces_21 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (CommonPieces_19));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[55])));
        MR_hl_field(MR_mktag(3), Var_70, 2) = ((MR_Box) (NonVerbosePieces_21));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        VarMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarMsg_22, 0) = ((MR_Box) (MainContext_7));
        MR_hl_field(MR_mktag(0), VarMsg_22, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__mode_errors__merge_error_to_msgs_4_f_0_1));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModeInfo_6));
        MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (VarNamePiece_15));
        MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) ((MR_Integer) 1));
      }
      InstMsgs_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_1[1]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_72, ContextsInsts_16);
      {
        Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (VarMsg_22));
        MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (InstMsgs_23));
      }
    }
    else
    {
      MR_Word VarPieces_24;
      MR_Word Var_76;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_86;
      MR_Word VarMsg_88;
      MR_Word InstMsgs_89;

      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (VarNamePiece_15));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[61])));
      }
      {
        VarPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[315])));
        MR_hl_field(MR_mktag(1), VarPieces_24, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (VarPieces_24));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        VarMsg_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarMsg_88, 0) = ((MR_Box) (MainContext_7));
        MR_hl_field(MR_mktag(0), VarMsg_88, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (check_hlds__mode_errors__merge_error_to_msgs_4_f_0_2));
        MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (ModeInfo_6));
        MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (VarNamePiece_15));
        MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      InstMsgs_89 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_1[1]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_86, ContextsInsts_16);
      {
        Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (VarMsg_88));
        MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (InstMsgs_89));
      }
    }
    return Msgs_10;
  }
}

static void MR_CALL 
check_hlds__mode_errors__count_ground_insts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumGroundInsts_0_3,
  MR_Integer * STATE_VARIABLE_NumGroundInsts_4,
  MR_Integer STATE_VARIABLE_NumAllInsts_0_5,
  MR_Integer * STATE_VARIABLE_NumAllInsts_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumAllInsts_6 = STATE_VARIABLE_NumAllInsts_0_5;
      *STATE_VARIABLE_NumGroundInsts_4 = STATE_VARIABLE_NumGroundInsts_0_3;
    }
    else
    {
      MR_Word ContextInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ContextsInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ContextInst_15, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_NumGroundInsts_25_25;
      MR_Integer STATE_VARIABLE_NumAllInsts_27_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_NumGroundInsts_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumAllInsts_0_5;

      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(HeadVar__1_1, Inst_20);
      if (succeeded)
      {
        STATE_VARIABLE_NumGroundInsts_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumGroundInsts_0_3 + (MR_Unsigned) (MR_Integer) 1);
      }
      else
        STATE_VARIABLE_NumGroundInsts_25_25 = STATE_VARIABLE_NumGroundInsts_0_3;
      STATE_VARIABLE_NumAllInsts_27_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumAllInsts_0_5 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ContextsInsts_16;
      next_value_of_STATE_VARIABLE_NumGroundInsts_0_3 = STATE_VARIABLE_NumGroundInsts_25_25;
      next_value_of_STATE_VARIABLE_NumAllInsts_0_5 = STATE_VARIABLE_NumAllInsts_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_NumGroundInsts_0_3 = next_value_of_STATE_VARIABLE_NumGroundInsts_0_3;
      STATE_VARIABLE_NumAllInsts_0_5 = next_value_of_STATE_VARIABLE_NumAllInsts_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors__is_error_important_1_p_0(
  MR_Word Error_2)
{
  {
    MR_bool succeeded;
    MR_Word ModeError_5;
    MR_Word ModeContext_7;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Error_2, (MR_Integer) 1))));
    MR_Word UnifyContext_9;
    MR_Word Var_15;

    ModeError_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    ModeContext_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) ModeContext_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModeContext_7, (MR_Integer) 0))));
      UnifyContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      succeeded = (UnifyContext_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ModeError_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__mode_errors__mode_warning_info_to_spec_2_f_0(
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word Warning_5)
{
  {
    MR_Word Spec_6;
    MR_Word ModeWarning_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_5, (MR_Integer) 0))));
    MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_5, (MR_Integer) 1))));
    MR_Word ModeContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_5, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_ModeInfo_18_18;
    MR_Word STATE_VARIABLE_ModeInfo_19_19;

    check_hlds__mode_info__mode_info_set_context_3_p_0(Context_8, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_18_18);
    check_hlds__mode_info__mode_info_set_mode_context_3_p_0(ModeContext_9, STATE_VARIABLE_ModeInfo_18_18, &STATE_VARIABLE_ModeInfo_19_19);
    switch (MR_tag((MR_Word) ModeWarning_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word VarA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeWarning_7, (MR_Integer) 0))));
          MR_Word VarB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeWarning_7, (MR_Integer) 1))));
          MR_Word InstA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeWarning_7, (MR_Integer) 2))));
          MR_Word InstB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeWarning_7, (MR_Integer) 3))));

          Spec_6 = check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_f_0(STATE_VARIABLE_ModeInfo_19_19, VarA_10, VarB_11, InstA_12, InstB_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeWarning_7, (MR_Integer) 0))));
          MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeWarning_7, (MR_Integer) 1))));
          MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeWarning_7, (MR_Integer) 2))));

          Spec_6 = check_hlds__mode_errors__mode_warning_cannot_succeed_var_functor_4_f_0(STATE_VARIABLE_ModeInfo_19_19, Var_14, Inst_15, ConsId_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModeWarning_7, (MR_Integer) 0))));
          MR_Word ConsId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModeWarning_7, (MR_Integer) 1))));
          MR_Word Preamble_26;
          MR_Word Context_27;
          MR_Word VarSet_28;
          MR_Word Pieces_29;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_String Var_34;
          MR_Word Var_35;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_String Var_40;
          MR_Word Var_42;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_String Var_47;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;

          Preamble_26 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(STATE_VARIABLE_ModeInfo_19_19);
          check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_19_19, &Context_27);
          check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_19_19, &VarSet_28);
          Var_34 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_28, Var_20);
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
          }
          Var_40 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, ConsId_21);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
          }
          Var_47 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_28, Var_20);
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[175])));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[314])));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[224])));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[312])));
            MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_32));
          }
          Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_26, Pieces_29);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
            MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_57));
          }
        }
        break;
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_warning_cannot_succeed_var_functor_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word X_7,
  MR_Word InstX_8,
  MR_Word ConsId_9)
{
  {
    MR_Word Spec_10;
    MR_Word Preamble_11;
    MR_Word Context_12;
    MR_Word VarSet_13;
    MR_Word Pieces_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Word Var_35;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    Preamble_11 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_6);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_6, &Context_12);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_6, &VarSet_13);
    Var_19 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, X_7);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
    }
    Var_25 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, ConsId_9);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    Var_34 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, X_7);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
    }
    Var_35 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_6, InstX_8, (MR_String) ".");
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[313])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[224])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[312])));
      MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_17));
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_11, Pieces_14);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[8])));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_40));
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_warning_cannot_succeed_var_var_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word InstX_10,
  MR_Word InstY_11)
{
  {
    MR_Word Spec_12;
    MR_Word Preamble_13;
    MR_Word Context_14;
    MR_Word VarSet_15;
    MR_Word Pieces_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Word Var_42;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    Preamble_13 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_7);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_7, &Context_14);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_15);
    Var_22 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, X_8);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    Var_28 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Y_9);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
    }
    Var_36 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, X_8);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_36));
    }
    Var_37 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_7, InstX_10, (MR_String) ",");
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[313])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[224])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[312])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    Var_41 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Y_9);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Var_41));
    }
    Var_42 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_7, InstY_11, (MR_String) ".");
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_17, Var_39);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_13, Pieces_16);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[8])));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_47));
    }
    return Spec_12;
  }
}

MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(
  MR_Word ModeInfo0_4,
  MR_Word ModeErrorInfo_5)
{
  {
    MR_Word Spec_6;
    MR_Word ModeError_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeErrorInfo_5, (MR_Integer) 1))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeErrorInfo_5, (MR_Integer) 2))));
    MR_Word ModeContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeErrorInfo_5, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_ModeInfo_13_13;
    MR_Word STATE_VARIABLE_ModeInfo_14_14;

    check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, ModeInfo0_4, &STATE_VARIABLE_ModeInfo_13_13);
    check_hlds__mode_info__mode_info_set_mode_context_3_p_0(ModeContext_11, STATE_VARIABLE_ModeInfo_13_13, &STATE_VARIABLE_ModeInfo_14_14);
    Spec_6 = check_hlds__mode_errors__mode_error_to_spec_2_f_0(STATE_VARIABLE_ModeInfo_14_14, ModeError_9);
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word ModeError_5)
{
  {
    MR_Word Spec_6;

    switch (MR_tag((MR_Word) ModeError_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Preamble_68;
          MR_Word Context_69;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;

          Preamble_68 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_4);
          check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_4, &Context_69);
          Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_68, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[150])));
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Context_69));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
            MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_79));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MergeContext_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ModeError_5, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word MergeErrors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeError_5, (MR_Integer) 1))));

          Spec_6 = check_hlds__mode_errors__mode_error_disj_to_spec_3_f_0(ModeInfo_4, MergeContext_7, MergeErrors_8);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MergeErrors_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModeError_5, (MR_Integer) 0))));

          Spec_6 = check_hlds__mode_errors__mode_error_par_conj_to_spec_2_f_0(ModeInfo_4, MergeErrors_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word Inst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));

              Spec_6 = check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_f_0(ModeInfo_4, PredOrFunc_9, Var_10, Inst_11, Arity_12);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Inst_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));

              Spec_6 = check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_f_0(ModeInfo_4, Var_37, Inst_38);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));

              Spec_6 = check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_f_0(ModeInfo_4, Var_39);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word InstB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word MaybeMultiMode_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));
              MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));

              Spec_6 = check_hlds__mode_errors__mode_error_var_has_inst_to_spec_5_f_0(ModeInfo_4, Var_40, InstA_13, InstB_14, MaybeMultiMode_15);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RHS_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word PredOrFunc_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))) & (MR_Integer) 1);
              MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));

              Spec_6 = check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_f_0(ModeInfo_4, Var_42, RHS_16, Type_17, PredOrFunc_41);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word InstA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word InstB_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));

              Spec_6 = check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_f_0(ModeInfo_4, Var_43, InstA_44, InstB_45);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Insts_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));

              Spec_6 = check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0(ModeInfo_4, Vars_28, Insts_29);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word CalleePredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Integer CalleeProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));
              MR_Word CalleeErrors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 5))));
              MR_Word Vars_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Insts_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));

              Spec_6 = check_hlds__mode_errors__mode_error_in_callee_to_spec_6_f_0(ModeInfo_4, Vars_59, Insts_60, CalleePredId_30, CalleeProcId_31, CalleeErrors_32);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Reason_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word InstA_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word InstB_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));

              Spec_6 = check_hlds__mode_errors__mode_error_bind_var_to_spec_5_f_0(ModeInfo_4, Reason_18, Var_46, InstA_47, InstB_48);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Inst_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));

              Spec_6 = check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_f_0(ModeInfo_4, Var_49, Inst_50);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word VarA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word VarB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word InstA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word InstB_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));

              Spec_6 = check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_f_0(ModeInfo_4, VarA_19, VarB_20, InstA_51, InstB_52);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Name_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word Args_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word ArgInsts_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 5))));
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Inst_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));

              Spec_6 = check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_f_0(ModeInfo_4, Var_57, Name_23, Args_24, Inst_58, ArgInsts_25);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word InstA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word InstB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word VarA_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));

              Spec_6 = check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_f_0(ModeInfo_4, VarA_55, InstA_53, InstB_54);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word MultiModeError_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word VarA_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));

              Spec_6 = check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_4_f_0(ModeInfo_4, VarA_56, PredId_21, MultiModeError_22);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Errors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word Culprit_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));

              Spec_6 = check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0(ModeInfo_4, Errors_26, Culprit_27);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Integer ArgNum_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));
              MR_Word VarInst_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 3))));
              MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));
              MR_Word Inst_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 4))));
              MR_Word Reason_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 5))) & (MR_Integer) 3);

              Spec_6 = check_hlds__mode_errors__mode_error_final_inst_to_spec_6_f_0(ModeInfo_4, ArgNum_33, Var_61, VarInst_34, Inst_62, Reason_63);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word NegCtxt_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 2))));

              Spec_6 = check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_f_0(NegCtxt_35, ModeInfo_4, Var_64);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Vars_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ModeError_5, (MR_Integer) 1))));

              Spec_6 = check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_f_0(ModeInfo_4, Vars_65);
            }
            break;
        }
        break;
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_in_callee_to_spec_6_f_0(
  MR_Word STATE_VARIABLE_ModeInfo_0_50,
  MR_Word Vars_9,
  MR_Word Insts_10,
  MR_Word CalleePredId_11,
  MR_Integer CalleeProcId_12,
  MR_Word CalleeModeErrors_13)
{
  {
    MR_Word Spec_14;
    MR_Word Preamble_15;
    MR_Word ModuleInfo_16;
    MR_Word Context_17;
    MR_Word VarSet_18;
    MR_Word MainPieces_20;
    MR_Word NoMatchPieces_24;
    MR_Word CalleePredIdPieces_25;
    MR_Word VerboseCalleePieces_26;
    MR_Word VerbosePieces_27;
    MR_Word NonVerbosePieces_29;
    MR_Word InitMsg_30;
    MR_Word Var_79;
    MR_Word Var_92;
    MR_Word Var_104;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;

    Preamble_15 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(STATE_VARIABLE_ModeInfo_0_50);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &ModuleInfo_16);
    check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &Context_17);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &VarSet_18);
    if ((Vars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.mode_error_in_callee_to_spec\'/6", (MR_String) "Vars = []");
    }
    else
    {
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 1))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 0))));

      if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_67;
        MR_Word Var_68;
        MR_String Var_69;

        Var_69 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, Var_135);
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[109])));
        }
        {
          MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[289])));
          MR_hl_field(MR_mktag(1), MainPieces_20, 1) = ((MR_Box) (Var_67));
        }
      }
      else
      {
        MR_Word Var_54;
        MR_Word Var_55;
        MR_String Var_56;

        Var_56 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, Vars_9);
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[111])));
        }
        {
          MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[309])));
          MR_hl_field(MR_mktag(1), MainPieces_20, 1) = ((MR_Box) (Var_54));
        }
      }
    }
    Var_79 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(STATE_VARIABLE_ModeInfo_0_50, Insts_10);
    NoMatchPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_79, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[311])));
    CalleePredIdPieces_25 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_16, (MR_Integer) 0, CalleePredId_11);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CalleePredIdPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[120])));
    VerboseCalleePieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[115])), Var_92);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NoMatchPieces_24, VerboseCalleePieces_26);
    VerbosePieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_20, Var_104);
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NoMatchPieces_24, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[122])));
    NonVerbosePieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_20, Var_110);
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Preamble_15));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (VerbosePieces_27));
      MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (NonVerbosePieces_29));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_113));
    }
    {
      InitMsg_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InitMsg_30, 0) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), InitMsg_30, 1) = ((MR_Box) (Var_111));
    }
    if ((CalleeModeErrors_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.mode_error_in_callee_to_spec\'/6", (MR_String) "no error");
    }
    else
    {
      MR_Word First_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeModeErrors_13, (MR_Integer) 0))));
      MR_Word CalleeModeError_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_31, (MR_Integer) 1))));
      MR_Word CalleeContext_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_31, (MR_Integer) 2))));
      MR_Word CalleeModeContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_31, (MR_Integer) 3))));
      MR_Word CalleeModeErrorSpec_37;
      MR_Word LaterMsgs0_40;
      MR_Word LaterMsgs_41;
      MR_Word STATE_VARIABLE_ModeInfo_118_118;
      MR_Word STATE_VARIABLE_ModeInfo_119_119;
      MR_Word STATE_VARIABLE_ModeInfo_120_120;
      MR_Word STATE_VARIABLE_ModeInfo_121_121;
      MR_Word Var_129;

      check_hlds__mode_info__mode_info_set_pred_id_3_p_0(CalleePredId_11, STATE_VARIABLE_ModeInfo_0_50, &STATE_VARIABLE_ModeInfo_118_118);
      check_hlds__mode_info__mode_info_set_proc_id_3_p_0(CalleeProcId_12, STATE_VARIABLE_ModeInfo_118_118, &STATE_VARIABLE_ModeInfo_119_119);
      check_hlds__mode_info__mode_info_set_context_3_p_0(CalleeContext_35, STATE_VARIABLE_ModeInfo_119_119, &STATE_VARIABLE_ModeInfo_120_120);
      check_hlds__mode_info__mode_info_set_mode_context_3_p_0(CalleeModeContext_36, STATE_VARIABLE_ModeInfo_120_120, &STATE_VARIABLE_ModeInfo_121_121);
      CalleeModeErrorSpec_37 = check_hlds__mode_errors__mode_error_to_spec_2_f_0(STATE_VARIABLE_ModeInfo_121_121, CalleeModeError_34);
      LaterMsgs0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleeModeErrorSpec_37, (MR_Integer) 2))));
      if ((LaterMsgs0_40 == (MR_Word) ((MR_Unsigned) 0U)))
        LaterMsgs_41 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word LaterHead0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterMsgs0_40, (MR_Integer) 0))));
        MR_Word LaterTail_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterMsgs0_40, (MR_Integer) 1))));
        MR_Word LaterHead_46;

        if (((MR_tag((MR_Word) LaterHead0_42)) == (MR_Integer) 1))
        {
          MR_Word MaybeLaterContext_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterHead0_42, (MR_Integer) 0))));
          MR_Integer Indent_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LaterHead0_42, (MR_Integer) 2))));
          MR_Word Components_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterHead0_42, (MR_Integer) 3))));

          {
            LaterHead_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LaterHead_46, 0) = ((MR_Box) (MaybeLaterContext_47));
            MR_hl_field(MR_mktag(1), LaterHead_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), LaterHead_46, 2) = ((MR_Box) (Indent_49));
            MR_hl_field(MR_mktag(1), LaterHead_46, 3) = ((MR_Box) (Components_130));
          }
        }
        else
        {
          MR_Word LaterContext_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterHead0_42, (MR_Integer) 0))));
          MR_Word Components_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterHead0_42, (MR_Integer) 1))));
          MR_Word Var_123;

          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (LaterContext_44));
          }
          {
            LaterHead_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LaterHead_46, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), LaterHead_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), LaterHead_46, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), LaterHead_46, 3) = ((MR_Box) (Components_45));
          }
        }
        {
          LaterMsgs_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LaterMsgs_41, 0) = ((MR_Box) (LaterHead_46));
          MR_hl_field(MR_mktag(1), LaterMsgs_41, 1) = ((MR_Box) (LaterTail_43));
        }
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (InitMsg_30));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (LaterMsgs_41));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_129));
      }
    }
    return Spec_14;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_f_0(
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_26,
  MR_Word DelayedGoal_7)
{
  {
    MR_Word Msgs_8;
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DelayedGoal_7, (MR_Integer) 0))));
    MR_Word Error_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DelayedGoal_7, (MR_Integer) 1))));
    MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DelayedGoal_7, (MR_Integer) 2))));
    MR_Word VarList_12;
    MR_Word VarSet_13;
    MR_Word Pieces1_14;
    MR_Word Msg1_15;
    MR_Word ModuleInfo_16;
    MR_Word Msg2_17;
    MR_Word ModeError_19;
    MR_Word ErrorContext_20;
    MR_Word ModeContext_21;
    MR_Word SubSpec_22;
    MR_Word SubMsgs_25;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_String Var_31;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_ModeInfo_63_63;
    MR_Word STATE_VARIABLE_ModeInfo_64_64;
    MR_Word Var_65;
    MR_Word Var_66;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_9, &VarList_12);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_26, &VarSet_13);
    Var_31 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarList_12);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[43])));
    }
    {
      Pieces1_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[308])));
      MR_hl_field(MR_mktag(1), Pieces1_14, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Pieces1_14));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 75) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg1_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg1_15, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), Msg1_15, 1) = ((MR_Box) (Var_38));
    }
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_26, &ModuleInfo_16);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (ModuleInfo_16));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (VarSet_13));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (Goal_11));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_2[1]));
      MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_3[7]));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 61) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg2_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Msg2_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), Msg2_17, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Msg2_17, 3) = ((MR_Box) (Var_49));
    }
    ModeError_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Error_10, (MR_Integer) 1))));
    ErrorContext_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Error_10, (MR_Integer) 2))));
    ModeContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Error_10, (MR_Integer) 3))));
    check_hlds__mode_info__mode_info_set_context_3_p_0(ErrorContext_20, STATE_VARIABLE_ModeInfo_0_26, &STATE_VARIABLE_ModeInfo_63_63);
    check_hlds__mode_info__mode_info_set_mode_context_3_p_0(ModeContext_21, STATE_VARIABLE_ModeInfo_63_63, &STATE_VARIABLE_ModeInfo_64_64);
    SubSpec_22 = check_hlds__mode_errors__mode_error_to_spec_2_f_0(STATE_VARIABLE_ModeInfo_64_64, ModeError_19);
    SubMsgs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubSpec_22, (MR_Integer) 2))));
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Msg2_17));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Msg1_15));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
    }
    Msgs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_65, SubMsgs_25);
    return Msgs_8;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Msgs_8;

    conv0_Msgs_8 = check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Msgs_8));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__mode_errors__is_error_important_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Errors_6,
  MR_Word Culprit_7)
{
  {
    MR_bool succeeded;
    MR_Word Spec_8;
    MR_Word Context_9;
    MR_Word Msgs1_11;
    MR_Word Msgs2_30;
    MR_Word Var_108;

    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_5, &Context_9);
    if ((Errors_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.mode_error_conj_to_spec\'/3", (MR_String) "no errors");
    }
    else
    {
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_6, (MR_Integer) 1))));
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_6, (MR_Integer) 0))));

      if ((Var_118 == (MR_Word) ((MR_Unsigned) 0U)))
        Msgs1_11 = check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_f_0(Context_9, ModeInfo_5, Var_119);
      else
      {
        MR_Word ImportantErrors_15;
        MR_Word OtherErrors_16;
        MR_Word ModuleInfo_17;
        MR_Word Globals_18;
        MR_Word VerboseErrors_19;

        mercury__list__filter_4_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), (MR_Word) (&check_hlds__mode_errors_scalar_common_1[5]), Errors_6, &ImportantErrors_15, &OtherErrors_16);
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_5, &ModuleInfo_17);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_17, &Globals_18);
        libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 62, &VerboseErrors_19);
        switch (VerboseErrors_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConjMsgs_22;
              MR_Word MoreMsg_25;
              MR_Word Var_70;

              if ((ImportantErrors_15 == (MR_Word) ((MR_Unsigned) 0U)))
                if ((OtherErrors_16 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.mode_error_conj_to_spec\'/3", (MR_String) "no errors of any kind");
                }
                else
                {
                  MR_Word FirstOtherError_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherErrors_16, (MR_Integer) 0))));

                  ConjMsgs_22 = check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_f_0(Context_9, ModeInfo_5, FirstOtherError_23);
                }
              else
              {
                MR_Word FirstImportantError_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportantErrors_15, (MR_Integer) 0))));

                ConjMsgs_22 = check_hlds__mode_errors__mode_error_conjunct_to_msgs_3_f_0(Context_9, ModeInfo_5, FirstImportantError_20);
              }
              {
                MoreMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MoreMsg_25, 0) = ((MR_Box) (Context_9));
                MR_hl_field(MR_mktag(0), MoreMsg_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[30])));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MoreMsg_25));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Msgs1_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ConjMsgs_22, Var_70);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Preamble_26;
              MR_Word ConjPieces_27;
              MR_Word Msgs1Start_28;
              MR_Word Msgs1Rest_29;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_String Var_45;
              MR_Integer Var_46;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;

              Preamble_26 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_5);
              Var_46 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), Errors_6);
              Var_45 = mercury__string__int_to_string_1_f_0(Var_46);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (Var_45));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[34])));
              }
              {
                ConjPieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ConjPieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[302])));
                MR_hl_field(MR_mktag(1), ConjPieces_27, 1) = ((MR_Box) (Var_43));
              }
              Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_26, ConjPieces_27);
              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Context_9));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Var_55));
              }
              {
                Msgs1Start_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msgs1Start_28, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), Msgs1Start_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (check_hlds__mode_errors__mode_error_conj_to_spec_3_f_0_2));
                MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Context_9));
                MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (ModeInfo_5));
              }
              Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), ImportantErrors_15, OtherErrors_16);
              Msgs1Rest_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), (MR_Word) (&check_hlds__mode_errors_scalar_common_2[0]), Var_60, Var_61);
              Var_62 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1Rest_29);
              Msgs1_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1Start_28, Var_62);
            }
            break;
        }
      }
    }
    switch (MR_tag((MR_Word) Culprit_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Culprit_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_100;

              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Context_9));
                MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[303])));
              }
              {
                Msgs2_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msgs2_30, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(1), Msgs2_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            Msgs2_30 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImpureGoal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Culprit_7, (MR_Integer) 0))));
          MR_Word ImpureGoalInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpureGoal_32, (MR_Integer) 1))));
          MR_Word ImpureGoalContext_35;
          MR_Word Var_84;
          MR_Word Var_88;
          MR_Word Var_89;

          ImpureGoalContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(ImpureGoalInfo_34);
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Context_9));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[306])));
          }
          {
            Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (ImpureGoalContext_35));
            MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[307])));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msgs2_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs2_30, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Msgs2_30, 1) = ((MR_Box) (Var_88));
          }
        }
        break;
    }
    Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_11, Msgs2_30);
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_108));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__purity_error_lambda_should_be_any_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word Vars_5)
{
  {
    MR_Word Spec_6;
    MR_Word Preamble_7;
    MR_Word Context_8;
    MR_Word VarSet_9;
    MR_Word Pieces_10;
    MR_Word Always_11;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_39;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;

    Preamble_7 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_4);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_4, &Context_8);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_4, &VarSet_9);
    Var_32 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, Vars_5);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[278])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[300])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[299])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[298])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[297])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[296])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_15));
    }
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_7, Pieces_10);
    {
      Always_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Always_11, 0) = ((MR_Box) (Var_39));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Always_11));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[301])));
    }
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_80));
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__purity_error_should_be_in_promise_purity_scope_to_spec_3_f_0(
  MR_Word NegCtxtDesc_5,
  MR_Word ModeInfo_6,
  MR_Word Var_7)
{
  {
    MR_Word Spec_8;
    MR_Word Preamble_9;
    MR_Word Context_10;
    MR_Word VarSet_11;
    MR_Word Pieces_12;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;

    Preamble_9 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_6);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_6, &Context_10);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_6, &VarSet_11);
    switch (NegCtxtDesc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_35;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_String Var_40;

          Var_40 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, Var_7);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[186])));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[294])));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
          }
          {
            Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[293])));
            MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_35));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_15;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_String Var_20;

          Var_20 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, Var_7);
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
          }
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[190])));
          }
          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[294])));
            MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
          }
          {
            Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[295])));
            MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_15));
          }
        }
        break;
    }
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_9, Pieces_12);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_56));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_final_inst_to_spec_6_f_0(
  MR_Word ModeInfo_8,
  MR_Integer ArgNum_9,
  MR_Word Var_10,
  MR_Word VarInst_11,
  MR_Word ExpInst_12,
  MR_Word Reason_13)
{
  {
    MR_Word Spec_14;
    MR_Word Preamble_15;
    MR_Word Context_16;
    MR_Word VarSet_17;
    MR_String Problem_18;
    MR_Word Pieces_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_47;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;

    Preamble_15 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_8);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_8, &Context_16);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_8, &VarSet_17);
    switch (Reason_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Problem_18 = (MR_String) "did not get sufficiently instantiated.";
        break;
      case (MR_Integer) 0:
        Problem_18 = (MR_String) "became too instantiated.";
        break;
      case (MR_Integer) 2:
        Problem_18 = (MR_String) "had the wrong instantiatedness.";
        break;
    }
    Var_25 = mercury__string__int_to_string_1_f_0(ArgNum_9);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Var_25));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Problem_18));
    }
    Var_35 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, Var_10);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
    }
    Var_47 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[238]));
    Var_39 = check_hlds__mode_errors__report_inst_6_f_0(ModeInfo_8, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[177])), Var_47, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[180])), VarInst_11);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[291])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[290])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[289])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    Var_61 = check_hlds__mode_errors__report_inst_6_f_0(ModeInfo_8, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])), Var_47, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[181])), ExpInst_12);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[292])));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
    }
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_20, Var_58);
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_15, Pieces_19);
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Var_87));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_83));
    }
    return Spec_14;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__report_inst_6_f_0(
  MR_Word ModeInfo_8,
  MR_Word ShortInstQF_9,
  MR_Word ShortInstSuffix_10,
  MR_Word LongInstPrefix_11,
  MR_Word LongInstSuffix_12,
  MR_Word Inst0_13)
{
  {
    MR_Word Pieces_14;
    MR_Word ModuleInfo_15;
    MR_Word InstVarSet_16;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_8, &ModuleInfo_15);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_8, &InstVarSet_16);
    Pieces_14 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_15, InstVarSet_16, (MR_Integer) 1, ShortInstQF_9, ShortInstSuffix_10, LongInstPrefix_11, LongInstSuffix_12, Inst0_13);
    return Pieces_14;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_functor_to_spec_6_f_0(
  MR_Word ModeInfo_8,
  MR_Word X_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word InstX_12,
  MR_Word ArgInsts_13)
{
  {
    MR_Word Spec_14;
    MR_Word Preamble_15;
    MR_Word Context_16;
    MR_Word VarSet_17;
    MR_Word ModuleInfo_18;
    MR_String FunctorConsIdStr_19;
    MR_String ConsIdStr_20;
    MR_Word FakeTermInst_21;
    MR_Word Pieces_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_String Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;

    Preamble_15 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_8);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_8, &Context_16);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_8, &VarSet_17);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_8, &ModuleInfo_18);
    FunctorConsIdStr_19 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_18, VarSet_17, (MR_Integer) 0, ConsId_10, Args_11);
    ConsIdStr_20 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, ConsId_10);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (ConsIdStr_20));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ArgInsts_13));
    }
    {
      FakeTermInst_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FakeTermInst_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), FakeTermInst_21, 1) = ((MR_Box) (Var_25));
    }
    Var_32 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, X_9);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (FunctorConsIdStr_19));
    }
    Var_48 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, X_9);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
    }
    Var_49 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_8, InstX_12, (MR_String) ",");
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[243])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[284])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[224])));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[264])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    Var_56 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_8, FakeTermInst_21, (MR_String) ".");
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[288])));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
    }
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_27, Var_51);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_15, Pieces_22);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_61));
    }
    return Spec_14;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_lambda_to_spec_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word X_7,
  MR_Word InstX_8,
  MR_Word InstY_9)
{
  {
    MR_Word Spec_10;
    MR_Word Preamble_11;
    MR_Word Context_12;
    MR_Word VarSet_13;
    MR_Word Pieces_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_String Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;

    Preamble_11 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_6);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_6, &Context_12);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_6, &VarSet_13);
    Var_20 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, X_7);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
    }
    Var_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, X_7);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    Var_32 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_6, InstX_8, (MR_String) ",");
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[243])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[286])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[264])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_37 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_6, InstY_9, (MR_String) ".");
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[287])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_34);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_11, Pieces_14);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_42));
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_var_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word InstX_10,
  MR_Word InstY_11)
{
  {
    MR_Word Spec_12;
    MR_Word Preamble_13;
    MR_Word Context_14;
    MR_Word VarSet_15;
    MR_Word Pieces_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    Preamble_13 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_7);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_7, &Context_14);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_15);
    Var_22 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, X_8);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    Var_28 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Y_9);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
    }
    Var_39 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, X_8);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
    }
    Var_40 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_7, InstX_10, (MR_String) ",");
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[243])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[284])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[224])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[264])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    Var_47 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Y_9);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
    }
    Var_48 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_7, InstY_11, (MR_String) ".");
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[285])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_17, Var_42);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_13, Pieces_16);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_53));
    }
    return Spec_12;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = check_hlds__mode_util__from_to_insts_to_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_pred_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word X_8,
  MR_Word RHS_9,
  MR_Word Type_10,
  MR_Word PredOrFunc_11)
{
  {
    MR_Word Spec_12;
    MR_Word Preamble_13;
    MR_Word Context_14;
    MR_Word VarSet_15;
    MR_Word InstVarSet_16;
    MR_Word ModuleInfo_17;
    MR_String RHSStr_19;
    MR_Word TypeVarSet_24;
    MR_Word MainPieces_25;
    MR_Word VerbosePieces_26;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_String Var_59;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_String Var_71;
    MR_String Var_72;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_String Var_82;
    MR_String Var_83;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;

    Preamble_13 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_7);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_7, &Context_14);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_15);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_7, &InstVarSet_16);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_7, &ModuleInfo_17);
    switch (MR_tag((MR_Word) RHS_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 0))));

          RHSStr_19 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Y_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 0))));
          MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 1))));

          RHSStr_19 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_17, VarSet_15, (MR_Integer) 0, ConsId_20, ArgVars_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgFromToInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 1))));
          MR_Word ArgModes_23;
          MR_String Var_29;
          MR_String Var_30;
          MR_Word ArgVars_126 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 0))));

          ArgModes_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__mode_errors_scalar_common_1[4]), ArgFromToInsts_22);
          Var_30 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(VarSet_15, InstVarSet_16, (MR_Integer) 0, ArgVars_126, ArgModes_23);
          Var_29 = mercury__string__f_43_43_2_f_0(Var_30, (MR_String) "] ... )");
          RHSStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "lambda([", Var_29);
        }
        break;
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
    Var_38 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, X_8);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (RHSStr_19));
    }
    Var_59 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TypeVarSet_24, (MR_Integer) 0, Type_10);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[280])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[279])));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[278])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[277])));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      MainPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[276])));
      MR_hl_field(MR_mktag(1), MainPieces_25, 1) = ((MR_Box) (Var_36));
    }
    Var_72 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_11);
    Var_71 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) "s");
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
    }
    Var_83 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_11);
    Var_82 = mercury__string__f_43_43_2_f_0(Var_83, (MR_String) "s");
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[167])));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[283])));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[282])));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
    }
    {
      VerbosePieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[281])));
      MR_hl_field(MR_mktag(1), VerbosePieces_26, 1) = ((MR_Box) (Var_69));
    }
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_13, MainPieces_25);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Var_120));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_122, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_122, 1) = ((MR_Box) (VerbosePieces_26));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_116));
    }
    return Spec_12;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_implied_mode_to_spec_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word Var_7,
  MR_Word VarInst_8,
  MR_Word Inst_9)
{
  {
    MR_bool succeeded;
    MR_Word Spec_10;
    MR_Word ModuleInfo_11;
    MR_Word Globals_12;
    MR_Word OpMode_13;
    MR_Word Context_14;
    MR_Word Var_19;
    MR_Word Var_20;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_6, &ModuleInfo_11);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_12);
    libs__globals__get_op_mode_2_p_0(Globals_12, &OpMode_13);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_6, &Context_14);
    succeeded = ((MR_tag((MR_Word) OpMode_13)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_13, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_19, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word Preamble_16;
      MR_Word VarSet_17;
      MR_Word Pieces_18;
      MR_Word Var_23;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_62;
      MR_Word ModuleInfo_88;
      MR_Word InstVarSet_89;

      Preamble_16 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_6);
      check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_6, &VarSet_17);
      Var_30 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, Var_7);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
      }
      Var_54 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_6, VarInst_8, (MR_String) ",");
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_6, &ModuleInfo_88);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_6, &InstVarSet_89);
      Var_62 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_88, InstVarSet_89, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[238])), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[181])), Inst_9);
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[241])));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_62));
      }
      Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_54, Var_56);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[243])));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
      }
      {
        Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[275])));
        MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_23));
      }
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_16, Pieces_18);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_35));
      }
    }
    else
    {
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_45));
      }
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_var_has_inst_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word Var_8,
  MR_Word VarInst_9,
  MR_Word Inst_10,
  MR_Word MaybeMultiModeError_11)
{
  {
    MR_Word Spec_12;
    MR_Word Preamble_13;
    MR_Word Context_14;
    MR_Word VarSet_15;
    MR_Word MainPieces_16;
    MR_Word MainMsgs_17;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_String Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    Preamble_13 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_7);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_7, &Context_14);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_15);
    Var_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Var_8);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    Var_32 = check_hlds__mode_errors__has_inst_expected_inst_was_3_f_0(ModeInfo_7, VarInst_9, Inst_10);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[244])));
      MR_hl_field(MR_mktag(1), MainPieces_16, 1) = ((MR_Box) (Var_29));
    }
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_13, MainPieces_16);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      MainMsgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainMsgs_17, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), MainMsgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if ((MaybeMultiModeError_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (MainMsgs_17));
      }
    }
    else
    {
      MR_Word MultiModeError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMultiModeError_11, (MR_Integer) 0))));
      MR_Word ConnectMsgs_20;
      MR_Word PredId_21;
      MR_Word MultiMode_22;
      MR_Word SubSpec_23;
      MR_Word SubMsgs_26;
      MR_Word Var_47;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[274])));
      }
      {
        ConnectMsgs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConnectMsgs_20, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), ConnectMsgs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MultiModeError_18, (MR_Integer) 0))));
      MultiMode_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MultiModeError_18, (MR_Integer) 1))));
      SubSpec_23 = check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_4_f_0(ModeInfo_7, Var_8, PredId_21, MultiMode_22);
      SubMsgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubSpec_23, (MR_Integer) 2))));
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ConnectMsgs_20, SubMsgs_26);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MainMsgs_17, Var_56);
      {
        Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_55));
      }
    }
    return Spec_12;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_unify_var_multimode_pred_to_spec_4_f_0(
  MR_Word ModeInfo_6,
  MR_Word X_7,
  MR_Word PredId_8,
  MR_Word MultiModeError_9)
{
  {
    MR_Word Spec_10;
    MR_Word Preamble_11;
    MR_Word Context_12;
    MR_Word VarSet_13;
    MR_Word ModuleInfo_14;
    MR_Word PredInfo_15;
    MR_Word PredOrFunc_16;
    MR_Word PredModule_17;
    MR_String PredName_18;
    MR_Word QualifiedName_19;
    MR_Integer Arity_20;
    MR_Integer FuncArity_21;
    MR_Word StartPieces_22;
    MR_Word DetailPieces_26;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;

    Preamble_11 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_6);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_6, &Context_12);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_6, &VarSet_13);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_6, &ModuleInfo_14);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_8, &PredInfo_15);
    PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
    PredModule_17 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
    PredName_18 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
    {
      QualifiedName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_19, 0) = ((MR_Box) (PredModule_17));
      MR_hl_field(MR_mktag(1), QualifiedName_19, 1) = ((MR_Box) (PredName_18));
    }
    Arity_20 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_15);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_16, &FuncArity_21, Arity_20);
    Var_35 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, X_7);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (QualifiedName_19));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (FuncArity_21));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[265])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      StartPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StartPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[264])));
      MR_hl_field(MR_mktag(1), StartPieces_22, 1) = ((MR_Box) (Var_33));
    }
    switch (MR_tag((MR_Word) MultiModeError_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_58;
          MR_String Var_59;
          MR_Word ArgVars_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MultiModeError_9, (MR_Integer) 0))));
          MR_Word MatchPieces_137;
          MR_String ModeOrModes_138;
          MR_Word ArgVarPieces_139;
          MR_Word Var_144;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_149;
          MR_Word Var_152;
          MR_Word Var_153;
          MR_Word Var_155;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_160;
          MR_String VarOrVars_163;
          MR_Box conv3_Var_59;
          MR_Box conv4_ModeOrModes_138;
          MR_Box conv5_VarOrVars_163;

          conv3_Var_59 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgVars_136, ((MR_Box) ((MR_String) "does")), ((MR_Box) ((MR_String) "do")));
          Var_59 = ((MR_String) (conv3_Var_59));
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            MatchPieces_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MatchPieces_137, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), MatchPieces_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[272])));
          }
          conv4_ModeOrModes_138 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgVars_136, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
          ModeOrModes_138 = ((MR_String) (conv4_ModeOrModes_138));
          conv5_VarOrVars_163 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgVars_136, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
          VarOrVars_163 = ((MR_String) (conv5_VarOrVars_163));
          ArgVarPieces_139 = check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0(VarSet_13, ArgVars_136);
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (ModeOrModes_138));
          }
          {
            Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_153, 1) = ((MR_Box) (VarOrVars_163));
          }
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Var_153));
            MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[269])));
            MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_152));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_149));
          }
          {
            Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[268])));
            MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
          }
          {
            Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[171])));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[270])));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_160));
          }
          Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MatchPieces_137, Var_157);
          Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgVarPieces_139, Var_156);
          DetailPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_144, Var_155);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MultiModeError_9, (MR_Integer) 0))));
          MR_Word MatchPieces_28;
          MR_String ModeOrModes_29;
          MR_Word ArgVarPieces_30;
          MR_Word Var_50;
          MR_String Var_51;
          MR_Word Var_70;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_String VarOrVars_123;
          MR_Box conv0_Var_51;
          MR_Box conv1_ModeOrModes_29;
          MR_Box conv2_VarOrVars_123;

          conv0_Var_51 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgVars_27, ((MR_Box) ((MR_String) "matches")), ((MR_Box) ((MR_String) "match")));
          Var_51 = ((MR_String) (conv0_Var_51));
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_51));
          }
          {
            MatchPieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MatchPieces_28, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), MatchPieces_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[267])));
          }
          conv1_ModeOrModes_29 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgVars_27, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
          ModeOrModes_29 = ((MR_String) (conv1_ModeOrModes_29));
          conv2_VarOrVars_123 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgVars_27, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
          VarOrVars_123 = ((MR_String) (conv2_VarOrVars_123));
          ArgVarPieces_30 = check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0(VarSet_13, ArgVars_27);
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (ModeOrModes_29));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (VarOrVars_123));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[269])));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[268])));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[171])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[270])));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
          }
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MatchPieces_28, Var_83);
          Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgVarPieces_30, Var_82);
          DetailPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_70, Var_81);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonGroundArgVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MultiModeError_9, (MR_Integer) 0))));
          MR_String VarOrVars_24;
          MR_Word NonGroundArgVarPieces_25;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_105;
          MR_Box conv6_VarOrVars_24;

          conv6_VarOrVars_24 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonGroundArgVars_23, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
          VarOrVars_24 = ((MR_String) (conv6_VarOrVars_24));
          NonGroundArgVarPieces_25 = check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0(VarSet_13, NonGroundArgVars_23);
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (VarOrVars_24));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[273])));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
          }
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NonGroundArgVarPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[173])));
          DetailPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_99, Var_105);
        }
        break;
    }
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_22, DetailPieces_26);
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_11, Var_120);
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (Var_119));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_115));
    }
    return Spec_10;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_18;

    succeeded = check_hlds__mode_errors__IntroducedFrom__pred__named_and_unnamed_vars_to_pieces__1447__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_18);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_18));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Vars_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_Word NamedVarNames_7;
    MR_Word UnnamedVars_8;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (check_hlds__mode_errors__named_and_unnamed_vars_to_pieces_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (VarSet_4));
    }
    mercury__list__filter_map_4_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Vars_5, &NamedVarNames_7, &UnnamedVars_8);
    if ((NamedVarNames_7 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word NamedVarPieces_11;

      NamedVarPieces_11 = parse_tree__error_util__list_to_pieces_1_f_0(NamedVarNames_7);
      if ((UnnamedVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
        Pieces_6 = NamedVarPieces_11;
      else
      {
        {
          Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[263])));
          MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (NamedVarPieces_11));
        }
      }
    }
    return Pieces_6;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_var_is_live_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5)
{
  {
    MR_Word Spec_6;
    MR_Word Preamble_7;
    MR_Word Context_8;
    MR_Word VarSet_9;
    MR_Word Pieces_10;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    Preamble_7 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_4);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_4, &Context_8);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_4, &VarSet_9);
    Var_18 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, Var_5);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[144])));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[262])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[261])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_7, Pieces_10);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_28));
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_poly_unify_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Var_6,
  MR_Word VarInst_7)
{
  {
    MR_Word Spec_8;
    MR_Word Preamble_9;
    MR_Word Context_10;
    MR_Word VarSet_11;
    MR_Word MainPieces_12;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    Preamble_9 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_5);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_5, &Context_10);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_5, &VarSet_11);
    Var_24 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, Var_6);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
    }
    Var_25 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_5, VarInst_7, (MR_String) ",");
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[244])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[258])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    MainPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[129])));
    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_9, MainPieces_12);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[260])));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_69));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_higher_order_pred_var_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word PredOrFunc_8,
  MR_Word Var_9,
  MR_Word VarInst_10,
  MR_Integer Arity_11)
{
  {
    MR_Word Spec_12;
    MR_Word Preamble_13;
    MR_Word Context_14;
    MR_Word VarSet_15;
    MR_Word ExpectingPieces_16;
    MR_Word Pieces_17;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    Preamble_13 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_7);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_7, &Context_14);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_15);
    switch (PredOrFunc_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_20;
          MR_Word Var_21;
          MR_String Var_22;
          MR_String Var_24;
          MR_String Var_25;
          MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Arity_11 - (MR_Unsigned) (MR_Integer) 1);

          Var_25 = mercury__string__int_to_string_1_f_0(Var_26);
          Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ".");
          Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "of arity ", Var_24);
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (Var_22));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])));
          }
          {
            ExpectingPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExpectingPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[256])));
            MR_hl_field(MR_mktag(1), ExpectingPieces_16, 1) = ((MR_Box) (Var_20));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_34;
          MR_Word Var_35;
          MR_String Var_36;
          MR_String Var_38;
          MR_String Var_39;

          Var_39 = mercury__string__int_to_string_1_f_0(Arity_11);
          Var_38 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) ".");
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "of arity ", Var_38);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (Var_36));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])));
          }
          {
            ExpectingPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExpectingPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[257])));
            MR_hl_field(MR_mktag(1), ExpectingPieces_16, 1) = ((MR_Box) (Var_34));
          }
        }
        break;
    }
    Var_49 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Var_9);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    Var_50 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_7, VarInst_10, (MR_String) ",");
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[244])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_44, ExpectingPieces_16);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_13, Pieces_17);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_59));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_55));
    }
    return Spec_12;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__mode_errors__IntroducedFrom__pred__mode_error_no_matching_mode_to_spec__1040__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Vars_6,
  MR_Word Insts_7)
{
  {
    MR_bool succeeded;
    MR_Word Spec_8;
    MR_Integer NumVars_9;
    MR_Integer NumInsts_10;
    MR_Word PrefixPieces_11;
    MR_Word ModeContext_12;
    MR_Word ModuleInfo_13;
    MR_Word CallId_17;
    MR_Word PredOrFunc_19;
    MR_Integer NumExtra_27;
    MR_Word VarInstPieces_39;
    MR_Word NoMatchPieces_42;
    MR_Word Pieces_43;
    MR_Word Context_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_String Var_71;
    MR_Word Var_78;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), Vars_6, &NumVars_9);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_7, &NumInsts_10);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (NumVars_9));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (NumInsts_10));
    }
    mercury__require__expect_3_p_0(Var_45, (MR_String) "function \140check_hlds.mode_errors.mode_error_no_matching_mode_to_spec\'/3", (MR_String) "NumVars != NumInsts");
    Var_48 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_5);
    PrefixPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[250])));
    check_hlds__mode_info__mode_info_get_mode_context_2_p_0(ModeInfo_5, &ModeContext_12);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_5, &ModuleInfo_13);
    switch (MR_tag((MR_Word) ModeContext_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.mode_error_no_matching_mode_to_spec\'/3", (MR_String) "invalid context");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModeCallId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeContext_12, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) ModeCallId_14)) == (MR_Integer) 1))
          {
            MR_Word GenericCallId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeCallId_14, (MR_Integer) 0))));

            {
              CallId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallId_17, 0) = ((MR_Box) (GenericCallId_16));
            }
            switch (MR_tag((MR_Word) GenericCallId_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                PredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCallId_16, (MR_Integer) 0))) & (MR_Integer) 1);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SimpleCallId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCallId_16, (MR_Integer) 1))));

                  PredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimpleCallId_22, (MR_Integer) 0))) & (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                PredOrFunc_19 = (MR_Integer) 0;
                break;
            }
            NumExtra_27 = (MR_Integer) 0;
          }
          else
          {
            MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCallId_14, (MR_Integer) 0))));
            MR_Word PredInfo_29;
            MR_Integer OrigArity_30;
            MR_Word SimpleCallId_88;

            check_hlds__mode_info__mode_info_get_simple_call_id_3_p_0(ModeInfo_5, PredId_28, &SimpleCallId_88);
            {
              CallId_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CallId_17, 0) = ((MR_Box) (SimpleCallId_88));
            }
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_28, &PredInfo_29);
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_29, &OrigArity_30);
            PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_29);
            NumExtra_27 = (MR_Integer) ((MR_Unsigned) NumVars_9 - (MR_Unsigned) OrigArity_30);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.mode_error_no_matching_mode_to_spec\'/3", (MR_String) "invalid context");
        }
        break;
    }
    succeeded = (NumExtra_27 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ExtraVars_33;
      MR_Word UserVars_34;
      MR_Word ExtraInsts_35;
      MR_Word UserInsts_36;
      MR_Word UserVarInstPieces_38;
      MR_Word Var_59;

      mercury__list__det_split_list_4_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), NumExtra_27, Vars_6, &ExtraVars_33, &UserVars_34);
      mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumExtra_27, Insts_7, &ExtraInsts_35, &UserInsts_36);
      UserVarInstPieces_38 = check_hlds__mode_errors__arg_inst_mismatch_pieces_5_f_0(ModeInfo_5, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[252])), PredOrFunc_19, UserVars_34, UserInsts_36);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (check_hlds__mode_errors__mode_error_no_matching_mode_to_spec_3_f_0_2));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (ModuleInfo_13));
      }
      succeeded = mercury__list__all_true_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_59, ExtraInsts_35);
      if (succeeded)
        VarInstPieces_39 = UserVarInstPieces_38;
      else
      {
        MR_Word ExtraVarInstPieces_41;

        ExtraVarInstPieces_41 = check_hlds__mode_errors__arg_inst_mismatch_pieces_5_f_0(ModeInfo_5, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[254])), (MR_Integer) 0, ExtraVars_33, ExtraInsts_35);
        VarInstPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExtraVarInstPieces_41, UserVarInstPieces_38);
      }
    }
    else
    {
      VarInstPieces_39 = check_hlds__mode_errors__arg_inst_mismatch_pieces_5_f_0(ModeInfo_5, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[252])), PredOrFunc_19, Vars_6, Insts_7);
    }
    Var_71 = hlds__hlds_out__hlds_out_util__call_id_to_string_1_f_0(CallId_17);
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
    }
    {
      NoMatchPieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NoMatchPieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[255])));
      MR_hl_field(MR_mktag(1), NoMatchPieces_42, 1) = ((MR_Box) (Var_69));
    }
    Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarInstPieces_39, NoMatchPieces_42);
    Pieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_11, Var_78);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_5, &Context_44);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_43));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Context_44));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_82));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__arg_inst_mismatch_pieces_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word ArgPieces_8,
  MR_Word PredOrFunc_9,
  MR_Word Vars_10,
  MR_Word Insts_11)
{
  {
    MR_Word Pieces_12;
    MR_Word VarSet_13;

    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_13);
    if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_10, (MR_Integer) 0))));
      MR_Word TailVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_10, (MR_Integer) 1))));

      switch (PredOrFunc_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ArgVars_18;
            MR_Word ReturnVar_19;
            MR_Box conv0_ReturnVar_19;

            mercury__list__det_split_last_3_p_0((MR_Word) (&check_hlds__mode_errors_scalar_common_2[2]), Vars_10, &ArgVars_18, &conv0_ReturnVar_19);
            ReturnVar_19 = ((MR_Word) (conv0_ReturnVar_19));
            if ((ArgVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_49;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_String Var_54;
              MR_Word Var_62;

              Var_54 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, ReturnVar_19);
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[109])));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[245])));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
              }
              Var_62 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(ModeInfo_7, Insts_11);
              Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, Var_62);
            }
            else
            {
              MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_18, (MR_Integer) 1))));

              if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_30;
                MR_Word Var_31;
                MR_Word Var_32;
                MR_Word Var_33;
                MR_String Var_34;
                MR_Word Var_35;
                MR_Word Var_38;
                MR_Word Var_39;
                MR_String Var_40;
                MR_Word Var_48;

                Var_34 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, ArgVars_18);
                {
                  Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
                }
                Var_40 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, ReturnVar_19);
                {
                  Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
                }
                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
                  MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[111])));
                }
                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[246])));
                  MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
                }
                {
                  Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
                  MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
                }
                Var_48 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(ModeInfo_7, Insts_11);
                Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, Var_48);
                Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) ((MR_Unsigned) 0U), Var_31);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_8, Var_30);
              }
              else
              {
                MR_Word Var_100;
                MR_Word Var_101;
                MR_Word Var_102;
                MR_Word Var_103;
                MR_String Var_104;
                MR_Word Var_105;
                MR_Word Var_108;
                MR_Word Var_109;
                MR_String Var_110;
                MR_Word Var_112;

                Var_104 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, ArgVars_18);
                {
                  Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_104));
                }
                Var_110 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, ReturnVar_19);
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
                }
                {
                  Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
                  MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[111])));
                }
                {
                  Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[246])));
                  MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
                  MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
                }
                Var_112 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(ModeInfo_7, Insts_11);
                Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_102, Var_112);
                Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[248])), Var_101);
                Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_8, Var_100);
              }
            }
          }
          break;
        case (MR_Integer) 0:
          if ((TailVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_String Var_81;
            MR_Word Var_89;

            Var_81 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, HeadVar_14);
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[109])));
            }
            Var_89 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(ModeInfo_7, Insts_11);
            Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_79, Var_89);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_8, Var_78);
          }
          else
          {
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_String Var_69;
            MR_Word Var_77;

            Var_69 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, Vars_10);
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[111])));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[247])));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
            }
            Var_77 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(ModeInfo_7, Insts_11);
            Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_77);
            Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_8, Var_63);
          }
          break;
      }
    }
    return Pieces_12;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Inst_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      if ((Insts_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_28 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[240]));
        MR_Word ModuleInfo_45;
        MR_Word InstVarSet_46;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(HeadVar__1_1, &ModuleInfo_45);
        check_hlds__mode_info__mode_info_get_instvarset_2_p_0(HeadVar__1_1, &InstVarSet_46);
        HeadVar__3_3 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_45, InstVarSet_46, (MR_Integer) 1, (MR_Integer) 1, Var_28, (MR_Word) ((MR_Unsigned) 0U), Var_28, Inst_6);
      }
      else
      {
        MR_Word HeadPieces_11;
        MR_Word TailPieces_12;
        MR_Word ModuleInfo_55;
        MR_Word InstVarSet_56;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(HeadVar__1_1, &ModuleInfo_55);
        check_hlds__mode_info__mode_info_get_instvarset_2_p_0(HeadVar__1_1, &InstVarSet_56);
        HeadPieces_11 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_55, InstVarSet_56, (MR_Integer) 1, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[177])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[177])), Inst_6);
        TailPieces_12 = check_hlds__mode_errors__inst_list_to_sep_lines_2_f_0(HeadVar__1_1, Insts_7);
        HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_11, TailPieces_12);
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_non_local_lambda_var_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Var_6,
  MR_Word VarInst_7)
{
  {
    MR_Word Spec_8;
    MR_Word Preamble_9;
    MR_Word Context_10;
    MR_Word VarSet_11;
    MR_Word Pieces_12;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    Preamble_9 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_5);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_5, &Context_10);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_5, &VarSet_11);
    Var_18 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, Var_6);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
    }
    Var_19 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_5, VarInst_7, (MR_String) ",");
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[244])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_13, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[105])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_9, Pieces_12);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_39));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_bind_var_to_spec_5_f_0(
  MR_Word ModeInfo_7,
  MR_Word Reason_8,
  MR_Word Var_9,
  MR_Word VarInst_10,
  MR_Word Inst_11)
{
  {
    MR_Word Spec_12;
    MR_Word Preamble_13;
    MR_Word Context_14;
    MR_Word VarSet_15;
    MR_String ReasonStr_16;
    MR_Word MainPieces_19;
    MR_Word VerbosePieces_20;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_String Var_44;
    MR_Word Var_45;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;

    Preamble_13 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_7);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_7, &Context_14);
    check_hlds__mode_info__mode_info_get_varset_2_p_0(ModeInfo_7, &VarSet_15);
    Var_44 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_15, Var_9);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
    }
    Var_45 = check_hlds__mode_errors__has_inst_expected_inst_was_3_f_0(ModeInfo_7, VarInst_10, Inst_11);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[243])));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    switch (MR_tag((MR_Word) Reason_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Reason_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ReasonStr_16 = (MR_String) "attempt to bind a non-local variable inside a negation.";
              VerbosePieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[91]));
            }
            break;
          case (MR_Integer) 1:
            {
              ReasonStr_16 = (MR_String) "attempt to bind a non-local variable inside the condition of an if-then-else.";
              VerbosePieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[77]));
            }
            break;
          case (MR_Integer) 2:
            {
              ReasonStr_16 = (MR_String) "attempt to bind a non-local variable inside a trace goal.";
              VerbosePieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[99]));
            }
            break;
          case (MR_Integer) 3:
            {
              ReasonStr_16 = (MR_String) "attempt to bind outer state variables inside an atomic goal.";
              VerbosePieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[65]));
            }
            break;
          case (MR_Integer) 4:
            {
              ReasonStr_16 = (MR_String) "attempt to bind a non-local variable inside more than one parallel conjunct.";
              VerbosePieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[95]));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Reason_8, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_String PredOrFuncS_18;
          MR_String Var_27;
          MR_String Var_29;

          PredOrFuncS_18 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_17);
          Var_29 = mercury__string__f_43_43_2_f_0(PredOrFuncS_18, (MR_String) " lambda goal.");
          Var_27 = mercury__string__f_43_43_2_f_0((MR_String) " a ", Var_29);
          ReasonStr_16 = mercury__string__f_43_43_2_f_0((MR_String) "attempt to bind a non-local variable inside", Var_27);
          VerbosePieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[83]));
        }
        break;
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ReasonStr_16));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      MainPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[242])));
      MR_hl_field(MR_mktag(1), MainPieces_19, 1) = ((MR_Box) (Var_35));
    }
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_13, MainPieces_19);
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Var_122));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_124, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_124, 1) = ((MR_Box) (VerbosePieces_20));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_118));
    }
    return Spec_12;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__has_inst_expected_inst_was_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word ActualInst_6,
  MR_Word ExpectedInst_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_16;
    MR_Word ModuleInfo_42;
    MR_Word InstVarSet_43;

    Var_8 = check_hlds__mode_errors__has_instantiatedness_3_f_0(ModeInfo_5, ActualInst_6, (MR_String) ",");
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_5, &ModuleInfo_42);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_5, &InstVarSet_43);
    Var_16 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_42, InstVarSet_43, (MR_Integer) 1, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[238])), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[181])), ExpectedInst_7);
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[241])));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_16));
    }
    HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_8, Var_10);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__has_instantiatedness_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word Inst_6,
  MR_String Suffix_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_21;
    MR_Word ModuleInfo_34;
    MR_Word InstVarSet_35;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Suffix_7));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[240])));
    }
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_5, &ModuleInfo_34);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_5, &InstVarSet_35);
    Var_10 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_34, InstVarSet_35, (MR_Integer) 1, (MR_Integer) 0, Var_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[238])), Var_21, Inst_6);
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[236])));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (Var_10));
    }
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_par_conj_to_spec_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Msgs_10;

    conv0_Msgs_10 = check_hlds__mode_errors__merge_error_to_msgs_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Msgs_10));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_par_conj_to_spec_2_f_0(
  MR_Word ModeInfo_4,
  MR_Word MergeErrors_5)
{
  {
    MR_Word Spec_6;
    MR_Word Preamble_7;
    MR_Word Context_8;
    MR_Word MergeMsgLists_10;
    MR_Word MergeMsgs_11;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    Preamble_7 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_4);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_4, &Context_8);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (check_hlds__mode_errors__mode_error_par_conj_to_spec_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModeInfo_4));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    MergeMsgLists_10 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0), (MR_Word) (&check_hlds__mode_errors_scalar_common_2[0]), Var_26, MergeErrors_5);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MergeMsgLists_10, &MergeMsgs_11);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_7, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[51])));
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MergeMsgs_11));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_31));
    }
    return Spec_6;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__mode_error_disj_to_spec_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Msgs_10;

    conv0_Msgs_10 = check_hlds__mode_errors__merge_error_to_msgs_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Msgs_10));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_error_disj_to_spec_3_f_0(
  MR_Word ModeInfo_5,
  MR_Word MergeContext_6,
  MR_Word MergeErrors_7)
{
  {
    MR_Word Spec_8;
    MR_Word Preamble_9;
    MR_Word Context_10;
    MR_Word MainPieces_11;
    MR_Word MergeMsgLists_12;
    MR_Word MergeMsgs_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    Preamble_9 = check_hlds__mode_errors__mode_info_context_preamble_1_f_0(ModeInfo_5);
    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_5, &Context_10);
    switch (MergeContext_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_18 = (MR_String) "disjunction";
        break;
      case (MR_Integer) 1:
        Var_18 = (MR_String) "if-then-else";
        break;
      case (MR_Integer) 2:
        Var_18 = (MR_String) "atomic";
        break;
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
    }
    {
      MainPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[235])));
      MR_hl_field(MR_mktag(1), MainPieces_11, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__mode_errors_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__mode_errors__mode_error_disj_to_spec_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ModeInfo_5));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    MergeMsgLists_12 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0), (MR_Word) (&check_hlds__mode_errors_scalar_common_2[0]), Var_25, MergeErrors_7);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MergeMsgLists_12, &MergeMsgs_13);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_9, MainPieces_11);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MergeMsgs_13));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_30));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__mode_info_context_preamble_1_f_0(
  MR_Word ModeInfo_3)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_4;
    MR_Word ModuleInfo_5;
    MR_Word PredId_6;
    MR_Integer ProcId_7;
    MR_Word PredInfo_8;
    MR_Word ProcInfo_9;
    MR_Word PredOrigin_10;
    MR_String Name0_13;
    MR_Word ExtraMethodPieces_14;
    MR_Word PredOrFunc_15;
    MR_Word InstVarSet_16;
    MR_Word Name_17;
    MR_Word PredMarkers_18;
    MR_Word Modes0_19;
    MR_Word Modes_20;
    MR_String ModeSubDeclStr_22;
    MR_Word ModeContext_23;
    MR_Word ModeContextPieces_24;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word MethodName_11;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_3, &ModuleInfo_5);
    check_hlds__mode_info__mode_info_get_pred_id_2_p_0(ModeInfo_3, &PredId_6);
    check_hlds__mode_info__mode_info_get_proc_id_2_p_0(ModeInfo_3, &ProcId_7);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_6, ProcId_7, &PredInfo_8, &ProcInfo_9);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &PredOrigin_10);
    succeeded = ((MR_tag((MR_Word) PredOrigin_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      MethodName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredOrigin_10, (MR_Integer) 0))));
      Name0_13 = mdbcomp__sym_name__unqualify_name_1_f_0(MethodName_11);
      ExtraMethodPieces_14 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[231]));
    }
    else
    {
      Name0_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_8);
      ExtraMethodPieces_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(ModeInfo_3, &InstVarSet_16);
    {
      Name_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Name_17, 0) = ((MR_Box) (Name0_13));
    }
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_8, &PredMarkers_18);
    hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_9, &Modes0_19);
    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(Modes0_19, &Modes_20);
    ModeSubDeclStr_22 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_15, InstVarSet_16, Name_17, Modes_20, (MR_Word) ((MR_Unsigned) 0U));
    check_hlds__mode_info__mode_info_get_mode_context_2_p_0(ModeInfo_3, &ModeContext_23);
    switch (MR_tag((MR_Word) ModeContext_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ModeContextPieces_24 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModeCallId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeContext_23, (MR_Integer) 0))));
          MR_Integer ArgNum_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ModeContext_23, (MR_Integer) 1))));
          MR_Word CallId_52;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_String Var_63;

          if (((MR_tag((MR_Word) ModeCallId_48)) == (MR_Integer) 1))
          {
            MR_Word GenericCallId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeCallId_48, (MR_Integer) 0))));

            {
              CallId_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallId_52, 0) = ((MR_Box) (GenericCallId_53));
            }
          }
          else
          {
            MR_Word PredId_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCallId_48, (MR_Integer) 0))));
            MR_Word SimpleCallId_51;

            check_hlds__mode_info__mode_info_get_simple_call_id_3_p_0(ModeInfo_3, PredId_50, &SimpleCallId_51);
            {
              CallId_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CallId_52, 0) = ((MR_Box) (SimpleCallId_51));
            }
          }
          Var_63 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_52, ArgNum_49, PredMarkers_18);
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[176])));
          }
          {
            ModeContextPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModeContextPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[232])));
            MR_hl_field(MR_mktag(1), ModeContextPieces_24, 1) = ((MR_Box) (Var_61));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UnifyContext_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModeContext_23, (MR_Integer) 0))));
          MR_Word Var_56;

          hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0((MR_Integer) 1, &Var_56, UnifyContext_54, (MR_Word) ((MR_Unsigned) 0U), &ModeContextPieces_24);
        }
        break;
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ModeSubDeclStr_22));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[176])));
    }
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, ModeContextPieces_24);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExtraMethodPieces_14, Var_34);
    Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[234])), Var_33);
    return Pieces_4;
  }
}

void MR_CALL 
check_hlds__mode_errors__report_mode_inference_messages_for_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word Markers_17;
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_13, &PredInfo_16);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_17);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_17, (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word ProcIds_18;
        MR_Word Procs_19;

        ProcIds_18 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_16);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_16, &Procs_19);
        check_hlds__mode_errors__report_mode_inference_messages_for_procs_7_p_0(ModuleInfo_1, OutputDetism_2, PredInfo_16, Procs_19, ProcIds_18, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_23_23);
      }
      else
        STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__mode_errors__report_mode_inference_messages_for_procs_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word OutputDetism_2,
  MR_Word PredInfo_3,
  MR_Word Procs_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ProcIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Globals_22;
      MR_Word VerboseErrors_23;
      MR_Word ProcInfo_24;
      MR_Word STATE_VARIABLE_Specs_29_29;
      MR_Box conv0_ProcInfo_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_22);
      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 62, &VerboseErrors_23);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_4, ((MR_Box) (ProcId_19)), &conv0_ProcInfo_24);
      ProcInfo_24 = ((MR_Word) (conv0_ProcInfo_24));
      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_24);
      if (!(succeeded))
        succeeded = (VerboseErrors_23 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Spec_25;

        Spec_25 = check_hlds__mode_errors__report_mode_inference_message_4_f_0(ModuleInfo_1, OutputDetism_2, PredInfo_3, ProcInfo_24);
        {
          STATE_VARIABLE_Specs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
        }
      }
      else
        STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_29_29;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_errors__report_mode_inference_message_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_49;

    conv0_LambdaHeadVar__2_49 = check_hlds__mode_errors__IntroducedFrom__func__report_mode_inference_message__458__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_49));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_errors__report_mode_inference_message_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word OutputDetism_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word Spec_10;
    MR_String PredName_11;
    MR_Word Name_12;
    MR_Word Context_13;
    MR_Integer PredArity_14;
    MR_Integer NumArgModes_17;
    MR_Integer NumToDrop_18;
    MR_Word VarSet_19;
    MR_Word PredOrFunc_20;
    MR_String Verb_22;
    MR_String Detail_29;
    MR_Word Pieces_32;
    MR_Word Msg_33;
    MR_Word STATE_VARIABLE_ArgModes_35_35;
    MR_Word STATE_VARIABLE_ArgModes_39_39;
    MR_Word STATE_VARIABLE_MaybeDet_41_41;
    MR_Word STATE_VARIABLE_ArgModes_46_46;
    MR_Word STATE_VARIABLE_MaybeDet_51_51;
    MR_Word STATE_VARIABLE_ArgModes_52_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_ArgModes_36_36;

    PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_8);
    {
      Name_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Name_12, 0) = ((MR_Box) (PredName_11));
    }
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_8, &Context_13);
    PredArity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_8);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_9, &STATE_VARIABLE_ArgModes_35_35);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ArgModes_35_35, &NumArgModes_17);
    NumToDrop_18 = (MR_Integer) ((MR_Unsigned) NumArgModes_17 - (MR_Unsigned) PredArity_14);
    succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumToDrop_18, STATE_VARIABLE_ArgModes_35_35, &STATE_VARIABLE_ArgModes_36_36);
    if (succeeded)
      STATE_VARIABLE_ArgModes_39_39 = STATE_VARIABLE_ArgModes_36_36;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_errors.report_mode_inference_message\'/4", (MR_String) "list.drop failed");
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &VarSet_19);
    PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
    switch (OutputDetism_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_MaybeDet_41_41 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        {
          MR_Word Detism_21;

          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_9, &Detism_21);
          {
            STATE_VARIABLE_MaybeDet_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeDet_41_41, 0) = ((MR_Box) (Detism_21));
          }
        }
        break;
    }
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_9);
    if (succeeded)
    {
      Verb_22 = (MR_String) "Inferred";
      STATE_VARIABLE_MaybeDet_51_51 = STATE_VARIABLE_MaybeDet_41_41;
      STATE_VARIABLE_ArgModes_46_46 = STATE_VARIABLE_ArgModes_39_39;
    }
    else
    {
      MR_Word InitialInsts_23;
      MR_Word FinalInsts_25;
      MR_Word Var_50;

      Verb_22 = (MR_String) "REJECTED";
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_6, STATE_VARIABLE_ArgModes_39_39, &InitialInsts_23);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), PredArity_14, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[28]))), &FinalInsts_25);
      Var_50 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InitialInsts_23, FinalInsts_25);
      STATE_VARIABLE_ArgModes_46_46 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mode_errors_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__mode_errors_scalar_common_1[3]), Var_50);
      STATE_VARIABLE_MaybeDet_51_51 = (MR_Word) ((MR_Unsigned) 0U);
    }
    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(STATE_VARIABLE_ArgModes_46_46, &STATE_VARIABLE_ArgModes_52_52);
    switch (PredOrFunc_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_30;
          MR_Word RetMode_31;
          MR_Box conv1_RetMode_31;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), STATE_VARIABLE_ArgModes_52_52, &FuncArgModes_30, &conv1_RetMode_31);
          RetMode_31 = ((MR_Word) (conv1_RetMode_31));
          Detail_29 = parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0((MR_Integer) 1, VarSet_19, Name_12, FuncArgModes_30, RetMode_31, STATE_VARIABLE_MaybeDet_51_51);
        }
        break;
      case (MR_Integer) 0:
        {
          Detail_29 = parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0((MR_Integer) 1, VarSet_19, Name_12, STATE_VARIABLE_ArgModes_52_52, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_MaybeDet_51_51);
        }
        break;
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Verb_22));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Detail_29));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[13])));
    }
    {
      Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Pieces_32));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 58) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_33, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), Msg_33, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Msg_33));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_1[2])));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_75));
    }
    return Spec_10;
  }
}

MR_Word MR_CALL 
check_hlds__mode_errors__report_indistinguishable_modes_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Integer OldProcId_8,
  MR_Integer NewProcId_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11)
{
  {
    MR_Word Spec_12;
    MR_Word Procs_13;
    MR_Word OldProcInfo_14;
    MR_Word NewProcInfo_15;
    MR_Word OldContext_16;
    MR_Word NewContext_17;
    MR_Word MainPieces_18;
    MR_Word VerbosePieces_19;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Box conv0_OldProcInfo_14;
    MR_Box conv1_NewProcInfo_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &Procs_13);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (OldProcId_8)), &conv0_OldProcInfo_14);
    OldProcInfo_14 = ((MR_Word) (conv0_OldProcInfo_14));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (NewProcId_9)), &conv1_NewProcInfo_15);
    NewProcInfo_15 = ((MR_Word) (conv1_NewProcInfo_15));
    hlds__hlds_pred__proc_info_get_context_2_p_0(OldProcInfo_14, &OldContext_16);
    hlds__hlds_pred__proc_info_get_context_2_p_0(NewProcInfo_15, &NewContext_17);
    Var_26 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, PredId_10);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[26])));
    MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[222])), Var_25);
    Var_43 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(OldProcId_8, PredInfo_11);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    Var_49 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(NewProcId_9, PredInfo_11);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[226])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[224])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      VerbosePieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__mode_errors_scalar_common_2[223])));
      MR_hl_field(MR_mktag(1), VerbosePieces_19, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (MainPieces_18));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_65, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_65, 1) = ((MR_Box) (VerbosePieces_19));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (NewContext_17));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (OldContext_16));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[229])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_68));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_60));
    }
    return Spec_12;
  }
}

MR_String MR_CALL 
check_hlds__mode_errors__mode_decl_to_string_2_f_0(
  MR_Integer ProcId_4,
  MR_Word PredInfo_5)
{
  {
    MR_String String_6;
    MR_Word PredOrFunc_7;
    MR_String Name0_8;
    MR_Word Name_9;
    MR_Word Procs_10;
    MR_Word ProcInfo_11;
    MR_Word Modes0_12;
    MR_Word MaybeDet_13;
    MR_Word InstVarSet_14;
    MR_Word Modes_15;
    MR_Box conv0_ProcInfo_11;

    PredOrFunc_7 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
    Name0_8 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
    {
      Name_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Name_9, 0) = ((MR_Box) (Name0_8));
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_5, &Procs_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_10, ((MR_Box) (ProcId_4)), &conv0_ProcInfo_11);
    ProcInfo_11 = ((MR_Word) (conv0_ProcInfo_11));
    hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_11, &Modes0_12);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_11, &MaybeDet_13);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_14);
    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(Modes0_12, &Modes_15);
    String_6 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_7, InstVarSet_14, Name_9, Modes_15, MaybeDet_13);
    return String_6;
  }
}

MR_Word MR_CALL 
check_hlds__mode_errors__maybe_report_error_no_modes_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Specs_8;
    MR_Word PredStatus_9;
    MR_Word Var_20;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_7, &PredStatus_9);
    Var_20 = (MR_Word) (PredStatus_9);
    succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 32U));
    if (succeeded)
    {
      MR_Word Globals_10;
      MR_Word InferModesOpt_11;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_10);
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 192, &InferModesOpt_11);
      switch (InferModesOpt_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Markers_12;
            MR_Word Msgs_13;
            MR_Word Context_17;
            MR_Word Spec_18;

            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &Markers_12);
            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_17);
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 4);
            if (succeeded)
              Msgs_13 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word PredDesc_14;
              MR_Word MainPieces_15;
              MR_Word Var_28;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;

              PredDesc_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
              Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
              MainPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[216])), Var_28);
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (MainPieces_15));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[218])));
              }
              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Var_47));
              }
              {
                Msgs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msgs_13, 0) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(1), Msgs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            {
              Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
              MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Msgs_13));
            }
            {
              Specs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Specs_8, 0) = ((MR_Box) (Spec_18));
              MR_hl_field(MR_mktag(1), Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
    else
    {
      MR_Word Pieces_19;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Context_81;
      MR_Word Spec_82;

      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_81);
      Var_63 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 0, PredId_6);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_63, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[15])));
      Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_2[220])), Var_62);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Pieces_19));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Context_81));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__mode_errors_scalar_common_3[1])));
        MR_hl_field(MR_mktag(0), Spec_82, 2) = ((MR_Box) (Var_74));
      }
      {
        Specs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Specs_8, 0) = ((MR_Box) (Spec_82));
        MR_hl_field(MR_mktag(1), Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return Specs_8;
  }
}

void MR_CALL 
check_hlds__mode_errors__mode_context_init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____delayed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____delayed_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____delayed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____delayed_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____final_inst_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____final_inst_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____final_inst_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____final_inst_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____include_detism_on_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____include_detism_on_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____include_detism_on_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____include_detism_on_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____maybe_report_is_ground_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____maybe_report_is_ground_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____maybe_report_is_ground_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____maybe_report_is_ground_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____merge_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____merge_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____merge_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____merge_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____merge_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____merge_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____merge_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____merge_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____merge_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____merge_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____mode_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____mode_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____mode_error_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____mode_error_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_error_unify_rhs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____mode_error_unify_rhs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_error_unify_rhs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____mode_error_unify_rhs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____mode_warning_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____mode_warning_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____mode_warning_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____mode_warning_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____mode_warning_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____mode_warning_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____negated_context_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____negated_context_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____negated_context_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____negated_context_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____pred_var_multimode_pred_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____pred_var_multimode_pred_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____pred_var_multimode_pred_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____pred_var_multimode_pred_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____schedule_culprit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____schedule_culprit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____schedule_culprit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____schedule_culprit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____var_multimode_pred_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____var_multimode_pred_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_errors____Unify____write_indented_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_errors____Unify____write_indented_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_errors____Compare____write_indented_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_errors____Compare____write_indented_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__mode_errors__ClassMethod_for_parse_tree__error_util__print_anything____check_hlds__mode_errors__write_indented_goal__arity0______parse_tree__error_util__print_anything_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

void mercury__check_hlds__mode_errors__init(void)
{
}

void mercury__check_hlds__mode_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_final_inst_error_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_include_detism_on_modes_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_maybe_report_is_ground_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_context_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_error_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_merge_errors_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_unify_rhs_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_negated_context_desc_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_schedule_culprit_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_var_multimode_pred_error_0);
	MR_register_type_ctor_info(&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_write_indented_goal_0);
}

void mercury__check_hlds__mode_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_errors.
