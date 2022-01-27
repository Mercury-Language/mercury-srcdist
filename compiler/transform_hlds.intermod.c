/*
** Automatically generated from `intermod.m'
** by the Mercury compiler,
** version rotd-2021-12-01
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


// :- module transform_hlds.intermod.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod__init
ENDINIT
*/

#include "transform_hlds.intermod.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.intermod_order_pred_info.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s {
  MR_bool transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9;
  jmp_buf transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_41_41;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_42_42;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeInfo_50_50;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Procs_13;
  MR_Integer transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__ProcId_15;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__ProcInfo_16;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Var_26;
  MR_Word transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Var_45;
  MR_Box transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__conv0_ProcId_15;
};

struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s {
  MR_Word transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__PredId_7;
  MR_bool transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12;
  jmp_buf transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Goal1_56;
  MR_Word transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clause1_65;
  MR_Box transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__conv1_Clause1_65;
};

struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s {
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1;
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
  MR_bool transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
  jmp_buf transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4;
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[7];

static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[7];

static const MR_DuArgLocn transform_hlds__intermod__transform_hlds__intermod__field_locns_intermod_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_params_0_0[5];

static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_params_0_0[5];

static const MR_DuArgLocn transform_hlds__intermod__transform_hlds__intermod__field_locns_intermod_params_0_0[5];

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_params_0[1];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_params_0[1];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_may_opt_export_pred_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_may_opt_export_pred_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_may_opt_export_pred_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_collect_types_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_collect_types_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_collect_types_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_first_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_need_foreign_import_modules_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_need_foreign_import_modules_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_need_foreign_import_modules_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_process_local_preds_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_process_local_preds_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_process_local_preds_0[2];

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__2657__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2285__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2221__1_1_p_0(
  MR_Word LambdaHeadVar__1_67);

static MR_String MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__write_promise__2166__1_2_f_0(
  MR_Word VarSet_13,
  MR_Word HeadVar__2_45);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__intermod_write_pred_type_spec_pragmas__2090__1_1_f_0(
  MR_Word HeadVar__1_39);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1809__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__1664__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__1377__1_3_p_0(
  MR_Word LambdaHeadVar__1_60,
  MR_Word LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1065__1_1_f_0(
  MR_Word LambdaHeadVar__1_54);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1052__1_1_f_0(
  MR_Word LambdaHeadVar__1_50);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__922__1_2_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_68);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_process_local_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_process_local_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_collect_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_collect_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____may_opt_export_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____may_opt_export_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0(
  MR_Word Instance0_5,
  MR_Word * Instance_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn0_7,
  MR_Word * TypeDefn_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_11_p_0(
  MR_Word Stream_12,
  MR_Word Procs_13,
  MR_Word PredOrFunc_14,
  MR_Word PragmaImpl_15,
  MR_Word Attributes_16,
  MR_Word Args_17,
  MR_Word ProgVarset0_18,
  MR_Word SymName_19,
  MR_Integer ProcId_20);

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * PragmaVars_9);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0(
  MR_Word OutInfo_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word PredId_16,
  MR_Word SymName_17,
  MR_Word PredOrFunc_18,
  MR_Word VarSet_19,
  MR_Word TypeQual_20,
  MR_Word HeadVars_21,
  MR_Word Clause0_22);

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
  MR_Word HeadVars_5,
  MR_Word Clause0_6,
  MR_Word * HeadTerms_7,
  MR_Word * Clause_8);

static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_HeadVarMap_0_5,
  MR_Word * STATE_VARIABLE_HeadVarMap_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_7_p_0(
  MR_Word OutInfo_8,
  MR_Word Stream_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstancesCord_0_29,
  MR_Word * STATE_VARIABLE_InstancesCord_30);

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5);

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_class_11_p_0(
  MR_Word OutInfo_12,
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word ClassId_15,
  MR_Word ClassDefn_16,
  MR_Word STATE_VARIABLE_TypeClassesCord_0_38,
  MR_Word * STATE_VARIABLE_TypeClassesCord_39,
  MR_Word STATE_VARIABLE_First_0_40,
  MR_Word * STATE_VARIABLE_First_41);

static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_11_p_0(
  MR_Word OutInfo_12,
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word ModeCtor_15,
  MR_Word ModeDefn_16,
  MR_Word STATE_VARIABLE_ModeDefnsCord_0_32,
  MR_Word * STATE_VARIABLE_ModeDefnsCord_33,
  MR_Word STATE_VARIABLE_First_0_34,
  MR_Word * STATE_VARIABLE_First_35);

static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_11_p_0(
  MR_Word OutInfo_12,
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word InstCtor_15,
  MR_Word InstDefn_16,
  MR_Word STATE_VARIABLE_InstDefnsCord_0_35,
  MR_Word * STATE_VARIABLE_InstDefnsCord_36,
  MR_Word STATE_VARIABLE_First_0_37,
  MR_Word * STATE_VARIABLE_First_38);

static MR_bool MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(
  MR_Word CtorRepn_4,
  MR_Word STATE_VARIABLE_Values_0_15,
  MR_Word * STATE_VARIABLE_Values_16);

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_9_p_0(
  MR_Word OutInfo_10,
  MR_Word Stream_11,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_92,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_93,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_94,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_95);

static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_30,
  MR_Word * STATE_VARIABLE_IntermodInfo_31);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeCanonical0_9,
  MR_Word * MaybeCanonical_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20);

static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ForeignTypeBody0_9,
  MR_Word * ForeignTypeBody_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_20,
  MR_Word * STATE_VARIABLE_IntermodInfo_21);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeForeignTypeLangData0_9,
  MR_Word * MaybeForeignTypeLangData_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_16,
  MR_Word * STATE_VARIABLE_IntermodInfo_17);

static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word SpecialId_9,
  MR_Word TypeCtor_10,
  MR_Word Pred0_11,
  MR_Word * Pred_12,
  MR_Word STATE_VARIABLE_IntermodInfo_0_26,
  MR_Word * STATE_VARIABLE_IntermodInfo_27);

static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadVar__2_2,
  MR_Word * InstanceMethod_9,
  MR_Word PredIds0_10,
  MR_Word * PredIds_11);

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word InstanceMethodName0_12,
  MR_Integer MethodArity_13,
  MR_Word MethodCallTVarSet_14,
  MR_Word MethodCallExistQTVars_15,
  MR_Word MethodCallArgTypes_16,
  MR_Word MethodCallExternalTypeParams_17,
  MR_Word MethodContext_18,
  MR_Word * MaybePredId_19,
  MR_Word * InstanceMethodName_20);

static MR_bool MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_34,
  MR_Word * STATE_VARIABLE_IntermodInfo_35);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11);

static MR_bool MR_CALL 
transform_hlds__intermod__proc_has_a_higher_order_input_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ProcInfo_4);

static MR_bool MR_CALL 
transform_hlds__intermod__some_input_arg_is_higher_order_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__intermod__proc_eval_method_is_normal_1_p_0(
  MR_Word ProcInfo_2);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Preds_0_2,
  MR_Word * STATE_VARIABLE_Preds_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_5_p_0(
  MR_Word Stream_6,
  MR_Word IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0(
  MR_Word Stream_6,
  MR_Word IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_8_p_0(
  MR_Word OutInfo_1,
  MR_Word Stream_2,
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_5,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defn_8_p_0(
  MR_Word OutInfo_9,
  MR_Word Stream_10,
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_38,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_39);

static MR_Box MR_CALL 
transform_hlds__intermod__write_promise_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__write_promise_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word PromiseType_14,
  MR_Word HeadVars_15,
  MR_Word Clause_16);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_4,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_5,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_6,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_7);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_36,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_37,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_38,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_39);

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_16,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_17);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_9_p_0(
  MR_Word Stream_1,
  MR_Word PredOrFunc_2,
  MR_Word PredSymName_3,
  MR_Word UserArity_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_6,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_7);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_valid_modes_6_p_0(
  MR_Word Stream_1,
  MR_Word PredOrFunc_2,
  MR_Word PredSymName_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word InstanceDefns_9,
  MR_Word * Instances_10);

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word * TypeClasses_10);

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word * ModeDefns_10);

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word * InstDefns_10);

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_7_p_0(
  MR_Word OutInfo_8,
  MR_Word Stream_9,
  MR_Word Types_10,
  MR_Word * TypeDefns_11,
  MR_Word * ForeignEnums_12);

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__decide_what_to_opt_export_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_15);

