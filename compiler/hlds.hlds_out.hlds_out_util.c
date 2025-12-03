/*
** Automatically generated from `hlds_out_util.m'
** by the Mercury compiler,
** version rotd-2025-12-03
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


// :- module hlds.hlds_out.hlds_out_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_util__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_util.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "term_io.mih"
#include "term_subst.mih"
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
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_dump_options_0_0[39];

static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_dump_options_0_0[39];

static const MR_DuArgLocn hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_locns_hlds_dump_options_0_0[39];

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_dump_options_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_dump_options_0_0[1];

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_dump_options_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_dump_options_0[1];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_dump_options_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5];

static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1];

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_maybe_qualify_cons_id_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__675__1_3_p_0(
  MR_Char LambdaHeadVar__1_51,
  MR_String LambdaHeadVar__2_52,
  MR_String * LambdaHeadVar__3_53);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__format_constraint_proof_6_p_0(
  MR_String IndentStr_7,
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_call_answer_tables_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_structured_insts_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_constant_structures_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_cons_table_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unify_compare_preds_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_type_typeclass_tables_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_struct_sharing_info_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_use_reuse_info_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_ids_paths_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_dependency_ordering_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_inst_mode_tables_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_type_table_only_local_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_imports_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_ctgc_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_deep_profiling_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_instmap_deltas_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_clauses_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_mode_constraints_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_arg_passing_info_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_purity_markers_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unify_argmodes_struct_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_predicates_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_var_numbers_in_names_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unification_details_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_termination_analysis_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_store_maps_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_resume_points_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_birth_death_sets_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_nonlocals_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_clause_modes_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_call_pred_ids_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_instmap_vars_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_features_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_follow_vars_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_region_annotations_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_determinism_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_type_contexts_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_call_builtin_status_1_f_0(
  MR_Word X_3);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unify_argmodes_1_f_0(
  MR_Word X_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_39(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_38(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_37(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_36(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0(
  MR_Char Char_4,
  MR_Word DumpOptions0_5,
  MR_Word * DumpOptions_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__format_intlist_lag_4_p_0(
  MR_Integer H_5,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(
  MR_Word IntConst_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[43][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_4[2][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[2][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][5];

static /* final */ const MR_Integer hlds__hlds_out__hlds_out_util_scalar_common_9[1][2];