static void MR_CALL 
transform_hlds__intermod__init_intermod_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_4_p_0(
  MR_Word Params0_5,
  MR_Word AllPredIds_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_fixpoint_4_p_0(
  MR_Word Params_5,
  MR_Word ExtraExportedPreds0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_12,
  MR_Word * STATE_VARIABLE_IntermodInfo_13);

static MR_bool MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_pred_defns_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__intermod_info_get_pred_defns_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_unify_rhs_4_p_0(
  MR_Word tscc_proc_3_input_1_RHS_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__intermod_add_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word * MayOptExportPred_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word * MayOptExportPred_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * STATE_VARIABLE_IntermodInfo_25);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_use_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static MR_bool MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_5(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0(
  MR_Word Params_5,
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8);

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____may_opt_export_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____may_opt_export_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_collect_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_collect_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_process_local_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_process_local_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[27][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[27][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[7][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[3][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[4][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[9][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][12];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[4][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][10];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_12[1][9];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_14[5][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_15[1][15];


/* sealed */ struct transform_hlds__intermod__vector_common_type_5_0_s {
  const MR_Word transform_hlds__intermod__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct transform_hlds__intermod__vector_common_type_5_0_s transform_hlds__intermod_vector_common_5[5];

/* sealed */ struct transform_hlds__intermod__vector_common_type_13_0_s {
  const MR_Word transform_hlds__intermod__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct transform_hlds__intermod__vector_common_type_13_0_s transform_hlds__intermod_vector_common_13[4];



static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[3]))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[10]))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[12]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[4]))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[2]))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[27][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_types_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_14[1])),
    ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[4])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[5])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[5])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_14[2])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_type_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[8])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[9][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[4][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_12[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_14[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_15[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__vartypes__hlds__vartypes__type_ctor_info_maybe_vartypes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct transform_hlds__intermod__vector_common_type_5_0_s transform_hlds__intermod_vector_common_5[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 1 },
};

static /* final */ const struct transform_hlds__intermod__vector_common_type_13_0_s transform_hlds__intermod_vector_common_13[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_need_foreign_import_modules_0)
};

static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[7] = {
  (MR_String) "im_module_info",
  (MR_String) "im_use_modules",
  (MR_String) "im_pred_decls",
  (MR_String) "im_pred_defns",
  (MR_String) "im_instance_defns",
  (MR_String) "im_type_defns",
  (MR_String) "im_need_foreign_imports"
};

static const MR_DuArgLocn transform_hlds__intermod__transform_hlds__intermod__field_locns_intermod_info_0_0[7] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0 = {
  (MR_String) "intermod_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0,
  transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0,
  transform_hlds__intermod__transform_hlds__intermod__field_locns_intermod_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____intermod_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____intermod_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "intermod_info",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_process_local_preds_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_collect_types_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_deforest_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_params_0_0[5] = {
  (MR_String) "ip_maybe_process_local_preds",
  (MR_String) "ip_maybe_collect_types",
  (MR_String) "ip_maybe_deforest",
  (MR_String) "ip_inline_simple_threshold",
  (MR_String) "ip_higher_order_size_limit"
};

static const MR_DuArgLocn transform_hlds__intermod__transform_hlds__intermod__field_locns_intermod_params_0_0[5] = {
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
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_params_0_0 = {
  (MR_String) "intermod_params",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_params_0_0,
  transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_params_0_0,
  transform_hlds__intermod__transform_hlds__intermod__field_locns_intermod_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_params_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_params_0_0
};

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_params_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_params_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____intermod_params_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____intermod_params_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "intermod_params",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_params_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_params_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_0 = {
  (MR_String) "may_not_opt_export_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_1 = {
  (MR_String) "may_opt_export_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_may_opt_export_pred_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_may_opt_export_pred_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_may_opt_export_pred_0_1
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_may_opt_export_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____may_opt_export_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____may_opt_export_pred_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "may_opt_export_pred",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_may_opt_export_pred_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_may_opt_export_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_may_opt_export_pred_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_0 = {
  (MR_String) "do_not_collect_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_1 = {
  (MR_String) "do_collect_types",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_collect_types_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_collect_types_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_1,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_collect_types_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_collect_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_collect_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_collect_types_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_collect_types_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_collect_types",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_collect_types_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_collect_types_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_collect_types_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0 = {
  (MR_String) "is_not_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1 = {
  (MR_String) "is_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_first_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_first_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_first_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_first",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_0 = {
  (MR_String) "do_not_need_foreign_import_modules",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_1 = {
  (MR_String) "do_need_foreign_import_modules",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_need_foreign_import_modules_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_need_foreign_import_modules_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_1,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_need_foreign_import_modules_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_need_foreign_import_modules_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_need_foreign_import_modules",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_need_foreign_import_modules_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_need_foreign_import_modules_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_need_foreign_import_modules_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_0 = {
  (MR_String) "do_not_process_local_preds",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_1 = {
  (MR_String) "do_process_local_preds",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_process_local_preds_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_process_local_preds_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_process_local_preds_0_1
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_process_local_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_process_local_preds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_process_local_preds_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_process_local_preds_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_process_local_preds",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_process_local_preds_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_ordinal_ordered_maybe_process_local_preds_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_process_local_preds_0,

};

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__2657__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecPredMaps_8, LambdaHeadVar__1_13, TypeCtor_4, LambdaHeadVar__2_14);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2285__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded;
    MR_Word HeadTerm0_18;
    MR_Box conv0_HeadTerm0_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[17]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[18]), HeadVarMap_15, ((MR_Box) (LambdaHeadVar__1_23)), &conv0_HeadTerm0_18);
    if (succeeded)
    {
      HeadTerm0_18 = ((MR_Word) (conv0_HeadTerm0_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *LambdaHeadVar__2_24 = HeadTerm0_18;
    else
    {
      MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 3))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *LambdaHeadVar__2_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHeadVar__1_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_19));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2221__1_1_p_0(
  MR_Word LambdaHeadVar__1_67)
{
  {
    MR_bool succeeded;
    MR_Word GE_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_67, (MR_Integer) 0))));

    succeeded = ((((MR_tag((MR_Word) GE_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GE_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_String MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__write_promise__2166__1_2_f_0(
  MR_Word VarSet_13,
  MR_Word HeadVar__2_45)
{
  {
    MR_String HeadVar__3_46;

    HeadVar__3_46 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, HeadVar__2_45);
    return HeadVar__3_46;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__intermod_write_pred_type_spec_pragmas__2090__1_1_f_0(
  MR_Word HeadVar__1_39)
{
  {
    MR_Word HeadVar__2_40;

    HeadVar__2_40 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), ((MR_Box) (HeadVar__1_39)));
    return HeadVar__2_40;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1809__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11)
{
  {
    MR_Word HeadVar__3_12;
    MR_Box conv0_HeadVar__3_12;

    conv0_HeadVar__3_12 = mercury__list__det_index1_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), TVars_4, HeadVar__2_11);
    HeadVar__3_12 = ((MR_Word) (conv0_HeadVar__3_12));
    return HeadVar__3_12;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__1664__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20)
{
  {
    MR_bool succeeded = (Arity_11 == HeadVar__2_20);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__1377__1_3_p_0(
  MR_Word LambdaHeadVar__1_60,
  MR_Word LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62)
{
  {
    MR_Word Var_63;

    Var_63 = mercury__term__dummy_context_init_0_f_0();
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (LambdaHeadVar__1_60)), ((MR_Box) (Var_63)), LambdaHeadVar__2_61, LambdaHeadVar__3_62);
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1065__1_1_f_0(
  MR_Word LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 0))));

    return LambdaHeadVar__2_55;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1052__1_1_f_0(
  MR_Word LambdaHeadVar__1_50)
{
  {
    MR_Word LambdaHeadVar__2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 2))));

    return LambdaHeadVar__2_51;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__922__1_2_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded = (HeadVar__1_44 == HeadVar__2_68);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_process_local_preds_0_0(
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
transform_hlds__intermod____Unify____maybe_process_local_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0(
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
transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0(
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
transform_hlds__intermod____Unify____maybe_first_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_collect_types_0_0(
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
transform_hlds__intermod____Unify____maybe_collect_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____may_opt_export_pred_0_0(
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
transform_hlds__intermod____Unify____may_opt_export_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
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
        MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_27 < Var_28);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_27 > Var_28);
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
          MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_29 < Var_30);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_29 > Var_30);
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
          {
            MR_Word SubResult4_15;

            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
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
              succeeded = (ArgX5_16 < ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX5_16 > ArgY5_17);
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

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_params_0_0(
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
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
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
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[20]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[20]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[22]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Integer Var_33 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_34 = (MR_Integer) (ArgY7_23);

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
  }
}

MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[19]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[20]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[20]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[21]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[22]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0(
  MR_Word Instance0_5,
  MR_Word * Instance_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_Word InstanceModule_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 0))));
    MR_Word Types_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 1))));
    MR_Word OriginalTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 2))));
    MR_Word InstanceStatus0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 3))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 4))));
    MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 5))));
    MR_Word Body_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 6))));
    MR_Word HLDSClassInterface_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 7))));
    MR_Word TVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 8))));
    MR_Word ConstraintProofs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 9))));
    MR_Word ToWrite_18;
    MR_Word OldStatus_26 = (MR_Word) (InstanceStatus0_11);

    switch (MR_tag((MR_Word) OldStatus_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ToWrite_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ToWrite_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            ToWrite_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            ToWrite_18 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_26, (MR_Integer) 0))));
          MR_Word Var_29;

          Var_29 = hlds__status__old_status_is_exported_1_f_0(Status_28);
          ToWrite_18 = mercury__bool__not_1_f_0(Var_29);
        }
        break;
      case (MR_Integer) 2:
        ToWrite_18 = (MR_Integer) 0;
        break;
    }
    switch (ToWrite_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Instance_6 = Instance0_5;
          *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
            *Instance_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstanceModule_8));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Types_9));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OriginalTypes_10));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Constraints_13));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Body_14));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (HLDSClassInterface_15));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TVarSet_16));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ConstraintProofs_17));
          }
          if ((HLDSClassInterface_15 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
          else
          {
            MR_Word ClassInterface_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSClassInterface_15, (MR_Integer) 0))));
            MR_Word PredIds_21;
            MR_Word PredIds0_32;
            MR_Word Preds0_42;
            MR_Word Preds_43;

            PredIds0_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[26]), ClassInterface_20);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_32, &PredIds_21);
            hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &Preds0_42);
            transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_21, Preds0_42, &Preds_43);
            hlds__hlds_module__module_info_set_preds_3_p_0(Preds_43, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Instance_6;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

    transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Instance_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_Instance_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word ClassId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InstanceList0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InstanceList_7;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_10;

    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[25]), InstanceList0_6, &InstanceList_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv2_STATE_VARIABLE_ModuleInfo_10);
    *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_10));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstanceList_7));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word ClassId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ClassDefn0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ClassDefn_7;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 3))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 5))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 6))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 7))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 8))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 9))));
    MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 10))) & (MR_Integer) 1);
    MR_Word OldStatus_49 = (MR_Word) (Var_13);

    switch (MR_tag((MR_Word) OldStatus_49)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_49)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ClassDefn_7 = ClassDefn0_6;
              *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
            }
            break;
          case (MR_Integer) 1:
            {
              ClassDefn_7 = ClassDefn0_6;
              *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
            }
            break;
          case (MR_Integer) 2:
            {
              ClassDefn_7 = ClassDefn0_6;
              *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
            }
            break;
          case (MR_Integer) 3:
            {
              ClassDefn_7 = ClassDefn0_6;
              *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word PredIds_126;
              MR_Word Var_128 = Var_24;
              MR_Word PredIds0_129;
              MR_Word Preds0_133;
              MR_Word Preds_134;

              {
                ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassDefn_7, 0) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 2) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 3) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 4) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 5) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 6) = ((MR_Box) (Var_23));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_24));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_27));
              }
              PredIds0_129 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[24]), Var_128);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_129, &PredIds_126);
              hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_133);
              transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_126, Preds0_133, &Preds_134);
              hlds__hlds_module__module_info_set_preds_3_p_0(Preds_134, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word PredIds_10;
              MR_Word Var_35 = Var_24;
              MR_Word PredIds0_55;
              MR_Word Preds0_65;
              MR_Word Preds_66;

              {
                ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassDefn_7, 0) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 2) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 3) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 4) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 5) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 6) = ((MR_Box) (Var_23));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_24));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_27));
              }
              PredIds0_55 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[20]), Var_35);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_55, &PredIds_10);
              hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_65);
              transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_10, Preds0_65, &Preds_66);
              hlds__hlds_module__module_info_set_preds_3_p_0(Preds_66, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
            }
            break;
          case (MR_Integer) 6:
            {
              ClassDefn_7 = ClassDefn0_6;
              *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word PredIds_74;
              MR_Word Var_76 = Var_24;
              MR_Word PredIds0_77;
              MR_Word Preds0_81;
              MR_Word Preds_82;

              {
                ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassDefn_7, 0) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 2) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 3) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 4) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 5) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 6) = ((MR_Box) (Var_23));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_24));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_27));
              }
              PredIds0_77 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[21]), Var_76);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_77, &PredIds_74);
              hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_81);
              transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_74, Preds0_81, &Preds_82);
              hlds__hlds_module__module_info_set_preds_3_p_0(Preds_82, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredIds_115;
              MR_Word Var_117 = Var_24;
              MR_Word PredIds0_118;
              MR_Word Preds0_122;
              MR_Word Preds_123;

              {
                ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassDefn_7, 0) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 1) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 2) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 3) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 4) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 5) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 6) = ((MR_Box) (Var_23));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_24));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(0), ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_27));
              }
              PredIds0_118 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[23]), Var_117);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_118, &PredIds_115);
              hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_122);
              transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_115, Preds0_122, &Preds_123);
              hlds__hlds_module__module_info_set_preds_3_p_0(Preds_123, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_49, (MR_Integer) 0))));
          MR_Word Var_52;
          MR_Word ToWrite_101;

          Var_52 = hlds__status__old_status_is_exported_1_f_0(Status_51);
          ToWrite_101 = mercury__bool__not_1_f_0(Var_52);
          switch (ToWrite_101) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ClassDefn_7 = ClassDefn0_6;
                *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredIds_83;
                MR_Word Var_85 = Var_24;
                MR_Word PredIds0_86;
                MR_Word Preds0_90;
                MR_Word Preds_91;

                {
                  ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 0) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 1) = ((MR_Box) (Var_18));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 2) = ((MR_Box) (Var_19));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 3) = ((MR_Box) (Var_20));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 4) = ((MR_Box) (Var_21));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 5) = ((MR_Box) (Var_22));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 6) = ((MR_Box) (Var_23));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_24));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
                  MR_hl_field(MR_mktag(0), ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_27));
                }
                PredIds0_86 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[22]), Var_85);
                mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_86, &PredIds_83);
                hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_90);
                transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_83, Preds0_90, &Preds_91);
                hlds__hlds_module__module_info_set_preds_3_p_0(Preds_91, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          ClassDefn_7 = ClassDefn0_6;
          *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassDefn_7));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_14;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__2657__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn0_7,
  MR_Word * TypeDefn_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10;
    MR_Word TypeStatus_19;
    MR_Word Name_20;
    MR_Word Var_24;
    MR_Word OldStatus_26;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &ModuleName_10);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_7, &TypeStatus_19);
    Name_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Name_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_20, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, Var_24);
      if (succeeded)
      {
        OldStatus_26 = (MR_Word) (TypeStatus_19);
        switch (MR_tag((MR_Word) OldStatus_26)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_26)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Status_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_26, (MR_Integer) 0))));
              MR_Word Var_29;
              MR_Word Var_68;

              Var_29 = hlds__status__old_status_is_exported_1_f_0(Status_28);
              Var_68 = mercury__bool__not_1_f_0(Var_29);
              succeeded = (Var_68 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word SpecialPredList_33;
      MR_Word SpecPredMaps_34;
      MR_Word PredIds_37;
      MR_Word Var_38;
      MR_Word Preds0_49;
      MR_Word Preds_50;

      hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 12U))), TypeDefn0_7, TypeDefn_8);
      hlds__special_pred__special_pred_list_1_p_0(&SpecialPredList_33);
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &SpecPredMaps_34);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[7]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TypeCtor_6));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (SpecPredMaps_34));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_38, SpecialPredList_33, &PredIds_37);
      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_49);
      transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_37, Preds0_49, &Preds_50);
      hlds__hlds_module__module_info_set_preds_3_p_0(Preds_50, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
    }
    else
    {
      *TypeDefn_8 = TypeDefn0_7;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_11_p_0(
  MR_Word Stream_12,
  MR_Word Procs_13,
  MR_Word PredOrFunc_14,
  MR_Word PragmaImpl_15,
  MR_Word Attributes_16,
  MR_Word Args_17,
  MR_Word ProgVarset0_18,
  MR_Word SymName_19,
  MR_Integer ProcId_20)
{
  {
    MR_Word ProcInfo_22;
    MR_Word MaybeArgModes_23;
    MR_Box conv0_ProcInfo_22;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (ProcId_20)), &conv0_ProcInfo_22);
    ProcInfo_22 = ((MR_Word) (conv0_ProcInfo_22));
    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_22, &MaybeArgModes_23);
    if ((MaybeArgModes_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/11", (MR_String) "no mode declaration");
        return;
      }
    else
    {
      MR_Word ArgModes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_23, (MR_Integer) 0))));
      MR_Word ProgVarset_25;
      MR_Word PragmaVars_26;
      MR_Word InstVarset_27;
      MR_Word FPInfo_28;

      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Args_17, ArgModes_24, ProgVarset0_18, &ProgVarset_25, &PragmaVars_26);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_22, &InstVarset_27);
      {
        FPInfo_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FPInfo_28, 0) = ((MR_Box) (Attributes_16));
        MR_hl_field(MR_mktag(0), FPInfo_28, 1) = ((MR_Box) (SymName_19));
        MR_hl_field(MR_mktag(0), FPInfo_28, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), FPInfo_28, 3) = ((MR_Box) (PragmaVars_26));
        MR_hl_field(MR_mktag(0), FPInfo_28, 4) = ((MR_Box) (ProgVarset_25));
        MR_hl_field(MR_mktag(0), FPInfo_28, 5) = ((MR_Box) (InstVarset_27));
        MR_hl_field(MR_mktag(0), FPInfo_28, 6) = ((MR_Box) (PragmaImpl_15));
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_5_p_0(Stream_12, (MR_Integer) 0, FPInfo_28);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * PragmaVars_9)
{
  if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *PragmaVars_9 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));

    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_7, (MR_Integer) 0))));
      MR_Word ModesTail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_7, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
      MR_Word MaybeNameAndMode_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
      MR_String Name_18;
      MR_Word PragmaVar_20;
      MR_Word PragmaVarsTail_21;
      MR_Word STATE_VARIABLE_VarSet_34_34;

      if ((MaybeNameAndMode_15 == (MR_Word) ((MR_Unsigned) 0U)))
        Name_18 = (MR_String) "_";
      else
      {
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndMode_15, (MR_Integer) 0))));

        Name_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
      }
      {
        PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PragmaVar_20, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), PragmaVar_20, 1) = ((MR_Box) (Name_18));
        MR_hl_field(MR_mktag(0), PragmaVar_20, 2) = ((MR_Box) (Mode_12));
        MR_hl_field(MR_mktag(0), PragmaVar_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_14, Name_18, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_34_34);
      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Var_37, ModesTail_13, STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_VarSet_27, &PragmaVarsTail_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PragmaVars_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaVar_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PragmaVarsTail_21));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_foreign_clause_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2221__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_12_p_0(
  MR_Word OutInfo_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word PredId_16,
  MR_Word SymName_17,
  MR_Word PredOrFunc_18,
  MR_Word VarSet_19,
  MR_Word TypeQual_20,
  MR_Word HeadVars_21,
  MR_Word Clause0_22)
{
  {
    MR_bool succeeded;
    MR_Word ApplicableProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_22, (MR_Integer) 0))));
    MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_22, (MR_Integer) 1))));
    MR_Word ImplLang_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_22, (MR_Integer) 2))));

    if ((ImplLang_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClauseHeadVars_29;
      MR_Word Clause_30;
      MR_Word Var_78;

      transform_hlds__intermod__strip_headvar_unifications_4_p_0(HeadVars_21, Clause0_22, &ClauseHeadVars_29, &Clause_30);
      Var_78 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      hlds__hlds_out__hlds_out_pred__write_clause_15_p_0(OutInfo_13, Stream_14, (MR_Integer) 0, ModuleInfo_15, PredId_16, PredOrFunc_18, Var_78, TypeQual_20, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, ClauseHeadVars_29, Clause_30);
    }
    else
    {
      MR_Word PredInfo_32;
      MR_Word Procs_33;
      MR_Word Attributes_49;
      MR_Word Args_52;
      MR_Word PragmaCode_55;
      MR_Word Var_97;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_16, &PredInfo_32);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_32, &Procs_33);
      Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_25, (MR_Integer) 0))));
      if (((((MR_tag((MR_Word) Var_97)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        Attributes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 1))));
        Args_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 4))));
        PragmaCode_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 7))));
        succeeded = MR_TRUE;
      }
      else
      if (((((MR_tag((MR_Word) Var_97)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 0)))) == (MR_Integer) 2))))
      {
        MR_Word TypeCtorInfo_89_89;
        MR_Word TypeInfo_98_98;
        MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 2))));
        MR_Word ForeignCodeGoal_46;
        MR_Word ForeignCodeGoalExpr_47;
        MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_97, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_68;
        MR_Word Var_95;

        succeeded = (Var_64 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_65 = (MR_Word) (&transform_hlds__intermod_scalar_common_2[19]);
          Var_68 = (MR_Word) ((MR_Unsigned) 0U);
          TypeCtorInfo_89_89 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
          mercury__list__filter_3_p_0(TypeCtorInfo_89_89, Var_65, Goals_34, &Var_66);
          succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ForeignCodeGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))));
            Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1))));
            TypeInfo_98_98 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[26]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_98_98, ((MR_Box) (Var_68)), ((MR_Box) (Var_95)));
            if (succeeded)
            {
              ForeignCodeGoalExpr_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCodeGoal_46, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) ForeignCodeGoalExpr_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Attributes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_47, (MR_Integer) 1))));
                Args_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_47, (MR_Integer) 4))));
                PragmaCode_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_47, (MR_Integer) 7))));
              }
            }
          }
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        switch (MR_tag((MR_Word) ApplicableProcIds_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ApplicableProcIds_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/12", (MR_String) "all_modes foreign_proc");
                  return;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/12", (MR_String) "unify modes foreign_proc");
                  return;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProcIds_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplicableProcIds_24, (MR_Integer) 0))));
              MR_Word Var_71;
              MR_Box conv0_STATE_VARIABLE_IO_62;

              {
                Var_71 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[3]));
                MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_12_p_0_2));
                MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Stream_14));
                MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (Procs_33));
                MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (PredOrFunc_18));
                MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (PragmaCode_55));
                MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (Attributes_49));
                MR_hl_field(MR_mktag(0), Var_71, 8) = ((MR_Box) (Args_52));
                MR_hl_field(MR_mktag(0), Var_71, 9) = ((MR_Box) (VarSet_19));
                MR_hl_field(MR_mktag(0), Var_71, 10) = ((MR_Box) (SymName_17));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, ProcIds_60, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_62);
            }
            break;
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/12", (MR_String) "did not find foreign_proc");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_24;

    transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2285__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
  }
}

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
  MR_Word HeadVars_5,
  MR_Word Clause0_6,
  MR_Word * HeadTerms_7,
  MR_Word * Clause_8)
{
  {
    MR_bool succeeded;
    MR_Word Goal0_9;
    MR_Word GoalInfo0_11;
    MR_Word Goals0_12;
    MR_Word HeadVarMap0_13;
    MR_Word Goals_14;
    MR_Word HeadVarMap_15;

    Goal0_9 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_6);
    GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_9, &Goals0_12);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[17]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[18]), &HeadVarMap0_13);
    succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(Goals0_12, HeadVars_5, (MR_Word) ((MR_Unsigned) 0U), &Goals_14, HeadVarMap0_13, &HeadVarMap_15);
    if (succeeded)
    {
      MR_Word Goal_20;
      MR_Word Var_22;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[6]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Clause0_6));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (HeadVarMap_15));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[17]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[18]), Var_22, HeadVars_5, HeadTerms_7);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_14, GoalInfo0_11, &Goal_20);
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 3))));
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *Clause_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      }
    }
    else
    {
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_5, HeadTerms_7);
      *Clause_8 = Clause0_6;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_HeadVarMap_0_5,
  MR_Word * STATE_VARIABLE_HeadVarMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__3_3, Goals_4);
      *STATE_VARIABLE_HeadVarMap_6 = STATE_VARIABLE_HeadVarMap_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RevGoals1_66;
      MR_Word STATE_VARIABLE_HeadVarMap_77_77;
      MR_Word LHSVar_19;
      MR_Word RHSTerm_27;
      MR_Word TypeInfo_80_80;
      MR_Word RHS_20;
      MR_Word Context_25;
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_HeadVarMap_0_5;

      succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
        RHS_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 1))));
        TypeInfo_80_80 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[17]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_80_80, ((MR_Box) (LHSVar_19)), HeadVars_2);
        if (succeeded)
        {
          mercury__term__context_init_1_p_0(&Context_25);
          if (((MR_tag((MR_Word) RHS_20)) == (MR_Integer) 1))
          {
            MR_Word ConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 0))));
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) ConsId_28)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));
                      MR_Word ArgTerms_38;

                      mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_30, &ArgTerms_38);
                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_35, ArgTerms_38, &RHSTerm_27);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word IntConst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));

                      RHSTerm_27 = parse_tree__parse_tree_to_term__int_const_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IntConst_31, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_75;

                      {
                        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_75, 1) = MR_box_float(Float_32);
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_75));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Char Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_72;
                      MR_String Var_73;

                      Var_73 = mercury__string__from_char_1_f_0(Char_33);
                      {
                        Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_72));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_String String_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));
                      MR_Word Var_70;

                      {
                        Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (String_34));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_70));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          }
          else
          if (((MR_tag((MR_Word) RHS_20)) == (MR_Integer) 0))
          {
            MR_Word RHSVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_20, (MR_Integer) 0))));

            {
              RHSTerm_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RHSTerm_27, 0) = ((MR_Box) (RHSVar_26));
              MR_hl_field(MR_mktag(1), RHSTerm_27, 1) = ((MR_Box) (Context_25));
            }
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
      if (succeeded)
      {
        succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[17]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[18]), ((MR_Box) (LHSVar_19)), ((MR_Box) (RHSTerm_27)), STATE_VARIABLE_HeadVarMap_0_5, &STATE_VARIABLE_HeadVarMap_77_77);
        if (succeeded)
        {
          RevGoals1_66 = HeadVar__3_3;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        {
          RevGoals1_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevGoals1_66, 0) = ((MR_Box) (Goal_13));
          MR_hl_field(MR_mktag(1), RevGoals1_66, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_HeadVarMap_77_77 = STATE_VARIABLE_HeadVarMap_0_5;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_14;
        next_value_of_HeadVar__3_3 = RevGoals1_66;
        next_value_of_STATE_VARIABLE_HeadVarMap_0_5 = STATE_VARIABLE_HeadVarMap_77_77;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_HeadVarMap_0_5 = next_value_of_STATE_VARIABLE_HeadVarMap_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_7_p_0(
  MR_Word OutInfo_8,
  MR_Word Stream_9,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstancesCord_0_29,
  MR_Word * STATE_VARIABLE_InstancesCord_30)
{
  {
    MR_Word ClassId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstanceDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 0))));
    MR_Word Types_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 1))));
    MR_Word OriginalTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 2))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 4))));
    MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 5))));
    MR_Word Body_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 6))));
    MR_Word TVarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 8))));
    MR_Word ClassName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 0))));
    MR_Word ItemInstance_26;
    MR_Word Item_27;
    MR_Word MercInfo_28;

    {
      ItemInstance_26 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemInstance_26, 0) = ((MR_Box) (ClassName_24));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 1) = ((MR_Box) (Types_15));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 2) = ((MR_Box) (OriginalTypes_16));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 3) = ((MR_Box) (Constraints_19));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 4) = ((MR_Box) (Body_20));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 5) = ((MR_Box) (TVarSet_22));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 6) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 7) = ((MR_Box) (Context_18));
      MR_hl_field(MR_mktag(0), ItemInstance_26, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (ItemInstance_26)), STATE_VARIABLE_InstancesCord_0_29, STATE_VARIABLE_InstancesCord_30);
    {
      Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Item_27, 1) = ((MR_Box) (ItemInstance_26));
    }
    MercInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_8, (MR_Integer) 4))));
    parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_28, Stream_9, Item_27);
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_12;

    conv0_HeadVar__3_12 = transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1809__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_12));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5)
{
  {
    MR_Word ParseTreeFunDep_6;
    MR_Word DomainArgPosns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSFunDep_5, (MR_Integer) 0))));
    MR_Word RangeArgPosns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSFunDep_5, (MR_Integer) 1))));
    MR_Word DomainTVars_9;
    MR_Word RangeTVars_10;
    MR_Word ArgTVarsSet_14;
    MR_Word Var_15;
    MR_Word ArgTVarsSet_24;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_14[4]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TVars_4));
    }
    ArgTVarsSet_14 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), Var_15, DomainArgPosns_7);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), ArgTVarsSet_14, &DomainTVars_9);
    ArgTVarsSet_24 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), Var_15, RangeArgPosns_8);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), ArgTVarsSet_24, &RangeTVars_10);
    {
      ParseTreeFunDep_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeFunDep_6, 0) = ((MR_Box) (DomainTVars_9));
      MR_hl_field(MR_mktag(0), ParseTreeFunDep_6, 1) = ((MR_Box) (RangeTVars_10));
    }
    return ParseTreeFunDep_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTreeFunDep_6;

    conv0_ParseTreeFunDep_6 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ParseTreeFunDep_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_class_11_p_0(
  MR_Word OutInfo_12,
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word ClassId_15,
  MR_Word ClassDefn_16,
  MR_Word STATE_VARIABLE_TypeClassesCord_0_38,
  MR_Word * STATE_VARIABLE_TypeClassesCord_39,
  MR_Word STATE_VARIABLE_First_0_40,
  MR_Word * STATE_VARIABLE_First_41)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassStatus_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 0))));
    MR_Word Constraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 1))));
    MR_Word HLDSFunDeps_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 2))));
    MR_Word TVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 4))));
    MR_Word Interface_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 6))));
    MR_Word TVarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 8))));
    MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_16, (MR_Integer) 9))));
    MR_Word QualifiedClassName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_15, (MR_Integer) 0))));
    MR_Word Var_60;
    MR_Word OldStatus_62;

    succeeded = ((MR_tag((MR_Word) QualifiedClassName_31)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), QualifiedClassName_31, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_14, Var_60);
      if (succeeded)
      {
        OldStatus_62 = (MR_Word) (TypeClassStatus_20);
        switch (MR_tag((MR_Word) OldStatus_62)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_62)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Status_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_62, (MR_Integer) 0))));
              MR_Word Var_65;
              MR_Word Var_91;

              Var_65 = hlds__status__old_status_is_exported_1_f_0(Status_64);
              Var_91 = mercury__bool__not_1_f_0(Var_65);
              succeeded = (Var_91 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word FunDeps_34;
      MR_Word ItemTypeClass_35;
      MR_Word Item_36;
      MR_Word MercInfo_37;
      MR_Word Var_47;

      switch (STATE_VARIABLE_First_0_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_3_p_0(Stream_13);
            *STATE_VARIABLE_First_41 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_41 = STATE_VARIABLE_First_0_40;
          break;
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_14[3]));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (TVars_24));
      }
      FunDeps_34 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), Var_47, HLDSFunDeps_22);
      {
        ItemTypeClass_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 0) = ((MR_Box) (QualifiedClassName_31));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 1) = ((MR_Box) (TVars_24));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 2) = ((MR_Box) (Constraints_21));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 3) = ((MR_Box) (FunDeps_34));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 4) = ((MR_Box) (Interface_26));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 5) = ((MR_Box) (TVarSet_28));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 6) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), ItemTypeClass_35, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_35)), STATE_VARIABLE_TypeClassesCord_0_38, STATE_VARIABLE_TypeClassesCord_39);
      {
        Item_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Item_36, 1) = ((MR_Box) (ItemTypeClass_35));
      }
      MercInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_12, (MR_Integer) 4))));
      parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_37, Stream_13, Item_36);
    }
    else
    {
      *STATE_VARIABLE_First_41 = STATE_VARIABLE_First_0_40;
      *STATE_VARIABLE_TypeClassesCord_39 = STATE_VARIABLE_TypeClassesCord_0_38;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_11_p_0(
  MR_Word OutInfo_12,
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word ModeCtor_15,
  MR_Word ModeDefn_16,
  MR_Word STATE_VARIABLE_ModeDefnsCord_0_32,
  MR_Word * STATE_VARIABLE_ModeDefnsCord_33,
  MR_Word STATE_VARIABLE_First_0_34,
  MR_Word * STATE_VARIABLE_First_35)
{
  {
    MR_bool succeeded;
    MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtor_15, (MR_Integer) 0))));
    MR_Word Varset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_16, (MR_Integer) 0))));
    MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_16, (MR_Integer) 1))));
    MR_Word Mode_24;
    MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_16, (MR_Integer) 3))));
    MR_Word ModeStatus_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_16, (MR_Integer) 4))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_16, (MR_Integer) 2))));
    MR_Word Var_51;
    MR_Word InstModeStatus_54;
    MR_Word InstModeExport_57;

    Mode_24 = (MR_Word) (Var_38);
    succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_20, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_14, Var_51);
      if (succeeded)
      {
        InstModeStatus_54 = (MR_Word) (ModeStatus_26);
        succeeded = ((MR_tag((MR_Word) InstModeStatus_54)) == (MR_Integer) 0);
        if (succeeded)
        {
          InstModeExport_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_54, (MR_Integer) 0))) & (MR_Integer) 3);
          switch (InstModeExport_57) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeAbstractModeDefn_28;
      MR_Word ItemModeDefn_29;
      MR_Word Item_30;
      MR_Word MercInfo_31;
      MR_Word Var_42;

      switch (STATE_VARIABLE_First_0_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_3_p_0(Stream_13);
            *STATE_VARIABLE_First_35 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_35 = STATE_VARIABLE_First_0_34;
          break;
      }
      Var_42 = (MR_Word) (Mode_24);
      {
        MaybeAbstractModeDefn_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_28, 0) = ((MR_Box) (Var_42));
      }
      {
        ItemModeDefn_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemModeDefn_29, 0) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(0), ItemModeDefn_29, 1) = ((MR_Box) (Args_23));
        MR_hl_field(MR_mktag(0), ItemModeDefn_29, 2) = ((MR_Box) (MaybeAbstractModeDefn_28));
        MR_hl_field(MR_mktag(0), ItemModeDefn_29, 3) = ((MR_Box) (Varset_22));
        MR_hl_field(MR_mktag(0), ItemModeDefn_29, 4) = ((MR_Box) (Context_25));
        MR_hl_field(MR_mktag(0), ItemModeDefn_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), ((MR_Box) (ItemModeDefn_29)), STATE_VARIABLE_ModeDefnsCord_0_32, STATE_VARIABLE_ModeDefnsCord_33);
      {
        Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_30, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Item_30, 1) = ((MR_Box) (ItemModeDefn_29));
      }
      MercInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_12, (MR_Integer) 4))));
      parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_31, Stream_13, Item_30);
    }
    else
    {
      *STATE_VARIABLE_First_35 = STATE_VARIABLE_First_0_34;
      *STATE_VARIABLE_ModeDefnsCord_33 = STATE_VARIABLE_ModeDefnsCord_0_32;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_11_p_0(
  MR_Word OutInfo_12,
  MR_Word Stream_13,
  MR_Word ModuleName_14,
  MR_Word InstCtor_15,
  MR_Word InstDefn_16,
  MR_Word STATE_VARIABLE_InstDefnsCord_0_35,
  MR_Word * STATE_VARIABLE_InstDefnsCord_36,
  MR_Word STATE_VARIABLE_First_0_37,
  MR_Word * STATE_VARIABLE_First_38)
{
  {
    MR_bool succeeded;
    MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_15, (MR_Integer) 0))));
    MR_Word Varset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_16, (MR_Integer) 0))));
    MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_16, (MR_Integer) 1))));
    MR_Word Inst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_16, (MR_Integer) 2))));
    MR_Word IFTC_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_16, (MR_Integer) 3))));
    MR_Word Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_16, (MR_Integer) 4))));
    MR_Word InstStatus_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_16, (MR_Integer) 5))));
    MR_Word Var_53;
    MR_Word InstModeStatus_56;
    MR_Word InstModeExport_59;

    succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_20, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_14, Var_53);
      if (succeeded)
      {
        InstModeStatus_56 = (MR_Word) (InstStatus_27);
        succeeded = ((MR_tag((MR_Word) InstModeStatus_56)) == (MR_Integer) 0);
        if (succeeded)
        {
          InstModeExport_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_56, (MR_Integer) 0))) & (MR_Integer) 3);
          switch (InstModeExport_59) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeForTypeCtor_30;
      MR_Word ItemInstDefn_32;
      MR_Word Item_33;
      MR_Word MercInfo_34;
      MR_Word Var_44;

      switch (STATE_VARIABLE_First_0_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_3_p_0(Stream_13);
            *STATE_VARIABLE_First_38 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_38 = STATE_VARIABLE_First_0_37;
          break;
      }
      switch (MR_tag((MR_Word) IFTC_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeForTypeCtor_30 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForTypeCtor_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IFTC_25, (MR_Integer) 0))));

            {
              MaybeForTypeCtor_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeForTypeCtor_30, 0) = ((MR_Box) (ForTypeCtor_29));
            }
          }
          break;
        case (MR_Integer) 2:
          MaybeForTypeCtor_30 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Inst_24));
      }
      {
        ItemInstDefn_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 0) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 1) = ((MR_Box) (Args_23));
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 2) = ((MR_Box) (MaybeForTypeCtor_30));
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 4) = ((MR_Box) (Varset_22));
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 5) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(0), ItemInstDefn_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), ((MR_Box) (ItemInstDefn_32)), STATE_VARIABLE_InstDefnsCord_0_35, STATE_VARIABLE_InstDefnsCord_36);
      {
        Item_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Item_33, 1) = ((MR_Box) (ItemInstDefn_32));
      }
      MercInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_12, (MR_Integer) 4))));
      parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_34, Stream_13, Item_33);
    }
    else
    {
      *STATE_VARIABLE_First_38 = STATE_VARIABLE_First_0_37;
      *STATE_VARIABLE_InstDefnsCord_36 = STATE_VARIABLE_InstDefnsCord_0_35;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__1664__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(
  MR_Word CtorRepn_4,
  MR_Word STATE_VARIABLE_Values_0_15,
  MR_Word * STATE_VARIABLE_Values_16)
{
  {
    MR_bool succeeded;
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_4, (MR_Integer) 2))));
    MR_Word Tag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_4, (MR_Integer) 3))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_4, (MR_Integer) 5))));
    MR_Word Var_17;
    MR_String ForeignTag_14;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Arity_11));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/3", (MR_String) "Arity != 0");
    succeeded = ((((MR_tag((MR_Word) Tag_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ForeignTag_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 2))));
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (SymName_8));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ForeignTag_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Values_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Values_0_15));
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/3", (MR_String) "expected foreign tag");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Values_16;

    transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Values_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Values_16));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_9_p_0(
  MR_Word OutInfo_10,
  MR_Word Stream_11,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_92,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_93,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_94,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_95)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypeDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word VarSet_17;
    MR_Word Args_18;
    MR_Word Body_19;
    MR_Word Context_20;
    MR_Word Name_21;
    MR_Word TypeBody_33;
    MR_Word MainItemTypeDefn_39;
    MR_Word MainItem_40;
    MR_Word MercInfo_41;
    MR_Word STATE_VARIABLE_TypeDefnsCord_103_103;
    MR_Word MaybeC_48;
    MR_Word MaybeJava_49;
    MR_Word MaybeCSharp_50;
    MR_Word ForeignTypeBody_42;
    MR_Word CtorRepns_78;
    MR_Word Lang_83;
    MR_Word MaybeRepnB_75;
    MR_Word RepnB_77;
    MR_Word DuTypeKind_81;
    MR_Word Var_121;

    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_13, &VarSet_17);
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_13, &Args_18);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_13, &Body_19);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_13, &Context_20);
    Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) Body_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_23 = (MR_Word) ((MR_Word) (Body_19));
          MR_Word Ctors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_23, (MR_Integer) 0))));
          MR_Word MaybeSubType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_23, (MR_Integer) 1))));
          MR_Word MaybeCanon_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_23, (MR_Integer) 2))));
          MR_Word MaybeRepnA_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_23, (MR_Integer) 3))));
          MR_Word MaybeDirectArgCtors_30;

          if ((MaybeRepnA_27 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_type\'/9", (MR_String) "MaybeRepnA = no");
              return;
            }
          else
          {
            MR_Word RepnA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnA_27, (MR_Integer) 0))));

            MaybeDirectArgCtors_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnA_29, (MR_Integer) 4))));
          }
          if ((MaybeSubType_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word DetailsDu_34;

            {
              DetailsDu_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DetailsDu_34, 0) = ((MR_Box) (Ctors_24));
              MR_hl_field(MR_mktag(0), DetailsDu_34, 1) = ((MR_Box) (MaybeCanon_26));
              MR_hl_field(MR_mktag(0), DetailsDu_34, 2) = ((MR_Box) (MaybeDirectArgCtors_30));
            }
            TypeBody_33 = (MR_Word) ((MR_Word) (DetailsDu_34));
          }
          else
          {
            MR_Word SuperType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubType_25, (MR_Integer) 0))));
            MR_Word DetailsSub_32;

            {
              DetailsSub_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DetailsSub_32, 0) = ((MR_Box) (SuperType_31));
              MR_hl_field(MR_mktag(0), DetailsSub_32, 1) = ((MR_Box) (Ctors_24));
            }
            TypeBody_33 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSub_32)));
          }
        }
        break;
      case (MR_Integer) 1:
        TypeBody_33 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[25]));
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Body_19, (MR_Integer) 0))));
          MR_Word Var_99 = (MR_Word) (EqvType_35);

          {
            TypeBody_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypeBody_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), TypeBody_33, 1) = ((MR_Box) (Var_99));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body_19, (MR_Integer) 1))));

              TypeBody_33 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (DetailsSolver_38)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Details_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body_19, (MR_Integer) 1))));

              {
                TypeBody_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeBody_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), TypeBody_33, 1) = ((MR_Box) (Details_36));
              }
            }
            break;
        }
        break;
    }
    {
      MainItemTypeDefn_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_39, 0) = ((MR_Box) (Name_21));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_39, 1) = ((MR_Box) (Args_18));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_39, 2) = ((MR_Box) (TypeBody_33));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_39, 3) = ((MR_Box) (VarSet_17));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_39, 4) = ((MR_Box) (Context_20));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), ((MR_Box) (MainItemTypeDefn_39)), STATE_VARIABLE_TypeDefnsCord_0_92, &STATE_VARIABLE_TypeDefnsCord_103_103);
    {
      MainItem_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MainItem_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), MainItem_40, 1) = ((MR_Box) (MainItemTypeDefn_39));
    }
    MercInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_10, (MR_Integer) 4))));
    parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_41, Stream_11, MainItem_40);
    if (((MR_tag((MR_Word) Body_19)) == (MR_Integer) 0))
    {
      MR_Word MaybeForeignTypeBody_47;
      MR_Word Var_105 = (MR_Word) ((MR_Word) (Body_19));

      MaybeForeignTypeBody_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 4))));
      succeeded = (MaybeForeignTypeBody_47 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ForeignTypeBody_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBody_47, (MR_Integer) 0))));
    }
    else
    if (((MR_tag((MR_Word) Body_19)) == (MR_Integer) 1))
    {
      ForeignTypeBody_42 = (MR_Word) (MR_body((MR_Word) (Body_19), (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MaybeC_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_42, (MR_Integer) 0))));
      MaybeJava_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_42, (MR_Integer) 1))));
      MaybeCSharp_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_42, (MR_Integer) 2))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_TypeDefnsCord_109_109;
      MR_Word STATE_VARIABLE_TypeDefnsCord_114_114;

      if ((MaybeC_48 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_TypeDefnsCord_109_109 = STATE_VARIABLE_TypeDefnsCord_103_103;
      else
      {
        MR_Word DataC_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_48, (MR_Integer) 0))));
        MR_Word CForeignType_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataC_51, (MR_Integer) 0))));
        MR_Word CMaybeUserEqComp_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataC_51, (MR_Integer) 1))));
        MR_Word AssertionsC_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataC_51, (MR_Integer) 2))));
        MR_Word CDetailsForeign_55;
        MR_Word CItemTypeDefn_56;
        MR_Word CItem_57;
        MR_Word Var_106;
        MR_Word Var_107;

        {
          Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (CForeignType_52));
        }
        {
          CDetailsForeign_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CDetailsForeign_55, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), CDetailsForeign_55, 1) = ((MR_Box) (CMaybeUserEqComp_53));
          MR_hl_field(MR_mktag(0), CDetailsForeign_55, 2) = ((MR_Box) (AssertionsC_54));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (CDetailsForeign_55));
        }
        {
          CItemTypeDefn_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CItemTypeDefn_56, 0) = ((MR_Box) (Name_21));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_56, 1) = ((MR_Box) (Args_18));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_56, 2) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_56, 3) = ((MR_Box) (VarSet_17));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_56, 4) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_56, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), ((MR_Box) (CItemTypeDefn_56)), STATE_VARIABLE_TypeDefnsCord_103_103, &STATE_VARIABLE_TypeDefnsCord_109_109);
        {
          CItem_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CItem_57, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), CItem_57, 1) = ((MR_Box) (CItemTypeDefn_56));
        }
        parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_41, Stream_11, CItem_57);
      }
      if ((MaybeJava_49 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_TypeDefnsCord_114_114 = STATE_VARIABLE_TypeDefnsCord_109_109;
      else
      {
        MR_Word DataJava_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeJava_49, (MR_Integer) 0))));
        MR_Word JavaForeignType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataJava_58, (MR_Integer) 0))));
        MR_Word JavaMaybeUserEqComp_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataJava_58, (MR_Integer) 1))));
        MR_Word AssertionsJava_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataJava_58, (MR_Integer) 2))));
        MR_Word JavaDetailsForeign_62;
        MR_Word JavaItemTypeDefn_63;
        MR_Word JavaItem_64;
        MR_Word Var_111;
        MR_Word Var_112;

        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (JavaForeignType_59));
        }
        {
          JavaDetailsForeign_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_62, 0) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_62, 1) = ((MR_Box) (JavaMaybeUserEqComp_60));
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_62, 2) = ((MR_Box) (AssertionsJava_61));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (JavaDetailsForeign_62));
        }
        {
          JavaItemTypeDefn_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_63, 0) = ((MR_Box) (Name_21));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_63, 1) = ((MR_Box) (Args_18));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_63, 2) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_63, 3) = ((MR_Box) (VarSet_17));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_63, 4) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_63, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), ((MR_Box) (JavaItemTypeDefn_63)), STATE_VARIABLE_TypeDefnsCord_109_109, &STATE_VARIABLE_TypeDefnsCord_114_114);
        {
          JavaItem_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), JavaItem_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), JavaItem_64, 1) = ((MR_Box) (JavaItemTypeDefn_63));
        }
        parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_41, Stream_11, JavaItem_64);
      }
      if ((MaybeCSharp_50 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_TypeDefnsCord_93 = STATE_VARIABLE_TypeDefnsCord_114_114;
      else
      {
        MR_Word DataCSharp_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCSharp_50, (MR_Integer) 0))));
        MR_Word CSharpForeignType_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataCSharp_65, (MR_Integer) 0))));
        MR_Word CSharpMaybeUserEqComp_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataCSharp_65, (MR_Integer) 1))));
        MR_Word AssertionsCSharp_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataCSharp_65, (MR_Integer) 2))));
        MR_Word CSharpDetailsForeign_69;
        MR_Word CSharpItemTypeDefn_70;
        MR_Word CSharpItem_71;
        MR_Word Var_116;
        MR_Word Var_117;

        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_116, 0) = ((MR_Box) (CSharpForeignType_66));
        }
        {
          CSharpDetailsForeign_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_69, 0) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_69, 1) = ((MR_Box) (CSharpMaybeUserEqComp_67));
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_69, 2) = ((MR_Box) (AssertionsCSharp_68));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (CSharpDetailsForeign_69));
        }
        {
          CSharpItemTypeDefn_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_70, 0) = ((MR_Box) (Name_21));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_70, 1) = ((MR_Box) (Args_18));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_70, 2) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_70, 3) = ((MR_Box) (VarSet_17));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_70, 4) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_70, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), ((MR_Box) (CSharpItemTypeDefn_70)), STATE_VARIABLE_TypeDefnsCord_114_114, STATE_VARIABLE_TypeDefnsCord_93);
        {
          CSharpItem_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CSharpItem_71, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), CSharpItem_71, 1) = ((MR_Box) (CSharpItemTypeDefn_70));
        }
        parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_41, Stream_11, CSharpItem_71);
      }
    }
    else
      *STATE_VARIABLE_TypeDefnsCord_93 = STATE_VARIABLE_TypeDefnsCord_103_103;
    succeeded = ((MR_tag((MR_Word) Body_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_121 = (MR_Word) ((MR_Word) (Body_19));
      MaybeRepnB_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_121, (MR_Integer) 3))));
      succeeded = (MaybeRepnB_75 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RepnB_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnB_75, (MR_Integer) 0))));
        CtorRepns_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnB_77, (MR_Integer) 0))));
        DuTypeKind_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnB_77, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) DuTypeKind_81)) == (MR_Integer) 1);
        if (succeeded)
          Lang_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), DuTypeKind_81, (MR_Integer) 0))) & (MR_Integer) 3);
      }
    }
    if (succeeded)
    {
      MR_Word RevForeignEnumVals_84;
      MR_Word ForeignEnumVals_85;
      MR_Box conv1_RevForeignEnumVals_84;

      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[9]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[18]), CtorRepns_78, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevForeignEnumVals_84);
      RevForeignEnumVals_84 = ((MR_Word) (conv1_RevForeignEnumVals_84));
      mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[3]), RevForeignEnumVals_84, &ForeignEnumVals_85);
      if ((ForeignEnumVals_85 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_ForeignEnumsCord_95 = STATE_VARIABLE_ForeignEnumsCord_0_94;
      else
      {
        MR_Word HeadForeignEnumVal_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignEnumVals_85, (MR_Integer) 0))));
        MR_Word TailForeignEnumVals_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignEnumVals_85, (MR_Integer) 1))));
        MR_Word OoMForeignEnumVals_88;
        MR_Word ForeignEnum_89;
        MR_Word ItemForeignEnum_90;
        MR_Word ForeignItem_91;
        MR_Word Var_124;

        {
          OoMForeignEnumVals_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMForeignEnumVals_88, 0) = ((MR_Box) (HeadForeignEnumVal_86));
          MR_hl_field(MR_mktag(0), OoMForeignEnumVals_88, 1) = ((MR_Box) (TailForeignEnumVals_87));
        }
        Var_124 = mercury__term__context_init_0_f_0();
        {
          ForeignEnum_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 0) = (MR_Box) ((MR_Unsigned) (Lang_83));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 1) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 2) = ((MR_Box) (OoMForeignEnumVals_88));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 3) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ForeignEnum_89)), STATE_VARIABLE_ForeignEnumsCord_0_94, STATE_VARIABLE_ForeignEnumsCord_95);
        {
          ItemForeignEnum_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 0) = (MR_Box) ((MR_Unsigned) (Lang_83));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 1) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 2) = ((MR_Box) (OoMForeignEnumVals_88));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 3) = ((MR_Box) (Context_20));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ForeignItem_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ForeignItem_91, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ForeignItem_91, 1) = ((MR_Box) (ItemForeignEnum_90));
        }
        parse_tree__parse_tree_out__mercury_output_item_5_p_0(MercInfo_41, Stream_11, ForeignItem_91);
      }
    }
    else
      *STATE_VARIABLE_ForeignEnumsCord_95 = STATE_VARIABLE_ForeignEnumsCord_0_94;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- use_module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_4_p_0(ModuleName_6, Stream_5);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ".\n");
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_30,
  MR_Word * STATE_VARIABLE_IntermodInfo_31)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 0))));
    MR_Word ModuleName_9;
    MR_Word TypeStatus_56;
    MR_Word Name_57;
    MR_Word Var_61;
    MR_Word OldStatus_63;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_9);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_6, &TypeStatus_56);
    Name_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Name_57)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_57, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_9, Var_61);
      if (succeeded)
      {
        OldStatus_63 = (MR_Word) (TypeStatus_56);
        switch (MR_tag((MR_Word) OldStatus_63)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_63)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Status_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_63, (MR_Integer) 0))));
              MR_Word Var_66;
              MR_Word Var_115;

              Var_66 = hlds__status__old_status_is_exported_1_f_0(Status_65);
              Var_115 = mercury__bool__not_1_f_0(Var_66);
              succeeded = (Var_115 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeBody0_10;
      MR_Word TypeDefn_25;
      MR_Word Types0_29;
      MR_Word STATE_VARIABLE_IntermodInfo_36_36;
      MR_Word Var_38;
      MR_Word Var_40;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_6, &TypeBody0_10);
      switch (MR_tag((MR_Word) TypeBody0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu0_11 = (MR_Word) ((MR_Word) (TypeBody0_10));
            MR_Word Ctors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu0_11, (MR_Integer) 0))));
            MR_Word MaybeSuperType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu0_11, (MR_Integer) 1))));
            MR_Word MaybeUserEqComp0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu0_11, (MR_Integer) 2))));
            MR_Word MaybeRepn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu0_11, (MR_Integer) 3))));
            MR_Word MaybeForeign0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu0_11, (MR_Integer) 4))));
            MR_Word Globals_17;
            MR_Word Target_18;
            MR_Word MaybeForeign_21;
            MR_Word MaybeUserEqComp_22;
            MR_Word TypeBodyDu_23;
            MR_Word TypeBody_24;
            MR_Word ForeignTypeBody0_19;
            MR_Word Var_34;
            MR_Word Var_44;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_17);
            libs__globals__get_target_2_p_0(Globals_17, &Target_18);
            succeeded = (MaybeForeign0_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ForeignTypeBody0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeign0_16, (MR_Integer) 0))));
              Var_34 = (MR_Integer) 1;
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_18, ForeignTypeBody0_19, &Var_44);
              succeeded = (Var_34 == Var_44);
            }
            if (succeeded)
            {
              MR_Word ForeignTypeBody_20;
              MR_Word STATE_VARIABLE_IntermodInfo_35_35;
              MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 0))));
              MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 1))));
              MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 2))));
              MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 3))));
              MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 4))));
              MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 5))));

              {
                STATE_VARIABLE_IntermodInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 0) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 1) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 2) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 3) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 4) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 5) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_35_35, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_19, &ForeignTypeBody_20, STATE_VARIABLE_IntermodInfo_35_35, &STATE_VARIABLE_IntermodInfo_36_36);
              {
                MaybeForeign_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeForeign_21, 0) = ((MR_Box) (ForeignTypeBody_20));
              }
              MaybeUserEqComp_22 = MaybeUserEqComp0_14;
            }
            else
            {
              transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_14, &MaybeUserEqComp_22, STATE_VARIABLE_IntermodInfo_0_30, &STATE_VARIABLE_IntermodInfo_36_36);
              MaybeForeign_21 = MaybeForeign0_16;
            }
            {
              TypeBodyDu_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeBodyDu_23, 0) = ((MR_Box) (Ctors_12));
              MR_hl_field(MR_mktag(0), TypeBodyDu_23, 1) = ((MR_Box) (MaybeSuperType_13));
              MR_hl_field(MR_mktag(0), TypeBodyDu_23, 2) = ((MR_Box) (MaybeUserEqComp_22));
              MR_hl_field(MR_mktag(0), TypeBodyDu_23, 3) = ((MR_Box) (MaybeRepn_15));
              MR_hl_field(MR_mktag(0), TypeBodyDu_23, 4) = ((MR_Box) (MaybeForeign_21));
            }
            TypeBody_24 = (MR_Word) ((MR_Word) (TypeBodyDu_23));
            hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_24, TypeDefn0_6, &TypeDefn_25);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_IntermodInfo_32_32;
            MR_Word ForeignTypeBody0_41 = (MR_Word) (MR_body((MR_Word) (TypeBody0_10), (MR_Integer) 1));
            MR_Word ForeignTypeBody_42;
            MR_Word TypeBody_43;
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 0))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 1))));
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 2))));
            MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 3))));
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 4))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_30, (MR_Integer) 5))));

            {
              STATE_VARIABLE_IntermodInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 0) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 1) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 2) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 3) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 4) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 5) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_41, &ForeignTypeBody_42, STATE_VARIABLE_IntermodInfo_32_32, &STATE_VARIABLE_IntermodInfo_36_36);
            TypeBody_43 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ForeignTypeBody_42)));
            hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_43, TypeDefn0_6, &TypeDefn_25);
          }
          break;
        case (MR_Integer) 2:
          {
            TypeDefn_25 = TypeDefn0_6;
            STATE_VARIABLE_IntermodInfo_36_36 = STATE_VARIABLE_IntermodInfo_0_30;
          }
          break;
        case (MR_Integer) 3:
          {
            TypeDefn_25 = TypeDefn0_6;
            STATE_VARIABLE_IntermodInfo_36_36 = STATE_VARIABLE_IntermodInfo_0_30;
          }
          break;
      }
      Types0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, (MR_Integer) 5))));
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (TypeCtor_5));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (TypeDefn_25));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Types0_29));
      }
      transform_hlds__intermod__intermod_info_set_types_3_p_0(Var_38, STATE_VARIABLE_IntermodInfo_36_36, STATE_VARIABLE_IntermodInfo_31);
    }
    else
      *STATE_VARIABLE_IntermodInfo_31 = STATE_VARIABLE_IntermodInfo_0_30;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_15));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeCanonical0_9,
  MR_Word * MaybeCanonical_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20)
{
  {
    MR_bool succeeded;

    if ((MaybeCanonical0_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeCanonical_10 = MaybeCanonical0_9;
      *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
    }
    else
    {
      MR_Word NonCanonical0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanonical0_9, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) NonCanonical0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *MaybeCanonical_10 = MaybeCanonical0_9;
            *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical0_12, (MR_Integer) 0))));
            MR_Word Cmp0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical0_12, (MR_Integer) 1))));
            MR_Word Uni_16;
            MR_Word Cmp_17;
            MR_Word NonCanonical_18;
            MR_Word STATE_VARIABLE_IntermodInfo_26_26;

            transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_14, &Uni_16, STATE_VARIABLE_IntermodInfo_0_19, &STATE_VARIABLE_IntermodInfo_26_26);
            transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 2, TypeCtor_8, Cmp0_15, &Cmp_17, STATE_VARIABLE_IntermodInfo_26_26, STATE_VARIABLE_IntermodInfo_20);
            {
              NonCanonical_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NonCanonical_18, 0) = ((MR_Box) (Uni_16));
              MR_hl_field(MR_mktag(1), NonCanonical_18, 1) = ((MR_Box) (Cmp_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCanonical_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonCanonical_18));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uni0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical0_12, (MR_Integer) 0))));
            MR_Word Uni_30;
            MR_Word NonCanonical_31;

            transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_29, &Uni_30, STATE_VARIABLE_IntermodInfo_0_19, STATE_VARIABLE_IntermodInfo_20);
            {
              NonCanonical_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), NonCanonical_31, 0) = ((MR_Box) (Uni_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCanonical_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonCanonical_31));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanonical0_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cmp0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanonical0_12, (MR_Integer) 1))));
                MR_Word Cmp_33;
                MR_Word NonCanonical_34;
                MR_Word SpecialPredMaps_43;
                MR_Word SpecialPredId_44;
                MR_Word SpecialPredInfo_45;
                MR_Word TVarSet_46;
                MR_Word ExistQVars_47;
                MR_Word ArgTypes_48;
                MR_Word ExternalTypeParams_49;
                MR_Word Markers0_50;
                MR_Word Markers_51;
                MR_Word Context_52;
                MR_Word UserEqPredId_53;
                MR_Word Var_63;

                hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_43);
                hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_43, (MR_Integer) 2, TypeCtor_8, &SpecialPredId_44);
                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_44, &SpecialPredInfo_45);
                hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_45, &TVarSet_46, &ExistQVars_47, &ArgTypes_48);
                hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_45, &ExternalTypeParams_49);
                hlds__hlds_pred__init_markers_1_p_0(&Markers0_50);
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_50, &Markers_51);
                hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_45, &Context_52);
                hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_7, Markers_51, TVarSet_46, ExistQVars_47, ArgTypes_48, ExternalTypeParams_49, Context_52, Cmp0_32, &Cmp_33, &UserEqPredId_53);
                Var_63 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(UserEqPredId_53, Var_63);
                if (succeeded)
                  *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
                else
                {
                  MR_Word Var_65;

                  transform_hlds__intermod__intermod_do_add_pred_4_p_0(UserEqPredId_53, &Var_65, STATE_VARIABLE_IntermodInfo_0_19, STATE_VARIABLE_IntermodInfo_20);
                }
                {
                  NonCanonical_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NonCanonical_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), NonCanonical_34, 1) = ((MR_Box) (Cmp_33));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeCanonical_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonCanonical_34));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *MaybeCanonical_10 = MaybeCanonical0_9;
                *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ForeignTypeBody0_9,
  MR_Word * ForeignTypeBody_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_20,
  MR_Word * STATE_VARIABLE_IntermodInfo_21)
{
  {
    MR_Word MaybeC0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 0))));
    MR_Word MaybeJava0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 1))));
    MR_Word MaybeCSharp0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 2))));
    MR_Word Globals_15;
    MR_Word Target_16;
    MR_Word MaybeC_17;
    MR_Word MaybeCSharp_18;
    MR_Word MaybeJava_19;
    MR_Word STATE_VARIABLE_IntermodInfo_22_22;
    MR_Word STATE_VARIABLE_IntermodInfo_23_23;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_15);
    libs__globals__get_target_2_p_0(Globals_15, &Target_16);
    switch (Target_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeC0_12, &MaybeC_17, STATE_VARIABLE_IntermodInfo_0_20, &STATE_VARIABLE_IntermodInfo_22_22);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MaybeC_17 = MaybeC0_12;
          STATE_VARIABLE_IntermodInfo_22_22 = STATE_VARIABLE_IntermodInfo_0_20;
        }
        break;
    }
    switch (Target_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MaybeCSharp_18 = MaybeCSharp0_14;
          STATE_VARIABLE_IntermodInfo_23_23 = STATE_VARIABLE_IntermodInfo_22_22;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeCSharp0_14, &MaybeCSharp_18, STATE_VARIABLE_IntermodInfo_22_22, &STATE_VARIABLE_IntermodInfo_23_23);
        break;
    }
    switch (Target_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MaybeJava_19 = MaybeJava0_13;
          *STATE_VARIABLE_IntermodInfo_21 = STATE_VARIABLE_IntermodInfo_23_23;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeJava0_13, &MaybeJava_19, STATE_VARIABLE_IntermodInfo_23_23, STATE_VARIABLE_IntermodInfo_21);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignTypeBody_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeC_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeJava_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeCSharp_18));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeForeignTypeLangData0_9,
  MR_Word * MaybeForeignTypeLangData_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_16,
  MR_Word * STATE_VARIABLE_IntermodInfo_17)
{
  {
    MR_bool succeeded;

    if ((MaybeForeignTypeLangData0_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeForeignTypeLangData_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
    }
    else
    {
      MR_Box Body_12;
      MR_Word MaybeUserEqComp0_13;
      MR_Word Assertions_14;
      MR_Word MaybeUserEqComp_15;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeLangData0_9, (MR_Integer) 0))));
      MR_Word Var_20;

      Body_12 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0));
      MaybeUserEqComp0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      Assertions_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2))));
      if ((MaybeUserEqComp0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeUserEqComp_15 = MaybeUserEqComp0_13;
        *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
      }
      else
      {
        MR_Word NonCanonical0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserEqComp0_13, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) NonCanonical0_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MaybeUserEqComp_15 = MaybeUserEqComp0_13;
              *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uni0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical0_29, (MR_Integer) 0))));
              MR_Word Cmp0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical0_29, (MR_Integer) 1))));
              MR_Word Uni_33;
              MR_Word Cmp_34;
              MR_Word NonCanonical_35;
              MR_Word STATE_VARIABLE_IntermodInfo_26_41;

              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_31, &Uni_33, STATE_VARIABLE_IntermodInfo_0_16, &STATE_VARIABLE_IntermodInfo_26_41);
              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 2, TypeCtor_8, Cmp0_32, &Cmp_34, STATE_VARIABLE_IntermodInfo_26_41, STATE_VARIABLE_IntermodInfo_17);
              {
                NonCanonical_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NonCanonical_35, 0) = ((MR_Box) (Uni_33));
                MR_hl_field(MR_mktag(1), NonCanonical_35, 1) = ((MR_Box) (Cmp_34));
              }
              {
                MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (NonCanonical_35));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uni0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical0_29, (MR_Integer) 0))));
              MR_Word Uni_45;
              MR_Word NonCanonical_46;

              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_44, &Uni_45, STATE_VARIABLE_IntermodInfo_0_16, STATE_VARIABLE_IntermodInfo_17);
              {
                NonCanonical_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), NonCanonical_46, 0) = ((MR_Box) (Uni_45));
              }
              {
                MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (NonCanonical_46));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanonical0_29, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Cmp0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanonical0_29, (MR_Integer) 1))));
                  MR_Word Cmp_48;
                  MR_Word NonCanonical_49;
                  MR_Word SpecialPredMaps_58;
                  MR_Word SpecialPredId_59;
                  MR_Word SpecialPredInfo_60;
                  MR_Word TVarSet_61;
                  MR_Word ExistQVars_62;
                  MR_Word ArgTypes_63;
                  MR_Word ExternalTypeParams_64;
                  MR_Word Markers0_65;
                  MR_Word Markers_66;
                  MR_Word Context_67;
                  MR_Word UserEqPredId_68;
                  MR_Word Var_78;

                  hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_58);
                  hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_58, (MR_Integer) 2, TypeCtor_8, &SpecialPredId_59);
                  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_59, &SpecialPredInfo_60);
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_60, &TVarSet_61, &ExistQVars_62, &ArgTypes_63);
                  hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_60, &ExternalTypeParams_64);
                  hlds__hlds_pred__init_markers_1_p_0(&Markers0_65);
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_65, &Markers_66);
                  hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_60, &Context_67);
                  hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_7, Markers_66, TVarSet_61, ExistQVars_62, ArgTypes_63, ExternalTypeParams_64, Context_67, Cmp0_47, &Cmp_48, &UserEqPredId_68);
                  Var_78 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(UserEqPredId_68, Var_78);
                  if (succeeded)
                    *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
                  else
                  {
                    MR_Word Var_80;

                    transform_hlds__intermod__intermod_do_add_pred_4_p_0(UserEqPredId_68, &Var_80, STATE_VARIABLE_IntermodInfo_0_16, STATE_VARIABLE_IntermodInfo_17);
                  }
                  {
                    NonCanonical_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), NonCanonical_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), NonCanonical_49, 1) = ((MR_Box) (Cmp_48));
                  }
                  {
                    MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (NonCanonical_49));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MaybeUserEqComp_15 = MaybeUserEqComp0_13;
                  *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
                }
                break;
            }
            break;
        }
      }
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = Body_12;
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (MaybeUserEqComp_15));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Assertions_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeForeignTypeLangData_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word SpecialId_9,
  MR_Word TypeCtor_10,
  MR_Word Pred0_11,
  MR_Word * Pred_12,
  MR_Word STATE_VARIABLE_IntermodInfo_0_26,
  MR_Word * STATE_VARIABLE_IntermodInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word SpecialPredMaps_14;
    MR_Word SpecialPredId_15;
    MR_Word SpecialPredInfo_16;
    MR_Word TVarSet_17;
    MR_Word ExistQVars_18;
    MR_Word ArgTypes_19;
    MR_Word ExternalTypeParams_20;
    MR_Word Markers0_21;
    MR_Word Markers_22;
    MR_Word Context_23;
    MR_Word UserEqPredId_24;
    MR_Word Var_36;

    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_8, &SpecialPredMaps_14);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_14, SpecialId_9, TypeCtor_10, &SpecialPredId_15);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, SpecialPredId_15, &SpecialPredInfo_16);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_16, &TVarSet_17, &ExistQVars_18, &ArgTypes_19);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_16, &ExternalTypeParams_20);
    hlds__hlds_pred__init_markers_1_p_0(&Markers0_21);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_21, &Markers_22);
    hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_16, &Context_23);
    hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_8, Markers_22, TVarSet_17, ExistQVars_18, ArgTypes_19, ExternalTypeParams_20, Context_23, Pred0_11, Pred_12, &UserEqPredId_24);
    Var_36 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(UserEqPredId_24, Var_36);
    if (succeeded)
      *STATE_VARIABLE_IntermodInfo_27 = STATE_VARIABLE_IntermodInfo_0_26;
    else
    {
      MR_Word Var_38;

      transform_hlds__intermod__intermod_do_add_pred_4_p_0(UserEqPredId_24, &Var_38, STATE_VARIABLE_IntermodInfo_0_26, STATE_VARIABLE_IntermodInfo_27);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadVar__2_2,
  MR_Word * InstanceMethod_9,
  MR_Word PredIds0_10,
  MR_Word * PredIds_11)
{
  {
    MR_bool succeeded;
    MR_Word MethodCallPredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word InstanceMethod0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MethodCallPredInfo_12;
    MR_Word MethodCallTVarSet_13;
    MR_Word MethodCallExistQTVars_14;
    MR_Word MethodCallArgTypes_15;
    MR_Word MethodCallExternalTypeParams_16;
    MR_Word PredOrFunc_17;
    MR_Word MethodName_18;
    MR_Word InstanceMethodDefn0_19;
    MR_Integer MethodArity_20;
    MR_Word MethodContext_21;
    MR_Word InstanceMethodDefn_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, MethodCallPredId_7, &MethodCallPredInfo_12);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(MethodCallPredInfo_12, &MethodCallTVarSet_13, &MethodCallExistQTVars_14, &MethodCallArgTypes_15);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(MethodCallPredInfo_12, &MethodCallExternalTypeParams_16);
    PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MethodName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 1))));
    InstanceMethodDefn0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 2))));
    MethodArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 3))));
    MethodContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 4))));
    if (((MR_tag((MR_Word) InstanceMethodDefn0_19)) == (MR_Integer) 1))
    {
      MR_Word PredId_33;

      PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PredIds_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
      }
      InstanceMethodDefn_26 = InstanceMethodDefn0_19;
    }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodDefn0_19, (MR_Integer) 0))));

      switch (PredOrFunc_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word MaybePredId_23;
            MR_Word InstanceMethodName_24;

            succeeded = transform_hlds__intermod__find_func_matching_instance_method_10_p_0(ModuleInfo_6, Var_34, MethodArity_20, MethodCallTVarSet_13, MethodCallExistQTVars_14, MethodCallArgTypes_15, MethodCallExternalTypeParams_16, MethodContext_21, &MaybePredId_23, &InstanceMethodName_24);
            if (succeeded)
            {
              if ((MaybePredId_23 == (MR_Word) ((MR_Unsigned) 0U)))
                *PredIds_11 = PredIds0_10;
              else
              {
                MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredId_23, (MR_Integer) 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *PredIds_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
                }
              }
              {
                InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), InstanceMethodDefn_26, 0) = ((MR_Box) (InstanceMethodName_24));
              }
            }
            else
            {
              MR_Word PredId_29;

              PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *PredIds_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_29));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
              }
              InstanceMethodDefn_26 = InstanceMethodDefn0_19;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Markers_27;
            MR_Word InstanceMethodName_31;
            MR_Word PredId_32;

            hlds__hlds_pred__init_markers_1_p_0(&Markers_27);
            hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_6, Markers_27, MethodCallTVarSet_13, MethodCallExistQTVars_14, MethodCallArgTypes_15, MethodCallExternalTypeParams_16, MethodContext_21, Var_34, &InstanceMethodName_31, &PredId_32);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *PredIds_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
            }
            {
              InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstanceMethodDefn_26, 0) = ((MR_Box) (InstanceMethodName_31));
            }
          }
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *InstanceMethod_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MethodName_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstanceMethodDefn_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MethodArity_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MethodContext_21));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_55;

    conv2_LambdaHeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1065__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_55));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_51;

    conv1_LambdaHeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1052__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_51));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word InstanceMethodName0_12,
  MR_Integer MethodArity_13,
  MR_Word MethodCallTVarSet_14,
  MR_Word MethodCallExistQTVars_15,
  MR_Word MethodCallArgTypes_16,
  MR_Word MethodCallExternalTypeParams_17,
  MR_Word MethodContext_18,
  MR_Word * MaybePredId_19,
  MR_Word * InstanceMethodName_20)
{
  {
    MR_bool succeeded;
    MR_Word CtorFieldTable_21;
    MR_Word TypeCtors0_25;
    MR_Word Ctors_32;
    MR_Word TypeCtors1_35;
    MR_Word TypeCtors_37;
    MR_Word PredicateTable_38;
    MR_Word PredIds_39;
    MR_Word FieldDefns_24;
    MR_Word TypeCtorInfo_77_77;
    MR_Word TypeInfo_78_78;
    MR_Word FieldName_23;
    MR_Integer Var_84;
    MR_Word Var_22;
    MR_Box conv0_FieldDefns_24;
    MR_Word MatchingConstructors_34;
    MR_Word ConsId_33;
    MR_Word Var_52;
    MR_Word PredId_42;
    MR_Word InstanceMethodFuncName_43;
    MR_Word Var_57;

    hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_11, &CtorFieldTable_21);
    succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_11, InstanceMethodName0_12, &Var_84, &Var_22, &FieldName_23);
    if (succeeded)
    {
      succeeded = (MethodArity_13 == Var_84);
      if (succeeded)
      {
        TypeCtorInfo_77_77 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        TypeInfo_78_78 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[2]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_77_77, TypeInfo_78_78, CtorFieldTable_21, ((MR_Box) (FieldName_23)), &conv0_FieldDefns_24);
        if (succeeded)
        {
          FieldDefns_24 = ((MR_Word) (conv0_FieldDefns_24));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[16]), FieldDefns_24);
    else
      TypeCtors0_25 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_11, &Ctors_32);
    Var_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_33, 1) = ((MR_Box) (InstanceMethodName0_12));
      MR_hl_field(MR_mktag(3), ConsId_33, 2) = ((MR_Box) (MethodArity_13));
      MR_hl_field(MR_mktag(3), ConsId_33, 3) = ((MR_Box) (Var_52));
    }
    succeeded = hlds__hlds_cons__search_cons_table_3_p_0(Ctors_32, ConsId_33, &MatchingConstructors_34);
    if (succeeded)
      TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[17]), MatchingConstructors_34);
    else
      TypeCtors1_35 = (MR_Word) ((MR_Unsigned) 0U);
    TypeCtors_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtors0_25, TypeCtors1_35);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_38);
    hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable_38, (MR_Integer) 1, InstanceMethodName0_12, MethodArity_13, &PredIds_39);
    succeeded = (PredIds_39 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_57 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_11, PredIds_39, MethodCallTVarSet_14, MethodCallExistQTVars_15, MethodCallArgTypes_16, MethodCallExternalTypeParams_17, Var_57, MethodContext_18, &PredId_42, &InstanceMethodFuncName_43);
    }
    if (succeeded)
    {
      succeeded = (TypeCtors_37 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *InstanceMethodName_20 = InstanceMethodFuncName_43;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredId_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_42));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TheTypeCtor_44;
      MR_Word Var_58;
      MR_Word TypeModule_45;
      MR_Word Var_59;

      succeeded = (TypeCtors_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TheTypeCtor_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtors_37, (MR_Integer) 0))));
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtors_37, (MR_Integer) 1))));
        succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *MaybePredId_19 = (MR_Word) ((MR_Unsigned) 0U);
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TheTypeCtor_44, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeModule_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
            {
              MR_String UnqualMethodName_48;

              UnqualMethodName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(InstanceMethodName0_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstanceMethodName_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeModule_45));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnqualMethodName_48));
              }
            }
          }
          else
          {
            MR_String Var_61;

            Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type_ctor in ", (MR_String) "hlds_cons_defn or hlds_ctor_field_defn");
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", Var_61);
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__gather_opt_export_instance_in_instance_defn__922__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MayOptExportPred_6;
    MR_Word conv4_STATE_VARIABLE_IntermodInfo_9;

    transform_hlds__intermod__intermod_add_pred_4_p_0(((MR_Word) (wrapper_arg_1)), &conv5_MayOptExportPred_6, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_IntermodInfo_9);
    *wrapper_arg_2 = ((MR_Box) (conv5_MayOptExportPred_6));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_IntermodInfo_9));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_InstanceMethod_9;
    MR_Word conv1_PredIds_11;

    transform_hlds__intermod__qualify_instance_method_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_InstanceMethod_9, ((MR_Word) (wrapper_arg_3)), &conv1_PredIds_11);
    *wrapper_arg_2 = ((MR_Box) (conv2_InstanceMethod_9));
    *wrapper_arg_4 = ((MR_Box) (conv1_PredIds_11));
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_34,
  MR_Word * STATE_VARIABLE_IntermodInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0))));
    MR_Word Types_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1))));
    MR_Word OriginalTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2))));
    MR_Word InstanceStatus_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4))));
    MR_Word InstanceConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5))));
    MR_Word Interface0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6))));
    MR_Word MaybePredProcIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7))));
    MR_Word TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8))));
    MR_Word Proofs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9))));
    MR_Word DefinedThisModule_20;

    DefinedThisModule_20 = hlds__status__instance_status_defined_in_this_module_1_f_0(InstanceStatus_13);
    switch (DefinedThisModule_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_IntermodInfo_35 = STATE_VARIABLE_IntermodInfo_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Interface_30;
          MR_Word STATE_VARIABLE_IntermodInfo_45_45;
          MR_Word Var_46;

          if ((Interface0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Interface_30 = Interface0_16;
            STATE_VARIABLE_IntermodInfo_45_45 = STATE_VARIABLE_IntermodInfo_0_34;
          }
          else
          {
            MR_Word Methods0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_16, (MR_Integer) 0))));
            MR_Word MethodAL_26;
            MR_Word Methods_27;
            MR_Word PredIds_28;
            MR_Word MethodMayOptExportPreds_29;
            MR_Word Var_39;
            MR_Word STATE_VARIABLE_IntermodInfo_42_42;
            MR_Box conv3_PredIds_28;
            MR_Box conv6_STATE_VARIABLE_IntermodInfo_42_42;

            if ((MaybePredProcIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.gather_opt_export_instance_in_instance_defn\'/5", (MR_String) "method pred_proc_ids not filled in");
                return;
              }
            else
            {
              MR_Word ClassProcs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcIds_17, (MR_Integer) 0))));
              MR_Word ClassPreds0_24;
              MR_Word ClassPreds_25;

              ClassPreds0_24 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[14]), ClassProcs_23);
              mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ClassPreds0_24, &ClassPreds_25);
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), ClassPreds_25, Methods0_22, &MethodAL_26);
            }
            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[3]));
              MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), Var_39, MethodAL_26, &Methods_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_PredIds_28);
            PredIds_28 = ((MR_Word) (conv3_PredIds_28));
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[15]), PredIds_28, &MethodMayOptExportPreds_29, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_34)), &conv6_STATE_VARIABLE_IntermodInfo_42_42);
            STATE_VARIABLE_IntermodInfo_42_42 = ((MR_Word) (conv6_STATE_VARIABLE_IntermodInfo_42_42));
            succeeded = mercury__list__all_true_2_p_0((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0), (MR_Word) (&transform_hlds__intermod_scalar_common_6[1]), MethodMayOptExportPreds_29);
            if (succeeded)
            {
              {
                Interface_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Interface_30, 0) = ((MR_Box) (Methods_27));
              }
              STATE_VARIABLE_IntermodInfo_45_45 = STATE_VARIABLE_IntermodInfo_42_42;
            }
            else
            {
              Interface_30 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_IntermodInfo_45_45 = STATE_VARIABLE_IntermodInfo_0_34;
            }
          }
          succeeded = (Interface_30 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_46 = hlds__status__instance_status_is_exported_1_f_0(InstanceStatus_13);
            succeeded = (Var_46 != (MR_Integer) 0);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Word InstanceDefnToWrite_31;
            MR_Word Instances0_32;
            MR_Word Instances_33;
            MR_Word Var_47;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;

            {
              InstanceDefnToWrite_31 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 0) = ((MR_Box) (ModuleName_10));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 1) = ((MR_Box) (Types_11));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 2) = ((MR_Box) (OriginalTypes_12));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 3) = ((MR_Box) (InstanceStatus_13));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 4) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 5) = ((MR_Box) (InstanceConstraints_15));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 6) = ((MR_Box) (Interface_30));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 7) = ((MR_Box) (MaybePredProcIds_17));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 8) = ((MR_Box) (TVarSet_18));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_31, 9) = ((MR_Box) (Proofs_19));
            }
            Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 0))));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 1))));
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 2))));
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 3))));
            Instances0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 4))));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 5))));
            Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 6))) & (MR_Integer) 1);
            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ClassId_7));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (InstanceDefnToWrite_31));
            }
            {
              Instances_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Instances_33, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), Instances_33, 1) = ((MR_Box) (Instances0_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_IntermodInfo_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Instances_33));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_77));
            }
          }
          else
            *STATE_VARIABLE_IntermodInfo_35 = STATE_VARIABLE_IntermodInfo_45_45;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_35;

    transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IntermodInfo_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_35));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_10)), &conv1_STATE_VARIABLE_IntermodInfo_11);
    *STATE_VARIABLE_IntermodInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_11));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__proc_has_a_higher_order_input_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ProcInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word HeadVars_5;
    MR_Word ArgModes_6;
    MR_Word VarTypes_7;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_4, &HeadVars_5);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_4, &ArgModes_6);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_4, &VarTypes_7);
    succeeded = transform_hlds__intermod__some_input_arg_is_higher_order_4_p_0(ModuleInfo_3, VarTypes_7, HeadVars_5, ArgModes_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__some_input_arg_is_higher_order_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadVar_7;
    MR_Word HeadVars_8;
    MR_Word ArgMode_9;
    MR_Word ArgModes_10;
    MR_Word Type_11;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      HeadVars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgMode_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        ArgModes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_5, ArgMode_9);
        if (succeeded)
        {
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_6, HeadVar_7, &Type_11);
          Var_12 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_11);
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = HeadVars_8;
          MR_Word next_value_of_HeadVar__4_4 = ArgModes_10;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__proc_eval_method_is_normal_1_p_0(
  MR_Word ProcInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4;

    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_2, &Var_4);
    succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0((MR_Word) ((MR_Unsigned) 0U), Var_4);
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__intermod__maybe_opt_export_entities_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word Globals_4;
    MR_Word VeryVerbose_5;
    MR_Word IntermodInfo_8;
    MR_Word ProgressStream_21;
    MR_Word ProgressStream_22;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &Globals_4);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 66, &VeryVerbose_5);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_9, &ProgressStream_21);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_21, VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    transform_hlds__intermod__decide_what_to_opt_export_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &IntermodInfo_8);
    transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0(IntermodInfo_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
    hlds__passes_aux__get_progress_output_stream_4_p_0(*STATE_VARIABLE_ModuleInfo_10, &ProgressStream_22);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_22, VeryVerbose_5, (MR_String) " done\n");
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ModuleInfo_10);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeDefn_8;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_TypeDefn_8, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_TypeDefn_8));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_12));
  }
}

void MR_CALL 
transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0(
  MR_Word IntermodInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredDeclsSet_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 2))));
    MR_Word PredDecls_7;
    MR_Word STATE_VARIABLE_ModuleInfo_10_10;
    MR_Word STATE_VARIABLE_ModuleInfo_11_11;
    MR_Word STATE_VARIABLE_ModuleInfo_12_12;
    MR_Word Preds0_27;
    MR_Word Preds_28;
    MR_Word TypeTable0_33;
    MR_Word TypeTable_34;
    MR_Word STATE_VARIABLE_ModuleInfo_9_36;
    MR_Word Classes0_47;
    MR_Word ClassAL0_48;
    MR_Word ClassAL_49;
    MR_Word Classes_50;
    MR_Word STATE_VARIABLE_ModuleInfo_11_52;
    MR_Word Instances0_65;
    MR_Word InstanceAL0_66;
    MR_Word InstanceAL_67;
    MR_Word Instances_68;
    MR_Word STATE_VARIABLE_ModuleInfo_11_70;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_9_36;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_11_52;
    MR_Box conv8_STATE_VARIABLE_ModuleInfo_11_70;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDeclsSet_6, &PredDecls_7);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &Preds0_27);
    transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredDecls_7, Preds0_27, &Preds_28);
    hlds__hlds_module__module_info_set_preds_3_p_0(Preds_28, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_10_10);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_10_10, &TypeTable0_33);
    hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[11]), TypeTable0_33, &TypeTable_34, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv2_STATE_VARIABLE_ModuleInfo_9_36);
    STATE_VARIABLE_ModuleInfo_9_36 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_9_36));
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_34, STATE_VARIABLE_ModuleInfo_9_36, &STATE_VARIABLE_ModuleInfo_11_11);
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_11_11, &Classes0_47);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes0_47, &ClassAL0_48);
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[5]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[5]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[12]), ClassAL0_48, &ClassAL_49, ((MR_Box) (STATE_VARIABLE_ModuleInfo_11_11)), &conv5_STATE_VARIABLE_ModuleInfo_11_52);
    STATE_VARIABLE_ModuleInfo_11_52 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_11_52));
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassAL_49, &Classes_50);
    hlds__hlds_module__module_info_set_class_table_3_p_0(Classes_50, STATE_VARIABLE_ModuleInfo_11_52, &STATE_VARIABLE_ModuleInfo_12_12);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &Instances0_65);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[0]), Instances0_65, &InstanceAL0_66);
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[6]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[6]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[13]), InstanceAL0_66, &InstanceAL_67, ((MR_Box) (STATE_VARIABLE_ModuleInfo_12_12)), &conv8_STATE_VARIABLE_ModuleInfo_11_70);
    STATE_VARIABLE_ModuleInfo_11_70 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_11_70));
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[0]), InstanceAL_67, &Instances_68);
    hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_68, STATE_VARIABLE_ModuleInfo_11_70, STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Preds_0_2,
  MR_Word * STATE_VARIABLE_Preds_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Preds_3 = STATE_VARIABLE_Preds_0_2;
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo0_10;
      MR_Word PredStatus0_11;
      MR_Word STATE_VARIABLE_Preds_26_26;
      MR_Word OldStatus_30;
      MR_Box conv0_PredInfo0_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Preds_0_2;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_Preds_0_2, ((MR_Box) (PredId_7)), &conv0_PredInfo0_10);
      PredInfo0_10 = ((MR_Word) (conv0_PredInfo0_10));
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_10, &PredStatus0_11);
      OldStatus_30 = (MR_Word) (PredStatus0_11);
      switch (MR_tag((MR_Word) OldStatus_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OldStatus_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
              break;
            case (MR_Integer) 4:
              {
                MR_Word PredStatus_140;
                MR_Word PredInfo_142;
                MR_Word Origin_124;
                MR_Word Var_126;

                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_124);
                succeeded = ((MR_tag((MR_Word) Origin_124)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_124, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_126 == (MR_Integer) 0);
                }
                if (succeeded)
                  PredStatus_140 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
                else
                {
                  MR_Word Var_129 = (MR_Word) (PredStatus0_11);

                  succeeded = ((MR_tag((MR_Word) Var_129)) == (MR_Integer) 1);
                  if (succeeded)
                    PredStatus_140 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_3[0]))));
                  else
                    PredStatus_140 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
                }
                hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_140, PredInfo0_10, &PredInfo_142);
                mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_142)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word PredStatus_15;
                MR_Word PredInfo_17;
                MR_Word Origin_13;
                MR_Word Var_20;

                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_13);
                succeeded = ((MR_tag((MR_Word) Origin_13)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_13, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_20 == (MR_Integer) 0);
                }
                if (succeeded)
                  PredStatus_15 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
                else
                {
                  MR_Word Var_22 = (MR_Word) (PredStatus0_11);

                  succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 1);
                  if (succeeded)
                    PredStatus_15 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_3[0]))));
                  else
                    PredStatus_15 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
                }
                hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_15, PredInfo0_10, &PredInfo_17);
                mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_17)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
              }
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
              break;
            case (MR_Integer) 7:
              {
                MR_Word PredStatus_56;
                MR_Word PredInfo_58;
                MR_Word Origin_40;
                MR_Word Var_42;

                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_40);
                succeeded = ((MR_tag((MR_Word) Origin_40)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_40, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_42 == (MR_Integer) 0);
                }
                if (succeeded)
                  PredStatus_56 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
                else
                {
                  MR_Word Var_45 = (MR_Word) (PredStatus0_11);

                  succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
                  if (succeeded)
                    PredStatus_56 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_3[0]))));
                  else
                    PredStatus_56 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
                }
                hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_56, PredInfo0_10, &PredInfo_58);
                mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_58)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word PredStatus_117;
                MR_Word PredInfo_119;
                MR_Word Origin_101;
                MR_Word Var_103;

                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_101);
                succeeded = ((MR_tag((MR_Word) Origin_101)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_101, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_103 == (MR_Integer) 0);
                }
                if (succeeded)
                  PredStatus_117 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
                else
                {
                  MR_Word Var_106 = (MR_Word) (PredStatus0_11);

                  succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_Integer) 1);
                  if (succeeded)
                    PredStatus_117 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_3[0]))));
                  else
                    PredStatus_117 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
                }
                hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_117, PredInfo0_10, &PredInfo_119);
                mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_119)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Status_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_30, (MR_Integer) 0))));
            MR_Word Var_33;
            MR_Word ToWrite_89;

            Var_33 = hlds__status__old_status_is_exported_1_f_0(Status_32);
            ToWrite_89 = mercury__bool__not_1_f_0(Var_33);
            switch (ToWrite_89) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredStatus_77;
                  MR_Word PredInfo_79;
                  MR_Word Origin_62;
                  MR_Word Var_64;

                  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_62);
                  succeeded = ((MR_tag((MR_Word) Origin_62)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_62, (MR_Integer) 0))) & (MR_Integer) 3);
                    succeeded = (Var_64 == (MR_Integer) 0);
                  }
                  if (succeeded)
                    PredStatus_77 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
                  else
                  {
                    MR_Word Var_67 = (MR_Word) (PredStatus0_11);

                    succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 1);
                    if (succeeded)
                      PredStatus_77 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_3[0]))));
                    else
                      PredStatus_77 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
                  }
                  hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_77, PredInfo0_10, &PredInfo_79);
                  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_79)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_Preds_0_2 = STATE_VARIABLE_Preds_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Preds_0_2 = next_value_of_STATE_VARIABLE_Preds_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__intermod__write_initial_opt_file_6_p_0(
  MR_Word TmpOptStream_7,
  MR_Word ModuleInfo_8,
  MR_Word * IntermodInfo_9,
  MR_Word * ParseTreePlainOpt_10)
{
  {
    transform_hlds__intermod__decide_what_to_opt_export_2_p_0(ModuleInfo_8, IntermodInfo_9);
    transform_hlds__intermod__write_opt_file_initial_5_p_0(TmpOptStream_7, *IntermodInfo_9, ParseTreePlainOpt_10);
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_5_p_0(
  MR_Word Stream_6,
  MR_Word IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 0))));
    MR_Word ModuleName_11;
    MR_String ModuleNameStr_12;
    MR_Word PredDecls_13;
    MR_Word PredDefns_14;
    MR_Word Instances_15;
    MR_Word TypeTable_16;
    MR_Word TypeCtorsDefns_17;
    MR_Word Var_25;
    MR_Word Var_55;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_10, &ModuleName_11);
    ModuleNameStr_12 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- module ");
    mercury__io__write_string_4_p_0(Stream_6, ModuleNameStr_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
    PredDecls_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 2))));
    PredDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 3))));
    Instances_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 4))));
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDecls_13);
    if (succeeded)
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDefns_14);
      if (succeeded)
      {
        succeeded = (Instances_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_10, &TypeTable_16);
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_16, &TypeCtorsDefns_17);
          Var_25 = (MR_Integer) 0;
          transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(TypeCtorsDefns_17, &Var_55);
          succeeded = (Var_25 == Var_55);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_26 = mercury__term__context_init_0_f_0();
      Var_27 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[3]));
      Var_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        *ParseTreePlainOpt_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      transform_hlds__intermod__write_opt_file_initial_body_5_p_0(Stream_6, IntermodInfo_7, ParseTreePlainOpt_8);
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_62;

    transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__1377__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_62);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_62));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_use_module_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_5_p_0(
  MR_Word Stream_6,
  MR_Word IntermodInfo_7,
  MR_Word * ParseTreePlainOpt_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 0))));
    MR_Word WriteDeclPredIdSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 2))));
    MR_Word WriteDefnPredIdSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 3))));
    MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 4))));
    MR_Word Types_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 5))));
    MR_Word NeedFIMs_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntermodInfo_7, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word WriteDeclPredIds_17;
    MR_Word WriteDefnPredIds_18;
    MR_Word AvailModuleMap_19;
    MR_Word UsedModuleNames_20;
    MR_Word UseMap_25;
    MR_Word FIMSpecs_27;
    MR_Word Globals_28;
    MR_Word OutInfo0_29;
    MR_Word MercInfo0_30;
    MR_Word MercInfo_31;
    MR_Word OutInfo_32;
    MR_Word OutInfoForPreds_33;
    MR_Word TypeDefns_34;
    MR_Word ForeignEnums_35;
    MR_Word InstDefns_36;
    MR_Word ModeDefns_37;
    MR_Word TypeClasses_38;
    MR_Word Instances_39;
    MR_Word DeclOrderPredInfos_40;
    MR_Word DefnOrderPredInfos_41;
    MR_Word PredMarkerPragmasCord0_42;
    MR_Word PredMarkerPragmasCord1_43;
    MR_Word TypeSpecPragmas_44;
    MR_Word PredMarkerPragmasCord_50;
    MR_Word PredMarkerPragmas_51;
    MR_Word ModuleName_55;
    MR_Word Var_58;
    MR_Word Var_64;
    MR_Word Var_79;
    MR_String Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Box conv0_STATE_VARIABLE_IO_59_59;
    MR_Box conv2_UseMap_25;
    MR_String Var_95;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDeclPredIdSet_12, &WriteDeclPredIds_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDefnPredIdSet_13, &WriteDefnPredIds_18);
    hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_10, &AvailModuleMap_19);
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_19, &UsedModuleNames_20);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Stream_6));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, UsedModuleNames_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_59_59);
    Var_64 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[1]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[10]), UsedModuleNames_20, ((MR_Box) (Var_64)), &conv2_UseMap_25);
    UseMap_25 = ((MR_Word) (conv2_UseMap_25));
    switch (NeedFIMs_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word CJCsEFIMs_26;

          hlds__hlds_module__module_info_get_c_j_cs_fims_2_p_0(ModuleInfo_10, &CJCsEFIMs_26);
          FIMSpecs_27 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(CJCsEFIMs_26);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_27);
          if (!(succeeded))
          {
            MR_Word Var_66;
            MR_Box conv3_STATE_VARIABLE_IO_67_67;

            mercury__io__nl_3_p_0(Stream_6);
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_5_p_0_3));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Stream_6));
            }
            mercury__set__fold_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, FIMSpecs_27, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_67_67);
          }
        }
        break;
      case (MR_Integer) 0:
        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &FIMSpecs_27);
        break;
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_28);
    OutInfo0_29 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_28, (MR_Integer) 0);
    MercInfo0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo0_29, (MR_Integer) 4))));
    MercInfo_31 = parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(MercInfo0_30);
    Var_95 = ((MR_String) ((MR_hl_field(MR_mktag(0), OutInfo0_29, (MR_Integer) 0))));
    Var_96 = ((MR_String) ((MR_hl_field(MR_mktag(0), OutInfo0_29, (MR_Integer) 1))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo0_29, (MR_Integer) 2))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo0_29, (MR_Integer) 3))));
    {
      OutInfo_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutInfo_32, 0) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), OutInfo_32, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), OutInfo_32, 2) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), OutInfo_32, 3) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), OutInfo_32, 4) = ((MR_Box) (MercInfo_31));
    }
    {
      OutInfoForPreds_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutInfoForPreds_33, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_33, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_33, 2) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_33, 3) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_33, 4) = ((MR_Box) (MercInfo_31));
    }
    transform_hlds__intermod__intermod_write_types_7_p_0(OutInfo_32, Stream_6, Types_15, &TypeDefns_34, &ForeignEnums_35);
    transform_hlds__intermod__intermod_write_insts_6_p_0(OutInfo_32, Stream_6, ModuleInfo_10, &InstDefns_36);
    transform_hlds__intermod__intermod_write_modes_6_p_0(OutInfo_32, Stream_6, ModuleInfo_10, &ModeDefns_37);
    transform_hlds__intermod__intermod_write_classes_6_p_0(OutInfo_32, Stream_6, ModuleInfo_10, &TypeClasses_38);
    transform_hlds__intermod__intermod_write_instances_6_p_0(OutInfo_32, Stream_6, InstanceDefns_14, &Instances_39);
    transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_10, WriteDeclPredIds_17, &DeclOrderPredInfos_40);
    transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_10, WriteDefnPredIds_18, &DefnOrderPredInfos_41);
    PredMarkerPragmasCord0_42 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]));
    if ((DeclOrderPredInfos_40 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PredMarkerPragmasCord1_43 = PredMarkerPragmasCord0_42;
      TypeSpecPragmas_44 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeSpecPragmasCord_47;
      MR_Word Var_76;
      MR_Word OrderPredInfo_137;
      MR_Word OrderPredInfos_138;
      MR_Word STATE_VARIABLE_PredMarkerPragmasCord_34_148;
      MR_Word STATE_VARIABLE_TypeSpecPragmasCord_35_149;

      mercury__io__nl_3_p_0(Stream_6);
      Var_76 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]));
      OrderPredInfo_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclOrderPredInfos_40, (MR_Integer) 0))));
      OrderPredInfos_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclOrderPredInfos_40, (MR_Integer) 1))));
      transform_hlds__intermod__intermod_write_pred_decl_9_p_0(Stream_6, ModuleInfo_10, OrderPredInfo_137, PredMarkerPragmasCord0_42, &STATE_VARIABLE_PredMarkerPragmasCord_34_148, Var_76, &STATE_VARIABLE_TypeSpecPragmasCord_35_149);
      transform_hlds__intermod__intermod_write_pred_decls_9_p_0(Stream_6, ModuleInfo_10, OrderPredInfos_138, STATE_VARIABLE_PredMarkerPragmasCord_34_148, &PredMarkerPragmasCord1_43, STATE_VARIABLE_TypeSpecPragmasCord_35_149, &TypeSpecPragmasCord_47);
      TypeSpecPragmas_44 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), TypeSpecPragmasCord_47);
    }
    transform_hlds__intermod__intermod_write_pred_defns_8_p_0(OutInfoForPreds_33, Stream_6, ModuleInfo_10, DefnOrderPredInfos_41, PredMarkerPragmasCord1_43, &PredMarkerPragmasCord_50);
    PredMarkerPragmas_51 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), PredMarkerPragmasCord_50);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_10, &ModuleName_55);
    Var_79 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreePlainOpt_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_55));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (UseMap_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FIMSpecs_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TypeDefns_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignEnums_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InstDefns_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModeDefns_37));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeClasses_38));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Instances_39));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (PredMarkerPragmas_51));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (TypeSpecPragmas_44));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defns_8_p_0(
  MR_Word OutInfo_1,
  MR_Word Stream_2,
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_5,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredMarkerPragmas_6 = STATE_VARIABLE_PredMarkerPragmas_0_5;
    else
    {
      MR_Word OrderPredInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word OrderPredInfos_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredMarkerPragmas_29_29;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredMarkerPragmas_0_5;

      transform_hlds__intermod__intermod_write_pred_defn_8_p_0(OutInfo_1, Stream_2, ModuleInfo_3, OrderPredInfo_21, STATE_VARIABLE_PredMarkerPragmas_0_5, &STATE_VARIABLE_PredMarkerPragmas_29_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = OrderPredInfos_22;
      next_value_of_STATE_VARIABLE_PredMarkerPragmas_0_5 = STATE_VARIABLE_PredMarkerPragmas_29_29;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredMarkerPragmas_0_5 = next_value_of_STATE_VARIABLE_PredMarkerPragmas_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_clause_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_defn_8_p_0(
  MR_Word OutInfo_9,
  MR_Word Stream_10,
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_38,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_39)
{
  {
    MR_String PredName_15;
    MR_Word PredOrFunc_17;
    MR_Word PredId_18;
    MR_Word PredInfo_19;
    MR_Word ModuleName_20;
    MR_Word PredSymName_21;
    MR_Word ClausesInfo_22;
    MR_Word VarSet_23;
    MR_Word HeadVars_24;
    MR_Word ClausesRep_25;
    MR_Word VarTypes_27;
    MR_Word Clauses_28;
    MR_Word GoalType_29;
    MR_Word ModuleName_71;
    MR_Word PredOrFunc_72;
    MR_String PredName_73;
    MR_Word PredSymName_74;
    MR_Integer PredFormArity_75;
    MR_Word UserArity_76;
    MR_Word Markers_77;
    MR_Word MarkerList_78;
    MR_Word Var_79;
    MR_Word _ItemNumbers_26;

    mercury__io__nl_3_p_0(Stream_10);
    PredName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    PredInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    ModuleName_20 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
    {
      PredSymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_21, 0) = ((MR_Box) (ModuleName_20));
      MR_hl_field(MR_mktag(1), PredSymName_21, 1) = ((MR_Box) (PredName_15));
    }
    ModuleName_71 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
    PredOrFunc_72 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_19);
    PredName_73 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_19);
    {
      PredSymName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_74, 0) = ((MR_Box) (ModuleName_71));
      MR_hl_field(MR_mktag(1), PredSymName_74, 1) = ((MR_Box) (PredName_73));
    }
    PredFormArity_75 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_19);
    Var_79 = (MR_Word) (PredFormArity_75);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_72, &UserArity_76, Var_79);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_19, &Markers_77);
    hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_77, &MarkerList_78);
    transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_9_p_0(Stream_10, PredOrFunc_72, PredSymName_74, UserArity_76, MarkerList_78, STATE_VARIABLE_PredMarkerPragmas_0_38, STATE_VARIABLE_PredMarkerPragmas_39);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_19, &ClausesInfo_22);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_22, &VarSet_23);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_22, &HeadVars_24);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_22, &ClausesRep_25, &_ItemNumbers_26);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_22, &VarTypes_27);
    hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_25, &Clauses_28);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_19, &GoalType_29);
    if (((MR_tag((MR_Word) GoalType_29)) == (MR_Integer) 1))
    {
      MR_Word PromiseType_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), GoalType_29, (MR_Integer) 0))) & (MR_Integer) 3);

      if ((Clauses_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_defn\'/8", (MR_String) "assertion not a single clause.");
          return;
        }
      else
      {
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_28, (MR_Integer) 1))));
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_28, (MR_Integer) 0))));

        if ((Var_61 == (MR_Word) ((MR_Unsigned) 0U)))
          transform_hlds__intermod__write_promise_9_p_0(OutInfo_9, Stream_10, ModuleInfo_11, VarSet_23, PromiseType_30, HeadVars_24, Var_62);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_defn\'/8", (MR_String) "assertion not a single clause.");
            return;
          }
      }
    }
    else
    {
      MR_Word TypeVarset_36;
      MR_Word TypeQual_37;
      MR_Word Var_45;
      MR_Box conv0_STATE_VARIABLE_IO_41;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_19, &TypeVarset_36);
      {
        TypeQual_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeQual_37, 0) = ((MR_Box) (TypeVarset_36));
        MR_hl_field(MR_mktag(1), TypeQual_37, 1) = ((MR_Box) (VarTypes_27));
      }
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_15[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_defn_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (OutInfo_9));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Stream_10));
        MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (ModuleInfo_11));
        MR_hl_field(MR_mktag(0), Var_45, 6) = ((MR_Box) (PredId_18));
        MR_hl_field(MR_mktag(0), Var_45, 7) = ((MR_Box) (PredSymName_21));
        MR_hl_field(MR_mktag(0), Var_45, 8) = ((MR_Box) (PredOrFunc_17));
        MR_hl_field(MR_mktag(0), Var_45, 9) = ((MR_Box) (VarSet_23));
        MR_hl_field(MR_mktag(0), Var_45, 10) = ((MR_Box) (TypeQual_37));
        MR_hl_field(MR_mktag(0), Var_45, 11) = ((MR_Box) (HeadVars_24));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Clauses_28, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_41);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__write_promise_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_46;

    conv0_HeadVar__3_46 = transform_hlds__intermod__IntroducedFrom__func__write_promise__2166__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_46));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_promise_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word PromiseType_14,
  MR_Word HeadVars_15,
  MR_Word Clause_16)
{
  {
    MR_Word HeadVarStrs_18;
    MR_String HeadVarsStr_19;
    MR_Word Goal_20;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_14[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__intermod__write_promise_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (VarSet_13));
    }
    HeadVarStrs_18 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[17]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, HeadVars_15);
    HeadVarsStr_19 = mercury__string__join_list_2_f_0((MR_String) ", ", HeadVarStrs_18);
    switch (PromiseType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_String Var_31;

          Var_31 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_14);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) ":- all [");
          mercury__io__write_string_4_p_0(Stream_11, HeadVarsStr_19);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "]\n");
          mercury__io__write_string_4_p_0(Stream_11, Var_31);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n(\n");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) ":- promise all [");
          mercury__io__write_string_4_p_0(Stream_11, HeadVarsStr_19);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "] (\n");
        }
        break;
    }
    Goal_20 = hlds__hlds_clauses__clause_body_1_f_0(Clause_16);
    hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_10, Stream_11, ModuleInfo_12, VarSet_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 1, (MR_String) ").\n", Goal_20);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_4,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_5,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_6,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TypeSpecPragmasCord_7 = STATE_VARIABLE_TypeSpecPragmasCord_0_6;
      *STATE_VARIABLE_PredMarkerPragmasCord_5 = STATE_VARIABLE_PredMarkerPragmasCord_0_4;
    }
    else
    {
      MR_Word OrderPredInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word OrderPredInfos_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredMarkerPragmasCord_34_34;
      MR_Word STATE_VARIABLE_TypeSpecPragmasCord_35_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypeSpecPragmasCord_0_6;

      transform_hlds__intermod__intermod_write_pred_decl_9_p_0(ModuleInfo_1, Stream_2, OrderPredInfo_23, STATE_VARIABLE_PredMarkerPragmasCord_0_4, &STATE_VARIABLE_PredMarkerPragmasCord_34_34, STATE_VARIABLE_TypeSpecPragmasCord_0_6, &STATE_VARIABLE_TypeSpecPragmasCord_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OrderPredInfos_24;
      next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_4 = STATE_VARIABLE_PredMarkerPragmasCord_34_34;
      next_value_of_STATE_VARIABLE_TypeSpecPragmasCord_0_6 = STATE_VARIABLE_TypeSpecPragmasCord_35_35;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_PredMarkerPragmasCord_0_4 = next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_4;
      STATE_VARIABLE_TypeSpecPragmasCord_0_6 = next_value_of_STATE_VARIABLE_TypeSpecPragmasCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_36,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_37,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_38,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_39)
{
  {
    MR_String PredName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    MR_Word PredInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    MR_Word ModuleName_21;
    MR_Word TVarSet_22;
    MR_Word ExistQVars_23;
    MR_Word ArgTypes_24;
    MR_Word Purity_25;
    MR_Word ClassContext_26;
    MR_Word GoalType_27;
    MR_Word VarNamePrint_29;
    MR_Word PredSymName_31;
    MR_Word ProcMap_34;
    MR_Word SortedProcPairs_35;
    MR_Word ModuleName_62;
    MR_Word PredOrFunc_63;
    MR_String PredName_64;
    MR_Word PredSymName_65;
    MR_Integer PredFormArity_66;
    MR_Word UserArity_67;
    MR_Word Markers_68;
    MR_Word MarkerList_69;
    MR_Word Var_70;

    ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_20);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_20, &TVarSet_22, &ExistQVars_23, &ArgTypes_24);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_20, &Purity_25);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_20, &ClassContext_26);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_20, &GoalType_27);
    if (((MR_tag((MR_Word) GoalType_27)) == (MR_Integer) 1))
      VarNamePrint_29 = (MR_Integer) 1;
    else
    {
      MR_Word NPGoalType_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GoalType_27, (MR_Integer) 0))) & (MR_Integer) 3);

      VarNamePrint_29 = ((&transform_hlds__intermod_vector_common_13[0 + NPGoalType_28]))->transform_hlds__intermod__vector_common_type_13_0__vct_13_f_0;
    }
    {
      PredSymName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_31, 0) = ((MR_Box) (ModuleName_21));
      MR_hl_field(MR_mktag(1), PredSymName_31, 1) = ((MR_Box) (PredName_16));
    }
    switch (PredOrFunc_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgTypes_32;
          MR_Word FuncRetType_33;
          MR_Box conv0_FuncRetType_33;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_24, &FuncArgTypes_32, &conv0_FuncRetType_33);
          FuncRetType_33 = ((MR_Word) (conv0_FuncRetType_33));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_12_p_0(Stream_10, TVarSet_22, VarNamePrint_29, ExistQVars_23, PredSymName_31, FuncArgTypes_32, FuncRetType_33, (MR_Word) ((MR_Unsigned) 0U), Purity_25, ClassContext_26);
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_11_p_0(Stream_10, TVarSet_22, VarNamePrint_29, ExistQVars_23, PredSymName_31, ArgTypes_24, (MR_Word) ((MR_Unsigned) 0U), Purity_25, ClassContext_26);
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_20, &ProcMap_34);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcMap_34, &SortedProcPairs_35);
    transform_hlds__intermod__intermod_write_pred_valid_modes_6_p_0(Stream_10, PredOrFunc_18, PredSymName_31, SortedProcPairs_35);
    ModuleName_62 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_20);
    PredOrFunc_63 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
    PredName_64 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_20);
    {
      PredSymName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_65, 0) = ((MR_Box) (ModuleName_62));
      MR_hl_field(MR_mktag(1), PredSymName_65, 1) = ((MR_Box) (PredName_64));
    }
    PredFormArity_66 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_20);
    Var_70 = (MR_Word) (PredFormArity_66);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_63, &UserArity_67, Var_70);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_20, &Markers_68);
    hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_68, &MarkerList_69);
    transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_9_p_0(Stream_10, PredOrFunc_63, PredSymName_65, UserArity_67, MarkerList_69, STATE_VARIABLE_PredMarkerPragmasCord_0_36, STATE_VARIABLE_PredMarkerPragmasCord_37);
    transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0(Stream_10, ModuleInfo_11, PredId_19, STATE_VARIABLE_TypeSpecPragmasCord_0_38, STATE_VARIABLE_TypeSpecPragmasCord_39);
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_40;

    conv1_HeadVar__2_40 = transform_hlds__intermod__IntroducedFrom__func__intermod_write_pred_type_spec_pragmas__2090__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_40));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_16,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeSpecInfo_13;
    MR_Word PragmaMap_14;
    MR_Word TypeSpecPragmas_15;

    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_9, &TypeSpecInfo_13);
    PragmaMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 3))));
    succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), PragmaMap_14, ((MR_Box) (PredId_10)), &TypeSpecPragmas_15);
    if (succeeded)
    {
      MR_Word Var_20;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Box conv0_STATE_VARIABLE_IO_19;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Stream_8));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, TypeSpecPragmas_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
      Var_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[9]), TypeSpecPragmas_15);
      Var_25 = mercury__cord__from_list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), Var_26);
      *STATE_VARIABLE_TypeSpecsCord_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), STATE_VARIABLE_TypeSpecsCord_0_16, Var_25);
    }
    else
      *STATE_VARIABLE_TypeSpecsCord_17 = STATE_VARIABLE_TypeSpecsCord_0_16;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_9_p_0(
  MR_Word Stream_1,
  MR_Word PredOrFunc_2,
  MR_Word PredSymName_3,
  MR_Word UserArity_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_6,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredMarkerPragmasCord_7 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
    else
    {
      MR_Word Marker_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Markers_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredMarkerPragmasCord_39_39;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_6;

      switch (Marker_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 21:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 20:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 11:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 10:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 9:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 19:
          {
            MR_Word PredSpec_29;
            MR_Word PredMarkerInfo_30;
            MR_Word PragmaInfo_31;
            MR_String MarkerName_32;
            MR_Word Var_37;

            {
              PredSpec_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_29, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_29, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_29, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_30, 0) = ((MR_Box) (PredSpec_29));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
            }
            Var_37 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_31, 0) = ((MR_Box) (PredMarkerInfo_30));
              MR_hl_field(MR_mktag(0), PragmaInfo_31, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), PragmaInfo_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_31)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_32);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_32, PredSpec_29, (MR_String) "");
          }
          break;
        case (MR_Integer) 27:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 26:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 25:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 24:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 8:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 3:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 13:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 14:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 22:
          {
            MR_Word PredSpec_46;
            MR_Word PredMarkerInfo_47;
            MR_Word PragmaInfo_48;
            MR_String MarkerName_49;
            MR_Word Var_50;

            {
              PredSpec_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_46, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_46, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_47, 0) = ((MR_Box) (PredSpec_46));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
            }
            Var_50 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_48, 0) = ((MR_Box) (PredMarkerInfo_47));
              MR_hl_field(MR_mktag(0), PragmaInfo_48, 1) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), PragmaInfo_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_48)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_49);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_49, PredSpec_46, (MR_String) "");
          }
          break;
        case (MR_Integer) 23:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 12:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 5:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 4:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 17:
          {
            MR_Word PredSpec_55;
            MR_Word PredMarkerInfo_56;
            MR_Word PragmaInfo_57;
            MR_String MarkerName_58;
            MR_Word Var_59;

            {
              PredSpec_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_55, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_55, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_55, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_56, 0) = ((MR_Box) (PredSpec_55));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_56, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
            }
            Var_59 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_57, 0) = ((MR_Box) (PredMarkerInfo_56));
              MR_hl_field(MR_mktag(0), PragmaInfo_57, 1) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), PragmaInfo_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_57)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_58);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_58, PredSpec_55, (MR_String) "");
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word PredSpec_64;
            MR_Word PredMarkerInfo_65;
            MR_Word PragmaInfo_66;
            MR_String MarkerName_67;
            MR_Word Var_68;

            {
              PredSpec_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_64, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_64, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_64, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_65, 0) = ((MR_Box) (PredSpec_64));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_65, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            }
            Var_68 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_66, 0) = ((MR_Box) (PredMarkerInfo_65));
              MR_hl_field(MR_mktag(0), PragmaInfo_66, 1) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), PragmaInfo_66, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_66)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_67);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_67, PredSpec_64, (MR_String) "");
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word PredSpec_73;
            MR_Word PredMarkerInfo_74;
            MR_Word PragmaInfo_75;
            MR_String MarkerName_76;
            MR_Word Var_77;

            {
              PredSpec_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_73, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_73, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_73, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_74, 0) = ((MR_Box) (PredSpec_73));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            }
            Var_77 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_75, 0) = ((MR_Box) (PredMarkerInfo_74));
              MR_hl_field(MR_mktag(0), PragmaInfo_75, 1) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), PragmaInfo_75, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_75)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_76);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_76, PredSpec_73, (MR_String) "");
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_PredMarkerPragmasCord_39_39 = STATE_VARIABLE_PredMarkerPragmasCord_0_6;
          break;
        case (MR_Integer) 18:
          {
            MR_Word PredSpec_82;
            MR_Word PredMarkerInfo_83;
            MR_Word PragmaInfo_84;
            MR_String MarkerName_85;
            MR_Word Var_86;

            {
              PredSpec_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_82, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_82, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_82, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_83, 0) = ((MR_Box) (PredSpec_82));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
            }
            Var_86 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_84, 0) = ((MR_Box) (PredMarkerInfo_83));
              MR_hl_field(MR_mktag(0), PragmaInfo_84, 1) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), PragmaInfo_84, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_84)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_85);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_85, PredSpec_82, (MR_String) "");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word PredSpec_91;
            MR_Word PredMarkerInfo_92;
            MR_Word PragmaInfo_93;
            MR_String MarkerName_94;
            MR_Word Var_95;

            {
              PredSpec_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_91, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_91, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_91, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_92, 0) = ((MR_Box) (PredSpec_91));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_92, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            Var_95 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_93 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_93, 0) = ((MR_Box) (PredMarkerInfo_92));
              MR_hl_field(MR_mktag(0), PragmaInfo_93, 1) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(0), PragmaInfo_93, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_93)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_94);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_94, PredSpec_91, (MR_String) "");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word PredSpec_100;
            MR_Word PredMarkerInfo_101;
            MR_Word PragmaInfo_102;
            MR_String MarkerName_103;
            MR_Word Var_104;

            {
              PredSpec_100 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredSpec_100, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
              MR_hl_field(MR_mktag(0), PredSpec_100, 1) = ((MR_Box) (PredSymName_3));
              MR_hl_field(MR_mktag(0), PredSpec_100, 2) = ((MR_Box) (UserArity_4));
            }
            {
              PredMarkerInfo_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_101, 0) = ((MR_Box) (PredSpec_100));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_101, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            Var_104 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_102 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_102, 0) = ((MR_Box) (PredMarkerInfo_101));
              MR_hl_field(MR_mktag(0), PragmaInfo_102, 1) = ((MR_Box) (Var_104));
              MR_hl_field(MR_mktag(0), PragmaInfo_102, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), ((MR_Box) (PragmaInfo_102)), STATE_VARIABLE_PredMarkerPragmasCord_0_6, &STATE_VARIABLE_PredMarkerPragmasCord_39_39);
            hlds__hlds_pred__marker_name_2_p_0(Marker_24, &MarkerName_103);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_pred_pf_name_arity_6_p_0(Stream_1, MarkerName_103, PredSpec_100, (MR_String) "");
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Markers_25;
      next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_6 = STATE_VARIABLE_PredMarkerPragmasCord_39_39;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_PredMarkerPragmasCord_0_6 = next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_valid_modes_6_p_0(
  MR_Word Stream_1,
  MR_Word PredOrFunc_2,
  MR_Word PredSymName_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProcIdInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIdInfos_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ProcInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcIdInfo_16, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_20);
      if (succeeded)
      {
        MR_Word MaybeArgModes_32;
        MR_Word MaybeDetism_33;
        MR_Word ArgModes_36;
        MR_Word Detism_37;
        MR_Word Varset_38;
        MR_Word ArgModesPrime_34;
        MR_Word DetismPrime_35;

        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_20, &MaybeArgModes_32);
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_20, &MaybeDetism_33);
        succeeded = (MaybeArgModes_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgModesPrime_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_32, (MR_Integer) 0))));
          succeeded = (MaybeDetism_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            DetismPrime_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_33, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          ArgModes_36 = ArgModesPrime_34;
          Detism_37 = DetismPrime_35;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_mode\'/6", (MR_String) "attempt to write undeclared mode");
            return;
          }
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &Varset_38);
        switch (PredOrFunc_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgModes_39;
              MR_Word FuncRetMode_40;
              MR_Word Var_48;
              MR_Box conv0_FuncRetMode_40;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_36, &FuncArgModes_39, &conv0_FuncRetMode_40);
              FuncRetMode_40 = ((MR_Word) (conv0_FuncRetMode_40));
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Detism_37));
              }
              parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(Stream_1, (MR_Integer) 0, Varset_38, PredSymName_3, FuncArgModes_39, FuncRetMode_40, Var_48);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Detism_37));
              }
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(Stream_1, (MR_Integer) 0, Varset_38, PredSymName_3, ArgModes_36, (MR_Word) ((MR_Unsigned) 0U), Var_45);
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIdInfos_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstancesCord_30;

    transform_hlds__intermod__intermod_write_instance_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstancesCord_30);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstancesCord_30));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word InstanceDefns_9,
  MR_Word * Instances_10)
{
  {
    MR_Word SortedInstanceDefns_14;
    MR_Word InstancesCord_15;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv2_InstancesCord_15;
    MR_Box conv1_STATE_VARIABLE_IO_17;

    if (!((InstanceDefns_9 == (MR_Word) ((MR_Unsigned) 0U))))
      mercury__io__nl_3_p_0(Stream_8);
    mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[4]), InstanceDefns_9, &SortedInstanceDefns_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (OutInfo_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Stream_8));
    }
    Var_20 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    mercury__list__foldl2_6_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_2[4]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[16]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, SortedInstanceDefns_14, ((MR_Box) (Var_20)), &conv2_InstancesCord_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
    InstancesCord_15 = ((MR_Word) (conv2_InstancesCord_15));
    *Instances_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), InstancesCord_15);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeClassesCord_39;
    MR_Word conv0_STATE_VARIABLE_First_41;

    transform_hlds__intermod__intermod_write_class_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TypeClassesCord_39, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_41);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TypeClassesCord_39));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_41));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word * TypeClasses_10)
{
  {
    MR_Word ModuleName_12;
    MR_Word ClassDefnMap_13;
    MR_Word TypeClassesCord_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv4_TypeClassesCord_14;
    MR_Box conv3_Var_15;
    MR_Box conv2_STATE_VARIABLE_IO_17;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &ModuleName_12);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_9, &ClassDefnMap_13);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (OutInfo_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ModuleName_12));
    }
    Var_19 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    mercury__map__foldl3_8_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[14]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, ClassDefnMap_13, ((MR_Box) (Var_19)), &conv4_TypeClassesCord_14, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_17);
    TypeClassesCord_14 = ((MR_Word) (conv4_TypeClassesCord_14));
    *TypeClasses_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), TypeClassesCord_14);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModeDefnsCord_33;
    MR_Word conv0_STATE_VARIABLE_First_35;

    transform_hlds__intermod__intermod_write_mode_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ModeDefnsCord_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_35);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ModeDefnsCord_33));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_35));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word * ModeDefns_10)
{
  {
    MR_Word ModuleName_12;
    MR_Word Modes_13;
    MR_Word ModeDefnMap_14;
    MR_Word ModeDefnsCord_15;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv4_ModeDefnsCord_15;
    MR_Box conv3_Var_16;
    MR_Box conv2_STATE_VARIABLE_IO_18;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &ModuleName_12);
    hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_9, &Modes_13);
    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(Modes_13, &ModeDefnMap_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (OutInfo_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (ModuleName_12));
    }
    Var_20 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]));
    mercury__map__foldl3_8_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, ModeDefnMap_14, ((MR_Box) (Var_20)), &conv4_ModeDefnsCord_15, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
    ModeDefnsCord_15 = ((MR_Word) (conv4_ModeDefnsCord_15));
    *ModeDefns_10 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), ModeDefnsCord_15);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_InstDefnsCord_36;
    MR_Word conv0_STATE_VARIABLE_First_38;

    transform_hlds__intermod__intermod_write_inst_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InstDefnsCord_36, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_38);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InstDefnsCord_36));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_38));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word * InstDefns_10)
{
  {
    MR_Word ModuleName_12;
    MR_Word Insts_13;
    MR_Word UserInstMap_14;
    MR_Word InstDefnsCord_15;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv4_InstDefnsCord_15;
    MR_Box conv3_Var_16;
    MR_Box conv2_STATE_VARIABLE_IO_18;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &ModuleName_12);
    hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_9, &Insts_13);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(Insts_13, &UserInstMap_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (OutInfo_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (ModuleName_12));
    }
    Var_20 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]));
    mercury__map__foldl3_8_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[11]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, UserInstMap_14, ((MR_Box) (Var_20)), &conv4_InstDefnsCord_15, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
    InstDefnsCord_15 = ((MR_Word) (conv4_InstDefnsCord_15));
    *InstDefns_10 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), InstDefnsCord_15);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_7_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TypeDefnsCord_93;
    MR_Word conv0_STATE_VARIABLE_ForeignEnumsCord_95;

    transform_hlds__intermod__intermod_write_type_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeDefnsCord_93, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ForeignEnumsCord_95);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeDefnsCord_93));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumsCord_95));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_7_p_0(
  MR_Word OutInfo_8,
  MR_Word Stream_9,
  MR_Word Types_10,
  MR_Word * TypeDefns_11,
  MR_Word * ForeignEnums_12)
{
  {
    MR_Word SortedTypes_16;
    MR_Word TypeDefnsCord_17;
    MR_Word ForeignEnumsCord_18;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Box conv4_TypeDefnsCord_17;
    MR_Box conv3_ForeignEnumsCord_18;
    MR_Box conv2_STATE_VARIABLE_IO_20;

    if (!((Types_10 == (MR_Word) ((MR_Unsigned) 0U))))
      mercury__io__nl_3_p_0(Stream_9);
    mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[2]), Types_10, &SortedTypes_16);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_types_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (OutInfo_8));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Stream_9));
    }
    Var_23 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[6]));
    Var_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_2[2]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[7]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[8]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, SortedTypes_16, ((MR_Box) (Var_23)), &conv4_TypeDefnsCord_17, ((MR_Box) (Var_24)), &conv3_ForeignEnumsCord_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20);
    TypeDefnsCord_17 = ((MR_Word) (conv4_TypeDefnsCord_17));
    ForeignEnumsCord_18 = ((MR_Word) (conv3_ForeignEnumsCord_18));
    *TypeDefns_11 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), TypeDefnsCord_17);
    *ForeignEnums_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsCord_18);
  }
}

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word TypeDefn_4;
      MR_Word TypeCtorDefns_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeStatus_7;
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_11;

      TypeDefn_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_4, &TypeStatus_7);
      Var_11 = (MR_Word) (TypeStatus_7);
      if ((Var_11 == (MR_Word) ((MR_Unsigned) 20U)))
        succeeded = MR_TRUE;
      else
      if ((Var_11 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = TypeCtorDefns_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__decide_what_to_opt_export_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_15)
{
  {
    MR_Word Globals_5;
    MR_Word OptTuple_6;
    MR_Integer InlineSimpleThreshold_7;
    MR_Integer HigherOrderSizeLimit_8;
    MR_Word Deforest_9;
    MR_Word RealPredIds_10;
    MR_Word AssertionTable_11;
    MR_Word AssertPredIds_12;
    MR_Word PredIds_13;
    MR_Word Params_14;
    MR_Word STATE_VARIABLE_IntermodInfo_18_18;
    MR_Word STATE_VARIABLE_IntermodInfo_19_19;
    MR_Word STATE_VARIABLE_IntermodInfo_20_20;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
    libs__globals__get_opt_tuple_2_p_0(Globals_5, &OptTuple_6);
    Deforest_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_6, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
    InlineSimpleThreshold_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_6, (MR_Integer) 7))));
    HigherOrderSizeLimit_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_6, (MR_Integer) 17))));
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &RealPredIds_10);
    hlds__hlds_module__module_info_get_assertion_table_2_p_0(ModuleInfo_3, &AssertionTable_11);
    hlds__hlds_promise__assertion_table_pred_ids_2_p_0(AssertionTable_11, &AssertPredIds_12);
    PredIds_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AssertPredIds_12, RealPredIds_10);
    {
      Params_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_14, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Deforest_9)))));
      MR_hl_field(MR_mktag(0), Params_14, 1) = ((MR_Box) (InlineSimpleThreshold_7));
      MR_hl_field(MR_mktag(0), Params_14, 2) = ((MR_Box) (HigherOrderSizeLimit_8));
    }
    transform_hlds__intermod__init_intermod_info_2_p_0(ModuleInfo_3, &STATE_VARIABLE_IntermodInfo_18_18);
    transform_hlds__intermod__gather_opt_export_preds_4_p_0(Params_14, PredIds_13, STATE_VARIABLE_IntermodInfo_18_18, &STATE_VARIABLE_IntermodInfo_19_19);
    transform_hlds__intermod__gather_opt_export_instances_2_p_0(STATE_VARIABLE_IntermodInfo_19_19, &STATE_VARIABLE_IntermodInfo_20_20);
    transform_hlds__intermod__gather_opt_export_types_2_p_0(STATE_VARIABLE_IntermodInfo_20_20, STATE_VARIABLE_IntermodInfo_15);
  }
}