struct hlds__hlds_out__hlds_out_util__vector_common_type_5_0_s {
  const MR_String hlds__hlds_out__hlds_out_util__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_5_0_s hlds__hlds_out__hlds_out_util_vector_common_5[10];

struct hlds__hlds_out__hlds_out_util__vector_common_type_8_0_s {
  const MR_Word hlds__hlds_out__hlds_out_util__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_8_0_s hlds__hlds_out__hlds_out_util_vector_common_8[58];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 31)) | (((((MR_Unsigned) 0U << 30)) | (((((MR_Unsigned) 0U << 29)) | (((((MR_Unsigned) 0U << 28)) | (((((MR_Unsigned) 0U << 27)) | (((((MR_Unsigned) 0U << 26)) | (((((MR_Unsigned) 0U << 25)) | (((((MR_Unsigned) 0U << 24)) | (((((MR_Unsigned) 0U << 23)) | (((((MR_Unsigned) 0U << 22)) | (((((MR_Unsigned) 0U << 21)) | (((((MR_Unsigned) 0U << 20)) | (((((MR_Unsigned) 0U << 19)) | (((((MR_Unsigned) 0U << 18)) | (((((MR_Unsigned) 0U << 17)) | (((((MR_Unsigned) 0U << 16)) | (((((MR_Unsigned) 0U << 15)) | (((((MR_Unsigned) 0U << 14)) | (((((MR_Unsigned) 0U << 13)) | (((((MR_Unsigned) 0U << 12)) | (((((MR_Unsigned) 0U << 11)) | (((((MR_Unsigned) 0U << 10)) | (((((MR_Unsigned) 0U << 9)) | (((((MR_Unsigned) 0U << 8)) | (((((MR_Unsigned) 0U << 7)) | (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))),
    (MR_Box) (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_2[43][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_21)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_23)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_29)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_32)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_33)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_35)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_36)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_37)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_38)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_39)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "type_info_cell_constructor")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "typeclass_info_cell_constructor")) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_util_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0))
  },
};

static /* final */ const MR_Integer hlds__hlds_out__hlds_out_util_scalar_common_9[1][2] = {
  /* row   0 */
  {
    (MR_Unsigned) 64936287U,
    (MR_Unsigned) 62830975U
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_5_0_s hlds__hlds_out__hlds_out_util_vector_common_5[10] = {
  /* row   0 */   { (MR_String) "unsafe_type_cast" },
  /* row   1 */   { (MR_String) "unsafe_type_inst_cast" },
  /* row   2 */   { (MR_String) "equiv_type_cast" },
  /* row   3 */   { (MR_String) "exists_cast" },
  /* row   4 */   { (MR_String) "coerce expression" },
  /* row   5 */   { (MR_String) "imported in the implementation" },
  /* row   6 */   { (MR_String) "imported in the interface" },
  /* row   7 */   { (MR_String) "imported by a module imported by an ancestor" },
  /* row   8 */   { (MR_String) "imported by an ancestor in its interface" },
  /* row   9 */   { (MR_String) "imported by an ancestor in its implementation" },
};

static /* final */ const struct hlds__hlds_out__hlds_out_util__vector_common_type_8_0_s hlds__hlds_out__hlds_out_util_vector_common_8[58] = {
  /* row   0 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[4]) },
  /* row   1 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[5]) },
  /* row   2 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[6]) },
  /* row   3 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[7]) },
  /* row   4 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[8]) },
  /* row   5 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   6 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[9]) },
  /* row   7 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   8 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[10]) },
  /* row   9 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  10 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  11 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[11]) },
  /* row  12 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[12]) },
  /* row  13 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  14 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[13]) },
  /* row  15 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[14]) },
  /* row  16 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  17 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[15]) },
  /* row  18 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[16]) },
  /* row  19 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[17]) },
  /* row  20 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[18]) },
  /* row  21 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  22 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[19]) },
  /* row  23 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[20]) },
  /* row  24 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[21]) },
  /* row  25 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[22]) },
  /* row  26 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  27 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  28 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  29 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  30 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  31 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  32 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[23]) },
  /* row  33 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[24]) },
  /* row  34 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[25]) },
  /* row  35 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[26]) },
  /* row  36 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[27]) },
  /* row  37 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[28]) },
  /* row  38 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[29]) },
  /* row  39 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  40 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[30]) },
  /* row  41 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  42 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  43 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[31]) },
  /* row  44 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[32]) },
  /* row  45 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[33]) },
  /* row  46 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  47 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[34]) },
  /* row  48 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  49 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[35]) },
  /* row  50 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[36]) },
  /* row  51 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[37]) },
  /* row  52 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[38]) },
  /* row  53 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[39]) },
  /* row  54 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  55 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[40]) },
  /* row  56 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[41]) },
  /* row  57 */   { (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[42]) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_dump_options_0_0[39] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_dump_options_0_0[39] = {
  (MR_String) "dump_unify_argmodes",
  (MR_String) "dump_call_builtin_status",
  (MR_String) "dump_goal_type_contexts",
  (MR_String) "dump_goal_determinism",
  (MR_String) "dump_region_annotations",
  (MR_String) "dump_follow_vars",
  (MR_String) "dump_goal_features",
  (MR_String) "dump_goal_instmap_vars",
  (MR_String) "dump_call_pred_ids",
  (MR_String) "dump_clause_modes",
  (MR_String) "dump_goal_nonlocals",
  (MR_String) "dump_goal_birth_death_sets",
  (MR_String) "dump_goal_resume_points",
  (MR_String) "dump_goal_store_maps",
  (MR_String) "dump_termination_analysis",
  (MR_String) "dump_unification_details",
  (MR_String) "dump_var_numbers_in_names",
  (MR_String) "dump_predicates",
  (MR_String) "dump_unify_argmodes_struct",
  (MR_String) "dump_goal_purity_markers",
  (MR_String) "dump_arg_passing_info",
  (MR_String) "dump_mode_constraints",
  (MR_String) "dump_clauses",
  (MR_String) "dump_goal_instmap_deltas",
  (MR_String) "dump_deep_profiling",
  (MR_String) "dump_ctgc",
  (MR_String) "dump_imports",
  (MR_String) "dump_type_table_only_local",
  (MR_String) "dump_inst_mode_tables",
  (MR_String) "dump_dependency_ordering",
  (MR_String) "dump_goal_ids_paths",
  (MR_String) "dump_use_reuse_info",
  (MR_String) "dump_struct_sharing_info",
  (MR_String) "dump_type_typeclass_tables",
  (MR_String) "dump_unify_compare_preds",
  (MR_String) "dump_cons_table",
  (MR_String) "dump_constant_structures",
  (MR_String) "dump_structured_insts",
  (MR_String) "dump_call_answer_tables"
};

static const MR_DuArgLocn hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_locns_hlds_dump_options_0_0[39] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 31,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 30,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 29,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 28,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 27,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 26,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 25,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 24,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 23,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 22,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 21,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 20,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 19,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 18,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 17,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 16,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
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

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_dump_options_0_0 = {
  (MR_String) "hlds_dump_options",
  INT16_C(39),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_dump_options_0_0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_dump_options_0_0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_locns_hlds_dump_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_dump_options_0_0[1] = { &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_dump_options_0_0 };

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_dump_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_dump_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_dump_options_0[1] = { &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_dump_options_0_0 };

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_dump_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_dump_options",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_dump_options_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_dump_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_dump_options_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)
};

static const MR_ConstString hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[5] = {
  (MR_String) "hoi_dump_hlds_options",
  (MR_String) "hoi_dump_hlds_options_backup",
  (MR_String) "hoi_dump_hlds_pred_ids",
  (MR_String) "hoi_dump_hlds_pred_names",
  (MR_String) "hoi_merc_out_info"
};

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0 = {
  (MR_String) "hlds_out_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0,
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[1] = { &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0 };

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[1] = { &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0 };

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "hlds_out_info",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0,

};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0 = {
  (MR_String) "qualify_cons_id",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1 = {
  (MR_String) "do_not_qualify_cons_id",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0[2] = {
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_1,
  &hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_functor_desc_maybe_qualify_cons_id_0_0
};

static const MR_Integer hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_util",
  (MR_String) "maybe_qualify_cons_id",
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_name_ordered_maybe_qualify_cons_id_0 },
  { hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__enum_ordinal_ordered_maybe_qualify_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__functor_number_map_maybe_qualify_cons_id_0,

};

static void MR_CALL 
hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__675__1_3_p_0(
  MR_Char LambdaHeadVar__1_51,
  MR_String LambdaHeadVar__2_52,
  MR_String * LambdaHeadVar__3_53)
{
  MR_bool succeeded = (LambdaHeadVar__1_51 == (MR_Char) 42);

  if (succeeded)
    mercury__string__append_3_p_2(LambdaHeadVar__2_52, (MR_String) "star", LambdaHeadVar__3_53);
  else
  {
    MR_String CharStr_20;

    mercury__string__char_to_string_2_p_0(LambdaHeadVar__1_51, &CharStr_20);
    mercury__string__append_3_p_2(LambdaHeadVar__2_52, CharStr_20, LambdaHeadVar__3_53);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(
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
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            parse_tree__parse_tree_out_info____Compare____merc_out_info_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(
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
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = parse_tree__parse_tree_out_info____Unify____merc_out_info_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_120 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_121 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_120 == CastY_121);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 29)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 29)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 28)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 28)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 27)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 27)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 26)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 26)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 25)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 25)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 24)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 24)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 23)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 23)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 21)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 21)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 19)) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 19)) & (MR_Integer) 1);
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX23_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY23_71 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX24_73 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY24_74 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX25_76 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY25_77 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX26_79 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY26_80 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX27_82 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY27_83 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX28_85 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY28_86 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX29_88 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY29_89 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX30_91 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY30_92 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX31_94 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY31_95 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX32_97 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY32_98 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX33_100 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY33_101 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX34_103 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY34_104 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX35_106 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY35_107 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX36_109 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY36_110 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX37_112 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY37_113 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX38_115 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY38_116 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX39_118 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY39_119 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_161 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_162 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_161 < Var_162);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_161 > Var_162);
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
      MR_Integer Var_163 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_164 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_163 < Var_164);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_163 > Var_164);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_165 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_166 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_165 < Var_166);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_165 > Var_166);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_167 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_168 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_167 < Var_168);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_167 > Var_168);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_169 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_170 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_169 < Var_170);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_169 > Var_170);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_171 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_172 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_171 < Var_172);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_171 > Var_172);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_173 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_174 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_173 < Var_174);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_173 > Var_174);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_175 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_176 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_175 < Var_176);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_175 > Var_176);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_177 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_178 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_177 < Var_178);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_177 > Var_178);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_179 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_180 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_179 < Var_180);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_179 > Var_180);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_181 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_182 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_181 < Var_182);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_181 > Var_182);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_183 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_184 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_183 < Var_184);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_183 > Var_184);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;
                            MR_Integer Var_185 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_186 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_185 < Var_186);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_185 > Var_186);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_187 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_188 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_187 < Var_188);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_187 > Var_188);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_189 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_190 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_189 < Var_190);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_189 > Var_190);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_191 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_192 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_191 < Var_192);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_191 > Var_192);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;
                                    MR_Integer Var_193 = (MR_Integer) (ArgX17_52);
                                    MR_Integer Var_194 = (MR_Integer) (ArgY17_53);

                                    succeeded = (Var_193 < Var_194);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_193 > Var_194);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;
                                      MR_Integer Var_195 = (MR_Integer) (ArgX18_55);
                                      MR_Integer Var_196 = (MR_Integer) (ArgY18_56);

                                      succeeded = (Var_195 < Var_196);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_195 > Var_196);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;
                                        MR_Integer Var_197 = (MR_Integer) (ArgX19_58);
                                        MR_Integer Var_198 = (MR_Integer) (ArgY19_59);

                                        succeeded = (Var_197 < Var_198);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_197 > Var_198);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;
                                          MR_Integer Var_199 = (MR_Integer) (ArgX20_61);
                                          MR_Integer Var_200 = (MR_Integer) (ArgY20_62);

                                          succeeded = (Var_199 < Var_200);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_199 > Var_200);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;
                                            MR_Integer Var_201 = (MR_Integer) (ArgX21_64);
                                            MR_Integer Var_202 = (MR_Integer) (ArgY21_65);

                                            succeeded = (Var_201 < Var_202);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_201 > Var_202);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;
                                              MR_Integer Var_203 = (MR_Integer) (ArgX22_67);
                                              MR_Integer Var_204 = (MR_Integer) (ArgY22_68);

                                              succeeded = (Var_203 < Var_204);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_203 > Var_204);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;
                                                MR_Integer Var_205 = (MR_Integer) (ArgX23_70);
                                                MR_Integer Var_206 = (MR_Integer) (ArgY23_71);

                                                succeeded = (Var_205 < Var_206);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_205 > Var_206);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;
                                                  MR_Integer Var_207 = (MR_Integer) (ArgX24_73);
                                                  MR_Integer Var_208 = (MR_Integer) (ArgY24_74);

                                                  succeeded = (Var_207 < Var_208);
                                                  if (succeeded)
                                                  {
                                                    SubResult24_75 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (Var_207 > Var_208);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;
                                                    MR_Integer Var_209 = (MR_Integer) (ArgX25_76);
                                                    MR_Integer Var_210 = (MR_Integer) (ArgY25_77);

                                                    succeeded = (Var_209 < Var_210);
                                                    if (succeeded)
                                                    {
                                                      SubResult25_78 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = (Var_209 > Var_210);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;
                                                      MR_Integer Var_211 = (MR_Integer) (ArgX26_79);
                                                      MR_Integer Var_212 = (MR_Integer) (ArgY26_80);

                                                      succeeded = (Var_211 < Var_212);
                                                      if (succeeded)
                                                      {
                                                        SubResult26_81 = (MR_Integer) 1;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = (Var_211 > Var_212);
                                                        if (succeeded)
                                                        {
                                                          SubResult26_81 = (MR_Integer) 2;
                                                          succeeded = MR_TRUE;
                                                        }
                                                      }
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        MR_Word SubResult27_84;
                                                        MR_Integer Var_213 = (MR_Integer) (ArgX27_82);
                                                        MR_Integer Var_214 = (MR_Integer) (ArgY27_83);

                                                        succeeded = (Var_213 < Var_214);
                                                        if (succeeded)
                                                        {
                                                          SubResult27_84 = (MR_Integer) 1;
                                                          succeeded = MR_TRUE;
                                                        }
                                                        else
                                                        {
                                                          succeeded = (Var_213 > Var_214);
                                                          if (succeeded)
                                                          {
                                                            SubResult27_84 = (MR_Integer) 2;
                                                            succeeded = MR_TRUE;
                                                          }
                                                        }
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult27_84;
                                                        else
                                                        {
                                                          MR_Word SubResult28_87;
                                                          MR_Integer Var_215 = (MR_Integer) (ArgX28_85);
                                                          MR_Integer Var_216 = (MR_Integer) (ArgY28_86);

                                                          succeeded = (Var_215 < Var_216);
                                                          if (succeeded)
                                                          {
                                                            SubResult28_87 = (MR_Integer) 1;
                                                            succeeded = MR_TRUE;
                                                          }
                                                          else
                                                          {
                                                            succeeded = (Var_215 > Var_216);
                                                            if (succeeded)
                                                            {
                                                              SubResult28_87 = (MR_Integer) 2;
                                                              succeeded = MR_TRUE;
                                                            }
                                                          }
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult28_87;
                                                          else
                                                          {
                                                            MR_Word SubResult29_90;
                                                            MR_Integer Var_217 = (MR_Integer) (ArgX29_88);
                                                            MR_Integer Var_218 = (MR_Integer) (ArgY29_89);

                                                            succeeded = (Var_217 < Var_218);
                                                            if (succeeded)
                                                            {
                                                              SubResult29_90 = (MR_Integer) 1;
                                                              succeeded = MR_TRUE;
                                                            }
                                                            else
                                                            {
                                                              succeeded = (Var_217 > Var_218);
                                                              if (succeeded)
                                                              {
                                                                SubResult29_90 = (MR_Integer) 2;
                                                                succeeded = MR_TRUE;
                                                              }
                                                            }
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult29_90;
                                                            else
                                                            {
                                                              MR_Word SubResult30_93;
                                                              MR_Integer Var_219 = (MR_Integer) (ArgX30_91);
                                                              MR_Integer Var_220 = (MR_Integer) (ArgY30_92);

                                                              succeeded = (Var_219 < Var_220);
                                                              if (succeeded)
                                                              {
                                                                SubResult30_93 = (MR_Integer) 1;
                                                                succeeded = MR_TRUE;
                                                              }
                                                              else
                                                              {
                                                                succeeded = (Var_219 > Var_220);
                                                                if (succeeded)
                                                                {
                                                                  SubResult30_93 = (MR_Integer) 2;
                                                                  succeeded = MR_TRUE;
                                                                }
                                                              }
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult30_93;
                                                              else
                                                              {
                                                                MR_Word SubResult31_96;
                                                                MR_Integer Var_221 = (MR_Integer) (ArgX31_94);
                                                                MR_Integer Var_222 = (MR_Integer) (ArgY31_95);

                                                                succeeded = (Var_221 < Var_222);
                                                                if (succeeded)
                                                                {
                                                                  SubResult31_96 = (MR_Integer) 1;
                                                                  succeeded = MR_TRUE;
                                                                }
                                                                else
                                                                {
                                                                  succeeded = (Var_221 > Var_222);
                                                                  if (succeeded)
                                                                  {
                                                                    SubResult31_96 = (MR_Integer) 2;
                                                                    succeeded = MR_TRUE;
                                                                  }
                                                                }
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = SubResult31_96;
                                                                else
                                                                {
                                                                  MR_Word SubResult32_99;
                                                                  MR_Integer Var_223 = (MR_Integer) (ArgX32_97);
                                                                  MR_Integer Var_224 = (MR_Integer) (ArgY32_98);

                                                                  succeeded = (Var_223 < Var_224);
                                                                  if (succeeded)
                                                                  {
                                                                    SubResult32_99 = (MR_Integer) 1;
                                                                    succeeded = MR_TRUE;
                                                                  }
                                                                  else
                                                                  {
                                                                    succeeded = (Var_223 > Var_224);
                                                                    if (succeeded)
                                                                    {
                                                                      SubResult32_99 = (MR_Integer) 2;
                                                                      succeeded = MR_TRUE;
                                                                    }
                                                                  }
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = SubResult32_99;
                                                                  else
                                                                  {
                                                                    MR_Word SubResult33_102;
                                                                    MR_Integer Var_225 = (MR_Integer) (ArgX33_100);
                                                                    MR_Integer Var_226 = (MR_Integer) (ArgY33_101);

                                                                    succeeded = (Var_225 < Var_226);
                                                                    if (succeeded)
                                                                    {
                                                                      SubResult33_102 = (MR_Integer) 1;
                                                                      succeeded = MR_TRUE;
                                                                    }
                                                                    else
                                                                    {
                                                                      succeeded = (Var_225 > Var_226);
                                                                      if (succeeded)
                                                                      {
                                                                        SubResult33_102 = (MR_Integer) 2;
                                                                        succeeded = MR_TRUE;
                                                                      }
                                                                    }
                                                                    if (succeeded)
                                                                      *HeadVar__1_1 = SubResult33_102;
                                                                    else
                                                                    {
                                                                      MR_Word SubResult34_105;
                                                                      MR_Integer Var_227 = (MR_Integer) (ArgX34_103);
                                                                      MR_Integer Var_228 = (MR_Integer) (ArgY34_104);

                                                                      succeeded = (Var_227 < Var_228);
                                                                      if (succeeded)
                                                                      {
                                                                        SubResult34_105 = (MR_Integer) 1;
                                                                        succeeded = MR_TRUE;
                                                                      }
                                                                      else
                                                                      {
                                                                        succeeded = (Var_227 > Var_228);
                                                                        if (succeeded)
                                                                        {
                                                                          SubResult34_105 = (MR_Integer) 2;
                                                                          succeeded = MR_TRUE;
                                                                        }
                                                                      }
                                                                      if (succeeded)
                                                                        *HeadVar__1_1 = SubResult34_105;
                                                                      else
                                                                      {
                                                                        MR_Word SubResult35_108;
                                                                        MR_Integer Var_229 = (MR_Integer) (ArgX35_106);
                                                                        MR_Integer Var_230 = (MR_Integer) (ArgY35_107);

                                                                        succeeded = (Var_229 < Var_230);
                                                                        if (succeeded)
                                                                        {
                                                                          SubResult35_108 = (MR_Integer) 1;
                                                                          succeeded = MR_TRUE;
                                                                        }
                                                                        else
                                                                        {
                                                                          succeeded = (Var_229 > Var_230);
                                                                          if (succeeded)
                                                                          {
                                                                            SubResult35_108 = (MR_Integer) 2;
                                                                            succeeded = MR_TRUE;
                                                                          }
                                                                        }
                                                                        if (succeeded)
                                                                          *HeadVar__1_1 = SubResult35_108;
                                                                        else
                                                                        {
                                                                          MR_Word SubResult36_111;
                                                                          MR_Integer Var_231 = (MR_Integer) (ArgX36_109);
                                                                          MR_Integer Var_232 = (MR_Integer) (ArgY36_110);

                                                                          succeeded = (Var_231 < Var_232);
                                                                          if (succeeded)
                                                                          {
                                                                            SubResult36_111 = (MR_Integer) 1;
                                                                            succeeded = MR_TRUE;
                                                                          }
                                                                          else
                                                                          {
                                                                            succeeded = (Var_231 > Var_232);
                                                                            if (succeeded)
                                                                            {
                                                                              SubResult36_111 = (MR_Integer) 2;
                                                                              succeeded = MR_TRUE;
                                                                            }
                                                                          }
                                                                          if (succeeded)
                                                                            *HeadVar__1_1 = SubResult36_111;
                                                                          else
                                                                          {
                                                                            MR_Word SubResult37_114;
                                                                            MR_Integer Var_233 = (MR_Integer) (ArgX37_112);
                                                                            MR_Integer Var_234 = (MR_Integer) (ArgY37_113);

                                                                            succeeded = (Var_233 < Var_234);
                                                                            if (succeeded)
                                                                            {
                                                                              SubResult37_114 = (MR_Integer) 1;
                                                                              succeeded = MR_TRUE;
                                                                            }
                                                                            else
                                                                            {
                                                                              succeeded = (Var_233 > Var_234);
                                                                              if (succeeded)
                                                                              {
                                                                                SubResult37_114 = (MR_Integer) 2;
                                                                                succeeded = MR_TRUE;
                                                                              }
                                                                            }
                                                                            if (succeeded)
                                                                              *HeadVar__1_1 = SubResult37_114;
                                                                            else
                                                                            {
                                                                              MR_Word SubResult38_117;
                                                                              MR_Integer Var_235 = (MR_Integer) (ArgX38_115);
                                                                              MR_Integer Var_236 = (MR_Integer) (ArgY38_116);

                                                                              succeeded = (Var_235 < Var_236);
                                                                              if (succeeded)
                                                                              {
                                                                                SubResult38_117 = (MR_Integer) 1;
                                                                                succeeded = MR_TRUE;
                                                                              }
                                                                              else
                                                                              {
                                                                                succeeded = (Var_235 > Var_236);
                                                                                if (succeeded)
                                                                                {
                                                                                  SubResult38_117 = (MR_Integer) 2;
                                                                                  succeeded = MR_TRUE;
                                                                                }
                                                                              }
                                                                              if (succeeded)
                                                                                *HeadVar__1_1 = SubResult38_117;
                                                                              else
                                                                              {
                                                                                MR_Integer Var_237 = (MR_Integer) (ArgX39_118);
                                                                                MR_Integer Var_238 = (MR_Integer) (ArgY39_119);

                                                                                succeeded = (Var_237 < Var_238);
                                                                                if (succeeded)
                                                                                  *HeadVar__1_1 = (MR_Integer) 1;
                                                                                else
                                                                                {
                                                                                  succeeded = (Var_237 > Var_238);
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
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 31)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 30)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 29)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 29)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 28)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 28)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 27)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 27)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 26)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 26)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 25)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 25)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 24)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 24)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 23)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 23)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 21)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 21)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 20)) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 19)) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 19)) & (MR_Integer) 1);
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 14)) & (MR_Integer) 1);
    MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 12)) & (MR_Integer) 1);
    MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX23_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY23_48 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX24_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY24_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX25_51 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY25_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX26_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY26_54 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX27_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY27_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX28_57 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY28_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX29_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY29_60 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX30_61 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY30_62 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX31_63 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY31_64 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX32_65 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY32_66 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX33_67 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY33_68 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX34_69 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY34_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX35_71 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY35_72 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX36_73 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY36_74 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX37_75 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY37_76 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX38_77 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY38_78 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX39_79 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY39_80 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
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
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX17_35 == ArgY17_36);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX18_37 == ArgY18_38);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX20_41 == ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX23_47 == ArgY23_48);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX24_49 == ArgY24_50);
                                                  if (succeeded)
                                                  {
                                                    succeeded = (ArgX25_51 == ArgY25_52);
                                                    if (succeeded)
                                                    {
                                                      succeeded = (ArgX26_53 == ArgY26_54);
                                                      if (succeeded)
                                                      {
                                                        succeeded = (ArgX27_55 == ArgY27_56);
                                                        if (succeeded)
                                                        {
                                                          succeeded = (ArgX28_57 == ArgY28_58);
                                                          if (succeeded)
                                                          {
                                                            succeeded = (ArgX29_59 == ArgY29_60);
                                                            if (succeeded)
                                                            {
                                                              succeeded = (ArgX30_61 == ArgY30_62);
                                                              if (succeeded)
                                                              {
                                                                succeeded = (ArgX31_63 == ArgY31_64);
                                                                if (succeeded)
                                                                {
                                                                  succeeded = (ArgX32_65 == ArgY32_66);
                                                                  if (succeeded)
                                                                  {
                                                                    succeeded = (ArgX33_67 == ArgY33_68);
                                                                    if (succeeded)
                                                                    {
                                                                      succeeded = (ArgX34_69 == ArgY34_70);
                                                                      if (succeeded)
                                                                      {
                                                                        succeeded = (ArgX35_71 == ArgY35_72);
                                                                        if (succeeded)
                                                                        {
                                                                          succeeded = (ArgX36_73 == ArgY36_74);
                                                                          if (succeeded)
                                                                          {
                                                                            succeeded = (ArgX37_75 == ArgY37_76);
                                                                            if (succeeded)
                                                                            {
                                                                              succeeded = (ArgX38_77 == ArgY38_78);
                                                                              if (succeeded)
                                                                                succeeded = (ArgX39_79 == ArgY39_80);
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
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__format_constraint_proof_6_p_0(
  MR_String IndentStr_7,
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Word Constraint_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word Proof_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_String ConstraintStr_13;
  MR_Word STATE_VARIABLE_State_1_21;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;

  ConstraintStr_13 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarSet_9, VarNamePrint_8, Constraint_10);
  mercury__string__builder__append_string_3_p_0(IndentStr_7, STATE_VARIABLE_State_0_17, &Var_37);
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_37, &Var_38);
  mercury__string__builder__append_string_3_p_0(ConstraintStr_13, Var_38, &Var_40);
  mercury__string__builder__append_string_3_p_0((MR_String) ": ", Var_40, &STATE_VARIABLE_State_1_21);
  if (((MR_tag((MR_Word) Proof_11)) == (MR_Integer) 0))
  {
    MR_Integer InstanceNum_14;
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Proof_11, 0))));
    MR_Word Var_46;
    MR_Word Var_48;
    MR_String Var_49;

    InstanceNum_14 = (MR_Integer) (Var_26);
    mercury__string__builder__append_string_3_p_0((MR_String) "apply instance decl #", STATE_VARIABLE_State_1_21, &Var_46);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), InstanceNum_14, &Var_49);
    mercury__string__builder__append_string_3_p_0(Var_49, Var_46, &Var_48);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_48, STATE_VARIABLE_State_18);
  }
  else
  {
    MR_Word Super_15 = ((MR_Word) ((MR_hl_field(1, Proof_11, 0))));
    MR_String SuperStr_16;
    MR_Word Var_42;
    MR_Word Var_44;

    SuperStr_16 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarSet_9, VarNamePrint_8, Super_15);
    mercury__string__builder__append_string_3_p_0((MR_String) "super class of ", STATE_VARIABLE_State_1_21, &Var_42);
    mercury__string__builder__append_string_3_p_0(SuperStr_16, Var_42, &Var_44);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_44, STATE_VARIABLE_State_18);
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_call_answer_tables_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 6)) | (((((MR_Unsigned) (Var_38) << 5)) | (((((MR_Unsigned) (Var_39) << 4)) | (((((MR_Unsigned) (Var_40) << 3)) | (((((MR_Unsigned) (Var_41) << 2)) | (((((MR_Unsigned) (Var_42) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_structured_insts_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 6)) | (((((MR_Unsigned) (Var_38) << 5)) | (((((MR_Unsigned) (Var_39) << 4)) | (((((MR_Unsigned) (Var_40) << 3)) | (((((MR_Unsigned) (Var_41) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_43)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_constant_structures_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 6)) | (((((MR_Unsigned) (Var_38) << 5)) | (((((MR_Unsigned) (Var_39) << 4)) | (((((MR_Unsigned) (Var_40) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) (Var_42) << 1)) | (MR_Unsigned) (Var_43)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_cons_table_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 6)) | (((((MR_Unsigned) (Var_38) << 5)) | (((((MR_Unsigned) (Var_39) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (Var_41) << 2)) | (((((MR_Unsigned) (Var_42) << 1)) | (MR_Unsigned) (Var_43)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unify_compare_preds_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 6)) | (((((MR_Unsigned) (Var_38) << 5)) | (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) (Var_40) << 3)) | (((((MR_Unsigned) (Var_41) << 2)) | (((((MR_Unsigned) (Var_42) << 1)) | (MR_Unsigned) (Var_43)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_type_typeclass_tables_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) (Var_37) << 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((((MR_Unsigned) (Var_39) << 4)) | (((((MR_Unsigned) (Var_40) << 3)) | (((((MR_Unsigned) (Var_41) << 2)) | (((((MR_Unsigned) (Var_42) << 1)) | (MR_Unsigned) (Var_43)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_struct_sharing_info_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 1))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 0)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 6)) | (((((MR_Unsigned) (Var_38) << 5)) | (((((MR_Unsigned) (Var_39) << 4)) | (((((MR_Unsigned) (Var_40) << 3)) | (((((MR_Unsigned) (Var_41) << 2)) | (((((MR_Unsigned) (Var_42) << 1)) | (MR_Unsigned) (Var_43)))))))))))));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_use_reuse_info_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_ids_paths_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_dependency_ordering_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_inst_mode_tables_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_type_table_only_local_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_imports_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_ctgc_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) ((MR_Integer) 1) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_deep_profiling_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_instmap_deltas_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) ((MR_Integer) 1) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_clauses_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) ((MR_Integer) 1) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_mode_constraints_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) ((MR_Integer) 1) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_arg_passing_info_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) ((MR_Integer) 1) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_purity_markers_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) ((MR_Integer) 1) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unify_argmodes_struct_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) ((MR_Integer) 1) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_predicates_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) ((MR_Integer) 1) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_var_numbers_in_names_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) ((MR_Integer) 1) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unification_details_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) ((MR_Integer) 1) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_termination_analysis_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) ((MR_Integer) 1) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_store_maps_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) ((MR_Integer) 1) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_resume_points_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) ((MR_Integer) 1) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_birth_death_sets_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) ((MR_Integer) 1) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_nonlocals_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) ((MR_Integer) 1) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_clause_modes_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) ((MR_Integer) 1) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_call_pred_ids_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) ((MR_Integer) 1) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_instmap_vars_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) ((MR_Integer) 1) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_features_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) ((MR_Integer) 1) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_follow_vars_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) ((MR_Integer) 1) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_region_annotations_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) ((MR_Integer) 1) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_determinism_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) ((MR_Integer) 1) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_goal_type_contexts_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) ((MR_Integer) 1) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_call_builtin_status_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_5) << 31)) | (((((MR_Unsigned) ((MR_Integer) 1) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__set_dump_unify_argmodes_1_f_0(
  MR_Word X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_6 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 30)) & (MR_Integer) 1);
  MR_Word Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 29)) & (MR_Integer) 1);
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 28)) & (MR_Integer) 1);
  MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 27)) & (MR_Integer) 1);
  MR_Word Var_10 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_14 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_15 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_17 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, X_3, 0))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, X_3, 1)));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 31)) | (((((MR_Unsigned) (Var_6) << 30)) | (((((MR_Unsigned) (Var_7) << 29)) | (((((MR_Unsigned) (Var_8) << 28)) | (((((MR_Unsigned) (Var_9) << 27)) | (((((MR_Unsigned) (Var_10) << 26)) | (((((MR_Unsigned) (Var_11) << 25)) | (((((MR_Unsigned) (Var_12) << 24)) | (((((MR_Unsigned) (Var_13) << 23)) | (((((MR_Unsigned) (Var_14) << 22)) | (((((MR_Unsigned) (Var_15) << 21)) | (((((MR_Unsigned) (Var_16) << 20)) | (((((MR_Unsigned) (Var_17) << 19)) | (((((MR_Unsigned) (Var_18) << 18)) | (((((MR_Unsigned) (Var_19) << 17)) | (((((MR_Unsigned) (Var_20) << 16)) | (((((MR_Unsigned) (Var_21) << 15)) | (((((MR_Unsigned) (Var_22) << 14)) | (((((MR_Unsigned) (Var_23) << 13)) | (((((MR_Unsigned) (Var_24) << 12)) | (((((MR_Unsigned) (Var_25) << 11)) | (((((MR_Unsigned) (Var_26) << 10)) | (((((MR_Unsigned) (Var_27) << 9)) | (((((MR_Unsigned) (Var_28) << 8)) | (((((MR_Unsigned) (Var_29) << 7)) | (((((MR_Unsigned) (Var_30) << 6)) | (((((MR_Unsigned) (Var_31) << 5)) | (((((MR_Unsigned) (Var_32) << 4)) | (((((MR_Unsigned) (Var_33) << 3)) | (((((MR_Unsigned) (Var_34) << 2)) | (((((MR_Unsigned) (Var_35) << 1)) | (MR_Unsigned) (Var_36)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, HeadVar__2_2, 1) = (MR_Box) (packed_word_0);
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_39(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv38_HeadVar__2_2;

  conv38_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_purity_markers_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv38_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_38(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv37_HeadVar__2_2;

  conv37_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_unify_argmodes_struct_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv37_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_37(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv36_HeadVar__2_2;

  conv36_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_predicates_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv36_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_36(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv35_HeadVar__2_2;

  conv35_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_var_numbers_in_names_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv35_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_35(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv34_HeadVar__2_2;

  conv34_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_unification_details_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv34_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_34(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv33_HeadVar__2_2;

  conv33_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_termination_analysis_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv33_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_33(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv32_HeadVar__2_2;

  conv32_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_store_maps_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv32_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_32(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv31_HeadVar__2_2;

  conv31_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_resume_points_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv31_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_31(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv30_HeadVar__2_2;

  conv30_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_birth_death_sets_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv30_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv29_HeadVar__2_2;

  conv29_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_nonlocals_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv29_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv28_HeadVar__2_2;

  conv28_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_clause_modes_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv27_HeadVar__2_2;

  conv27_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_call_pred_ids_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv27_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv26_HeadVar__2_2;

  conv26_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_instmap_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv26_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv25_HeadVar__2_2;

  conv25_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_features_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv25_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv24_HeadVar__2_2;

  conv24_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_follow_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv24_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv23_HeadVar__2_2;

  conv23_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_region_annotations_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv23_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv22_HeadVar__2_2;

  conv22_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_determinism_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv22_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv21_HeadVar__2_2;

  conv21_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_type_contexts_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv21_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv20_HeadVar__2_2;

  conv20_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_call_builtin_status_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv19_HeadVar__2_2;

  conv19_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_unify_argmodes_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv18_HeadVar__2_2;

  conv18_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_call_answer_tables_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv17_HeadVar__2_2;

  conv17_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_structured_insts_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__2_2;

  conv16_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_constant_structures_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv16_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv15_HeadVar__2_2;

  conv15_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_cons_table_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv15_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__2_2;

  conv14_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_unify_compare_preds_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv13_HeadVar__2_2;

  conv13_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_type_typeclass_tables_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__2_2;

  conv12_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_struct_sharing_info_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__2_2;

  conv11_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_use_reuse_info_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__2_2;

  conv10_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_ids_paths_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  conv9_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_dependency_ordering_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_inst_mode_tables_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_type_table_only_local_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_imports_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_ctgc_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_deep_profiling_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_goal_instmap_deltas_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_clauses_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_mode_constraints_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_out__hlds_out_util__set_dump_arg_passing_info_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0(
  MR_Char Char_4,
  MR_Word DumpOptions0_5,
  MR_Word * DumpOptions_6)
{
  MR_bool succeeded;
  MR_Word SetFunc_7;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 65))) <= ((MR_Unsigned) 57)))
    if ((((hlds__hlds_out__hlds_out_util_scalar_common_9[0])[(((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 65)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 65)) & (MR_Integer) 31))))))
    {
      SetFunc_7 = ((&hlds__hlds_out__hlds_out_util_vector_common_8[0 + (MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 65)]))->hlds__hlds_out__hlds_out_util__vector_common_type_8_0__vct_8_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Box MR_CALL (* func_39)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, SetFunc_7, 1))));
    MR_Box conv40_DumpOptions_6;

    conv40_DumpOptions_6 = func_39(((MR_Box) (SetFunc_7)), ((MR_Box) (DumpOptions0_5)));
    *DumpOptions_6 = ((MR_Word) (conv40_DumpOptions_6));
  }
  else
    *DumpOptions_6 = DumpOptions0_5;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_intlist_4_p_0(
  MR_Word Stream_5,
  MR_Word IntList_6)
{
  MR_Word State0_8;
  MR_Word State_9;
  MR_String Str_10;

  State0_8 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_util__format_intlist_3_p_0(IntList_6, State0_8, &State_9);
  Str_10 = mercury__string__builder__to_string_1_f_0(State_9);
  mercury__io__write_string_4_p_0(Stream_5, Str_10);
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__format_intlist_3_p_0(
  MR_Word IntList_4,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  if ((IntList_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__builder__append_string_3_p_0((MR_String) "[]", STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  else
  {
    MR_Integer H_6 = ((MR_Integer) ((MR_hl_field(1, IntList_4, 0))));
    MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, IntList_4, 1))));
    MR_Word STATE_VARIABLE_State_2_13;
    MR_Word STATE_VARIABLE_State_3_14;

    mercury__string__builder__append_string_3_p_0((MR_String) "[", STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_2_13);
    hlds__hlds_out__hlds_out_util__format_intlist_lag_4_p_0(H_6, T_7, STATE_VARIABLE_State_2_13, &STATE_VARIABLE_State_3_14);
    mercury__string__builder__append_string_3_p_0((MR_String) "]", STATE_VARIABLE_State_3_14, STATE_VARIABLE_State_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__format_intlist_lag_4_p_0(
  MR_Integer H_5,
  MR_Word T_6,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  while (MR_TRUE)
  {
    MR_String Var_12;
    MR_Word STATE_VARIABLE_State_1_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_12 = mercury__string__int_to_string_1_f_0(H_5);
    mercury__string__builder__append_string_3_p_0(Var_12, STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_1_13);
    if ((T_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_11 = STATE_VARIABLE_State_1_13;
    else
    {
      MR_Integer TH_8 = ((MR_Integer) ((MR_hl_field(1, T_6, 0))));
      MR_Word TT_9 = ((MR_Word) ((MR_hl_field(1, T_6, 1))));
      MR_Word STATE_VARIABLE_State_2_15;
      MR_Integer next_value_of_H_5;
      MR_Word next_value_of_T_6;
      MR_Word next_value_of_STATE_VARIABLE_State_0_10;

      mercury__string__builder__append_string_3_p_0((MR_String) ", ", STATE_VARIABLE_State_1_13, &STATE_VARIABLE_State_2_15);
      // direct tailcall eliminated
      ;
      next_value_of_H_5 = TH_8;
      next_value_of_T_6 = TT_9;
      next_value_of_STATE_VARIABLE_State_0_10 = STATE_VARIABLE_State_2_15;
      H_5 = next_value_of_H_5;
      T_6 = next_value_of_T_6;
      STATE_VARIABLE_State_0_10 = next_value_of_STATE_VARIABLE_State_0_10;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__typeclass_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__mode_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

  if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
  {
    MR_Word InstModeImport_5 = ((MR_Unsigned) ((MR_hl_field(1, InstModeStatus_3, 0))) & (MR_Integer) 3);

    switch (InstModeImport_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "other_module(import_abstract)";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "other_module(import_opt)";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "other_module(import_plain)";
        break;
    }
  }
  else
  {
    MR_Word InstModeExport_4 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_3, 0))) & (MR_Integer) 3);

    switch (InstModeExport_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "this_module(export_anywhere)";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "this_module(export_nowhere)";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "this_module(export_only_submodules)";
        break;
    }
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__inst_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

  if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
  {
    MR_Word InstModeImport_5 = ((MR_Unsigned) ((MR_hl_field(1, InstModeStatus_3, 0))) & (MR_Integer) 3);

    switch (InstModeImport_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "other_module(import_abstract)";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "other_module(import_opt)";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "other_module(import_plain)";
        break;
    }
  }
  else
  {
    MR_Word InstModeExport_4 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_3, 0))) & (MR_Integer) 3);

    switch (InstModeExport_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "this_module(export_anywhere)";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "this_module(export_nowhere)";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "this_module(export_only_submodules)";
        break;
    }
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__type_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word OldImportStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(OldImportStatus_3);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "opt_imported";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "abstract_imported";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "pseudo_imported";
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_String) "exported";
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_String) "opt_exported";
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_String) "abstract_exported";
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_String) "pseudo_exported";
          break;
        case (MR_Integer) 7:
          HeadVar__2_2 = (MR_String) "exported_to_submodules";
          break;
        case (MR_Integer) 8:
          HeadVar__2_2 = (MR_String) "local";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Status_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
        MR_String Var_10;
        MR_String Var_11;

        Var_11 = hlds__hlds_out__hlds_out_util__old_import_status_to_string_1_f_0(Status_8);
        Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "external (and ", Var_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 7);

        HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_5[5 + Var_13]))->hlds__hlds_out__hlds_out_util__vector_common_type_5_0__vct_5_f_0;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word VarNameSrc_8,
  MR_Word InstVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word HeadVar__5_5)
{
  MR_String HeadVar__6_6;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 0))));
  MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 1))));
  MR_String Var_13;
  MR_String Var_14;
  MR_String Var_16;

  Var_13 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_8, VarNamePrint_10, Var_11);
  Var_16 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(Lang_7, InstVarSet_9, Mode_12);
  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "::", Var_16);
  HeadVar__6_6 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
  return HeadVar__6_6;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  conv0_HeadVar__6_6 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word VarNameSrc_8,
  MR_Word InstVarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word VarModes_11)
{
  MR_String Str_12;
  MR_Word Strs_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Lang_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarNameSrc_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (InstVarSet_9));
    MR_hl_field(0, Var_14, 6) = ((MR_Box) (VarNamePrint_10));
  }
  Strs_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, VarModes_11);
  Str_12 = mercury__string__join_list_2_f_0((MR_String) ", ", Strs_13);
  return Str_12;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word VarNamePrint_10,
  MR_Word TVarSet_11,
  MR_Word ProofMap_12)
{
  MR_Word State0_14;
  MR_Word State_15;
  MR_String Str_16;

  State0_14 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0(Indent_9, VarNamePrint_10, TVarSet_11, ProofMap_12, State0_14, &State_15);
  Str_16 = mercury__string__builder__to_string_1_f_0(State_15);
  mercury__io__write_string_4_p_0(Stream_8, Str_16);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_18;

  hlds__hlds_out__hlds_out_util__format_constraint_proof_6_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_18));
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0(
  MR_Unsigned Indent_7,
  MR_Word VarNamePrint_8,
  MR_Word TVarSet_9,
  MR_Word ProofMap_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Word ProofsList_12;
  MR_String IndentStr_13;
  MR_Word STATE_VARIABLE_State_1_18;
  MR_Word Var_21;
  MR_Word Var_29;
  MR_Box conv1_STATE_VARIABLE_State_15;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_10, &ProofsList_12);
  IndentStr_13 = libs__indent__indent2_string_1_f_0(Indent_7);
  mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_0_14, &Var_29);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Proofs:\n", Var_29, &STATE_VARIABLE_State_1_18);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_6[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (IndentStr_13));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (VarNamePrint_8));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (TVarSet_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[0]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_21, ProofsList_12, ((MR_Box) (STATE_VARIABLE_State_1_18)), &conv1_STATE_VARIABLE_State_15);
  *STATE_VARIABLE_State_15 = ((MR_Word) (conv1_STATE_VARIABLE_State_15));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__3_53;

  hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_vars_or_arity_to_string__675__1_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_53);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_53));
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(
  MR_Word VarTable_6,
  MR_Word Qual_7,
  MR_Word ConsId_8,
  MR_Word MaybeArgVars_9)
{
  MR_bool succeeded;
  MR_String String_10;

  switch (MR_tag((MR_Word) ConsId_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      String_10 = (MR_String) "<typeclass_info_cell_constructor>";
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName0_11;
        MR_Integer Arity_12;
        MR_Word SymName_14;
        MR_String SymNameString0_15;
        MR_String SymNameString1_21;
        MR_String SymNameString_22;
        MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 1));

        SymName0_11 = ((MR_Word) ((MR_hl_field(0, Var_48, 0))));
        Arity_12 = ((MR_Integer) ((MR_hl_field(0, Var_48, 1))));
        switch (Qual_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String Var_49;

              Var_49 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_11);
              {
                SymName_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName_14, 0) = ((MR_Box) (Var_49));
              }
            }
            break;
          case (MR_Integer) 0:
            SymName_14 = SymName0_11;
            break;
        }
        SymNameString0_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_14);
        succeeded = mercury__string__contains_char_2_p_0(SymNameString0_15, (MR_Char) 42);
        if (succeeded)
        {
          MR_Box conv1_SymNameString1_21;

          mercury__string__foldl_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[3]), SymNameString0_15, ((MR_Box) ((MR_String) "")), &conv1_SymNameString1_21);
          SymNameString1_21 = ((MR_String) (conv1_SymNameString1_21));
        }
        else
          SymNameString1_21 = SymNameString0_15;
        SymNameString_22 = mercury__term_io__escaped_string_1_f_0(SymNameString1_21);
        if ((MaybeArgVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_56;
          MR_String Var_58;

          Var_58 = mercury__string__int_to_string_1_f_0(Arity_12);
          Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_58);
          String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_56);
        }
        else
        {
          MR_Word ArgVars_23 = ((MR_Word) ((MR_hl_field(1, MaybeArgVars_9, 0))));

          if ((ArgVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_59;
            MR_String Var_61;

            Var_61 = mercury__string__int_to_string_1_f_0(Arity_12);
            Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_61);
            String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_59);
          }
          else
          {
            MR_String ArgStr_26;
            MR_String Var_62;
            MR_String Var_64;

            ArgStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(VarTable_6, ArgVars_23);
            Var_64 = mercury__string__f_43_43_2_f_0(ArgStr_26, (MR_String) ")");
            Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_64);
            String_10 = mercury__string__f_43_43_2_f_0(SymNameString_22, Var_62);
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredProcId_34 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 2));
        MR_Integer PredId_35 = ((MR_Integer) ((MR_hl_field(0, PredProcId_34, 0))));
        MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(0, PredProcId_34, 1))));
        MR_String Var_74;
        MR_String Var_75;
        MR_String Var_76;
        MR_String Var_78;
        MR_String Var_79;

        Var_75 = mercury__string__int_to_string_1_f_0(PredId_35);
        Var_79 = mercury__string__int_to_string_1_f_0(ProcId_36);
        Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) ">");
        Var_76 = mercury__string__f_43_43_2_f_0((MR_String) " proc ", Var_78);
        Var_74 = mercury__string__f_43_43_2_f_0(Var_75, Var_76);
        String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<pred ", Var_74);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          String_10 = (MR_String) "<type_info_cell_constructor>";
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_93;
            MR_String Var_94;
            MR_String Var_95;
            MR_String Var_97;
            MR_String Var_98;
            MR_Word PredProcId_129 = ((MR_Word) ((MR_hl_field(3, ConsId_8, 1))));
            MR_Integer PredId_130 = ((MR_Integer) ((MR_hl_field(0, PredProcId_129, 0))));
            MR_Integer ProcId_131 = ((MR_Integer) ((MR_hl_field(0, PredProcId_129, 1))));

            Var_94 = mercury__string__int_to_string_1_f_0(PredId_130);
            Var_98 = mercury__string__int_to_string_1_f_0(ProcId_131);
            Var_97 = mercury__string__f_43_43_2_f_0(Var_98, (MR_String) ">");
            Var_95 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_97);
            Var_93 = mercury__string__f_43_43_2_f_0(Var_94, Var_95);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<tabling_info ", Var_93);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_101;
            MR_String Var_102;
            MR_String Var_103;
            MR_String Var_105;
            MR_String Var_106;
            MR_Word PredProcId_132 = ((MR_Word) ((MR_hl_field(3, ConsId_8, 1))));
            MR_Integer PredId_133 = ((MR_Integer) ((MR_hl_field(0, PredProcId_132, 0))));
            MR_Integer ProcId_134 = ((MR_Integer) ((MR_hl_field(0, PredProcId_132, 1))));

            Var_102 = mercury__string__int_to_string_1_f_0(PredId_133);
            Var_106 = mercury__string__int_to_string_1_f_0(ProcId_134);
            Var_105 = mercury__string__f_43_43_2_f_0(Var_106, (MR_String) ">");
            Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_105);
            Var_101 = mercury__string__f_43_43_2_f_0(Var_102, Var_103);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<table_io_entry_desc ", Var_101);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_109;
            MR_String Var_110;
            MR_String Var_111;
            MR_String Var_113;
            MR_String Var_114;
            MR_Word PredProcId_135 = ((MR_Word) ((MR_hl_field(3, ConsId_8, 1))));
            MR_Integer PredId_136 = ((MR_Integer) ((MR_hl_field(0, PredProcId_135, 0))));
            MR_Integer ProcId_137 = ((MR_Integer) ((MR_hl_field(0, PredProcId_135, 1))));

            Var_110 = mercury__string__int_to_string_1_f_0(PredId_136);
            Var_114 = mercury__string__int_to_string_1_f_0(ProcId_137);
            Var_113 = mercury__string__f_43_43_2_f_0(Var_114, (MR_String) ">");
            Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
            Var_109 = mercury__string__f_43_43_2_f_0(Var_110, Var_111);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<deep_profiling_proc_layout ", Var_109);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Arity_125 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, 1))));

            if ((MaybeArgVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_67;

              Var_67 = mercury__string__int_to_string_1_f_0(Arity_125);
              String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_67);
            }
            else
            {
              MR_Word ArgVars_121 = ((MR_Word) ((MR_hl_field(1, MaybeArgVars_9, 0))));

              if ((ArgVars_121 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_69;

                Var_69 = mercury__string__int_to_string_1_f_0(Arity_125);
                String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_69);
              }
              else
              {
                MR_String Var_71;
                MR_String ArgStr_119;

                ArgStr_119 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(VarTable_6, ArgVars_121);
                Var_71 = mercury__string__f_43_43_2_f_0(ArgStr_119, (MR_String) "}");
                String_10 = mercury__string__f_43_43_2_f_0((MR_String) "{", Var_71);
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_29 = ((MR_Word) ((MR_hl_field(3, ConsId_8, 1))));

            String_10 = hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(IntConst_29);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_30 = MR_unbox_float((MR_hl_field(3, ConsId_8, 1)));

            String_10 = mercury__string__float_to_string_1_f_0(Float_30);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char CharConst_31 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_8, 1)));

            String_10 = mercury__term_io__quoted_char_to_string_1_f_0(CharConst_31);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String StringConst_32 = ((MR_String) ((MR_hl_field(3, ConsId_8, 1))));

            String_10 = mercury__term_io__quoted_string_1_f_0(StringConst_32);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_33 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_8, 1))) & (MR_Integer) 7);

            String_10 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_33);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Module_37 = ((MR_Word) ((MR_hl_field(3, ConsId_8, 1))));
            MR_String Ctor_38 = ((MR_String) ((MR_hl_field(3, ConsId_8, 2))));
            MR_String Var_82;
            MR_String Var_83;
            MR_String Var_84;
            MR_String Var_86;
            MR_String Var_87;
            MR_String Var_89;
            MR_String Var_90;
            MR_Integer Arity_128 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, 3))));

            Var_83 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_37);
            Var_90 = mercury__string__int_to_string_1_f_0(Arity_128);
            Var_89 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) ">");
            Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_89);
            Var_86 = mercury__string__f_43_43_2_f_0(Ctor_38, Var_87);
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_86);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
            String_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info ", Var_82);
          }
          break;
        case (MR_Integer) 11:
          String_10 = (MR_String) "<base_typeclass_info>";
          break;
        case (MR_Integer) 12:
          String_10 = (MR_String) "<type_info_const>";
          break;
        case (MR_Integer) 13:
          String_10 = (MR_String) "<typeclass_info_const>";
          break;
        case (MR_Integer) 14:
          String_10 = (MR_String) "<ground_term_const>";
          break;
      }
      break;
  }
  return String_10;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word ConsId_10,
  MR_Word ArgVars_11)
{
  while (MR_TRUE)
  {
    MR_String Str_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) ConsId_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[3]), ArgVars_11);
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_13;
          MR_Word Var_45 = (MR_Word) (MR_body((MR_Word) (ConsId_10), (MR_Integer) 1));

          SymName_13 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
          if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
          {
            MR_Word Module_16 = ((MR_Word) ((MR_hl_field(1, SymName_13, 0))));
            MR_String Name_17 = ((MR_String) ((MR_hl_field(1, SymName_13, 1))));
            MR_Word Var_46;

            {
              Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_46, 0) = ((MR_Box) (Name_17));
            }
            Str_12 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(VarNameSrc_8, VarNamePrint_9, Module_16, Var_46, ArgVars_11);
          }
          else
          {
            MR_Word Var_48;
            MR_String Name_132 = ((MR_String) ((MR_hl_field(0, SymName_13, 0))));

            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (Name_132));
            }
            Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, Var_48, ArgVars_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ShroudedPredProcId_24 = (MR_Word) (MR_body((MR_Word) (ConsId_10), (MR_Integer) 2));
          MR_Word PredId_25;
          MR_Word PredInfo_27;
          MR_Word PredModule_28;
          MR_String PredName_29;
          MR_Word PredSymName_30;
          MR_Word PredConsId_31;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Integer Var_60;
          MR_Word Var_61;
          MR_Word next_value_of_ConsId_10;

          Var_58 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_24);
          PredId_25 = ((MR_Word) ((MR_hl_field(0, Var_58, 0))));
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_25, &PredInfo_27);
          PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_27);
          PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_27);
          {
            PredSymName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredSymName_30, 0) = ((MR_Box) (PredModule_28));
            MR_hl_field(1, PredSymName_30, 1) = ((MR_Box) (PredName_29));
          }
          Var_60 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[0]), ArgVars_11);
          Var_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (PredSymName_30));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (Var_60));
            MR_hl_field(0, Var_59, 2) = ((MR_Box) (Var_61));
          }
          PredConsId_31 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_59)));
          // direct tailcall eliminated
          ;
          next_value_of_ConsId_10 = PredConsId_31;
          ConsId_10 = next_value_of_ConsId_10;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsId_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[2]), ArgVars_11);
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ProcId_43;
              MR_Integer ProcIdInt_44;
              MR_Word Var_108;
              MR_String Var_112;
              MR_Word ShroudedPredProcId_138 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 1))));
              MR_Word PredId_139;
              MR_String Var_186;
              MR_String Var_193;
              MR_String Var_195;
              MR_String Var_196;

              Var_108 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_138);
              PredId_139 = ((MR_Word) ((MR_hl_field(0, Var_108, 0))));
              ProcId_43 = ((MR_Integer) ((MR_hl_field(0, Var_108, 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_43, &ProcIdInt_44);
              Var_112 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_7, PredId_139);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), ProcIdInt_44, &Var_186);
              Var_193 = mercury__string__f_43_43_2_f_0(Var_186, (MR_String) ")");
              Var_195 = mercury__string__f_43_43_2_f_0((MR_String) ", mode ", Var_193);
              Var_196 = mercury__string__f_43_43_2_f_0(Var_112, Var_195);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "tabling_info_const(", Var_196);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_116;
              MR_String Var_120;
              MR_Word ShroudedPredProcId_140 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 1))));
              MR_Word PredId_141;
              MR_Integer ProcId_142;
              MR_Integer ProcIdInt_143;
              MR_String Var_199;
              MR_String Var_206;
              MR_String Var_208;
              MR_String Var_209;

              Var_116 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_140);
              PredId_141 = ((MR_Word) ((MR_hl_field(0, Var_116, 0))));
              ProcId_142 = ((MR_Integer) ((MR_hl_field(0, Var_116, 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_142, &ProcIdInt_143);
              Var_120 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_7, PredId_141);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), ProcIdInt_143, &Var_199);
              Var_206 = mercury__string__f_43_43_2_f_0(Var_199, (MR_String) ")");
              Var_208 = mercury__string__f_43_43_2_f_0((MR_String) ", mode ", Var_206);
              Var_209 = mercury__string__f_43_43_2_f_0(Var_120, Var_208);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_desc(", Var_209);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_124;
              MR_String Var_128;
              MR_Word ShroudedPredProcId_144 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 1))));
              MR_Word PredId_145;
              MR_Integer ProcId_146;
              MR_Integer ProcIdInt_147;
              MR_String Var_225;
              MR_String Var_232;
              MR_String Var_234;
              MR_String Var_235;

              Var_124 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_144);
              PredId_145 = ((MR_Word) ((MR_hl_field(0, Var_124, 0))));
              ProcId_146 = ((MR_Integer) ((MR_hl_field(0, Var_124, 1))));
              hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_146, &ProcIdInt_147);
              Var_128 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_7, PredId_145);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), ProcIdInt_147, &Var_225);
              Var_232 = mercury__string__f_43_43_2_f_0(Var_225, (MR_String) ")");
              Var_234 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_232);
              Var_235 = mercury__string__f_43_43_2_f_0(Var_128, Var_234);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "deep_profiling_proc_layout(", Var_235);
            }
            break;
          case (MR_Integer) 4:
            Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[1]), ArgVars_11);
            break;
          case (MR_Integer) 5:
            {
              MR_Word IntConst_19 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 1))));

              Str_12 = hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(IntConst_19);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float Float_20 = MR_unbox_float((MR_hl_field(3, ConsId_10, 1)));
              MR_Word Var_52;

              {
                Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_52, 1) = MR_box_float(Float_20);
              }
              Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_8, VarNamePrint_9, Var_52, ArgVars_11);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Char Char_21 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_10, 1)));
              MR_String Var_54;
              MR_String Var_55;

              Var_55 = mercury__term_io__quoted_char_to_string_1_f_0(Char_21);
              Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_54);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String String_22 = ((MR_String) ((MR_hl_field(3, ConsId_10, 1))));
              MR_Word Var_57;

              {
                Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_57, 0) = ((MR_Box) (String_22));
              }
              Str_12 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_8, VarNamePrint_9, Var_57, ArgVars_11);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word IDCKind_23 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_10, 1))) & (MR_Integer) 7);

              Str_12 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_23);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer Arity_32 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, 3))));
              MR_String Var_65;
              MR_Word Module_133 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 1))));
              MR_String Name_134 = ((MR_String) ((MR_hl_field(3, ConsId_10, 2))));
              MR_String Var_170;
              MR_String Var_177;
              MR_String Var_179;
              MR_String Var_180;
              MR_String Var_182;
              MR_String Var_183;

              Var_65 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(Module_133);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), Arity_32, &Var_170);
              Var_177 = mercury__string__f_43_43_2_f_0(Var_170, (MR_String) ")");
              Var_179 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_177);
              Var_180 = mercury__string__f_43_43_2_f_0(Name_134, Var_179);
              Var_182 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_180);
              Var_183 = mercury__string__f_43_43_2_f_0(Var_65, Var_182);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor_info(", Var_183);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ClassId_33 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 2))));
              MR_String Instance_35 = ((MR_String) ((MR_hl_field(3, ConsId_10, 4))));
              MR_String ClassIdStr_36;
              MR_String Var_74;
              MR_String Var_81;
              MR_Word Module_135 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 1))));
              MR_Word Name_136 = ((MR_Word) ((MR_hl_field(0, ClassId_33, 0))));
              MR_Integer Arity_137 = ((MR_Integer) ((MR_hl_field(0, ClassId_33, 1))));
              MR_String Var_238;
              MR_String Var_245;
              MR_String Var_247;
              MR_String Var_248;
              MR_String Var_251;
              MR_String Var_253;
              MR_String Var_254;
              MR_String Var_256;
              MR_String Var_257;

              Var_74 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(Name_136);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), Arity_137, &Var_238);
              Var_245 = mercury__string__f_43_43_2_f_0(Var_238, (MR_String) ")");
              Var_247 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_245);
              Var_248 = mercury__string__f_43_43_2_f_0(Var_74, Var_247);
              ClassIdStr_36 = mercury__string__f_43_43_2_f_0((MR_String) "class_id(", Var_248);
              Var_81 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(Module_135);
              Var_251 = mercury__string__f_43_43_2_f_0(Instance_35, (MR_String) ")");
              Var_253 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_251);
              Var_254 = mercury__string__f_43_43_2_f_0(ClassIdStr_36, Var_253);
              Var_256 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_254);
              Var_257 = mercury__string__f_43_43_2_f_0(Var_81, Var_256);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", Var_257);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer TIConstNum_38 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, 1))));
              MR_String Var_160;
              MR_String Var_167;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), TIConstNum_38, &Var_160);
              Var_167 = mercury__string__f_43_43_2_f_0(Var_160, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "type_info_const(", Var_167);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer TCIConstNum_39 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, 1))));
              MR_String Var_150;
              MR_String Var_157;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), TCIConstNum_39, &Var_150);
              Var_157 = mercury__string__f_43_43_2_f_0(Var_150, (MR_String) ")");
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "typeclass_info_const(", Var_157);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ConstNum_40 = ((MR_Integer) ((MR_hl_field(3, ConsId_10, 1))));
              MR_Word SubConsId_41 = ((MR_Word) ((MR_hl_field(3, ConsId_10, 2))));
              MR_String SubStr_42;
              MR_String Var_212;
              MR_String Var_214;
              MR_String Var_215;
              MR_String Var_222;

              SubStr_42 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_7, VarNameSrc_8, VarNamePrint_9, SubConsId_41, (MR_Word) ((MR_Unsigned) 0U));
              Var_212 = mercury__string__f_43_43_2_f_0(SubStr_42, (MR_String) ")");
              Var_214 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_212);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), ConstNum_40, &Var_215);
              Var_222 = mercury__string__f_43_43_2_f_0(Var_215, Var_214);
              Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "ground_term_const(", Var_222);
            }
            break;
        }
        break;
    }
    return Str_12;
    break;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__int_const_to_string_with_suffix_1_f_0(
  MR_Word IntConst_3)
{
  MR_String Str_4;
  MR_String BaseStr_5;
  MR_String Suffix_6;

  parse_tree__parse_tree_out_cons_id__int_const_to_string_and_suffix_3_p_0(IntConst_3, &BaseStr_5, &Suffix_6);
  Str_4 = mercury__string__f_43_43_2_f_0(BaseStr_5, Suffix_6);
  return Str_4;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_f_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word ModuleName_9,
  MR_Word Functor_10,
  MR_Word ArgTerms_11)
{
  MR_String Str_12;
  MR_String ModuleNameStr_13;
  MR_Word Term_14;
  MR_String TermStr_15;
  MR_Word Var_16;
  MR_String Var_18;

  ModuleNameStr_13 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_9);
  Var_16 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_14, 0) = ((MR_Box) (Functor_10));
    MR_hl_field(0, Term_14, 1) = ((MR_Box) (ArgTerms_11));
    MR_hl_field(0, Term_14, 2) = ((MR_Box) (Var_16));
  }
  TermStr_15 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_7, VarNamePrint_8, (MR_Integer) 0, Term_14);
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", TermStr_15);
  Str_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_13, Var_18);
  return Str_12;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word ModuleName_9,
  MR_Word Functor_10,
  MR_Word ArgVars_11)
{
  MR_String Str_12;
  MR_String ModuleNameStr_13;
  MR_String FunctorStr_14;
  MR_String Var_16;
  MR_Word ArgTerms_18;
  MR_Word Term_19;
  MR_Word Var_20;

  ModuleNameStr_13 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_9);
  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, &ArgTerms_18);
  Var_20 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_19, 0) = ((MR_Box) (Functor_10));
    MR_hl_field(0, Term_19, 1) = ((MR_Box) (ArgTerms_18));
    MR_hl_field(0, Term_19, 2) = ((MR_Box) (Var_20));
  }
  FunctorStr_14 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_7, VarNamePrint_8, (MR_Integer) 0, Term_19);
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ".", FunctorStr_14);
  Str_12 = mercury__string__f_43_43_2_f_0(ModuleNameStr_13, Var_16);
  return Str_12;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Word Functor_10,
  MR_Word ArgVars_11)
{
  MR_String Str_12;
  MR_Word ArgTerms_13;
  MR_Word Term_14;
  MR_Word Var_15;

  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, &ArgTerms_13);
  Var_15 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_14, 0) = ((MR_Box) (Functor_10));
    MR_hl_field(0, Term_14, 1) = ((MR_Box) (ArgTerms_13));
    MR_hl_field(0, Term_14, 2) = ((MR_Box) (Var_15));
  }
  Str_12 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_7, VarNamePrint_8, NextToGraphicToken_9, Term_14);
  return Str_12;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word Functor_8,
  MR_Word ArgVars_9)
{
  MR_String HeadVar__5_5;
  MR_Word ArgTerms_11;
  MR_Word Term_12;
  MR_Word Var_13;

  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, &ArgTerms_11);
  Var_13 = mercury__term_context__dummy_context_0_f_0();
  {
    Term_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Term_12, 0) = ((MR_Box) (Functor_8));
    MR_hl_field(0, Term_12, 1) = ((MR_Box) (ArgTerms_11));
    MR_hl_field(0, Term_12, 2) = ((MR_Box) (Var_13));
  }
  HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(VarNameSrc_6, VarNamePrint_7, (MR_Integer) 1, Term_12);
  return HeadVar__5_5;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&hlds__hlds_out__hlds_out_util_vector_common_5[0 + HeadVar__1_1]))->hlds__hlds_out__hlds_out_util__vector_common_type_5_0__vct_5_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__context_to_brief_string_1_f_0(
  MR_Word Context_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String FileName_5;
  MR_Integer LineNumber_6;

  FileName_5 = mercury__term_context__context_file_1_f_0(Context_3);
  LineNumber_6 = mercury__term_context__context_line_1_f_0(Context_3);
  succeeded = (strcmp(FileName_5, (MR_String) "") == 0);
  if (succeeded)
    Str_4 = (MR_String) "dummy context";
  else
  {
    MR_String Var_13;
    MR_String Var_21;
    MR_String Var_22;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), LineNumber_6, &Var_13);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) ">:", Var_13);
    Var_22 = mercury__string__f_43_43_2_f_0(FileName_5, Var_21);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_22);
  }
  return Str_4;
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__maybe_format_context_comment_5_p_0(
  MR_Unsigned Indent_6,
  MR_String Suffix_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_bool succeeded;
  MR_String FileName_10;
  MR_Integer LineNumber_11;

  FileName_10 = mercury__term_context__context_file_1_f_0(Context_8);
  LineNumber_11 = mercury__term_context__context_line_1_f_0(Context_8);
  succeeded = (strcmp(FileName_10, (MR_String) "") == 0);
  if (succeeded)
    *STATE_VARIABLE_State_14 = STATE_VARIABLE_State_0_13;
  else
  {
    MR_String IndentStr_12;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_40;

    IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_6);
    mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_0_13, &Var_26);
    mercury__string__builder__append_string_3_p_0((MR_String) "% context: file \"", Var_26, &Var_27);
    mercury__string__builder__append_string_3_p_0(FileName_10, Var_27, &Var_29);
    mercury__string__builder__append_string_3_p_0((MR_String) "\", line ", Var_29, &Var_30);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), LineNumber_11, &Var_33);
    mercury__string__builder__append_string_3_p_0(Var_33, Var_30, &Var_32);
    mercury__string__builder__append_string_3_p_0(Suffix_7, Var_32, &Var_40);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_40, STATE_VARIABLE_State_14);
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(
  MR_Word Stream_7,
  MR_Unsigned Indent_8,
  MR_String Suffix_9,
  MR_Word Context_10)
{
  MR_bool succeeded;
  MR_String FileName_12;
  MR_Integer LineNumber_13;

  FileName_12 = mercury__term_context__context_file_1_f_0(Context_10);
  LineNumber_13 = mercury__term_context__context_line_1_f_0(Context_10);
  succeeded = (strcmp(FileName_12, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_String IndentStr_14;
    MR_String Var_35;

    IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_8);
    mercury__io__write_string_4_p_0(Stream_7, IndentStr_14);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% context: file \"");
    mercury__io__write_string_4_p_0(Stream_7, FileName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\", line ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_3[0]), LineNumber_13, &Var_35);
    mercury__io__write_string_4_p_0(Stream_7, Var_35);
    mercury__io__write_string_4_p_0(Stream_7, Suffix_9);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_dev_string_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_String Str_8;
  MR_Integer ModeNum_9;
  MR_String Var_10;
  MR_String Var_11;
  MR_String Var_13;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_9);
  Var_10 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_5, PredId_6);
  Var_13 = mercury__string__int_to_string_1_f_0(ModeNum_9);
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_13);
  Str_8 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
  return Str_8;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;
  MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Integer ModeNum_7;
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_11;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ModeNum_7);
  Var_8 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_4, PredId_5);
  Var_11 = mercury__string__int_to_string_1_f_0(ModeNum_7);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_11);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  return HeadVar__3_3;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_Word PredIdTable_7;
  MR_Word PredInfo_8;
  MR_Box conv0_PredInfo_8;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_4, &PredIdTable_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_7, ((MR_Box) (PredId_5)), &conv0_PredInfo_8);
  if (succeeded)
  {
    PredInfo_8 = ((MR_Word) (conv0_PredInfo_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredOrigin_9;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &PredOrigin_9);
    Str_6 = hlds__pred_name__pred_origin_to_user_string_1_f_0(PredOrigin_9);
  }
  else
  {
    MR_Integer PredIdInt_10;
    MR_String Var_12;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredIdInt_10);
    Var_12 = mercury__string__int_to_string_1_f_0(PredIdInt_10);
    Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", Var_12);
  }
  return Str_6;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_user_string_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_String Str_8;
  MR_Integer ModeNum_9;
  MR_String Var_10;
  MR_String Var_11;
  MR_String Var_13;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_9);
  Var_10 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_5, PredId_6);
  Var_13 = mercury__string__int_to_string_1_f_0(ModeNum_9);
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_13);
  Str_8 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
  return Str_8;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_proc_id_to_user_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;
  MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Integer ModeNum_7;
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_11;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ModeNum_7);
  Var_8 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_4, PredId_5);
  Var_11 = mercury__string__int_to_string_1_f_0(ModeNum_7);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " mode ", Var_11);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  return HeadVar__3_3;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_Word PredIdTable_7;
  MR_Word PredInfo_8;
  MR_Box conv0_PredInfo_8;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_4, &PredIdTable_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_7, ((MR_Box) (PredId_5)), &conv0_PredInfo_8);
  if (succeeded)
  {
    PredInfo_8 = ((MR_Word) (conv0_PredInfo_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredOrigin_9;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &PredOrigin_9);
    Str_6 = hlds__pred_name__pred_origin_to_user_string_1_f_0(PredOrigin_9);
  }
  else
  {
    MR_Integer PredIdInt_10;
    MR_String Var_12;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredIdInt_10);
    Var_12 = mercury__string__int_to_string_1_f_0(PredIdInt_10);
    Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deleted predicate ", Var_12);
  }
  return Str_6;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_DumpOptions_6;

  hlds__hlds_out__hlds_out_util__apply_dump_option_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv0_DumpOptions_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_DumpOptions_6));
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(
  MR_Word Globals_4,
  MR_Word Lang_5)
{
  MR_Word Info_6;
  MR_String DumpOptionsStr_7;
  MR_Word DumpOptions_8;
  MR_Word Ids_9;
  MR_Word Names_10;
  MR_Word MercInfo_11;
  MR_Word Chars_18;
  MR_Box conv1_DumpOptions_8;

  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 737, &DumpOptionsStr_7);
  mercury__string__to_char_list_2_p_0(DumpOptionsStr_7, &Chars_18);
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0), (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_2[2]), Chars_18, ((MR_Box) (&hlds__hlds_out__hlds_out_util_scalar_common_1[2])), &conv1_DumpOptions_8);
  DumpOptions_8 = ((MR_Word) (conv1_DumpOptions_8));
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 731, &Ids_9);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 732, &Names_10);
  MercInfo_11 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_4, (MR_Integer) 0, Lang_5);
  {
    Info_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_6, 0) = ((MR_Box) (DumpOptions_8));
    MR_hl_field(0, Info_6, 1) = ((MR_Box) (DumpOptions_8));
    MR_hl_field(0, Info_6, 2) = ((MR_Box) (Ids_9));
    MR_hl_field(0, Info_6, 3) = ((MR_Box) (Names_10));
    MR_hl_field(0, Info_6, 4) = ((MR_Box) (MercInfo_11));
  }
  return Info_6;
}

MR_Word MR_CALL 
hlds__hlds_out__hlds_out_util__empty_dump_options_0_f_0(void)
{
  return (MR_Word) (&hlds__hlds_out__hlds_out_util_scalar_common_1[2]);
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____hlds_dump_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_util____Unify____maybe_qualify_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_util____Compare____maybe_qualify_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_out__hlds_out_util__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_dump_options_0);
  MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0);
  MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_maybe_qualify_cons_id_0);
}

void mercury__hlds__hlds_out__hlds_out_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_util.