static void MR_CALL 
transform_hlds__intermod__init_intermod_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * IntermodInfo_4)
{
  {
    MR_Word Modules_5;
    MR_Word PredDecls_6;
    MR_Word PredDefns_7;

    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Modules_5);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &PredDecls_6);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &PredDefns_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *IntermodInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Modules_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PredDecls_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredDefns_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_31;

    transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IntermodInfo_31);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_31));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word ModuleInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
    MR_Word TypeTable_5;
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_7;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_5);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[8]), TypeTable_5, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_6)), &conv1_STATE_VARIABLE_IntermodInfo_7);
    *STATE_VARIABLE_IntermodInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_7));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_11;

    transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IntermodInfo_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_11));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word ModuleInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
    MR_Word Instances_5;
    MR_Word Var_8;
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_7;

    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_4, &Instances_5);
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (transform_hlds__intermod__gather_opt_export_instances_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[0]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), Var_8, Instances_5, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_6)), &conv1_STATE_VARIABLE_IntermodInfo_7);
    *STATE_VARIABLE_IntermodInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_7));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_4_p_0(
  MR_Word Params0_5,
  MR_Word AllPredIds_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word Params_8;
    MR_Word ExtraExportedPreds0_9;
    MR_Word STATE_VARIABLE_IntermodInfo_12_12;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Unsigned packed_word_0;

    transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0(Params0_5, AllPredIds_6, STATE_VARIABLE_IntermodInfo_0_10, &STATE_VARIABLE_IntermodInfo_12_12);
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params0_5, (MR_Integer) 0)));
    Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params0_5, (MR_Integer) 1))));
    Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params0_5, (MR_Integer) 2))));
    {
      Params_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_8, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
      MR_hl_field(MR_mktag(0), Params_8, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Params_8, 2) = ((MR_Box) (Var_19));
    }
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &ExtraExportedPreds0_9);
    transform_hlds__intermod__gather_opt_export_preds_fixpoint_4_p_0(Params_8, ExtraExportedPreds0_9, STATE_VARIABLE_IntermodInfo_12_12, STATE_VARIABLE_IntermodInfo_11);
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_fixpoint_4_p_0(
  MR_Word Params_5,
  MR_Word ExtraExportedPreds0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_12,
  MR_Word * STATE_VARIABLE_IntermodInfo_13)
{
  while (MR_TRUE)
  {
    MR_Word ExtraExportedPreds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_12, (MR_Integer) 2))));
    MR_Word NewlyExportedPreds_9;
    MR_Word Var_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_14 = mercury__set__difference_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExtraExportedPreds_8, ExtraExportedPreds0_6);
    NewlyExportedPreds_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_14);
    if ((NewlyExportedPreds_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntermodInfo_13 = STATE_VARIABLE_IntermodInfo_0_12;
    else
    {
      MR_Word STATE_VARIABLE_IntermodInfo_15_15;
      MR_Word next_value_of_ExtraExportedPreds0_6;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_12;

      transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0(Params_5, NewlyExportedPreds_9, STATE_VARIABLE_IntermodInfo_0_12, &STATE_VARIABLE_IntermodInfo_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_ExtraExportedPreds0_6 = ExtraExportedPreds_8;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_12 = STATE_VARIABLE_IntermodInfo_15_15;
      ExtraExportedPreds0_6 = next_value_of_ExtraExportedPreds0_6;
      STATE_VARIABLE_IntermodInfo_0_12 = next_value_of_STATE_VARIABLE_IntermodInfo_0_12;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__proc_eval_method_is_normal_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_preds_in_list_4_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_3, (MR_Integer) 0))));
      MR_Word PredTable_14;
      MR_Word PredInfo_15;
      MR_Word TypeSpecInfo_16;
      MR_Word TypeSpecForcePreds_18;
      MR_Word ClausesInfo_21;
      MR_Word STATE_VARIABLE_IntermodInfo_37_37;
      MR_Box conv0_PredInfo_15;
      MR_Word ExplicitVarTypes_22;
      MR_Word ProcessLocalPreds_54;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3;

      hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_13, &PredTable_14);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_14, ((MR_Box) (PredId_10)), &conv0_PredInfo_15);
      PredInfo_15 = ((MR_Word) (conv0_PredInfo_15));
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_13, &TypeSpecInfo_16);
      TypeSpecForcePreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 1))));
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_15, &ClausesInfo_21);
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(ClausesInfo_21, &ExplicitVarTypes_22);
      succeeded = hlds__vartypes__vartypes_is_empty_1_p_0(ExplicitVarTypes_22);
      if (succeeded)
      {
        ProcessLocalPreds_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        switch (ProcessLocalPreds_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_15);
              if (!(succeeded))
                succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_15);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_62;

              hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_15, &Var_62);
              succeeded = hlds__status____Unify____pred_status_0_0((MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Var_62);
            }
            break;
        }
        if (succeeded)
        {
          {
            MR_Word Var_55;

            succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_15, &Var_55);
          }
          if (!(succeeded))
          {
            MR_Word TypeCtorInfo_16_76;
            MR_Word TypeCtorInfo_17_77;
            MR_Word Markers_67;
            MR_Word ProcTable_68;
            MR_Word ProcInfos_69;
            MR_Word Var_74;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word TypeCtorInfo_15_75;
            MR_Word Var_73;

            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &Markers_67);
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_67, (MR_Integer) 10);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_71 = (MR_Integer) 11;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_67, Var_71);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_72 = (MR_Integer) 0;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_67, Var_72);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_15);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_15);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      TypeCtorInfo_15_75 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
                      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_15_75, ((MR_Box) (PredId_10)), TypeSpecForcePreds_18);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        Var_73 = (MR_Integer) 7;
                        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_67, Var_73);
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_68);
                          TypeCtorInfo_16_76 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
                          TypeCtorInfo_17_77 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
                          mercury__map__values_2_p_0(TypeCtorInfo_16_76, TypeCtorInfo_17_77, ProcTable_68, &ProcInfos_69);
                          Var_74 = (MR_Word) (&transform_hlds__intermod_scalar_common_2[7]);
                          succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_17_77, Var_74, ProcInfos_69);
                          if (succeeded)
                            succeeded = transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0(Params_1, ModuleInfo_13, PredId_10, PredInfo_15);
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
        MR_Word ClausesRep_25;
        MR_Word _ItemNumbers_26;
        MR_Word Var_85;

        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_21, &ClausesRep_25, &_ItemNumbers_26);
        Var_85 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_10, Var_85);
        if (succeeded)
          STATE_VARIABLE_IntermodInfo_37_37 = STATE_VARIABLE_IntermodInfo_0_3;
        else
        {
          MR_Word MayOptExportPred0_99;
          MR_Word STATE_VARIABLE_IntermodInfo_33_100;

          transform_hlds__intermod__intermod_do_add_pred_4_p_0(PredId_10, &MayOptExportPred0_99, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_33_100);
          switch (MayOptExportPred0_99) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_IntermodInfo_37_37 = STATE_VARIABLE_IntermodInfo_0_3;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Clauses_27;
                MR_Word MayOptExportPred_103;
                MR_Word STATE_VARIABLE_IntermodInfo_34_104;

                hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep_25, &Clauses_27);
                transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_4_p_0(Clauses_27, &MayOptExportPred_103, STATE_VARIABLE_IntermodInfo_33_100, &STATE_VARIABLE_IntermodInfo_34_104);
                switch (MayOptExportPred_103) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_IntermodInfo_37_37 = STATE_VARIABLE_IntermodInfo_0_3;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredDefns0_29;
                      MR_Word PredDefns_30;
                      MR_Word STATE_VARIABLE_IntermodInfo_36_36;

                      succeeded = hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(PredInfo_15);
                      if (succeeded)
                      {
                        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_104, (MR_Integer) 0))));
                        MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_104, (MR_Integer) 1))));
                        MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_104, (MR_Integer) 2))));
                        MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_104, (MR_Integer) 3))));
                        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_104, (MR_Integer) 4))));
                        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_104, (MR_Integer) 5))));

                        {
                          STATE_VARIABLE_IntermodInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 0) = ((MR_Box) (Var_92));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 1) = ((MR_Box) (Var_93));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 2) = ((MR_Box) (Var_94));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 3) = ((MR_Box) (Var_95));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 4) = ((MR_Box) (Var_96));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 5) = ((MR_Box) (Var_97));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        }
                      }
                      else
                        STATE_VARIABLE_IntermodInfo_36_36 = STATE_VARIABLE_IntermodInfo_34_104;
                      transform_hlds__intermod__intermod_info_get_pred_defns_2_p_0(STATE_VARIABLE_IntermodInfo_36_36, &PredDefns0_29);
                      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_10)), PredDefns0_29, &PredDefns_30);
                      transform_hlds__intermod__intermod_info_set_pred_defns_3_p_0(PredDefns_30, STATE_VARIABLE_IntermodInfo_36_36, &STATE_VARIABLE_IntermodInfo_37_37);
                    }
                    break;
                }
              }
              break;
          }
        }
      }
      else
        STATE_VARIABLE_IntermodInfo_37_37 = STATE_VARIABLE_IntermodInfo_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_37_37;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_pred_defns_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_15));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_get_pred_defns_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 3))));
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    }
    else
    {
      MR_Word Clause_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Clauses_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MayOptExportPred1_12;
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_IntermodInfo_16_16;
      MR_Word GoalExpr_23;

      Var_15 = hlds__hlds_clauses__clause_body_1_f_0(Clause_8);
      GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(GoalExpr_23, &MayOptExportPred1_12, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
      switch (MayOptExportPred1_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_16_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Clauses_9;
            MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_16_16;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word tscc_proc_2_input_1_GoalExpr_5;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
    MR_Word tscc_proc_3_input_1_RHS_5;
    MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
    MR_Word tscc_output_1_MayOptExportPred_6;
    MR_Word tscc_output_2_STATE_VARIABLE_IntermodInfo_11;

    // The code for TSCC PROC 1: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal/4-0
    ;
    // proc 2 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr/4-0
    ;
    // proc 3 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_unify_rhs/4-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
      MR_Word STATE_VARIABLE_IntermodInfo_11;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_8;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
      tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      goto top_of_proc_2;
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_5 = tscc_proc_2_input_1_GoalExpr_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_72 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      MR_Word STATE_VARIABLE_IntermodInfo_73;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_55 = (MR_Word) ((MR_Word) (GoalExpr_5));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_55;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_RHS_5 = RHS_9;
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_5 = next_value_of_tscc_proc_3_input_1_RHS_5;
            tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));

            transform_hlds__intermod__intermod_add_pred_4_p_0(PredId_13, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CallType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) CallType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MayOptExportPred_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    MayOptExportPred_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    MayOptExportPred_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word CastType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CallType_19, (MR_Integer) 0))) & (MR_Integer) 7);

                      MayOptExportPred_6 = ((&transform_hlds__intermod_vector_common_5[0 + CastType_33]))->transform_hlds__intermod__vector_common_type_5_0__vct_5_f_0;
                    }
                    break;
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_41;
                MR_Word MaybeMayExportBody_42;

                MaybeMayDuplicate_41 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_34);
                MaybeMayExportBody_42 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_34);
                {
                  MR_Word Var_87;

                  succeeded = (MaybeMayDuplicate_41 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_41, (MR_Integer) 0))));
                    succeeded = (Var_87 == (MR_Integer) 1);
                  }
                }
                if (!(succeeded))
                {
                  MR_Word Var_86;

                  succeeded = (MaybeMayExportBody_42 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayExportBody_42, (MR_Integer) 0))));
                    succeeded = (Var_86 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  MayOptExportPred_6 = (MR_Integer) 0;
                else
                  MayOptExportPred_6 = (MR_Integer) 1;
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_44, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_90, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(Cases_47, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_91;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_72;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word Then_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
                MR_Word Else_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
                MR_Word MayOptExportPredCond_52;
                MR_Word MayOptExportPredThen_53;
                MR_Word MayOptExportPredElse_54;
                MR_Word STATE_VARIABLE_IntermodInfo_80_80;
                MR_Word STATE_VARIABLE_IntermodInfo_81_81;

                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Cond_49, &MayOptExportPredCond_52, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_80_80);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Then_50, &MayOptExportPredThen_53, STATE_VARIABLE_IntermodInfo_80_80, &STATE_VARIABLE_IntermodInfo_81_81);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Else_51, &MayOptExportPredElse_54, STATE_VARIABLE_IntermodInfo_81_81, &STATE_VARIABLE_IntermodInfo_73);
                succeeded = (MayOptExportPredCond_52 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MayOptExportPredThen_53 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (MayOptExportPredElse_54 == (MR_Integer) 1);
                }
                if (succeeded)
                  MayOptExportPred_6 = (MR_Integer) 1;
                else
                  MayOptExportPred_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_57)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_57, (MR_Integer) 4))));
                      MR_Word OrElseGoals_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_57, (MR_Integer) 5))));
                      MR_Word MayOptExportPredMain_65;
                      MR_Word MayOptExportPredOrElse_66;
                      MR_Word STATE_VARIABLE_IntermodInfo_76_76;

                      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_62, &MayOptExportPredMain_65, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_76_76);
                      transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_63, &MayOptExportPredOrElse_66, STATE_VARIABLE_IntermodInfo_76_76, &STATE_VARIABLE_IntermodInfo_73);
                      succeeded = (MayOptExportPredMain_65 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredOrElse_66 == (MR_Integer) 1);
                      if (succeeded)
                        MayOptExportPred_6 = (MR_Integer) 1;
                      else
                        MayOptExportPred_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MayOptExportPred_6 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_73;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_5 = tscc_proc_3_input_1_RHS_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_24 = tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
      MR_Word STATE_VARIABLE_IntermodInfo_25;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MayOptExportPred_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_5, (MR_Integer) 0))));
            MR_Word ShroudedPredProcId_20;

            succeeded = ((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_17, (MR_Integer) 1))));
              {
                MR_Word PredId_22;
                MR_Word Var_26;
                MR_Word Var_35;

                Var_26 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_20);
                PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
                Var_35 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_35);
                if (succeeded)
                {
                  MayOptExportPred_6 = (MR_Integer) 0;
                  STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                }
                else
                  transform_hlds__intermod__intermod_do_add_pred_4_p_0(PredId_22, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
              }
            }
            else
            {
              MayOptExportPred_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_5, (MR_Integer) 5))));
            MR_Word GoalExpr_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_42;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
            tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_25;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_MayOptExportPred_6 = tscc_output_1_MayOptExportPred_6;
    *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
    return;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_5;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
    MR_Word tscc_proc_3_input_1_RHS_5;
    MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
    MR_Word tscc_output_1_MayOptExportPred_6;
    MR_Word tscc_output_2_STATE_VARIABLE_IntermodInfo_11;

    // The code for TSCC PROC 2: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal/4-0
    ;
    // proc 2 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr/4-0
    ;
    // proc 3 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_unify_rhs/4-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
      MR_Word STATE_VARIABLE_IntermodInfo_11;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_8;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
      tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      goto top_of_proc_2;
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_5 = tscc_proc_2_input_1_GoalExpr_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_72 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      MR_Word STATE_VARIABLE_IntermodInfo_73;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_55 = (MR_Word) ((MR_Word) (GoalExpr_5));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_55;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_RHS_5 = RHS_9;
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_5 = next_value_of_tscc_proc_3_input_1_RHS_5;
            tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));

            transform_hlds__intermod__intermod_add_pred_4_p_0(PredId_13, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CallType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) CallType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MayOptExportPred_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    MayOptExportPred_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    MayOptExportPred_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word CastType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CallType_19, (MR_Integer) 0))) & (MR_Integer) 7);

                      MayOptExportPred_6 = ((&transform_hlds__intermod_vector_common_5[0 + CastType_33]))->transform_hlds__intermod__vector_common_type_5_0__vct_5_f_0;
                    }
                    break;
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_41;
                MR_Word MaybeMayExportBody_42;

                MaybeMayDuplicate_41 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_34);
                MaybeMayExportBody_42 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_34);
                {
                  MR_Word Var_87;

                  succeeded = (MaybeMayDuplicate_41 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_41, (MR_Integer) 0))));
                    succeeded = (Var_87 == (MR_Integer) 1);
                  }
                }
                if (!(succeeded))
                {
                  MR_Word Var_86;

                  succeeded = (MaybeMayExportBody_42 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayExportBody_42, (MR_Integer) 0))));
                    succeeded = (Var_86 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  MayOptExportPred_6 = (MR_Integer) 0;
                else
                  MayOptExportPred_6 = (MR_Integer) 1;
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_44, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_90, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(Cases_47, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_91;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_72;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word Then_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
                MR_Word Else_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
                MR_Word MayOptExportPredCond_52;
                MR_Word MayOptExportPredThen_53;
                MR_Word MayOptExportPredElse_54;
                MR_Word STATE_VARIABLE_IntermodInfo_80_80;
                MR_Word STATE_VARIABLE_IntermodInfo_81_81;

                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Cond_49, &MayOptExportPredCond_52, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_80_80);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Then_50, &MayOptExportPredThen_53, STATE_VARIABLE_IntermodInfo_80_80, &STATE_VARIABLE_IntermodInfo_81_81);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Else_51, &MayOptExportPredElse_54, STATE_VARIABLE_IntermodInfo_81_81, &STATE_VARIABLE_IntermodInfo_73);
                succeeded = (MayOptExportPredCond_52 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MayOptExportPredThen_53 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (MayOptExportPredElse_54 == (MR_Integer) 1);
                }
                if (succeeded)
                  MayOptExportPred_6 = (MR_Integer) 1;
                else
                  MayOptExportPred_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_57)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_57, (MR_Integer) 4))));
                      MR_Word OrElseGoals_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_57, (MR_Integer) 5))));
                      MR_Word MayOptExportPredMain_65;
                      MR_Word MayOptExportPredOrElse_66;
                      MR_Word STATE_VARIABLE_IntermodInfo_76_76;

                      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_62, &MayOptExportPredMain_65, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_76_76);
                      transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_63, &MayOptExportPredOrElse_66, STATE_VARIABLE_IntermodInfo_76_76, &STATE_VARIABLE_IntermodInfo_73);
                      succeeded = (MayOptExportPredMain_65 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredOrElse_66 == (MR_Integer) 1);
                      if (succeeded)
                        MayOptExportPred_6 = (MR_Integer) 1;
                      else
                        MayOptExportPred_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MayOptExportPred_6 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_73;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_5 = tscc_proc_3_input_1_RHS_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_24 = tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
      MR_Word STATE_VARIABLE_IntermodInfo_25;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MayOptExportPred_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_5, (MR_Integer) 0))));
            MR_Word ShroudedPredProcId_20;

            succeeded = ((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_17, (MR_Integer) 1))));
              {
                MR_Word PredId_22;
                MR_Word Var_26;
                MR_Word Var_35;

                Var_26 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_20);
                PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
                Var_35 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_35);
                if (succeeded)
                {
                  MayOptExportPred_6 = (MR_Integer) 0;
                  STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                }
                else
                  transform_hlds__intermod__intermod_do_add_pred_4_p_0(PredId_22, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
              }
            }
            else
            {
              MayOptExportPred_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_5, (MR_Integer) 5))));
            MR_Word GoalExpr_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_42;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
            tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_25;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_MayOptExportPred_6 = tscc_output_1_MayOptExportPred_6;
    *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
    return;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_unify_rhs_4_p_0(
  MR_Word tscc_proc_3_input_1_RHS_5,
  MR_Word * tscc_output_ptr_1_MayOptExportPred_6,
  MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_5;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
    MR_Word tscc_proc_2_input_1_GoalExpr_5;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
    MR_Word tscc_output_1_MayOptExportPred_6;
    MR_Word tscc_output_2_STATE_VARIABLE_IntermodInfo_11;

    // The code for TSCC PROC 3: pred transform_hlds.intermod.gather_entities_to_opt_export_in_unify_rhs/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal/4-0
    ;
    // proc 2 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr/4-0
    ;
    // proc 3 in TSCC: pred transform_hlds.intermod.gather_entities_to_opt_export_in_unify_rhs/4-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
      MR_Word STATE_VARIABLE_IntermodInfo_11;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_8;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
      tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      goto top_of_proc_2;
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_5 = tscc_proc_2_input_1_GoalExpr_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_72 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      MR_Word STATE_VARIABLE_IntermodInfo_73;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_55 = (MR_Word) ((MR_Word) (GoalExpr_5));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_55;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_RHS_5 = RHS_9;
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_5 = next_value_of_tscc_proc_3_input_1_RHS_5;
            tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));

            transform_hlds__intermod__intermod_add_pred_4_p_0(PredId_13, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CallType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) CallType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    MayOptExportPred_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    MayOptExportPred_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    MayOptExportPred_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word CastType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CallType_19, (MR_Integer) 0))) & (MR_Integer) 7);

                      MayOptExportPred_6 = ((&transform_hlds__intermod_vector_common_5[0 + CastType_33]))->transform_hlds__intermod__vector_common_type_5_0__vct_5_f_0;
                    }
                    break;
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_41;
                MR_Word MaybeMayExportBody_42;

                MaybeMayDuplicate_41 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_34);
                MaybeMayExportBody_42 = parse_tree__prog_data_foreign__get_may_export_body_1_f_0(Attrs_34);
                {
                  MR_Word Var_87;

                  succeeded = (MaybeMayDuplicate_41 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_41, (MR_Integer) 0))));
                    succeeded = (Var_87 == (MR_Integer) 1);
                  }
                }
                if (!(succeeded))
                {
                  MR_Word Var_86;

                  succeeded = (MaybeMayExportBody_42 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayExportBody_42, (MR_Integer) 0))));
                    succeeded = (Var_86 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  MayOptExportPred_6 = (MR_Integer) 0;
                else
                  MayOptExportPred_6 = (MR_Integer) 1;
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_44, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_90, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(Cases_47, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_91;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = STATE_VARIABLE_IntermodInfo_0_72;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word Then_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
                MR_Word Else_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
                MR_Word MayOptExportPredCond_52;
                MR_Word MayOptExportPredThen_53;
                MR_Word MayOptExportPredElse_54;
                MR_Word STATE_VARIABLE_IntermodInfo_80_80;
                MR_Word STATE_VARIABLE_IntermodInfo_81_81;

                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Cond_49, &MayOptExportPredCond_52, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_80_80);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Then_50, &MayOptExportPredThen_53, STATE_VARIABLE_IntermodInfo_80_80, &STATE_VARIABLE_IntermodInfo_81_81);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Else_51, &MayOptExportPredElse_54, STATE_VARIABLE_IntermodInfo_81_81, &STATE_VARIABLE_IntermodInfo_73);
                succeeded = (MayOptExportPredCond_52 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MayOptExportPredThen_53 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (MayOptExportPredElse_54 == (MR_Integer) 1);
                }
                if (succeeded)
                  MayOptExportPred_6 = (MR_Integer) 1;
                else
                  MayOptExportPred_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_57)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr\'/4", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_57, (MR_Integer) 4))));
                      MR_Word OrElseGoals_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_57, (MR_Integer) 5))));
                      MR_Word MayOptExportPredMain_65;
                      MR_Word MayOptExportPredOrElse_66;
                      MR_Word STATE_VARIABLE_IntermodInfo_76_76;

                      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_62, &MayOptExportPredMain_65, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_76_76);
                      transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_63, &MayOptExportPredOrElse_66, STATE_VARIABLE_IntermodInfo_76_76, &STATE_VARIABLE_IntermodInfo_73);
                      succeeded = (MayOptExportPredMain_65 == (MR_Integer) 1);
                      if (succeeded)
                        succeeded = (MayOptExportPredOrElse_66 == (MR_Integer) 1);
                      if (succeeded)
                        MayOptExportPred_6 = (MR_Integer) 1;
                      else
                        MayOptExportPred_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MayOptExportPred_6 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_73;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_5 = tscc_proc_3_input_1_RHS_5;
      MR_Word MayOptExportPred_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_24 = tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_24;
      MR_Word STATE_VARIABLE_IntermodInfo_25;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MayOptExportPred_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_5, (MR_Integer) 0))));
            MR_Word ShroudedPredProcId_20;

            succeeded = ((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_17, (MR_Integer) 1))));
              {
                MR_Word PredId_22;
                MR_Word Var_26;
                MR_Word Var_35;

                Var_26 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_20);
                PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
                Var_35 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_35);
                if (succeeded)
                {
                  MayOptExportPred_6 = (MR_Integer) 0;
                  STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
                }
                else
                  transform_hlds__intermod__intermod_do_add_pred_4_p_0(PredId_22, &MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_24, &STATE_VARIABLE_IntermodInfo_25);
              }
            }
            else
            {
              MayOptExportPred_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_5, (MR_Integer) 5))));
            MR_Word GoalExpr_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_42;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
            tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_MayOptExportPred_6 = MayOptExportPred_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_25;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_MayOptExportPred_6 = tscc_output_1_MayOptExportPred_6;
    *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
    return;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    }
    else
    {
      MR_Word Case_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_8, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_MayOptExportPred_18_18;
      MR_Word STATE_VARIABLE_IntermodInfo_19_19;
      MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));

      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(GoalExpr_27, &STATE_VARIABLE_MayOptExportPred_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
      switch (STATE_VARIABLE_MayOptExportPred_18_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = STATE_VARIABLE_MayOptExportPred_18_18;
            *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_19_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_9;
            MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_0_3;
    }
    else
    {
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MayOptExportPred_15_15;
      MR_Word STATE_VARIABLE_IntermodInfo_16_16;
      MR_Word GoalExpr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));

      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(GoalExpr_24, &STATE_VARIABLE_MayOptExportPred_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
      switch (STATE_VARIABLE_MayOptExportPred_15_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = STATE_VARIABLE_MayOptExportPred_15_15;
            *STATE_VARIABLE_IntermodInfo_4 = STATE_VARIABLE_IntermodInfo_16_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Goals_9;
            MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_3 = STATE_VARIABLE_IntermodInfo_16_16;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_IntermodInfo_0_3 = next_value_of_STATE_VARIABLE_IntermodInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_add_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word * MayOptExportPred_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_11;

    Var_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_11);
    if (succeeded)
    {
      *MayOptExportPred_6 = (MR_Integer) 0;
      *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
    }
    else
      transform_hlds__intermod__intermod_do_add_pred_4_p_0(PredId_5, MayOptExportPred_6, STATE_VARIABLE_IntermodInfo_0_8, STATE_VARIABLE_IntermodInfo_9);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__ProcId_15 = ((MR_Integer) ((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__conv0_ProcId_15));
    transform_hlds__intermod__intermod_do_add_pred_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Box conv1_ProcInfo_16;

      (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_42_42 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
      mercury__map__lookup_3_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_41_41, (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_42_42, (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Procs_13, ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__ProcId_15)), &conv1_ProcInfo_16);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__ProcInfo_16 = ((MR_Word) (conv1_ProcInfo_16));
      (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Var_26 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__ProcInfo_16, &(env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Var_45);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeInfo_50_50 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[23]);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeInfo_50_50, ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Var_26)), ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Var_45)));
      if ((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
        transform_hlds__intermod__intermod_do_add_pred_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ProcIds_14;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9, &(env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__Procs_13);
          ProcIds_14 = hlds__hlds_pred__pred_info_all_procids_1_f_0((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9);
          (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
          mercury__list__member_2_p_1((env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__TypeCtorInfo_41_41, &(env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__conv0_ProcId_15, ProcIds_14, transform_hlds__intermod__intermod_do_add_pred_4_p_0_3, env_ptr);
        }
        (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_pred_4_p_0(
  MR_Word PredId_5,
  MR_Word * MayOptExportPred_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * STATE_VARIABLE_IntermodInfo_25)
{
  {
    struct transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0_s env;

    {
      MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0))));
      MR_Word PredStatus_10;
      MR_Word Markers_11;
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5))));
      MR_Word Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, PredId_5, &(env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9);
      hlds__hlds_pred__pred_info_get_status_2_p_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9, &PredStatus_10);
      hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9, &Markers_11);
      (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9);
      if (!((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded))
      {
        MR_Word Var_12;

        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9, &Var_12);
      }
      if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
      {
        *MayOptExportPred_6 = (MR_Integer) 1;
        *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
      }
      else
      {
        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 3);
        if (!((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded))
          transform_hlds__intermod__intermod_do_add_pred_4_p_0_4(&env);
        if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
        {
          *MayOptExportPred_6 = (MR_Integer) 0;
          *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
        }
        else
        {
          MR_Word Var_46;
          MR_Word Var_29;

          hlds__hlds_pred__pred_info_get_purity_2_p_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9, &Var_46);
          (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = ((MR_Integer) 2 == Var_46);
          if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
          {
            Var_29 = (MR_Integer) 23;
            (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, Var_29);
            (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = !((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded);
          }
          if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
          {
            *MayOptExportPred_6 = (MR_Integer) 0;
            *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
          else
          {
            MR_Word Var_48 = (MR_Word) (PredStatus_10);

            if ((Var_48 == (MR_Word) ((MR_Unsigned) 12U)))
              (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1))
            {
              MR_Word OldExternalStatus_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
              MR_Word Var_31;

              Var_31 = hlds__status__old_status_is_exported_1_f_0(OldExternalStatus_17);
              (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = (Var_31 == (MR_Integer) 1);
            }
            else
              (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
            if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
            {
              *MayOptExportPred_6 = (MR_Integer) 1;
              *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
            }
            else
            {
              MR_Word Var_33;
              MR_Word Var_47;

              hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9, &Var_47);
              (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[24]), ((MR_Box) (Markers_11)), ((MR_Box) (Var_47)));
              if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
              {
                Var_33 = (MR_Integer) 10;
                (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, Var_33);
              }
              if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
              {
                *MayOptExportPred_6 = (MR_Integer) 1;
                *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
              }
              else
              {
                MR_Word OldStatus_60 = (MR_Word) (PredStatus_10);

                switch (MR_tag((MR_Word) OldStatus_60)) {
                  default:
                    (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(OldStatus_60)) {
                      default:
                        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 4:
                        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 5:
                        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 7:
                        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 8:
                        (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Status_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_60, (MR_Integer) 0))));
                      MR_Word Var_63;
                      MR_Word Var_108;

                      Var_63 = hlds__status__old_status_is_exported_1_f_0(Status_62);
                      Var_108 = mercury__bool__not_1_f_0(Var_63);
                      (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = (Var_108 == (MR_Integer) 1);
                    }
                    break;
                }
                if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
                {
                  MR_Word PredDecls0_18;
                  MR_Word PredDecls_19;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Unsigned packed_word_1;
                  MR_Word Var_77;
                  MR_Word Var_78;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_79;
                  MR_Unsigned packed_word_2;

                  *MayOptExportPred_6 = (MR_Integer) 1;
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0))));
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1))));
                  PredDecls0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2))));
                  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3))));
                  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4))));
                  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5))));
                  packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));
                  Var_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6))) & (MR_Integer) 1);
                  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_5)), PredDecls0_18, &PredDecls_19);
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0))));
                  Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1))));
                  Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2))));
                  Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3))));
                  Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4))));
                  Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5))));
                  packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));
                  Var_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6))) & (MR_Integer) 1);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_IntermodInfo_25 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PredDecls_19));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_83));
                  }
                }
                else
                {
                  MR_Word Var_49 = (MR_Word) (PredStatus_10);

                  if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
                    (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                  if (((MR_tag((MR_Word) Var_49)) == (MR_Integer) 2))
                    (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                    (env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded = MR_FALSE;
                  if ((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__succeeded)
                  {
                    MR_Word PredModule_21;
                    MR_Word Modules0_22;
                    MR_Word Modules_23;
                    MR_Word Var_86;
                    MR_Word Var_87;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Unsigned packed_word_3;

                    *MayOptExportPred_6 = (MR_Integer) 1;
                    PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((env).transform_hlds__intermod__intermod_do_add_pred_4_p_0_env_0__PredInfo_9);
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0))));
                    Modules0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1))));
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2))));
                    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3))));
                    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4))));
                    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5))));
                    packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));
                    Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6))) & (MR_Integer) 1);
                    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (PredModule_21)), Modules0_22, &Modules_23);
                    transform_hlds__intermod__intermod_info_set_use_modules_3_p_0(Modules_23, STATE_VARIABLE_IntermodInfo_0_24, STATE_VARIABLE_IntermodInfo_25);
                  }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_do_add_pred\'/4", (MR_String) "unexpected status");
                      return;
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
transform_hlds__intermod__intermod_info_set_use_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_15));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__proc_has_a_higher_order_input_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clause1_65 = ((MR_Word) ((env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__conv1_Clause1_65));
    transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Goal1_56 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clause1_65);
    (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Goal1_56, (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__PredId_7);
    if ((env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
      transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__conv1_Clause1_65, (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12, transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_4, env_ptr);
        (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0(
  MR_Word Params_5,
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8)
{
  {
    struct transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0_s env;

    (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__PredId_7 = PredId_7;
    {
      MR_Word ClauseInfo_9;
      MR_Word ClausesRep_10;
      MR_Integer Arity_13;
      MR_Word _ItemNumbers_11;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_8, &ClauseInfo_9);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClauseInfo_9, &ClausesRep_10, &_ItemNumbers_11);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_10, &(env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12);
      Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_8);
      {
        MR_Integer Var_26;
        MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 1))));
        MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))));
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0)));

        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) Arity_13);
        (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12, Var_26);
      }
      if (!((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded))
      {
        (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(PredInfo_8);
        if (!((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded))
        {
          {
            MR_Word Markers_14;

            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_8, &Markers_14);
            (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_14, (MR_Integer) 23);
          }
          if (!((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded))
          {
            {
              MR_Integer GoalSize_15;
              MR_Integer Var_23;
              MR_Integer Var_24;
              MR_Word ProcTable_46;
              MR_Word ProcInfos_47;
              MR_Word Var_49;
              MR_Word _FirstProcInfoWithHoInput_48;
              MR_Box conv0__FirstProcInfoWithHoInput_48;
              MR_Word Var_32;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Integer Var_35;
              MR_Unsigned packed_word_1;

              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_46);
              mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_46, &ProcInfos_47);
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleInfo_6));
              }
              (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_49, ProcInfos_47, &conv0__FirstProcInfoWithHoInput_48);
              if ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
              {
                _FirstProcInfoWithHoInput_48 = ((MR_Word) (conv0__FirstProcInfoWithHoInput_48));
                (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = MR_TRUE;
              }
              if ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
              {
                hlds__goal_util__clause_list_size_2_p_0((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12, &GoalSize_15);
                packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0)));
                Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 1))));
                Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))));
                Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) Arity_13);
                (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = (GoalSize_15 <= Var_23);
              }
            }
            if (!((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded))
            {
              MR_Integer DeforestThreshold_16;
              MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Integer Var_18;
              MR_Integer Var_20;
              MR_Integer Var_21;
              MR_Integer Var_22;
              MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 1))));
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))));
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0)));

              (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = (Var_17 == (MR_Integer) 0);
              if ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
              {
                Var_20 = (MR_Integer) 2;
                Var_18 = (MR_Integer) ((MR_Unsigned) Var_38 * (MR_Unsigned) Var_20);
                Var_21 = (MR_Integer) 1;
                DeforestThreshold_16 = (MR_Integer) ((MR_Unsigned) Var_18 + (MR_Unsigned) Var_21);
                Var_22 = (MR_Integer) ((MR_Unsigned) DeforestThreshold_16 + (MR_Unsigned) Arity_13);
                (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12, Var_22);
                if ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
                {
                  transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_5(&env);
                  if ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
                  {
                    (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12 != (MR_Word) ((MR_Unsigned) 0U));
                    if ((env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded)
                    {
                      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12, (MR_Integer) 0))));
                      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__Clauses_12, (MR_Integer) 1))));
                      if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Goal2_61;
                        MR_Word GoalList_62;

                        Goal2_61 = hlds__hlds_clauses__clause_body_1_f_0(Var_68);
                        hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal2_61, &GoalList_62);
                        (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(GoalList_62, (MR_Integer) 0);
                      }
                      else
                        (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return (env).transform_hlds__intermod__opt_exporting_pred_is_likely_worthwhile_4_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4, (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8);
    if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
      transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0))));
          MR_Word GoalExpr_6;
          MR_Word Var_7;

          (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1))));
          GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
          Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));
          (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(GoalExpr_6);
          if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
            if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
            }
          }
          if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
            transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(env_ptr);
          {
            MR_Word Var_9;

            Var_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_6);
            (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = (Var_9 == (MR_Integer) 1);
            if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
            }
            if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
              transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(env_ptr);
          }
        }
        (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s env;

    (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 = HeadVar__2_2;
    if (((env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
    else
      transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(&env);
    return (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____intermod_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____intermod_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____intermod_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____intermod_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____may_opt_export_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____may_opt_export_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____may_opt_export_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____may_opt_export_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_collect_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_collect_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_collect_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_collect_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_process_local_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_process_local_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_process_local_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_process_local_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__intermod__init(void)
{
}

void mercury__transform_hlds__intermod__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_params_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_may_opt_export_pred_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_collect_types_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_need_foreign_import_modules_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_process_local_preds_0);
}

void mercury__transform_hlds__intermod__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod.
