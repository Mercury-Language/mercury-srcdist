/*
** Automatically generated from `intermod.m'
** by the Mercury compiler,
** version rotd-2020-04-18
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
#include "bag.mih"
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
#include "getopt_io.mih"
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
#include "std_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "transform_hlds.inlining.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s {
  MR_bool transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcIds_11;
  jmp_buf transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_41_41;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeInfo_50_50;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Procs_14;
  MR_Integer transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcId_15;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcInfo_16;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_26;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_45;
  MR_Box transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__conv0_ProcId_15;
};

struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s {
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10;
  MR_bool transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46;
  jmp_buf transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Goal1_70;
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clause1_79;
  MR_Box transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__conv1_Clause1_79;
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0;

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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__intermod____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

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

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_first_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_need_foreign_import_modules_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_need_foreign_import_modules_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_need_foreign_import_modules_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_should_write_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_should_write_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_should_write_0[2];

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_order_pred_info_0_0[5];

static const MR_DuArgLocn transform_hlds__intermod__transform_hlds__intermod__field_locns_order_pred_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_order_pred_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_order_pred_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_order_pred_info_0[1];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_order_pred_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_should_write_for_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_should_write_for_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_should_write_for_0[2];

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__3644__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__2859__1_2_p_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_16);

static MR_String MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__output_maybe_constr_arg_size_info__2825__1_2_f_0(
  MR_Word VarToVarIdMap_5,
  MR_Word LambdaHeadVar__1_20);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__output_maybe_constr_arg_size_info__2823__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_30);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2334__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2270__1_1_p_0(
  MR_Word LambdaHeadVar__1_65);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__intermod_write_pred_type_spec_pragmas__2158__1_1_f_0(
  MR_Word HeadVar__1_37);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1864__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__1719__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__1432__1_3_p_0(
  MR_Word LambdaHeadVar__1_58,
  MR_Word LambdaHeadVar__2_59,
  MR_Word * LambdaHeadVar__3_60);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1107__1_1_f_0(
  MR_Word LambdaHeadVar__1_54);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1094__1_1_f_0(
  MR_Word LambdaHeadVar__1_50);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__2521__1_1_f_0(
  MR_Word HeadVar__1_307);

static MR_Word MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_119_114_97_112_95_100_117_109_109_121_95_112_114_97_103_109_97_95_105_116_101_109_95_95_91_49_93_95_48_1_f_0(
  MR_Box T_3);

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0(
  MR_Word HeadVar__1_1,
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
transform_hlds__intermod__maybe_write_pragma_structure_reuse_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_39,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_40,
  MR_Word STATE_VARIABLE_First_0_41,
  MR_Word * STATE_VARIABLE_First_42);

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_20,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_structure_sharing_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_39,
  MR_Word * STATE_VARIABLE_SharingInfosCord_40,
  MR_Word STATE_VARIABLE_First_0_41,
  MR_Word * STATE_VARIABLE_First_42);

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_20,
  MR_Word * STATE_VARIABLE_SharingInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_mm_tabling_info_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_34,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_35,
  MR_Word STATE_VARIABLE_First_0_36,
  MR_Word * STATE_VARIABLE_First_37);

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_20,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_trailing_info_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_34,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_35,
  MR_Word STATE_VARIABLE_First_0_36,
  MR_Word * STATE_VARIABLE_First_37);

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_20,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_exceptions_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_39,
  MR_Word * STATE_VARIABLE_ExceptionsCord_40,
  MR_Word STATE_VARIABLE_First_0_41,
  MR_Word * STATE_VARIABLE_First_42);

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_20,
  MR_Word * STATE_VARIABLE_ExceptionsCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23);

static void MR_CALL 
transform_hlds__intermod__lp_term_to_arg_size_term_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPTerm_5,
  MR_Word * ArgSizeTerm_6);

static void MR_CALL 
transform_hlds__intermod__lp_rational_constraint_to_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__lp_rational_constraint_to_arg_size_constr_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPConstraint_5,
  MR_Word * ArgSizeConstr_6);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination2_for_proc_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Integer _ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfos2Cord_0_44,
  MR_Word * STATE_VARIABLE_TermInfos2Cord_45,
  MR_Word STATE_VARIABLE_First_0_46,
  MR_Word * STATE_VARIABLE_First_47);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfos2Cord_0_44,
  MR_Word * STATE_VARIABLE_TermInfos2Cord_45,
  MR_Word STATE_VARIABLE_First_0_46,
  MR_Word * STATE_VARIABLE_First_47);

static void MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word MaybeArgSizeConstrs_5,
  MR_Word * MaybeArgSizeInfo_6);

static void MR_CALL 
transform_hlds__intermod__output_maybe_constr_termination_info_3_p_0(
  MR_Word MaybeConstrTermInfo_4);

static MR_Box MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(
  MR_Word VarToVarIdMap_5,
  MR_Word MaybeArgSizeConstrs_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_TermInfos2Cord_0_26,
  MR_Word * STATE_VARIABLE_TermInfos2Cord_27,
  MR_Word STATE_VARIABLE_First_0_28,
  MR_Word * STATE_VARIABLE_First_29);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination_for_proc_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Integer _ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfosCord_0_31,
  MR_Word * STATE_VARIABLE_TermInfosCord_32,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfosCord_0_31,
  MR_Word * STATE_VARIABLE_TermInfosCord_32,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34);

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0_1(
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
transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_TermInfosCord_0_26,
  MR_Word * STATE_VARIABLE_TermInfosCord_27,
  MR_Word STATE_VARIABLE_First_0_28,
  MR_Word * STATE_VARIABLE_First_29);

static void MR_CALL 
transform_hlds__intermod__write_pragma_unused_args_5_p_0(
  MR_Word UnusedArgInfo_6,
  MR_Word STATE_VARIABLE_First_0_9,
  MR_Word * STATE_VARIABLE_First_10);

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
  MR_Word Procs_11,
  MR_Word PredOrFunc_12,
  MR_Word PragmaImpl_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word ProgVarset0_16,
  MR_Word SymName_17,
  MR_Integer ProcId_18);

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * PragmaVars_9);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
  MR_Word OutInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word SymName_15,
  MR_Word PredOrFunc_16,
  MR_Word VarSet_17,
  MR_Word TypeQual_18,
  MR_Word HeadVars_19,
  MR_Word Clause0_20);

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
transform_hlds__intermod__intermod_write_instance_6_p_0(
  MR_Word OutInfo_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstancesCord_0_27,
  MR_Word * STATE_VARIABLE_InstancesCord_28);

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5);

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_class_10_p_0(
  MR_Word OutInfo_11,
  MR_Word ModuleName_12,
  MR_Word ClassId_13,
  MR_Word ClassDefn_14,
  MR_Word STATE_VARIABLE_TypeClassesCord_0_36,
  MR_Word * STATE_VARIABLE_TypeClassesCord_37,
  MR_Word STATE_VARIABLE_First_0_38,
  MR_Word * STATE_VARIABLE_First_39);

static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_10_p_0(
  MR_Word OutInfo_11,
  MR_Word ModuleName_12,
  MR_Word ModeCtor_13,
  MR_Word ModeDefn_14,
  MR_Word STATE_VARIABLE_ModeDefnsCord_0_30,
  MR_Word * STATE_VARIABLE_ModeDefnsCord_31,
  MR_Word STATE_VARIABLE_First_0_32,
  MR_Word * STATE_VARIABLE_First_33);

static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_10_p_0(
  MR_Word OutInfo_11,
  MR_Word ModuleName_12,
  MR_Word InstCtor_13,
  MR_Word InstDefn_14,
  MR_Word STATE_VARIABLE_InstDefnsCord_0_33,
  MR_Word * STATE_VARIABLE_InstDefnsCord_34,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36);

static MR_bool MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_3_p_0(
  MR_Word CtorRepn_4,
  MR_Word STATE_VARIABLE_Values_0_15,
  MR_Word * STATE_VARIABLE_Values_16);

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_8_p_0(
  MR_Word OutInfo_9,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_92,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_93,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_94,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_95);

static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_3_p_0(
  MR_Word ModuleName_4);

static void MR_CALL 
transform_hlds__intermod__maybe_write_nl_4_p_0(
  MR_Word STATE_VARIABLE_First_0_7,
  MR_Word * STATE_VARIABLE_First_8);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_27,
  MR_Word * STATE_VARIABLE_IntermodInfo_28);

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
  MR_Word STATE_VARIABLE_IntermodInfo_0_22,
  MR_Word * STATE_VARIABLE_IntermodInfo_23);

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
  MR_Word STATE_VARIABLE_IntermodInfo_0_35,
  MR_Word * STATE_VARIABLE_IntermodInfo_36);

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
transform_hlds__intermod__write_trans_opt_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_4_p_0(
  MR_Word IntermodInfo_5,
  MR_Word * ParseTreePlainOpt_6);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0(
  MR_Word IntermodInfo_5,
  MR_Word * ParseTreePlainOpt_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_7_p_0(
  MR_Word OutInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_4,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_5);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_7_p_0(
  MR_Word OutInfo_8,
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_35,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_36);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_3,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_4,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_5,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_33,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_34,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_35,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_36);

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_14,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_15);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Integer PredArity_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_5,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_valid_modes_5_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIds_5,
  MR_Word * SortedOrderPredInfos_6);

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OrderPredInfos_0_3,
  MR_Word * STATE_VARIABLE_OrderPredInfos_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_5_p_0(
  MR_Word OutInfo_6,
  MR_Word InstanceDefns_7,
  MR_Word * Instances_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_5_p_0_1(
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
transform_hlds__intermod__intermod_write_classes_5_p_0(
  MR_Word OutInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * TypeClasses_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_5_p_0_1(
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
transform_hlds__intermod__intermod_write_modes_5_p_0(
  MR_Word OutInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * ModeDefns_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_5_p_0_1(
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
transform_hlds__intermod__intermod_write_insts_5_p_0(
  MR_Word OutInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * InstDefns_8);

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Types_8,
  MR_Word * TypeDefns_9,
  MR_Word * ForeignEnums_10);

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__decide_what_to_opt_export_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__decide_what_to_opt_export_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__decide_what_to_opt_export_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_13);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word ExtraExportedPreds0_8,
  MR_Integer InlineThreshold_10,
  MR_Integer HigherOrderSizeLimit_11,
  MR_Word Deforestation_12,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessLocalPreds_2,
  MR_Integer InlineThreshold_4,
  MR_Integer HigherOrderSizeLimit_5,
  MR_Word Deforestation_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_7,
  MR_Word * STATE_VARIABLE_IntermodInfo_8);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_pred_clauses_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_IntermodInfo_0_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word * tscc_output_ptr_1_DoWrite_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_5,
  MR_Word * tscc_output_ptr_1_DoWrite_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_unify_rhs_4_p_0(
  MR_Word tscc_proc_3_input_1_RHS_5,
  MR_Word * tscc_output_ptr_1_DoWrite_6,
  MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25,
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
transform_hlds__intermod__intermod_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * STATE_VARIABLE_IntermodInfo_25);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_use_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcessLocalPreds_12,
  MR_Word TypeSpecForcePreds_13,
  MR_Integer InlineThreshold_14,
  MR_Integer HigherOrderSizeLimit_15,
  MR_Word Deforestation_16);

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
transform_hlds__intermod____Unify____maybe_should_write_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_should_write_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____should_write_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____should_write_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[41][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[30][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[5][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[9][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[6][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[7][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[8][11];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[9][13];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][9];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[9][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_12[4][1];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_13[2][12];




static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[41][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[9]))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[11]))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[13]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_pred_marker_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[21]))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[3]))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 30 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 31 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 32 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 33 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 34 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 35 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[4]))
  },
  /* row 36 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[2]))
  },
  /* row 37 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 38 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 39 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[30][3] = {
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
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[18]))
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
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[32])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[15]))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__intermod__should_opt_export_pred_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod__decide_what_to_opt_export_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0])),
    ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_11[1])),
    ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_11[2])),
    ((MR_Box) (transform_hlds__intermod__write_opt_file_initial_body_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[5])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[6])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_11[3])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_type_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[5][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[8])),
    ((MR_Box) (transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[25]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[8])),
    ((MR_Box) (transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[26]))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[9][5] = {
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
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__intermod____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[6][8] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
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
  /* row 4 */
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
  /* row 5 */
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

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[7][7] = {
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
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 6 */
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

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[8][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[9][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 10)),
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
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
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

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_12[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_12[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_12[1]))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_13[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__cord__pti_cord_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
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

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__intermod____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
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
  (MR_String) "im_pred_clauses",
  (MR_String) "im_pred_decls",
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____intermod_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____intermod_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "intermod_info",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0 = {
  (MR_String) "is_not_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1 = {
  (MR_String) "is_first",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_first_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_first_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_first_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_first",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_first_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_0 = {
  (MR_String) "do_not_need_foreign_import_modules",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_need_foreign_import_modules_0_1 = {
  (MR_String) "do_need_foreign_import_modules",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_need_foreign_import_modules_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_need_foreign_import_modules_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_need_foreign_import_modules_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_need_foreign_import_modules",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_need_foreign_import_modules_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_need_foreign_import_modules_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_need_foreign_import_modules_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0 = {
  (MR_String) "should_not_write",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1 = {
  (MR_String) "should_write",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_should_write_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_should_write_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_should_write_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_should_write_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_should_write_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_should_write_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_should_write",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_should_write_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_should_write_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_should_write_0
};

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_order_pred_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
};

static const MR_DuArgLocn transform_hlds__intermod__transform_hlds__intermod__field_locns_order_pred_info_0_0[5] = {
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
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0 = {
  (MR_String) "order_pred_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__intermod__transform_hlds__intermod__field_types_order_pred_info_0_0,
  NULL,
  transform_hlds__intermod__transform_hlds__intermod__field_locns_order_pred_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_order_pred_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0
};

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_order_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_order_pred_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_order_pred_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_order_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____order_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____order_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "order_pred_info",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_order_pred_info_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_order_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_order_pred_info_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0 = {
  (MR_String) "for_analysis_framework",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1 = {
  (MR_String) "for_pragma",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_should_write_for_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_should_write_for_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_should_write_for_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_should_write_for_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____should_write_for_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____should_write_for_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "should_write_for",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_should_write_for_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_should_write_for_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_should_write_for_0
};

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__3644__1_4_p_0(
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

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__2859__1_2_p_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), HeadVar__1_13, ((MR_Box) (HeadVar__2_16)));
    return succeeded;
  }
}

static MR_String MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__output_maybe_constr_arg_size_info__2825__1_2_f_0(
  MR_Word VarToVarIdMap_5,
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_String LambdaHeadVar__2_21;
    MR_Integer Var_22;
    MR_Box conv0_Var_22;

    conv0_Var_22 = mercury__map__det_elem_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[32]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_20)), VarToVarIdMap_5);
    Var_22 = ((MR_Integer) (conv0_Var_22));
    LambdaHeadVar__2_21 = mercury__string__int_to_string_1_f_0(Var_22);
    return LambdaHeadVar__2_21;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__output_maybe_constr_arg_size_info__2823__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_30)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), HeadVar__1_19, ((MR_Box) (HeadVar__2_30)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2334__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded;
    MR_Word HeadTerm0_18;
    MR_Box conv0_HeadTerm0_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[30]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[31]), HeadVarMap_15, ((MR_Box) (LambdaHeadVar__1_23)), &conv0_HeadTerm0_18);
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
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2270__1_1_p_0(
  MR_Word LambdaHeadVar__1_65)
{
  {
    MR_bool succeeded;
    MR_Word GE_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 0))));

    succeeded = ((((MR_tag((MR_Word) GE_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__intermod_write_pred_type_spec_pragmas__2158__1_1_f_0(
  MR_Word HeadVar__1_37)
{
  {
    MR_Word HeadVar__2_38;
    MR_Word Var_41;

    Var_41 = mercury__term__context_init_0_f_0();
    {
      HeadVar__2_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_38, 0) = ((MR_Box) (HeadVar__1_37));
      MR_hl_field(MR_mktag(0), HeadVar__2_38, 1) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), HeadVar__2_38, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    return HeadVar__2_38;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1864__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11)
{
  {
    MR_Word HeadVar__3_12;
    MR_Box conv0_HeadVar__3_12;

    conv0_HeadVar__3_12 = mercury__list__det_index1_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[28]), TVars_4, HeadVar__2_11);
    HeadVar__3_12 = ((MR_Word) (conv0_HeadVar__3_12));
    return HeadVar__3_12;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__1719__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20)
{
  {
    MR_bool succeeded = (Arity_11 == HeadVar__2_20);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__1432__1_3_p_0(
  MR_Word LambdaHeadVar__1_58,
  MR_Word LambdaHeadVar__2_59,
  MR_Word * LambdaHeadVar__3_60)
{
  {
    MR_Word Var_61;

    Var_61 = mercury__term__dummy_context_init_0_f_0();
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (LambdaHeadVar__1_58)), ((MR_Box) (Var_61)), LambdaHeadVar__2_59, LambdaHeadVar__3_60);
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1107__1_1_f_0(
  MR_Word LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 0))));

    return LambdaHeadVar__2_55;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1094__1_1_f_0(
  MR_Word LambdaHeadVar__1_50)
{
  {
    MR_Word LambdaHeadVar__2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 2))));

    return LambdaHeadVar__2_51;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__2521__1_1_f_0(
  MR_Word HeadVar__1_307)
{
  {
    MR_Word HeadVar__2_308;

    HeadVar__2_308 = transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_119_114_97_112_95_100_117_109_109_121_95_112_114_97_103_109_97_95_105_116_101_109_95_95_91_49_93_95_48_1_f_0(((MR_Box) (HeadVar__1_307)));
    return HeadVar__2_308;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_119_114_97_112_95_100_117_109_109_121_95_112_114_97_103_109_97_95_105_116_101_109_95_95_91_49_93_95_48_1_f_0(
  MR_Box T_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__term__context_init_0_f_0();
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = T_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) -1));
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
transform_hlds__intermod____Compare____should_write_for_0_0(
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
transform_hlds__intermod____Unify____should_write_for_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
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
          MR_Integer Var_25 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_26 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
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

            hlds__hlds_pred____Compare____pred_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              hlds__hlds_pred____Compare____pred_info_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__intermod____Compare____maybe_should_write_0_0(
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
transform_hlds__intermod____Unify____maybe_should_write_0_0(
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[33]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[34]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[34]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[35]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[36]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
        TypeInfo_20_20 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[33]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[34]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[34]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[35]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[36]);
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

            PredIds0_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[29]), ClassInterface_20);
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

    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[28]), InstanceList0_6, &InstanceList_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv2_STATE_VARIABLE_ModuleInfo_10);
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
    MR_Word ToWrite_9;
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
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ToWrite_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ToWrite_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            ToWrite_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            ToWrite_9 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_49, (MR_Integer) 0))));
          MR_Word Var_52;

          Var_52 = hlds__status__old_status_is_exported_1_f_0(Status_51);
          ToWrite_9 = mercury__bool__not_1_f_0(Var_52);
        }
        break;
      case (MR_Integer) 2:
        ToWrite_9 = (MR_Integer) 0;
        break;
    }
    switch (ToWrite_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ClassDefn_7 = ClassDefn0_6;
          *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
        }
        break;
      case (MR_Integer) 1:
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
            MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_27));
          }
          PredIds0_55 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[27]), Var_35);
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_55, &PredIds_10);
          hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_65);
          transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_10, Preds0_65, &Preds_66);
          hlds__hlds_module__module_info_set_preds_3_p_0(Preds_66, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
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

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__3644__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
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
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[5]));
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
transform_hlds__intermod__maybe_write_pragma_structure_reuse_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_39,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_40,
  MR_Word STATE_VARIABLE_First_0_41,
  MR_Word * STATE_VARIABLE_First_42)
{
  {
    MR_bool succeeded;
    MR_String PredName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    MR_Word StructureReuseDomain_25;
    MR_Word ShouldWrite_23;
    MR_Word MaybeStructureReuseDomain_24;
    MR_Word Var_45;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_14);
    if (succeeded)
    {
      Var_45 = (MR_Integer) 1;
      transform_hlds__intermod__should_write_reuse_info_6_p_0(ModuleInfo_11, PredId_21, ProcId_13, PredInfo_22, Var_45, &ShouldWrite_23);
      succeeded = (ShouldWrite_23 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_14, &MaybeStructureReuseDomain_24);
        succeeded = (MaybeStructureReuseDomain_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          StructureReuseDomain_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructureReuseDomain_24, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_26;
      MR_Word TypeVarSet_27;
      MR_Word ModuleName_28;
      MR_Word PredSymName_29;
      MR_Word ArgModes_30;
      MR_Word PredNameModesPF_31;
      MR_Word HeadVars_32;
      MR_Word VarTypes_33;
      MR_Word HeadVarTypes_34;
      MR_Word Reuse_35;
      MR_Word ReuseInfo_37;
      MR_Word ItemReuse_38;
      MR_Word Var_46;
      MR_Word Var_47;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_14, &VarSet_26);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TypeVarSet_27);
      ModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_22);
      {
        PredSymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_29, 0) = ((MR_Box) (ModuleName_28));
        MR_hl_field(MR_mktag(1), PredSymName_29, 1) = ((MR_Box) (PredName_18));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_14, &ArgModes_30);
      {
        PredNameModesPF_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 0) = ((MR_Box) (PredSymName_29));
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 1) = ((MR_Box) (ArgModes_30));
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_14, &HeadVars_32);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_14, &VarTypes_33);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_33, HeadVars_32, &HeadVarTypes_34);
      Reuse_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StructureReuseDomain_25, (MR_Integer) 0))));
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Reuse_35));
      }
      {
        ReuseInfo_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReuseInfo_37, 0) = ((MR_Box) (PredNameModesPF_31));
        MR_hl_field(MR_mktag(0), ReuseInfo_37, 1) = ((MR_Box) (HeadVars_32));
        MR_hl_field(MR_mktag(0), ReuseInfo_37, 2) = ((MR_Box) (HeadVarTypes_34));
        MR_hl_field(MR_mktag(0), ReuseInfo_37, 3) = ((MR_Box) (VarSet_26));
        MR_hl_field(MR_mktag(0), ReuseInfo_37, 4) = ((MR_Box) (TypeVarSet_27));
        MR_hl_field(MR_mktag(0), ReuseInfo_37, 5) = ((MR_Box) (Var_46));
      }
      Var_47 = mercury__term__context_init_0_f_0();
      {
        ItemReuse_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemReuse_38, 0) = ((MR_Box) (ReuseInfo_37));
        MR_hl_field(MR_mktag(0), ItemReuse_38, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), ItemReuse_38, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), ((MR_Box) (ItemReuse_38)), STATE_VARIABLE_ReuseInfosCord_0_39, STATE_VARIABLE_ReuseInfosCord_40);
      parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_4_p_0((MR_Integer) 1, ReuseInfo_37);
    }
    else
      *STATE_VARIABLE_ReuseInfosCord_40 = STATE_VARIABLE_ReuseInfosCord_0_39;
    *STATE_VARIABLE_First_42 = STATE_VARIABLE_First_0_41;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_ReuseInfosCord_40;
    MR_Word conv0_STATE_VARIABLE_First_42;

    transform_hlds__intermod__maybe_write_pragma_structure_reuse_for_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ReuseInfosCord_40, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_42);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ReuseInfosCord_40));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_42));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_20,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23)
{
  {
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word ProcTable_19;
    MR_Word Var_26;
    MR_Box conv4_STATE_VARIABLE_ReuseInfosCord_21;
    MR_Box conv3_STATE_VARIABLE_First_23;
    MR_Box conv2_STATE_VARIABLE_IO_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_19);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[8]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrderPredInfo_10));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[14]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, ProcTable_19, ((MR_Box) (STATE_VARIABLE_ReuseInfosCord_0_20)), &conv4_STATE_VARIABLE_ReuseInfosCord_21, ((MR_Box) (STATE_VARIABLE_First_0_22)), &conv3_STATE_VARIABLE_First_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_ReuseInfosCord_21 = ((MR_Word) (conv4_STATE_VARIABLE_ReuseInfosCord_21));
    *STATE_VARIABLE_First_23 = ((MR_Word) (conv3_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_structure_sharing_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_39,
  MR_Word * STATE_VARIABLE_SharingInfosCord_40,
  MR_Word STATE_VARIABLE_First_0_41,
  MR_Word * STATE_VARIABLE_First_42)
{
  {
    MR_bool succeeded;
    MR_String PredName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    MR_Word SharingStatus_25;
    MR_Word ShouldWrite_23;
    MR_Word MaybeSharingStatus_24;
    MR_Word Var_45;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_14);
    if (succeeded)
    {
      Var_45 = (MR_Integer) 1;
      transform_hlds__intermod__should_write_sharing_info_6_p_0(ModuleInfo_11, PredId_21, ProcId_13, PredInfo_22, Var_45, &ShouldWrite_23);
      succeeded = (ShouldWrite_23 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_14, &MaybeSharingStatus_24);
        succeeded = (MaybeSharingStatus_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          SharingStatus_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSharingStatus_24, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_26;
      MR_Word TypeVarSet_27;
      MR_Word ModuleName_28;
      MR_Word PredSymName_29;
      MR_Word ArgModes_30;
      MR_Word PredNameModesPF_31;
      MR_Word HeadVars_32;
      MR_Word VarTypes_33;
      MR_Word HeadVarTypes_34;
      MR_Word Sharing_35;
      MR_Word SharingInfo_37;
      MR_Word ItemSharing_38;
      MR_Word Var_46;
      MR_Word Var_47;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_14, &VarSet_26);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TypeVarSet_27);
      ModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_22);
      {
        PredSymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_29, 0) = ((MR_Box) (ModuleName_28));
        MR_hl_field(MR_mktag(1), PredSymName_29, 1) = ((MR_Box) (PredName_18));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_14, &ArgModes_30);
      {
        PredNameModesPF_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 0) = ((MR_Box) (PredSymName_29));
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 1) = ((MR_Box) (ArgModes_30));
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_14, &HeadVars_32);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_14, &VarTypes_33);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_33, HeadVars_32, &HeadVarTypes_34);
      Sharing_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingStatus_25, (MR_Integer) 0))));
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Sharing_35));
      }
      {
        SharingInfo_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SharingInfo_37, 0) = ((MR_Box) (PredNameModesPF_31));
        MR_hl_field(MR_mktag(0), SharingInfo_37, 1) = ((MR_Box) (HeadVars_32));
        MR_hl_field(MR_mktag(0), SharingInfo_37, 2) = ((MR_Box) (HeadVarTypes_34));
        MR_hl_field(MR_mktag(0), SharingInfo_37, 3) = ((MR_Box) (VarSet_26));
        MR_hl_field(MR_mktag(0), SharingInfo_37, 4) = ((MR_Box) (TypeVarSet_27));
        MR_hl_field(MR_mktag(0), SharingInfo_37, 5) = ((MR_Box) (Var_46));
      }
      Var_47 = mercury__term__context_init_0_f_0();
      {
        ItemSharing_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemSharing_38, 0) = ((MR_Box) (SharingInfo_37));
        MR_hl_field(MR_mktag(0), ItemSharing_38, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), ItemSharing_38, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[11]), ((MR_Box) (ItemSharing_38)), STATE_VARIABLE_SharingInfosCord_0_39, STATE_VARIABLE_SharingInfosCord_40);
      switch (STATE_VARIABLE_First_0_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_42 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_42 = STATE_VARIABLE_First_0_41;
          break;
      }
      parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_4_p_0((MR_Integer) 1, SharingInfo_37);
    }
    else
    {
      *STATE_VARIABLE_First_42 = STATE_VARIABLE_First_0_41;
      *STATE_VARIABLE_SharingInfosCord_40 = STATE_VARIABLE_SharingInfosCord_0_39;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_SharingInfosCord_40;
    MR_Word conv0_STATE_VARIABLE_First_42;

    transform_hlds__intermod__maybe_write_pragma_structure_sharing_for_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_SharingInfosCord_40, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_42);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_SharingInfosCord_40));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_42));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_20,
  MR_Word * STATE_VARIABLE_SharingInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23)
{
  {
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word ProcTable_19;
    MR_Word Var_26;
    MR_Box conv4_STATE_VARIABLE_SharingInfosCord_21;
    MR_Box conv3_STATE_VARIABLE_First_23;
    MR_Box conv2_STATE_VARIABLE_IO_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_19);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[7]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrderPredInfo_10));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, ProcTable_19, ((MR_Box) (STATE_VARIABLE_SharingInfosCord_0_20)), &conv4_STATE_VARIABLE_SharingInfosCord_21, ((MR_Box) (STATE_VARIABLE_First_0_22)), &conv3_STATE_VARIABLE_First_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_SharingInfosCord_21 = ((MR_Word) (conv4_STATE_VARIABLE_SharingInfosCord_21));
    *STATE_VARIABLE_First_23 = ((MR_Word) (conv3_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_mm_tabling_info_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_34,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_35,
  MR_Word STATE_VARIABLE_First_0_36,
  MR_Word * STATE_VARIABLE_First_37)
{
  {
    MR_bool succeeded;
    MR_String PredName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    MR_Integer PredArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 1))));
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    MR_Word MaybeProcMMTablingInfo_23;
    MR_Word ProcMMTablingInfo_24;
    MR_Word ShouldWrite_25;
    MR_Word Var_40;

    hlds__hlds_pred__proc_info_get_mm_tabling_info_2_p_0(ProcInfo_14, &MaybeProcMMTablingInfo_23);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_14);
    if (succeeded)
    {
      succeeded = (MaybeProcMMTablingInfo_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcMMTablingInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcMMTablingInfo_23, (MR_Integer) 0))));
        Var_40 = (MR_Integer) 1;
        transform_hlds__intermod__should_write_mm_tabling_info_6_p_0(ModuleInfo_11, PredId_21, ProcId_13, PredInfo_22, Var_40, &ShouldWrite_25);
        succeeded = (ShouldWrite_25 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_26;
      MR_Word PredSymName_27;
      MR_Integer ModeNum_28;
      MR_Word PredNameArityPFMn_29;
      MR_Word Status_30;
      MR_Word MMTablingInfo_32;
      MR_Word ItemMMTabling_33;
      MR_Word Var_41;

      ModuleName_26 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_22);
      {
        PredSymName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_27, 0) = ((MR_Box) (ModuleName_26));
        MR_hl_field(MR_mktag(1), PredSymName_27, 1) = ((MR_Box) (PredName_18));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ModeNum_28);
      {
        PredNameArityPFMn_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 0) = ((MR_Box) (PredSymName_27));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 1) = ((MR_Box) (PredArity_19));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 3) = ((MR_Box) (ModeNum_28));
      }
      Status_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcMMTablingInfo_24, (MR_Integer) 0))) & (MR_Integer) 3);
      {
        MMTablingInfo_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MMTablingInfo_32, 0) = ((MR_Box) (PredNameArityPFMn_29));
        MR_hl_field(MR_mktag(0), MMTablingInfo_32, 1) = (MR_Box) ((MR_Unsigned) (Status_30));
      }
      Var_41 = mercury__term__context_init_0_f_0();
      {
        ItemMMTabling_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemMMTabling_33, 0) = ((MR_Box) (MMTablingInfo_32));
        MR_hl_field(MR_mktag(0), ItemMMTabling_33, 1) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), ItemMMTabling_33, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[9]), ((MR_Box) (ItemMMTabling_33)), STATE_VARIABLE_MMTablingInfosCord_0_34, STATE_VARIABLE_MMTablingInfosCord_35);
      switch (STATE_VARIABLE_First_0_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_37 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_37 = STATE_VARIABLE_First_0_36;
          break;
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(MMTablingInfo_32);
    }
    else
    {
      *STATE_VARIABLE_First_37 = STATE_VARIABLE_First_0_36;
      *STATE_VARIABLE_MMTablingInfosCord_35 = STATE_VARIABLE_MMTablingInfosCord_0_34;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_MMTablingInfosCord_35;
    MR_Word conv0_STATE_VARIABLE_First_37;

    transform_hlds__intermod__maybe_write_pragma_mm_tabling_info_for_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MMTablingInfosCord_35, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_37);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MMTablingInfosCord_35));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_37));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_20,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23)
{
  {
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word ProcTable_19;
    MR_Word Var_26;
    MR_Box conv4_STATE_VARIABLE_MMTablingInfosCord_21;
    MR_Box conv3_STATE_VARIABLE_First_23;
    MR_Box conv2_STATE_VARIABLE_IO_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_19);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrderPredInfo_10));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, ProcTable_19, ((MR_Box) (STATE_VARIABLE_MMTablingInfosCord_0_20)), &conv4_STATE_VARIABLE_MMTablingInfosCord_21, ((MR_Box) (STATE_VARIABLE_First_0_22)), &conv3_STATE_VARIABLE_First_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_MMTablingInfosCord_21 = ((MR_Word) (conv4_STATE_VARIABLE_MMTablingInfosCord_21));
    *STATE_VARIABLE_First_23 = ((MR_Word) (conv3_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_trailing_info_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_34,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_35,
  MR_Word STATE_VARIABLE_First_0_36,
  MR_Word * STATE_VARIABLE_First_37)
{
  {
    MR_bool succeeded;
    MR_String PredName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    MR_Integer PredArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 1))));
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    MR_Word MaybeProcTrailingInfo_23;
    MR_Word ProcTrailingInfo_24;
    MR_Word ShouldWrite_25;
    MR_Word Var_40;

    hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_14, &MaybeProcTrailingInfo_23);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_14);
    if (succeeded)
    {
      succeeded = (MaybeProcTrailingInfo_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcTrailingInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcTrailingInfo_23, (MR_Integer) 0))));
        Var_40 = (MR_Integer) 1;
        transform_hlds__intermod__should_write_trailing_info_6_p_0(ModuleInfo_11, PredId_21, ProcId_13, PredInfo_22, Var_40, &ShouldWrite_25);
        succeeded = (ShouldWrite_25 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_26;
      MR_Word PredSymName_27;
      MR_Integer ModeNum_28;
      MR_Word PredNameArityPFMn_29;
      MR_Word Status_30;
      MR_Word TrailingInfo_32;
      MR_Word ItemTrailing_33;
      MR_Word Var_41;

      ModuleName_26 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_22);
      {
        PredSymName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_27, 0) = ((MR_Box) (ModuleName_26));
        MR_hl_field(MR_mktag(1), PredSymName_27, 1) = ((MR_Box) (PredName_18));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ModeNum_28);
      {
        PredNameArityPFMn_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 0) = ((MR_Box) (PredSymName_27));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 1) = ((MR_Box) (PredArity_19));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_29, 3) = ((MR_Box) (ModeNum_28));
      }
      Status_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcTrailingInfo_24, (MR_Integer) 0))) & (MR_Integer) 3);
      {
        TrailingInfo_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TrailingInfo_32, 0) = ((MR_Box) (PredNameArityPFMn_29));
        MR_hl_field(MR_mktag(0), TrailingInfo_32, 1) = (MR_Box) ((MR_Unsigned) (Status_30));
      }
      Var_41 = mercury__term__context_init_0_f_0();
      {
        ItemTrailing_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTrailing_33, 0) = ((MR_Box) (TrailingInfo_32));
        MR_hl_field(MR_mktag(0), ItemTrailing_33, 1) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), ItemTrailing_33, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[7]), ((MR_Box) (ItemTrailing_33)), STATE_VARIABLE_TrailingInfosCord_0_34, STATE_VARIABLE_TrailingInfosCord_35);
      switch (STATE_VARIABLE_First_0_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_37 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_37 = STATE_VARIABLE_First_0_36;
          break;
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(TrailingInfo_32);
    }
    else
    {
      *STATE_VARIABLE_First_37 = STATE_VARIABLE_First_0_36;
      *STATE_VARIABLE_TrailingInfosCord_35 = STATE_VARIABLE_TrailingInfosCord_0_34;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TrailingInfosCord_35;
    MR_Word conv0_STATE_VARIABLE_First_37;

    transform_hlds__intermod__maybe_write_pragma_trailing_info_for_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TrailingInfosCord_35, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_37);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TrailingInfosCord_35));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_37));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_20,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23)
{
  {
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word ProcTable_19;
    MR_Word Var_26;
    MR_Box conv4_STATE_VARIABLE_TrailingInfosCord_21;
    MR_Box conv3_STATE_VARIABLE_First_23;
    MR_Box conv2_STATE_VARIABLE_IO_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_19);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[5]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrderPredInfo_10));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[8]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, ProcTable_19, ((MR_Box) (STATE_VARIABLE_TrailingInfosCord_0_20)), &conv4_STATE_VARIABLE_TrailingInfosCord_21, ((MR_Box) (STATE_VARIABLE_First_0_22)), &conv3_STATE_VARIABLE_First_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_TrailingInfosCord_21 = ((MR_Word) (conv4_STATE_VARIABLE_TrailingInfosCord_21));
    *STATE_VARIABLE_First_23 = ((MR_Word) (conv3_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_exceptions_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word OrderPredInfo_12,
  MR_Integer ProcId_13,
  MR_Word ProcInfo_14,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_39,
  MR_Word * STATE_VARIABLE_ExceptionsCord_40,
  MR_Word STATE_VARIABLE_First_0_41,
  MR_Word * STATE_VARIABLE_First_42)
{
  {
    MR_bool succeeded;
    MR_String PredName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 0))));
    MR_Integer PredArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 1))));
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 3))));
    MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_12, (MR_Integer) 4))));
    MR_Word ProcExceptionInfo_30;
    MR_Word TypeSpecInfo_23;
    MR_Word TypeSpecForcePreds_25;
    MR_Word Markers_28;
    MR_Word MaybeProcExceptionInfo_29;
    MR_Word TypeCtorInfo_53_53;
    MR_Word Var_45;
    MR_Word Var_46;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_14);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_11, PredInfo_22, ProcId_13);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_22);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_11, &TypeSpecInfo_23);
          TypeSpecForcePreds_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_23, (MR_Integer) 1))));
          TypeCtorInfo_53_53 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_53_53, ((MR_Box) (PredId_21)), TypeSpecForcePreds_25);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_22, &Markers_28);
            Var_45 = (MR_Integer) 11;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_28, Var_45);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_46 = (MR_Integer) 12;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_28, Var_46);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_14, &MaybeProcExceptionInfo_29);
                succeeded = (MaybeProcExceptionInfo_29 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  ProcExceptionInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcExceptionInfo_29, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_31;
      MR_Word PredSymName_32;
      MR_Integer ModeNum_33;
      MR_Word PredNameArityPFMn_34;
      MR_Word Status_35;
      MR_Word ExceptionInfo_37;
      MR_Word ItemException_38;
      MR_Word Var_47;

      ModuleName_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_22);
      {
        PredSymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_32, 0) = ((MR_Box) (ModuleName_31));
        MR_hl_field(MR_mktag(1), PredSymName_32, 1) = ((MR_Box) (PredName_18));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ModeNum_33);
      {
        PredNameArityPFMn_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 0) = ((MR_Box) (PredSymName_32));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 1) = ((MR_Box) (PredArity_19));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_34, 3) = ((MR_Box) (ModeNum_33));
      }
      Status_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcExceptionInfo_30, (MR_Integer) 0))));
      {
        ExceptionInfo_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExceptionInfo_37, 0) = ((MR_Box) (PredNameArityPFMn_34));
        MR_hl_field(MR_mktag(0), ExceptionInfo_37, 1) = ((MR_Box) (Status_35));
      }
      Var_47 = mercury__term__context_init_0_f_0();
      {
        ItemException_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemException_38, 0) = ((MR_Box) (ExceptionInfo_37));
        MR_hl_field(MR_mktag(0), ItemException_38, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), ItemException_38, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), ((MR_Box) (ItemException_38)), STATE_VARIABLE_ExceptionsCord_0_39, STATE_VARIABLE_ExceptionsCord_40);
      switch (STATE_VARIABLE_First_0_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_42 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_42 = STATE_VARIABLE_First_0_41;
          break;
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(ExceptionInfo_37);
    }
    else
    {
      *STATE_VARIABLE_First_42 = STATE_VARIABLE_First_0_41;
      *STATE_VARIABLE_ExceptionsCord_40 = STATE_VARIABLE_ExceptionsCord_0_39;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_ExceptionsCord_40;
    MR_Word conv0_STATE_VARIABLE_First_42;

    transform_hlds__intermod__maybe_write_pragma_exceptions_for_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ExceptionsCord_40, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_42);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ExceptionsCord_40));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_42));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_20,
  MR_Word * STATE_VARIABLE_ExceptionsCord_21,
  MR_Word STATE_VARIABLE_First_0_22,
  MR_Word * STATE_VARIABLE_First_23)
{
  {
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word ProcTable_19;
    MR_Word Var_26;
    MR_Box conv4_STATE_VARIABLE_ExceptionsCord_21;
    MR_Box conv3_STATE_VARIABLE_First_23;
    MR_Box conv2_STATE_VARIABLE_IO_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_19);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[4]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (OrderPredInfo_10));
    }
    mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, ProcTable_19, ((MR_Box) (STATE_VARIABLE_ExceptionsCord_0_20)), &conv4_STATE_VARIABLE_ExceptionsCord_21, ((MR_Box) (STATE_VARIABLE_First_0_22)), &conv3_STATE_VARIABLE_First_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_ExceptionsCord_21 = ((MR_Word) (conv4_STATE_VARIABLE_ExceptionsCord_21));
    *STATE_VARIABLE_First_23 = ((MR_Word) (conv3_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__lp_term_to_arg_size_term_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPTerm_5,
  MR_Word * ArgSizeTerm_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LPTerm_5, (MR_Integer) 0))));
    MR_Word Coefficient_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LPTerm_5, (MR_Integer) 1))));
    MR_Integer VarId_9;
    MR_Box conv0_VarId_9;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[32]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarToVarIdMap_4, ((MR_Box) (Var_7)), &conv0_VarId_9);
    VarId_9 = ((MR_Integer) (conv0_VarId_9));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ArgSizeTerm_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarId_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Coefficient_8));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__lp_rational_constraint_to_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgSizeTerm_6;

    transform_hlds__intermod__lp_term_to_arg_size_term_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ArgSizeTerm_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ArgSizeTerm_6));
  }
}

static void MR_CALL 
transform_hlds__intermod__lp_rational_constraint_to_arg_size_constr_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPConstraint_5,
  MR_Word * ArgSizeConstr_6)
{
  {
    MR_Word LPTerms_7;
    MR_Word Operator_8;
    MR_Word Constant_9;
    MR_Word ArgSizeTerms_10;
    MR_Word Var_11;

    libs__lp_rational__deconstruct_non_false_constraint_4_p_0(LPConstraint_5, &LPTerms_7, &Operator_8, &Constant_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[8]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__intermod__lp_rational_constraint_to_arg_size_constr_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (VarToVarIdMap_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[5]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), Var_11, LPTerms_7, &ArgSizeTerms_10);
    switch (Operator_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgSizeConstr_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgSizeTerms_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Constant_9));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *ArgSizeConstr_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgSizeTerms_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Constant_9));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination2_for_proc_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Integer _ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfos2Cord_0_44,
  MR_Word * STATE_VARIABLE_TermInfos2Cord_45,
  MR_Word STATE_VARIABLE_First_0_46,
  MR_Word * STATE_VARIABLE_First_47)
{
  transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_9_p_0(OrderPredInfo_10, ProcInfo_12, STATE_VARIABLE_TermInfos2Cord_0_44, STATE_VARIABLE_TermInfos2Cord_45, STATE_VARIABLE_First_0_46, STATE_VARIABLE_First_47);
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfos2Cord_0_44,
  MR_Word * STATE_VARIABLE_TermInfos2Cord_45,
  MR_Word STATE_VARIABLE_First_0_46,
  MR_Word * STATE_VARIABLE_First_47)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      MR_String PredName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0))));
      MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word PredInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
      MR_Word ModuleName_21;
      MR_Word PredSymName_22;
      MR_Word ArgModes_23;
      MR_Word HeadVars_24;
      MR_Word Term2Info_25;
      MR_Word MaybeSuccessConstraints_26;
      MR_Word MaybeFailureConstraints_27;
      MR_Word MaybeTermination_28;
      MR_Word SizeVarMap_29;
      MR_Word HeadSizeVars_30;
      MR_Word PredNameModesPF_31;
      MR_Word MaybePragmaTermination_32;
      MR_Word VarToVarIdMap_35;
      MR_Word MaybeSuccessArgSizeInfo_36;
      MR_Word MaybeFailureArgSizeInfo_37;
      MR_Word TermInfo2_38;
      MR_Word ItemTerm2_39;
      MR_Integer NumHeadSizeVars_42;
      MR_Word HeadSizeVarIds_43;
      MR_Word Var_56;
      MR_Integer Var_72;
      MR_Word Var_74;

      ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_20);
      {
        PredSymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_22, 0) = ((MR_Box) (ModuleName_21));
        MR_hl_field(MR_mktag(1), PredSymName_22, 1) = ((MR_Box) (PredName_16));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_12, &ArgModes_23);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_24);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_12, &Term2Info_25);
      MaybeSuccessConstraints_26 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(Term2Info_25);
      MaybeFailureConstraints_27 = transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(Term2Info_25);
      MaybeTermination_28 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(Term2Info_25);
      SizeVarMap_29 = transform_hlds__term_constr_main_types__term2_info_get_size_var_map_1_f_0(Term2Info_25);
      HeadSizeVars_30 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_29, HeadVars_24);
      {
        PredNameModesPF_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 0) = ((MR_Box) (PredSymName_22));
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 1) = ((MR_Box) (ArgModes_23));
        MR_hl_field(MR_mktag(0), PredNameModesPF_31, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      }
      if ((MaybeTermination_28 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybePragmaTermination_32 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_28, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) Var_92)) == (MR_Integer) 1))
          MaybePragmaTermination_32 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_12[2]));
        else
          MaybePragmaTermination_32 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_12[3]));
      }
      Var_56 = mercury__term__context_init_0_f_0();
      transform_hlds__intermod__maybe_write_nl_4_p_0(STATE_VARIABLE_First_0_46, STATE_VARIABLE_First_47);
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
      switch (PredOrFunc_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgModes_40;
            MR_Word ReturnMode_41;
            MR_Word Var_64;
            MR_Box conv0_ReturnMode_41;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_23, &FuncArgModes_40, &conv0_ReturnMode_41);
            ReturnMode_41 = ((MR_Word) (conv0_ReturnMode_41));
            Var_64 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0((MR_Integer) 0, Var_64, PredSymName_22, FuncArgModes_40, ReturnMode_41, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_68;

            Var_68 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, Var_68, PredSymName_22, ArgModes_23, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
      }
      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[32]), HeadSizeVars_30, &NumHeadSizeVars_42);
      Var_72 = (MR_Integer) ((MR_Unsigned) NumHeadSizeVars_42 - (MR_Unsigned) 1);
      HeadSizeVarIds_43 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_72);
      Var_74 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[32]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[32]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadSizeVars_30, HeadSizeVarIds_43, Var_74, &VarToVarIdMap_35);
      transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0(VarToVarIdMap_35, MaybeSuccessConstraints_26, &MaybeSuccessArgSizeInfo_36);
      transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0(VarToVarIdMap_35, MaybeFailureConstraints_27, &MaybeFailureArgSizeInfo_37);
      {
        TermInfo2_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TermInfo2_38, 0) = ((MR_Box) (PredNameModesPF_31));
        MR_hl_field(MR_mktag(0), TermInfo2_38, 1) = ((MR_Box) (MaybeSuccessArgSizeInfo_36));
        MR_hl_field(MR_mktag(0), TermInfo2_38, 2) = ((MR_Box) (MaybeFailureArgSizeInfo_37));
        MR_hl_field(MR_mktag(0), TermInfo2_38, 3) = ((MR_Box) (MaybePragmaTermination_32));
      }
      {
        ItemTerm2_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTerm2_39, 0) = ((MR_Box) (TermInfo2_38));
        MR_hl_field(MR_mktag(0), ItemTerm2_39, 1) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), ItemTerm2_39, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), ((MR_Box) (ItemTerm2_39)), STATE_VARIABLE_TermInfos2Cord_0_44, STATE_VARIABLE_TermInfos2Cord_45);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(VarToVarIdMap_35, MaybeSuccessConstraints_26);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(VarToVarIdMap_35, MaybeFailureConstraints_27);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      transform_hlds__intermod__output_maybe_constr_termination_info_3_p_0(MaybeTermination_28);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    else
    {
      *STATE_VARIABLE_First_47 = STATE_VARIABLE_First_0_46;
      *STATE_VARIABLE_TermInfos2Cord_45 = STATE_VARIABLE_TermInfos2Cord_0_44;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgSizeConstr_6;

    transform_hlds__intermod__lp_rational_constraint_to_arg_size_constr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ArgSizeConstr_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ArgSizeConstr_6));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__2859__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word MaybeArgSizeConstrs_5,
  MR_Word * MaybeArgSizeInfo_6)
{
  {
    MR_bool succeeded;

    if ((MaybeArgSizeConstrs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeArgSizeInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Polyhedron_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSizeConstrs_5, (MR_Integer) 0))));
      MR_Word Constraints0_8;
      MR_Word Constraints1_9;
      MR_Word Constraints_10;
      MR_Word ArgSizeInfoConstrs_11;
      MR_Word Var_14;

      Constraints0_8 = libs__polyhedron__non_false_constraints_1_f_0(Polyhedron_7);
      Constraints1_9 = mercury__list__filter_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[4]), Constraints0_8);
      Constraints_10 = mercury__list__sort_1_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Constraints1_9);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[7]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__intermod__maybe_constr_arg_size_info_to_arg_size_constr_3_p_0_3));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (VarToVarIdMap_4));
      }
      mercury__list__map_3_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), Var_14, Constraints_10, &ArgSizeInfoConstrs_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeArgSizeInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgSizeInfoConstrs_11));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__output_maybe_constr_termination_info_3_p_0(
  MR_Word MaybeConstrTermInfo_4)
{
  if ((MaybeConstrTermInfo_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "not_set");
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstrTermInfo_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
      mercury__io__write_string_3_p_0((MR_String) "can_loop");
    else
      mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_21;

    conv0_LambdaHeadVar__2_21 = transform_hlds__intermod__IntroducedFrom__func__output_maybe_constr_arg_size_info__2825__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__output_maybe_constr_arg_size_info__2823__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(
  MR_Word VarToVarIdMap_5,
  MR_Word MaybeArgSizeConstrs_6)
{
  {
    MR_bool succeeded;

    if ((MaybeArgSizeConstrs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "not_set");
    else
    {
      MR_Word Polyhedron_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSizeConstrs_6, (MR_Integer) 0))));
      MR_Word Constraints0_9;
      MR_Word Constraints1_10;
      MR_Word Constraints_11;
      MR_Word OutputVar_12;

      mercury__io__write_string_3_p_0((MR_String) "constraints(");
      Constraints0_9 = libs__polyhedron__non_false_constraints_1_f_0(Polyhedron_8);
      Constraints1_10 = mercury__list__filter_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__intermod_scalar_common_3[3]), Constraints0_9);
      Constraints_11 = mercury__list__sort_1_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Constraints1_10);
      {
        OutputVar_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OutputVar_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[6]));
        MR_hl_field(MR_mktag(0), OutputVar_12, 1) = ((MR_Box) (transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_3));
        MR_hl_field(MR_mktag(0), OutputVar_12, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), OutputVar_12, 3) = ((MR_Box) (VarToVarIdMap_5));
      }
      libs__lp_rational__output_constraints_4_p_0(OutputVar_12, Constraints_11);
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TermInfos2Cord_45;
    MR_Word conv0_STATE_VARIABLE_First_47;

    transform_hlds__intermod__maybe_write_pragma_termination2_for_proc_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TermInfos2Cord_45, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_47);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TermInfos2Cord_45));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_47));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_TermInfos2Cord_0_26,
  MR_Word * STATE_VARIABLE_TermInfos2Cord_27,
  MR_Word STATE_VARIABLE_First_0_28,
  MR_Word * STATE_VARIABLE_First_29)
{
  {
    MR_bool succeeded;
    MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3))));
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word PredStatus_19;
    MR_Word TypeSpecInfo_20;
    MR_Word TypeSpecForcePreds_22;
    MR_Word Var_52;
    MR_Word TypeCtorInfo_38_38;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_18, &PredStatus_19);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_9, &TypeSpecInfo_20);
    TypeSpecForcePreds_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_20, (MR_Integer) 1))));
    Var_52 = (MR_Word) (PredStatus_19);
    if ((Var_52 == (MR_Word) ((MR_Unsigned) 12U)))
      succeeded = MR_TRUE;
    else
    if ((Var_52 == (MR_Word) ((MR_Unsigned) 16U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_18);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_38_38 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_38_38, ((MR_Box) (PredId_17)), TypeSpecForcePreds_22);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcTable_25;
      MR_Word Var_34;
      MR_Box conv4_STATE_VARIABLE_TermInfos2Cord_27;
      MR_Box conv3_STATE_VARIABLE_First_29;
      MR_Box conv2_STATE_VARIABLE_IO_31;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_25);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_13[1]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (OrderPredInfo_10));
      }
      mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, ProcTable_25, ((MR_Box) (STATE_VARIABLE_TermInfos2Cord_0_26)), &conv4_STATE_VARIABLE_TermInfos2Cord_27, ((MR_Box) (STATE_VARIABLE_First_0_28)), &conv3_STATE_VARIABLE_First_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
      *STATE_VARIABLE_TermInfos2Cord_27 = ((MR_Word) (conv4_STATE_VARIABLE_TermInfos2Cord_27));
      *STATE_VARIABLE_First_29 = ((MR_Word) (conv3_STATE_VARIABLE_First_29));
    }
    else
    {
      *STATE_VARIABLE_First_29 = STATE_VARIABLE_First_0_28;
      *STATE_VARIABLE_TermInfos2Cord_27 = STATE_VARIABLE_TermInfos2Cord_0_26;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination_for_proc_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Integer _ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfosCord_0_31,
  MR_Word * STATE_VARIABLE_TermInfosCord_32,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34)
{
  transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_9_p_0(OrderPredInfo_10, ProcInfo_12, STATE_VARIABLE_TermInfosCord_0_31, STATE_VARIABLE_TermInfosCord_32, STATE_VARIABLE_First_0_33, STATE_VARIABLE_First_34);
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_9_p_0(
  MR_Word OrderPredInfo_10,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_TermInfosCord_0_31,
  MR_Word * STATE_VARIABLE_TermInfosCord_32,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      MR_String PredName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0))));
      MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word PredInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
      MR_Word ModuleName_21;
      MR_Word PredSymName_22;
      MR_Word ArgModes_23;
      MR_Word MaybeArgSize_24;
      MR_Word MaybeTermination_25;
      MR_Word PredNameModesPF_26;
      MR_Word MaybeParseTreeArgSize_27;
      MR_Word MaybeParseTreeTermination_28;
      MR_Word TermInfo_29;
      MR_Word ItemTerm_30;
      MR_Word Var_39;

      ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_20);
      {
        PredSymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_22, 0) = ((MR_Box) (ModuleName_21));
        MR_hl_field(MR_mktag(1), PredSymName_22, 1) = ((MR_Box) (PredName_16));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_12, &ArgModes_23);
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_12, &MaybeArgSize_24);
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_12, &MaybeTermination_25);
      switch (STATE_VARIABLE_First_0_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_34 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_34 = STATE_VARIABLE_First_0_33;
          break;
      }
      {
        PredNameModesPF_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_26, 0) = ((MR_Box) (PredSymName_22));
        MR_hl_field(MR_mktag(0), PredNameModesPF_26, 1) = ((MR_Box) (ArgModes_23));
        MR_hl_field(MR_mktag(0), PredNameModesPF_26, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      }
      if ((MaybeArgSize_24 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeParseTreeArgSize_27 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ArgSize_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSize_24, (MR_Integer) 0))));
        MR_Word ParseTreeArgSize_58;

        if (((MR_tag((MR_Word) ArgSize_55)) == (MR_Integer) 0))
          ParseTreeArgSize_58 = (MR_Word) (ArgSize_55);
        else
          ParseTreeArgSize_58 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_12[1]));
        {
          MaybeParseTreeArgSize_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeParseTreeArgSize_27, 0) = ((MR_Box) (ParseTreeArgSize_58));
        }
      }
      if ((MaybeTermination_25 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeParseTreeTermination_28 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Termination_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_25, (MR_Integer) 0))));
        MR_Word ParseTreeTermination_65;

        if (((MR_tag((MR_Word) Termination_63)) == (MR_Integer) 1))
          ParseTreeTermination_65 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_12[1]));
        else
          ParseTreeTermination_65 = (MR_Word) (Termination_63);
        {
          MaybeParseTreeTermination_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeParseTreeTermination_28, 0) = ((MR_Box) (ParseTreeTermination_65));
        }
      }
      {
        TermInfo_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TermInfo_29, 0) = ((MR_Box) (PredNameModesPF_26));
        MR_hl_field(MR_mktag(0), TermInfo_29, 1) = ((MR_Box) (MaybeParseTreeArgSize_27));
        MR_hl_field(MR_mktag(0), TermInfo_29, 2) = ((MR_Box) (MaybeParseTreeTermination_28));
      }
      Var_39 = mercury__term__context_init_0_f_0();
      {
        ItemTerm_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTerm_30, 0) = ((MR_Box) (TermInfo_29));
        MR_hl_field(MR_mktag(0), ItemTerm_30, 1) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), ItemTerm_30, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), ((MR_Box) (ItemTerm_30)), STATE_VARIABLE_TermInfosCord_0_31, STATE_VARIABLE_TermInfosCord_32);
      parse_tree__parse_tree_out_pragma__write_pragma_termination_info_4_p_0((MR_Integer) 0, TermInfo_29);
    }
    else
    {
      *STATE_VARIABLE_First_34 = STATE_VARIABLE_First_0_33;
      *STATE_VARIABLE_TermInfosCord_32 = STATE_VARIABLE_TermInfosCord_0_31;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TermInfosCord_32;
    MR_Word conv0_STATE_VARIABLE_First_34;

    transform_hlds__intermod__maybe_write_pragma_termination_for_proc_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TermInfosCord_32, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_34);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TermInfosCord_32));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_34));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_TermInfosCord_0_26,
  MR_Word * STATE_VARIABLE_TermInfosCord_27,
  MR_Word STATE_VARIABLE_First_0_28,
  MR_Word * STATE_VARIABLE_First_29)
{
  {
    MR_bool succeeded;
    MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3))));
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word PredStatus_19;
    MR_Word TypeSpecInfo_20;
    MR_Word TypeSpecForcePreds_22;
    MR_Word Var_52;
    MR_Word TypeCtorInfo_38_38;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_18, &PredStatus_19);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_9, &TypeSpecInfo_20);
    TypeSpecForcePreds_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_20, (MR_Integer) 1))));
    Var_52 = (MR_Word) (PredStatus_19);
    if ((Var_52 == (MR_Word) ((MR_Unsigned) 12U)))
      succeeded = MR_TRUE;
    else
    if ((Var_52 == (MR_Word) ((MR_Unsigned) 16U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_18);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_38_38 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_38_38, ((MR_Box) (PredId_17)), TypeSpecForcePreds_22);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcTable_25;
      MR_Word Var_34;
      MR_Box conv4_STATE_VARIABLE_TermInfosCord_27;
      MR_Box conv3_STATE_VARIABLE_First_29;
      MR_Box conv2_STATE_VARIABLE_IO_31;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcTable_25);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_13[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (OrderPredInfo_10));
      }
      mercury__map__foldl3_8_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, ProcTable_25, ((MR_Box) (STATE_VARIABLE_TermInfosCord_0_26)), &conv4_STATE_VARIABLE_TermInfosCord_27, ((MR_Box) (STATE_VARIABLE_First_0_28)), &conv3_STATE_VARIABLE_First_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
      *STATE_VARIABLE_TermInfosCord_27 = ((MR_Word) (conv4_STATE_VARIABLE_TermInfosCord_27));
      *STATE_VARIABLE_First_29 = ((MR_Word) (conv3_STATE_VARIABLE_First_29));
    }
    else
    {
      *STATE_VARIABLE_First_29 = STATE_VARIABLE_First_0_28;
      *STATE_VARIABLE_TermInfosCord_27 = STATE_VARIABLE_TermInfosCord_0_26;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_unused_args_5_p_0(
  MR_Word UnusedArgInfo_6,
  MR_Word STATE_VARIABLE_First_0_9,
  MR_Word * STATE_VARIABLE_First_10)
{
  {
    switch (STATE_VARIABLE_First_0_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__nl_2_p_0();
          *STATE_VARIABLE_First_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_First_10 = STATE_VARIABLE_First_0_9;
        break;
    }
    parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(UnusedArgInfo_6);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
  MR_Word Procs_11,
  MR_Word PredOrFunc_12,
  MR_Word PragmaImpl_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word ProgVarset0_16,
  MR_Word SymName_17,
  MR_Integer ProcId_18)
{
  {
    MR_Word ProcInfo_20;
    MR_Word MaybeArgModes_21;
    MR_Box conv0_ProcInfo_20;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_11, ((MR_Box) (ProcId_18)), &conv0_ProcInfo_20);
    ProcInfo_20 = ((MR_Word) (conv0_ProcInfo_20));
    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_20, &MaybeArgModes_21);
    if ((MaybeArgModes_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/10", (MR_String) "no mode declaration");
        return;
      }
    else
    {
      MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_21, (MR_Integer) 0))));
      MR_Word ProgVarset_23;
      MR_Word PragmaVars_24;
      MR_Word InstVarset_25;
      MR_Word FPInfo_26;

      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Args_15, ArgModes_22, ProgVarset0_16, &ProgVarset_23, &PragmaVars_24);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_20, &InstVarset_25);
      {
        FPInfo_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FPInfo_26, 0) = ((MR_Box) (Attributes_14));
        MR_hl_field(MR_mktag(0), FPInfo_26, 1) = ((MR_Box) (SymName_17));
        MR_hl_field(MR_mktag(0), FPInfo_26, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
        MR_hl_field(MR_mktag(0), FPInfo_26, 3) = ((MR_Box) (PragmaVars_24));
        MR_hl_field(MR_mktag(0), FPInfo_26, 4) = ((MR_Box) (ProgVarset_23));
        MR_hl_field(MR_mktag(0), FPInfo_26, 5) = ((MR_Box) (InstVarset_25));
        MR_hl_field(MR_mktag(0), FPInfo_26, 6) = ((MR_Box) (PragmaImpl_13));
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0((MR_Integer) 0, FPInfo_26);
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
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2270__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
  MR_Word OutInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word SymName_15,
  MR_Word PredOrFunc_16,
  MR_Word VarSet_17,
  MR_Word TypeQual_18,
  MR_Word HeadVars_19,
  MR_Word Clause0_20)
{
  {
    MR_bool succeeded;
    MR_Word ApplicableProcIds_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 0))));
    MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 1))));
    MR_Word ImplLang_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 2))));

    if ((ImplLang_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClauseHeadVars_27;
      MR_Word Clause_28;
      MR_Word Var_76;

      transform_hlds__intermod__strip_headvar_unifications_4_p_0(HeadVars_19, Clause0_20, &ClauseHeadVars_27, &Clause_28);
      Var_76 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(OutInfo_12, (MR_Integer) 0, ModuleInfo_13, PredId_14, PredOrFunc_16, Var_76, TypeQual_18, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, ClauseHeadVars_27, Clause_28);
    }
    else
    {
      MR_Word PredInfo_30;
      MR_Word Procs_31;
      MR_Word Attributes_47;
      MR_Word Args_50;
      MR_Word PragmaCode_53;
      MR_Word Var_95;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_14, &PredInfo_30);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_30, &Procs_31);
      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 0))));
      if (((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        Attributes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 1))));
        Args_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 4))));
        PragmaCode_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 7))));
        succeeded = MR_TRUE;
      }
      else
      if (((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 0)))) == (MR_Integer) 2))))
      {
        MR_Word TypeCtorInfo_87_87;
        MR_Word TypeInfo_96_96;
        MR_Word Goals_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 2))));
        MR_Word ForeignCodeGoal_44;
        MR_Word ForeignCodeGoalExpr_45;
        MR_Word Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_93;

        succeeded = (Var_62 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_63 = (MR_Word) (&transform_hlds__intermod_scalar_common_2[24]);
          Var_66 = (MR_Word) ((MR_Unsigned) 0U);
          TypeCtorInfo_87_87 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
          mercury__list__filter_3_p_0(TypeCtorInfo_87_87, Var_63, Goals_32, &Var_64);
          succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ForeignCodeGoal_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
            TypeInfo_96_96 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[39]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (Var_66)), ((MR_Box) (Var_93)));
            if (succeeded)
            {
              ForeignCodeGoalExpr_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCodeGoal_44, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) ForeignCodeGoalExpr_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Attributes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 1))));
                Args_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 4))));
                PragmaCode_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 7))));
              }
            }
          }
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        switch (MR_tag((MR_Word) ApplicableProcIds_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ApplicableProcIds_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "all_modes foreign_proc");
                  return;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "unify modes foreign_proc");
                  return;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProcIds_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplicableProcIds_22, (MR_Integer) 0))));
              MR_Word Var_69;
              MR_Box conv0_STATE_VARIABLE_IO_60;

              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[3]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Procs_31));
                MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (PredOrFunc_16));
                MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (PragmaCode_53));
                MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (Attributes_47));
                MR_hl_field(MR_mktag(0), Var_69, 7) = ((MR_Box) (Args_50));
                MR_hl_field(MR_mktag(0), Var_69, 8) = ((MR_Box) (VarSet_17));
                MR_hl_field(MR_mktag(0), Var_69, 9) = ((MR_Box) (SymName_15));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, ProcIds_58, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60);
            }
            break;
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "did not find foreign_proc");
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

    transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2334__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
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
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[30]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[31]), &HeadVarMap0_13);
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
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[4]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Clause0_6));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (HeadVarMap_15));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[30]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[31]), Var_22, HeadVars_5, HeadTerms_7);
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
      MR_Word RevGoals1_76;
      MR_Word STATE_VARIABLE_HeadVarMap_87_87;
      MR_Word LHSVar_19;
      MR_Word RHSTerm_27;
      MR_Word TypeInfo_90_90;
      MR_Word RHS_20;
      MR_Word Context_25;
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_HeadVarMap_0_5;

      succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 0))));
        RHS_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 1))));
        TypeInfo_90_90 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[30]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_90_90, ((MR_Box) (LHSVar_19)), HeadVars_2);
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
                      MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));
                      MR_Word ArgTerms_47;

                      mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_30, &ArgTerms_47);
                      parse_tree__prog_util__construct_qualified_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_44, ArgTerms_47, &RHSTerm_27);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Integer Int_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));

                      RHSTerm_27 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Int_31, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Unsigned UInt_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));

                      RHSTerm_27 = mercury__term__uint_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UInt_36, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      int8_t Int8_32 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__int8_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Int8_32, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      uint8_t UInt8_37 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__uint8_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UInt8_37, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      int16_t Int16_33 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__int16_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Int16_33, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      uint16_t UInt16_38 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__uint16_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UInt16_38, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 11:
                    {
                      int32_t Int32_34 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__int32_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Int32_34, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 12:
                    {
                      uint32_t UInt32_39 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__uint32_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UInt32_39, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      int64_t Int64_35 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__int64_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Int64_35, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 14:
                    {
                      uint64_t UInt64_40 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__uint64_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UInt64_40, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 15:
                    {
                      MR_Float Float_41 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_85;

                      {
                        Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), Var_85, 1) = MR_box_float(Float_41);
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_85));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 16:
                    {
                      MR_Char Char_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_82;
                      MR_String Var_83;

                      Var_83 = mercury__string__from_char_1_f_0(Char_42);
                      {
                        Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_82));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 17:
                    {
                      MR_String String_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1))));
                      MR_Word Var_80;

                      {
                        Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (String_43));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_80));
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
        succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[30]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[31]), ((MR_Box) (LHSVar_19)), ((MR_Box) (RHSTerm_27)), STATE_VARIABLE_HeadVarMap_0_5, &STATE_VARIABLE_HeadVarMap_87_87);
        if (succeeded)
        {
          RevGoals1_76 = HeadVar__3_3;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        {
          RevGoals1_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevGoals1_76, 0) = ((MR_Box) (Goal_13));
          MR_hl_field(MR_mktag(1), RevGoals1_76, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_HeadVarMap_87_87 = STATE_VARIABLE_HeadVarMap_0_5;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_14;
        next_value_of_HeadVar__3_3 = RevGoals1_76;
        next_value_of_STATE_VARIABLE_HeadVarMap_0_5 = STATE_VARIABLE_HeadVarMap_87_87;
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
transform_hlds__intermod__intermod_write_instance_6_p_0(
  MR_Word OutInfo_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstancesCord_0_27,
  MR_Word * STATE_VARIABLE_InstancesCord_28)
{
  {
    MR_Word ClassId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word InstanceDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 0))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 1))));
    MR_Word OriginalTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 2))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 4))));
    MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 5))));
    MR_Word Body_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 6))));
    MR_Word TVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 8))));
    MR_Word ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_8, (MR_Integer) 0))));
    MR_Word ItemInstance_24;
    MR_Word Item_25;
    MR_Word MercInfo_26;

    {
      ItemInstance_24 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemInstance_24, 0) = ((MR_Box) (ClassName_22));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 1) = ((MR_Box) (Types_13));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 2) = ((MR_Box) (OriginalTypes_14));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 3) = ((MR_Box) (Constraints_17));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 4) = ((MR_Box) (Body_18));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 5) = ((MR_Box) (TVarSet_20));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 6) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 7) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), ItemInstance_24, 8) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (ItemInstance_24)), STATE_VARIABLE_InstancesCord_0_27, STATE_VARIABLE_InstancesCord_28);
    {
      Item_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Item_25, 1) = ((MR_Box) (ItemInstance_24));
    }
    MercInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_7, (MR_Integer) 4))));
    parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_26, Item_25);
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

    conv0_HeadVar__3_12 = transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1864__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
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
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[5]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TVars_4));
    }
    ArgTVarsSet_14 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[28]), Var_15, DomainArgPosns_7);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[28]), ArgTVarsSet_14, &DomainTVars_9);
    ArgTVarsSet_24 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[28]), Var_15, RangeArgPosns_8);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[28]), ArgTVarsSet_24, &RangeTVars_10);
    {
      ParseTreeFunDep_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeFunDep_6, 0) = ((MR_Box) (DomainTVars_9));
      MR_hl_field(MR_mktag(0), ParseTreeFunDep_6, 1) = ((MR_Box) (RangeTVars_10));
    }
    return ParseTreeFunDep_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_10_p_0_1(
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
transform_hlds__intermod__intermod_write_class_10_p_0(
  MR_Word OutInfo_11,
  MR_Word ModuleName_12,
  MR_Word ClassId_13,
  MR_Word ClassDefn_14,
  MR_Word STATE_VARIABLE_TypeClassesCord_0_36,
  MR_Word * STATE_VARIABLE_TypeClassesCord_37,
  MR_Word STATE_VARIABLE_First_0_38,
  MR_Word * STATE_VARIABLE_First_39)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassStatus_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 0))));
    MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 1))));
    MR_Word HLDSFunDeps_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 2))));
    MR_Word TVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 4))));
    MR_Word Interface_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 6))));
    MR_Word TVarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 8))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_14, (MR_Integer) 9))));
    MR_Word QualifiedClassName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_13, (MR_Integer) 0))));
    MR_Word Var_58;
    MR_Word OldStatus_60;

    succeeded = ((MR_tag((MR_Word) QualifiedClassName_29)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), QualifiedClassName_29, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_58);
      if (succeeded)
      {
        OldStatus_60 = (MR_Word) (TypeClassStatus_18);
        switch (MR_tag((MR_Word) OldStatus_60)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_60)) {
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
              MR_Word Status_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_60, (MR_Integer) 0))));
              MR_Word Var_63;
              MR_Word Var_88;

              Var_63 = hlds__status__old_status_is_exported_1_f_0(Status_62);
              Var_88 = mercury__bool__not_1_f_0(Var_63);
              succeeded = (Var_88 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word FunDeps_32;
      MR_Word ItemTypeClass_33;
      MR_Word Item_34;
      MR_Word MercInfo_35;
      MR_Word Var_45;

      switch (STATE_VARIABLE_First_0_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_39 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_39 = STATE_VARIABLE_First_0_38;
          break;
      }
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[4]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (TVars_22));
      }
      FunDeps_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0), Var_45, HLDSFunDeps_20);
      {
        ItemTypeClass_33 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 0) = ((MR_Box) (QualifiedClassName_29));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 1) = ((MR_Box) (TVars_22));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 2) = ((MR_Box) (Constraints_19));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 3) = ((MR_Box) (FunDeps_32));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 4) = ((MR_Box) (Interface_24));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 5) = ((MR_Box) (TVarSet_26));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 6) = ((MR_Box) (Context_27));
        MR_hl_field(MR_mktag(0), ItemTypeClass_33, 7) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (ItemTypeClass_33)), STATE_VARIABLE_TypeClassesCord_0_36, STATE_VARIABLE_TypeClassesCord_37);
      {
        Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Item_34, 1) = ((MR_Box) (ItemTypeClass_33));
      }
      MercInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_11, (MR_Integer) 4))));
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, Item_34);
    }
    else
    {
      *STATE_VARIABLE_First_39 = STATE_VARIABLE_First_0_38;
      *STATE_VARIABLE_TypeClassesCord_37 = STATE_VARIABLE_TypeClassesCord_0_36;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_10_p_0(
  MR_Word OutInfo_11,
  MR_Word ModuleName_12,
  MR_Word ModeCtor_13,
  MR_Word ModeDefn_14,
  MR_Word STATE_VARIABLE_ModeDefnsCord_0_30,
  MR_Word * STATE_VARIABLE_ModeDefnsCord_31,
  MR_Word STATE_VARIABLE_First_0_32,
  MR_Word * STATE_VARIABLE_First_33)
{
  {
    MR_bool succeeded;
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtor_13, (MR_Integer) 0))));
    MR_Word Varset_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_14, (MR_Integer) 0))));
    MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_14, (MR_Integer) 1))));
    MR_Word Mode_22;
    MR_Word Context_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_14, (MR_Integer) 3))));
    MR_Word ModeStatus_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_14, (MR_Integer) 4))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_14, (MR_Integer) 2))));
    MR_Word Var_49;
    MR_Word InstModeStatus_52;
    MR_Word InstModeExport_55;

    Mode_22 = (MR_Word) (Var_36);
    succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_49);
      if (succeeded)
      {
        InstModeStatus_52 = (MR_Word) (ModeStatus_24);
        succeeded = ((MR_tag((MR_Word) InstModeStatus_52)) == (MR_Integer) 0);
        if (succeeded)
        {
          InstModeExport_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_52, (MR_Integer) 0))) & (MR_Integer) 3);
          switch (InstModeExport_55) {
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
      MR_Word MaybeAbstractModeDefn_26;
      MR_Word ItemModeDefn_27;
      MR_Word Item_28;
      MR_Word MercInfo_29;
      MR_Word Var_40;

      switch (STATE_VARIABLE_First_0_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_33 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_33 = STATE_VARIABLE_First_0_32;
          break;
      }
      Var_40 = (MR_Word) (Mode_22);
      {
        MaybeAbstractModeDefn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_26, 0) = ((MR_Box) (Var_40));
      }
      {
        ItemModeDefn_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemModeDefn_27, 0) = ((MR_Box) (SymName_18));
        MR_hl_field(MR_mktag(0), ItemModeDefn_27, 1) = ((MR_Box) (Args_21));
        MR_hl_field(MR_mktag(0), ItemModeDefn_27, 2) = ((MR_Box) (MaybeAbstractModeDefn_26));
        MR_hl_field(MR_mktag(0), ItemModeDefn_27, 3) = ((MR_Box) (Varset_20));
        MR_hl_field(MR_mktag(0), ItemModeDefn_27, 4) = ((MR_Box) (Context_23));
        MR_hl_field(MR_mktag(0), ItemModeDefn_27, 5) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ((MR_Box) (ItemModeDefn_27)), STATE_VARIABLE_ModeDefnsCord_0_30, STATE_VARIABLE_ModeDefnsCord_31);
      Item_28 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ItemModeDefn_27)));
      MercInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_11, (MR_Integer) 4))));
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_29, Item_28);
    }
    else
    {
      *STATE_VARIABLE_First_33 = STATE_VARIABLE_First_0_32;
      *STATE_VARIABLE_ModeDefnsCord_31 = STATE_VARIABLE_ModeDefnsCord_0_30;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_10_p_0(
  MR_Word OutInfo_11,
  MR_Word ModuleName_12,
  MR_Word InstCtor_13,
  MR_Word InstDefn_14,
  MR_Word STATE_VARIABLE_InstDefnsCord_0_33,
  MR_Word * STATE_VARIABLE_InstDefnsCord_34,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36)
{
  {
    MR_bool succeeded;
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_13, (MR_Integer) 0))));
    MR_Word Varset_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 0))));
    MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 1))));
    MR_Word Inst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 2))));
    MR_Word IFTC_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 3))));
    MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 4))));
    MR_Word InstStatus_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 5))));
    MR_Word Var_51;
    MR_Word InstModeStatus_54;
    MR_Word InstModeExport_57;

    succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_51);
      if (succeeded)
      {
        InstModeStatus_54 = (MR_Word) (InstStatus_25);
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
      MR_Word MaybeForTypeCtor_28;
      MR_Word ItemInstDefn_30;
      MR_Word Item_31;
      MR_Word MercInfo_32;
      MR_Word Var_42;

      switch (STATE_VARIABLE_First_0_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_36 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
          break;
      }
      switch (MR_tag((MR_Word) IFTC_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeForTypeCtor_28 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForTypeCtor_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IFTC_23, (MR_Integer) 0))));

            {
              MaybeForTypeCtor_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeForTypeCtor_28, 0) = ((MR_Box) (ForTypeCtor_27));
            }
          }
          break;
        case (MR_Integer) 2:
          MaybeForTypeCtor_28 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Inst_22));
      }
      {
        ItemInstDefn_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 0) = ((MR_Box) (SymName_18));
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 1) = ((MR_Box) (Args_21));
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 2) = ((MR_Box) (MaybeForTypeCtor_28));
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 3) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 4) = ((MR_Box) (Varset_20));
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 5) = ((MR_Box) (Context_24));
        MR_hl_field(MR_mktag(0), ItemInstDefn_30, 6) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), ((MR_Box) (ItemInstDefn_30)), STATE_VARIABLE_InstDefnsCord_0_33, STATE_VARIABLE_InstDefnsCord_34);
      Item_31 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemInstDefn_30)));
      MercInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_11, (MR_Integer) 4))));
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, Item_31);
    }
    else
    {
      *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
      *STATE_VARIABLE_InstDefnsCord_34 = STATE_VARIABLE_InstDefnsCord_0_33;
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

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__gather_foreign_enum_value_pair__1719__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[7]));
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
transform_hlds__intermod__intermod_write_type_8_p_0_1(
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
transform_hlds__intermod__intermod_write_type_8_p_0(
  MR_Word OutInfo_9,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeDefnsCord_0_92,
  MR_Word * STATE_VARIABLE_TypeDefnsCord_93,
  MR_Word STATE_VARIABLE_ForeignEnumsCord_0_94,
  MR_Word * STATE_VARIABLE_ForeignEnumsCord_95)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word VarSet_15;
    MR_Word Args_16;
    MR_Word Body_17;
    MR_Word Context_18;
    MR_Word Name_19;
    MR_Word TypeBody_28;
    MR_Word MainItemTypeDefn_33;
    MR_Word MainItem_34;
    MR_Word MercInfo_35;
    MR_Word STATE_VARIABLE_TypeDefnsCord_103_103;
    MR_Word MaybeC_41;
    MR_Word MaybeJava_42;
    MR_Word MaybeCSharp_43;
    MR_Word MaybeErlang_44;
    MR_Word ForeignTypeBody_36;
    MR_Word CtorRepns_78;
    MR_Word Lang_83;
    MR_Word MaybeRepnB_75;
    MR_Word RepnB_77;
    MR_Word DuTypeKind_81;

    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_11, &VarSet_15);
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &Args_16);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &Body_17);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_11, &Context_18);
    Name_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) Body_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeBody_28 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[40]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_17, (MR_Integer) 0))));
          MR_Word MaybeUserEqComp_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_17, (MR_Integer) 1))));
          MR_Word MaybeRepnA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_17, (MR_Integer) 2))));
          MR_Word MaybeDirectArgCtors_26;
          MR_Word DetailsDu_27;

          if ((MaybeRepnA_23 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_type\'/8", (MR_String) "MaybeRepnA = no");
              return;
            }
          else
          {
            MR_Word RepnA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepnA_23, (MR_Integer) 0))));

            MaybeDirectArgCtors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RepnA_25, (MR_Integer) 4))));
          }
          {
            DetailsDu_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetailsDu_27, 0) = ((MR_Box) (Ctors_21));
            MR_hl_field(MR_mktag(0), DetailsDu_27, 1) = ((MR_Box) (MaybeUserEqComp_22));
            MR_hl_field(MR_mktag(0), DetailsDu_27, 2) = ((MR_Box) (MaybeDirectArgCtors_26));
          }
          TypeBody_28 = (MR_Word) ((MR_Word) (DetailsDu_27));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Body_17, (MR_Integer) 0))));
          MR_Word Var_99 = (MR_Word) (EqvType_29);

          {
            TypeBody_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), TypeBody_28, 0) = ((MR_Box) (Var_99));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body_17, (MR_Integer) 1))));

              TypeBody_28 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSolver_32)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Details_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body_17, (MR_Integer) 1))));

              {
                TypeBody_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeBody_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), TypeBody_28, 1) = ((MR_Box) (Details_30));
              }
            }
            break;
        }
        break;
    }
    {
      MainItemTypeDefn_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_33, 0) = ((MR_Box) (Name_19));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_33, 1) = ((MR_Box) (Args_16));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_33, 2) = ((MR_Box) (TypeBody_28));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_33, 3) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_33, 4) = ((MR_Box) (Context_18));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_33, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), ((MR_Box) (MainItemTypeDefn_33)), STATE_VARIABLE_TypeDefnsCord_0_92, &STATE_VARIABLE_TypeDefnsCord_103_103);
    {
      MainItem_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MainItem_34, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), MainItem_34, 1) = ((MR_Box) (MainItemTypeDefn_33));
    }
    MercInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 4))));
    parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, MainItem_34);
    if (((MR_tag((MR_Word) Body_17)) == (MR_Integer) 1))
    {
      MR_Word MaybeForeignTypeBody_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_17, (MR_Integer) 3))));

      succeeded = (MaybeForeignTypeBody_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ForeignTypeBody_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBody_40, (MR_Integer) 0))));
    }
    else
    if (((MR_tag((MR_Word) Body_17)) == (MR_Integer) 0))
    {
      ForeignTypeBody_36 = (MR_Word) ((MR_Word) (Body_17));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MaybeC_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_36, (MR_Integer) 0))));
      MaybeJava_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_36, (MR_Integer) 1))));
      MaybeCSharp_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_36, (MR_Integer) 2))));
      MaybeErlang_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_36, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_TypeDefnsCord_108_108;
      MR_Word STATE_VARIABLE_TypeDefnsCord_113_113;
      MR_Word STATE_VARIABLE_TypeDefnsCord_118_118;

      if ((MaybeC_41 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_TypeDefnsCord_108_108 = STATE_VARIABLE_TypeDefnsCord_103_103;
      else
      {
        MR_Word DataC_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeC_41, (MR_Integer) 0))));
        MR_Word CForeignType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataC_45, (MR_Integer) 0))));
        MR_Word CMaybeUserEqComp_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataC_45, (MR_Integer) 1))));
        MR_Word AssertionsC_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataC_45, (MR_Integer) 2))));
        MR_Word CDetailsForeign_49;
        MR_Word CItemTypeDefn_50;
        MR_Word CItem_51;
        MR_Word Var_105;
        MR_Word Var_106;

        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (CForeignType_46));
        }
        {
          CDetailsForeign_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CDetailsForeign_49, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), CDetailsForeign_49, 1) = ((MR_Box) (CMaybeUserEqComp_47));
          MR_hl_field(MR_mktag(0), CDetailsForeign_49, 2) = ((MR_Box) (AssertionsC_48));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (CDetailsForeign_49));
        }
        {
          CItemTypeDefn_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CItemTypeDefn_50, 0) = ((MR_Box) (Name_19));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_50, 1) = ((MR_Box) (Args_16));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_50, 2) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_50, 3) = ((MR_Box) (VarSet_15));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_50, 4) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_50, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), ((MR_Box) (CItemTypeDefn_50)), STATE_VARIABLE_TypeDefnsCord_103_103, &STATE_VARIABLE_TypeDefnsCord_108_108);
        {
          CItem_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CItem_51, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), CItem_51, 1) = ((MR_Box) (CItemTypeDefn_50));
        }
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, CItem_51);
      }
      if ((MaybeJava_42 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_TypeDefnsCord_113_113 = STATE_VARIABLE_TypeDefnsCord_108_108;
      else
      {
        MR_Word DataJava_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeJava_42, (MR_Integer) 0))));
        MR_Word JavaForeignType_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataJava_52, (MR_Integer) 0))));
        MR_Word JavaMaybeUserEqComp_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataJava_52, (MR_Integer) 1))));
        MR_Word AssertionsJava_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataJava_52, (MR_Integer) 2))));
        MR_Word JavaDetailsForeign_56;
        MR_Word JavaItemTypeDefn_57;
        MR_Word JavaItem_58;
        MR_Word Var_110;
        MR_Word Var_111;

        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (JavaForeignType_53));
        }
        {
          JavaDetailsForeign_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_56, 0) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_56, 1) = ((MR_Box) (JavaMaybeUserEqComp_54));
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_56, 2) = ((MR_Box) (AssertionsJava_55));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (JavaDetailsForeign_56));
        }
        {
          JavaItemTypeDefn_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_57, 0) = ((MR_Box) (Name_19));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_57, 1) = ((MR_Box) (Args_16));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_57, 2) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_57, 3) = ((MR_Box) (VarSet_15));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_57, 4) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_57, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), ((MR_Box) (JavaItemTypeDefn_57)), STATE_VARIABLE_TypeDefnsCord_108_108, &STATE_VARIABLE_TypeDefnsCord_113_113);
        {
          JavaItem_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), JavaItem_58, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), JavaItem_58, 1) = ((MR_Box) (JavaItemTypeDefn_57));
        }
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, JavaItem_58);
      }
      if ((MaybeCSharp_43 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_TypeDefnsCord_118_118 = STATE_VARIABLE_TypeDefnsCord_113_113;
      else
      {
        MR_Word DataCSharp_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCSharp_43, (MR_Integer) 0))));
        MR_Word CSharpForeignType_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataCSharp_59, (MR_Integer) 0))));
        MR_Word CSharpMaybeUserEqComp_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataCSharp_59, (MR_Integer) 1))));
        MR_Word AssertionsCSharp_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataCSharp_59, (MR_Integer) 2))));
        MR_Word CSharpDetailsForeign_63;
        MR_Word CSharpItemTypeDefn_64;
        MR_Word CSharpItem_65;
        MR_Word Var_115;
        MR_Word Var_116;

        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_115, 0) = ((MR_Box) (CSharpForeignType_60));
        }
        {
          CSharpDetailsForeign_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_63, 0) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_63, 1) = ((MR_Box) (CSharpMaybeUserEqComp_61));
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_63, 2) = ((MR_Box) (AssertionsCSharp_62));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (CSharpDetailsForeign_63));
        }
        {
          CSharpItemTypeDefn_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_64, 0) = ((MR_Box) (Name_19));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_64, 1) = ((MR_Box) (Args_16));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_64, 2) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_64, 3) = ((MR_Box) (VarSet_15));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_64, 4) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_64, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), ((MR_Box) (CSharpItemTypeDefn_64)), STATE_VARIABLE_TypeDefnsCord_113_113, &STATE_VARIABLE_TypeDefnsCord_118_118);
        {
          CSharpItem_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CSharpItem_65, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), CSharpItem_65, 1) = ((MR_Box) (CSharpItemTypeDefn_64));
        }
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, CSharpItem_65);
      }
      if ((MaybeErlang_44 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_TypeDefnsCord_93 = STATE_VARIABLE_TypeDefnsCord_118_118;
      else
      {
        MR_Word DataErlang_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErlang_44, (MR_Integer) 0))));
        MR_Word ErlangMaybeUserEqComp_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataErlang_66, (MR_Integer) 1))));
        MR_Word AssertionsErlang_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataErlang_66, (MR_Integer) 2))));
        MR_Word ErlangDetailsForeign_70;
        MR_Word ErlangItemTypeDefn_71;
        MR_Word ErlangItem_72;
        MR_Word Var_120;
        MR_Word Var_121;

        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_120, 0) = NULL;
        }
        {
          ErlangDetailsForeign_70 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErlangDetailsForeign_70, 0) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), ErlangDetailsForeign_70, 1) = ((MR_Box) (ErlangMaybeUserEqComp_68));
          MR_hl_field(MR_mktag(0), ErlangDetailsForeign_70, 2) = ((MR_Box) (AssertionsErlang_69));
        }
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (ErlangDetailsForeign_70));
        }
        {
          ErlangItemTypeDefn_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_71, 0) = ((MR_Box) (Name_19));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_71, 1) = ((MR_Box) (Args_16));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_71, 2) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_71, 3) = ((MR_Box) (VarSet_15));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_71, 4) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_71, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), ((MR_Box) (ErlangItemTypeDefn_71)), STATE_VARIABLE_TypeDefnsCord_118_118, STATE_VARIABLE_TypeDefnsCord_93);
        {
          ErlangItem_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErlangItem_72, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), ErlangItem_72, 1) = ((MR_Box) (ErlangItemTypeDefn_71));
        }
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, ErlangItem_72);
      }
    }
    else
      *STATE_VARIABLE_TypeDefnsCord_93 = STATE_VARIABLE_TypeDefnsCord_103_103;
    succeeded = ((MR_tag((MR_Word) Body_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      MaybeRepnB_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_17, (MR_Integer) 2))));
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

      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[24]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[23]), CtorRepns_78, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevForeignEnumVals_84);
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
        MR_Word Var_127;

        {
          OoMForeignEnumVals_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMForeignEnumVals_88, 0) = ((MR_Box) (HeadForeignEnumVal_86));
          MR_hl_field(MR_mktag(0), OoMForeignEnumVals_88, 1) = ((MR_Box) (TailForeignEnumVals_87));
        }
        Var_127 = mercury__term__context_init_0_f_0();
        {
          ForeignEnum_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 0) = (MR_Box) ((MR_Unsigned) (Lang_83));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 1) = ((MR_Box) (TypeCtor_10));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 2) = ((MR_Box) (OoMForeignEnumVals_88));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 3) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), ForeignEnum_89, 4) = ((MR_Box) ((MR_Integer) -1));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ((MR_Box) (ForeignEnum_89)), STATE_VARIABLE_ForeignEnumsCord_0_94, STATE_VARIABLE_ForeignEnumsCord_95);
        {
          ItemForeignEnum_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 0) = (MR_Box) ((MR_Unsigned) (Lang_83));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 1) = ((MR_Box) (TypeCtor_10));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 2) = ((MR_Box) (OoMForeignEnumVals_88));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 3) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), ItemForeignEnum_90, 4) = ((MR_Box) ((MR_Integer) -1));
        }
        {
          ForeignItem_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ForeignItem_91, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ForeignItem_91, 1) = ((MR_Box) (ItemForeignEnum_90));
        }
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_35, ForeignItem_91);
      }
    }
    else
      *STATE_VARIABLE_ForeignEnumsCord_95 = STATE_VARIABLE_ForeignEnumsCord_0_94;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_3_p_0(
  MR_Word ModuleName_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) ":- use_module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_4);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_nl_4_p_0(
  MR_Word STATE_VARIABLE_First_0_7,
  MR_Word * STATE_VARIABLE_First_8)
{
  switch (STATE_VARIABLE_First_0_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__nl_2_p_0();
        *STATE_VARIABLE_First_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_First_8 = STATE_VARIABLE_First_0_7;
      break;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_27,
  MR_Word * STATE_VARIABLE_IntermodInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 0))));
    MR_Word ModuleName_9;
    MR_Word TypeStatus_53;
    MR_Word Name_54;
    MR_Word Var_58;
    MR_Word OldStatus_60;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_9);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_6, &TypeStatus_53);
    Name_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Name_54)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_54, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_9, Var_58);
      if (succeeded)
      {
        OldStatus_60 = (MR_Word) (TypeStatus_53);
        switch (MR_tag((MR_Word) OldStatus_60)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_60)) {
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
              MR_Word Status_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_60, (MR_Integer) 0))));
              MR_Word Var_63;
              MR_Word Var_112;

              Var_63 = hlds__status__old_status_is_exported_1_f_0(Status_62);
              Var_112 = mercury__bool__not_1_f_0(Var_63);
              succeeded = (Var_112 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeBody0_10;
      MR_Word TypeDefn_22;
      MR_Word Types0_26;
      MR_Word STATE_VARIABLE_IntermodInfo_33_33;
      MR_Word Var_35;
      MR_Word Var_37;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_6, &TypeBody0_10);
      switch (MR_tag((MR_Word) TypeBody0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_IntermodInfo_29_29;
            MR_Word ForeignTypeBody0_38 = (MR_Word) ((MR_Word) (TypeBody0_10));
            MR_Word ForeignTypeBody_39;
            MR_Word TypeBody_40;
            MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 0))));
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 2))));
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 3))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 4))));
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 5))));

            {
              STATE_VARIABLE_IntermodInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 1) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 2) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 3) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 4) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 5) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_29_29, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_38, &ForeignTypeBody_39, STATE_VARIABLE_IntermodInfo_29_29, &STATE_VARIABLE_IntermodInfo_33_33);
            TypeBody_40 = (MR_Word) ((MR_Word) (ForeignTypeBody_39));
            hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_40, TypeDefn0_6, &TypeDefn_22);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 0))));
            MR_Word MaybeUserEqComp0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 1))));
            MR_Word MaybeRepn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 2))));
            MR_Word MaybeForeign0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 3))));
            MR_Word Globals_15;
            MR_Word Target_16;
            MR_Word MaybeForeign_19;
            MR_Word MaybeUserEqComp_20;
            MR_Word TypeBody_21;
            MR_Word ForeignTypeBody0_17;
            MR_Word Var_31;
            MR_Word Var_41;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_15);
            libs__globals__get_target_2_p_0(Globals_15, &Target_16);
            succeeded = (MaybeForeign0_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ForeignTypeBody0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeign0_14, (MR_Integer) 0))));
              Var_31 = (MR_Integer) 1;
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_16, ForeignTypeBody0_17, &Var_41);
              succeeded = (Var_31 == Var_41);
            }
            if (succeeded)
            {
              MR_Word ForeignTypeBody_18;
              MR_Word STATE_VARIABLE_IntermodInfo_32_32;
              MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 0))));
              MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 1))));
              MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 2))));
              MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 3))));
              MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 4))));
              MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_27, (MR_Integer) 5))));

              {
                STATE_VARIABLE_IntermodInfo_32_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 0) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 1) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 2) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 3) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 4) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 5) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_32_32, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_17, &ForeignTypeBody_18, STATE_VARIABLE_IntermodInfo_32_32, &STATE_VARIABLE_IntermodInfo_33_33);
              {
                MaybeForeign_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeForeign_19, 0) = ((MR_Box) (ForeignTypeBody_18));
              }
              MaybeUserEqComp_20 = MaybeUserEqComp0_12;
            }
            else
            {
              transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_12, &MaybeUserEqComp_20, STATE_VARIABLE_IntermodInfo_0_27, &STATE_VARIABLE_IntermodInfo_33_33);
              MaybeForeign_19 = MaybeForeign0_14;
            }
            {
              TypeBody_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeBody_21, 0) = ((MR_Box) (Ctors_11));
              MR_hl_field(MR_mktag(1), TypeBody_21, 1) = ((MR_Box) (MaybeUserEqComp_20));
              MR_hl_field(MR_mktag(1), TypeBody_21, 2) = ((MR_Box) (MaybeRepn_13));
              MR_hl_field(MR_mktag(1), TypeBody_21, 3) = ((MR_Box) (MaybeForeign_19));
            }
            hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_21, TypeDefn0_6, &TypeDefn_22);
          }
          break;
        case (MR_Integer) 2:
          {
            TypeDefn_22 = TypeDefn0_6;
            STATE_VARIABLE_IntermodInfo_33_33 = STATE_VARIABLE_IntermodInfo_0_27;
          }
          break;
        case (MR_Integer) 3:
          {
            TypeDefn_22 = TypeDefn0_6;
            STATE_VARIABLE_IntermodInfo_33_33 = STATE_VARIABLE_IntermodInfo_0_27;
          }
          break;
      }
      Types0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_33_33, (MR_Integer) 5))));
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (TypeCtor_5));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (TypeDefn_22));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Types0_26));
      }
      transform_hlds__intermod__intermod_info_set_types_3_p_0(Var_35, STATE_VARIABLE_IntermodInfo_33_33, STATE_VARIABLE_IntermodInfo_28);
    }
    else
      *STATE_VARIABLE_IntermodInfo_28 = STATE_VARIABLE_IntermodInfo_0_27;
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
            MR_Word Uni0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical0_12, (MR_Integer) 0))));
            MR_Word Cmp0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical0_12, (MR_Integer) 1))));
            MR_Word Uni_16;
            MR_Word Cmp_17;
            MR_Word NonCanonical_18;
            MR_Word STATE_VARIABLE_IntermodInfo_26_26;

            transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_14, &Uni_16, STATE_VARIABLE_IntermodInfo_0_19, &STATE_VARIABLE_IntermodInfo_26_26);
            transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 2, TypeCtor_8, Cmp0_15, &Cmp_17, STATE_VARIABLE_IntermodInfo_26_26, STATE_VARIABLE_IntermodInfo_20);
            {
              NonCanonical_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NonCanonical_18, 0) = ((MR_Box) (Uni_16));
              MR_hl_field(MR_mktag(0), NonCanonical_18, 1) = ((MR_Box) (Cmp_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCanonical_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonCanonical_18));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical0_12, (MR_Integer) 0))));
            MR_Word Uni_30;
            MR_Word NonCanonical_31;

            transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_29, &Uni_30, STATE_VARIABLE_IntermodInfo_0_19, STATE_VARIABLE_IntermodInfo_20);
            {
              NonCanonical_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NonCanonical_31, 0) = ((MR_Box) (Uni_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCanonical_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonCanonical_31));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Cmp0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical0_12, (MR_Integer) 0))));
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

              transform_hlds__intermod__intermod_do_add_proc_4_p_0(UserEqPredId_53, &Var_65, STATE_VARIABLE_IntermodInfo_0_19, STATE_VARIABLE_IntermodInfo_20);
            }
            {
              NonCanonical_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), NonCanonical_34, 0) = ((MR_Box) (Cmp_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCanonical_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonCanonical_34));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            *MaybeCanonical_10 = MaybeCanonical0_9;
            *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
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
  MR_Word STATE_VARIABLE_IntermodInfo_0_22,
  MR_Word * STATE_VARIABLE_IntermodInfo_23)
{
  {
    MR_Word MaybeC0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 0))));
    MR_Word MaybeJava0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 1))));
    MR_Word MaybeCSharp0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 2))));
    MR_Word MaybeErlang0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 3))));
    MR_Word Globals_16;
    MR_Word Target_17;
    MR_Word MaybeC_18;
    MR_Word MaybeCSharp_19;
    MR_Word MaybeJava_20;
    MR_Word MaybeErlang_21;
    MR_Word STATE_VARIABLE_IntermodInfo_24_24;
    MR_Word STATE_VARIABLE_IntermodInfo_25_25;
    MR_Word STATE_VARIABLE_IntermodInfo_26_26;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_16);
    libs__globals__get_target_2_p_0(Globals_16, &Target_17);
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeC0_12, &MaybeC_18, STATE_VARIABLE_IntermodInfo_0_22, &STATE_VARIABLE_IntermodInfo_24_24);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MaybeC_18 = MaybeC0_12;
          STATE_VARIABLE_IntermodInfo_24_24 = STATE_VARIABLE_IntermodInfo_0_22;
        }
        break;
    }
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MaybeCSharp_19 = MaybeCSharp0_14;
          STATE_VARIABLE_IntermodInfo_25_25 = STATE_VARIABLE_IntermodInfo_24_24;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeCSharp0_14, &MaybeCSharp_19, STATE_VARIABLE_IntermodInfo_24_24, &STATE_VARIABLE_IntermodInfo_25_25);
        break;
    }
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          MaybeJava_20 = MaybeJava0_13;
          STATE_VARIABLE_IntermodInfo_26_26 = STATE_VARIABLE_IntermodInfo_25_25;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeJava0_13, &MaybeJava_20, STATE_VARIABLE_IntermodInfo_25_25, &STATE_VARIABLE_IntermodInfo_26_26);
        break;
    }
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MaybeErlang_21 = MaybeErlang0_15;
          *STATE_VARIABLE_IntermodInfo_23 = STATE_VARIABLE_IntermodInfo_26_26;
        }
        break;
      case (MR_Integer) 3:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeErlang0_15, &MaybeErlang_21, STATE_VARIABLE_IntermodInfo_26_26, STATE_VARIABLE_IntermodInfo_23);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ForeignTypeBody_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeC_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeJava_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeCSharp_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeErlang_21));
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
              MR_Word Uni0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical0_29, (MR_Integer) 0))));
              MR_Word Cmp0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical0_29, (MR_Integer) 1))));
              MR_Word Uni_33;
              MR_Word Cmp_34;
              MR_Word NonCanonical_35;
              MR_Word STATE_VARIABLE_IntermodInfo_26_41;

              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_31, &Uni_33, STATE_VARIABLE_IntermodInfo_0_16, &STATE_VARIABLE_IntermodInfo_26_41);
              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 2, TypeCtor_8, Cmp0_32, &Cmp_34, STATE_VARIABLE_IntermodInfo_26_41, STATE_VARIABLE_IntermodInfo_17);
              {
                NonCanonical_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NonCanonical_35, 0) = ((MR_Box) (Uni_33));
                MR_hl_field(MR_mktag(0), NonCanonical_35, 1) = ((MR_Box) (Cmp_34));
              }
              {
                MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (NonCanonical_35));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uni0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical0_29, (MR_Integer) 0))));
              MR_Word Uni_45;
              MR_Word NonCanonical_46;

              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 0, TypeCtor_8, Uni0_44, &Uni_45, STATE_VARIABLE_IntermodInfo_0_16, STATE_VARIABLE_IntermodInfo_17);
              {
                NonCanonical_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NonCanonical_46, 0) = ((MR_Box) (Uni_45));
              }
              {
                MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (NonCanonical_46));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Cmp0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical0_29, (MR_Integer) 0))));
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

                transform_hlds__intermod__intermod_do_add_proc_4_p_0(UserEqPredId_68, &Var_80, STATE_VARIABLE_IntermodInfo_0_16, STATE_VARIABLE_IntermodInfo_17);
              }
              {
                NonCanonical_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), NonCanonical_49, 0) = ((MR_Box) (Cmp_48));
              }
              {
                MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (NonCanonical_49));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MaybeUserEqComp_15 = MaybeUserEqComp0_13;
              *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
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

      transform_hlds__intermod__intermod_do_add_proc_4_p_0(UserEqPredId_24, &Var_38, STATE_VARIABLE_IntermodInfo_0_26, STATE_VARIABLE_IntermodInfo_27);
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

    conv2_LambdaHeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1107__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv1_LambdaHeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1094__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
        TypeInfo_78_78 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[17]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_77_77, TypeInfo_78_78, CtorFieldTable_21, ((MR_Box) (FieldName_23)), &conv0_FieldDefns_24);
        if (succeeded)
        {
          FieldDefns_24 = ((MR_Word) (conv0_FieldDefns_24));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[21]), FieldDefns_24);
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
      TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[22]), MatchingConstructors_34);
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
          succeeded = MR_TRUE;
        }
      }
    }
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
    MR_Word conv5_DoWrite_6;
    MR_Word conv4_STATE_VARIABLE_IntermodInfo_9;

    transform_hlds__intermod__intermod_add_proc_4_p_0(((MR_Word) (wrapper_arg_1)), &conv5_DoWrite_6, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_IntermodInfo_9);
    *wrapper_arg_2 = ((MR_Box) (conv5_DoWrite_6));
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
  MR_Word STATE_VARIABLE_IntermodInfo_0_35,
  MR_Word * STATE_VARIABLE_IntermodInfo_36)
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
        *STATE_VARIABLE_IntermodInfo_36 = STATE_VARIABLE_IntermodInfo_0_35;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Interface_31;
          MR_Word STATE_VARIABLE_IntermodInfo_44_44;
          MR_Word Var_45;

          if ((Interface0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Interface_31 = Interface0_16;
            STATE_VARIABLE_IntermodInfo_44_44 = STATE_VARIABLE_IntermodInfo_0_35;
          }
          else
          {
            MR_Word Methods0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_16, (MR_Integer) 0))));
            MR_Word MethodAL_26;
            MR_Word Methods_27;
            MR_Word PredIds_28;
            MR_Word DoWriteMethodsList_29;
            MR_Word DoWriteMethods_30;
            MR_Word Var_40;
            MR_Word STATE_VARIABLE_IntermodInfo_43_43;
            MR_Box conv3_PredIds_28;
            MR_Box conv6_STATE_VARIABLE_IntermodInfo_43_43;

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

              ClassPreds0_24 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[19]), ClassProcs_23);
              mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ClassPreds0_24, &ClassPreds_25);
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), ClassPreds_25, Methods0_22, &MethodAL_26);
            }
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5]));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleInfo_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[16]), Var_40, MethodAL_26, &Methods_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_PredIds_28);
            PredIds_28 = ((MR_Word) (conv3_PredIds_28));
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[20]), PredIds_28, &DoWriteMethodsList_29, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_35)), &conv6_STATE_VARIABLE_IntermodInfo_43_43);
            STATE_VARIABLE_IntermodInfo_43_43 = ((MR_Word) (conv6_STATE_VARIABLE_IntermodInfo_43_43));
            mercury__bool__and_list_2_p_0(DoWriteMethodsList_29, &DoWriteMethods_30);
            switch (DoWriteMethods_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Interface_31 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_IntermodInfo_44_44 = STATE_VARIABLE_IntermodInfo_0_35;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    Interface_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Interface_31, 0) = ((MR_Box) (Methods_27));
                  }
                  STATE_VARIABLE_IntermodInfo_44_44 = STATE_VARIABLE_IntermodInfo_43_43;
                }
                break;
            }
          }
          succeeded = (Interface_31 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_45 = hlds__status__instance_status_is_exported_1_f_0(InstanceStatus_13);
            succeeded = (Var_45 != (MR_Integer) 0);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Word InstanceDefnToWrite_32;
            MR_Word Instances0_33;
            MR_Word Instances_34;
            MR_Word Var_46;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;

            {
              InstanceDefnToWrite_32 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 0) = ((MR_Box) (ModuleName_10));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 1) = ((MR_Box) (Types_11));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 2) = ((MR_Box) (OriginalTypes_12));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 3) = ((MR_Box) (InstanceStatus_13));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 4) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 5) = ((MR_Box) (InstanceConstraints_15));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 6) = ((MR_Box) (Interface_31));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 7) = ((MR_Box) (MaybePredProcIds_17));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 8) = ((MR_Box) (TVarSet_18));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 9) = ((MR_Box) (Proofs_19));
            }
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 0))));
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 1))));
            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 2))));
            Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 3))));
            Instances0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 4))));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 5))));
            Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_44_44, (MR_Integer) 6))) & (MR_Integer) 1);
            {
              Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (ClassId_7));
              MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (InstanceDefnToWrite_32));
            }
            {
              Instances_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Instances_34, 0) = ((MR_Box) (Var_46));
              MR_hl_field(MR_mktag(1), Instances_34, 1) = ((MR_Box) (Instances0_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_IntermodInfo_36 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Instances_34));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_74));
            }
          }
          else
            *STATE_VARIABLE_IntermodInfo_36 = STATE_VARIABLE_IntermodInfo_44_44;
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
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_36;

    transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IntermodInfo_36);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_36));
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
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word Globals_4;
    MR_Word VeryVerbose_5;
    MR_Word IntermodInfo_7;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &Globals_4);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 66, &VeryVerbose_5);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    transform_hlds__intermod__decide_what_to_opt_export_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &IntermodInfo_7);
    transform_hlds__intermod__maybe_opt_export_listed_entities_3_p_0(IntermodInfo_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_5, (MR_String) " done\n");
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
    MR_Word PredDeclsSet_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 3))));
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
    hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[16]), TypeTable0_33, &TypeTable_34, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv2_STATE_VARIABLE_ModuleInfo_9_36);
    STATE_VARIABLE_ModuleInfo_9_36 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_9_36));
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_34, STATE_VARIABLE_ModuleInfo_9_36, &STATE_VARIABLE_ModuleInfo_11_11);
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_11_11, &Classes0_47);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes0_47, &ClassAL0_48);
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[6]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[6]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[17]), ClassAL0_48, &ClassAL_49, ((MR_Box) (STATE_VARIABLE_ModuleInfo_11_11)), &conv5_STATE_VARIABLE_ModuleInfo_11_52);
    STATE_VARIABLE_ModuleInfo_11_52 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_11_52));
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassAL_49, &Classes_50);
    hlds__hlds_module__module_info_set_class_table_3_p_0(Classes_50, STATE_VARIABLE_ModuleInfo_11_52, &STATE_VARIABLE_ModuleInfo_12_12);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &Instances0_65);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), Instances0_65, &InstanceAL0_66);
    mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[7]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[7]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[18]), InstanceAL0_66, &InstanceAL_67, ((MR_Box) (STATE_VARIABLE_ModuleInfo_12_12)), &conv8_STATE_VARIABLE_ModuleInfo_11_70);
    STATE_VARIABLE_ModuleInfo_11_70 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_11_70));
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), InstanceAL_67, &Instances_68);
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
      MR_Word ToWrite_12;
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
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              ToWrite_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              ToWrite_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 7:
              ToWrite_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              ToWrite_12 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Status_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldStatus_30, (MR_Integer) 0))));
            MR_Word Var_33;

            Var_33 = hlds__status__old_status_is_exported_1_f_0(Status_32);
            ToWrite_12 = mercury__bool__not_1_f_0(Var_33);
          }
          break;
        case (MR_Integer) 2:
          ToWrite_12 = (MR_Integer) 0;
          break;
      }
      switch (ToWrite_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
          break;
        case (MR_Integer) 1:
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
                PredStatus_15 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_12[0]))));
              else
                PredStatus_15 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
            }
            hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_15, PredInfo0_10, &PredInfo_17);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_17)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
          }
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

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_7(
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
    MR_Word conv31_STATE_VARIABLE_ReuseInfosCord_21;
    MR_Word conv30_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv31_STATE_VARIABLE_ReuseInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv30_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv31_STATE_VARIABLE_ReuseInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv30_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_6(
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
    MR_Word conv26_STATE_VARIABLE_SharingInfosCord_21;
    MR_Word conv25_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_STATE_VARIABLE_SharingInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv25_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv26_STATE_VARIABLE_SharingInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv25_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_5(
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
    MR_Word conv21_STATE_VARIABLE_MMTablingInfosCord_21;
    MR_Word conv20_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_MMTablingInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv20_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_MMTablingInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv20_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_4(
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
    MR_Word conv16_STATE_VARIABLE_TrailingInfosCord_21;
    MR_Word conv15_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_TrailingInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv15_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_TrailingInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_3(
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
    MR_Word conv11_STATE_VARIABLE_ExceptionsCord_21;
    MR_Word conv10_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_ExceptionsCord_21, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_ExceptionsCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_2(
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
    MR_Word conv6_STATE_VARIABLE_TermInfos2Cord_27;
    MR_Word conv5_STATE_VARIABLE_First_29;

    transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_TermInfos2Cord_27, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_First_29);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_TermInfos2Cord_27));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_First_29));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TermInfosCord_27;
    MR_Word conv0_STATE_VARIABLE_First_29;

    transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TermInfosCord_27, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_First_29);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TermInfosCord_27));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_First_29));
  }
}

void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_5_p_0(
  MR_Word TmpOptStream_6,
  MR_Word ModuleInfo_7,
  MR_Word * ParseTreeTransOpt_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10;
    MR_Word OldOutputStream_11;
    MR_Word Globals_12;
    MR_Word Experiment5_13;
    MR_Word StartIsFirst_14;
    MR_Word PredIds_15;
    MR_Word PredIdsSet_16;
    MR_Word ReusePredsSet_17;
    MR_Word PredIdsNoReusePredsSet_18;
    MR_Word PredIdsNoReuseVersions_19;
    MR_Word NoReuseOrderPredInfos_20;
    MR_Word ProcAnalysisKinds_21;
    MR_Word TermInfos_24;
    MR_Word TermInfos2_27;
    MR_Word Exceptions_30;
    MR_Word TrailingInfos_33;
    MR_Word MMTablingInfos_36;
    MR_Word SharingInfos_39;
    MR_Word ReuseInfos_42;
    MR_Word Var_81;
    MR_Word Var_43;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_10);
    mercury__io__set_output_stream_4_p_0(TmpOptStream_6, &OldOutputStream_11);
    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_10);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 704, &Experiment5_13);
    switch (Experiment5_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StartIsFirst_14 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        StartIsFirst_14 = (MR_Integer) 0;
        break;
    }
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_7, &PredIds_15);
    PredIdsSet_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_15);
    hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(ModuleInfo_7, &ReusePredsSet_17);
    PredIdsNoReusePredsSet_18 = mercury__set__difference_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdsSet_16, ReusePredsSet_17);
    PredIdsNoReuseVersions_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdsNoReusePredsSet_18);
    transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_7, PredIdsNoReuseVersions_19, &NoReuseOrderPredInfos_20);
    hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(ModuleInfo_7, &ProcAnalysisKinds_21);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 3)));
    if (succeeded)
    {
      MR_Word TermInfosCord_22;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Box conv4_TermInfosCord_22;
      MR_Box conv3_Var_23;
      MR_Box conv2_STATE_VARIABLE_IO_56_56;

      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_55 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, NoReuseOrderPredInfos_20, ((MR_Box) (Var_55)), &conv4_TermInfosCord_22, ((MR_Box) (StartIsFirst_14)), &conv3_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_56_56);
      TermInfosCord_22 = ((MR_Word) (conv4_TermInfosCord_22));
      TermInfos_24 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), TermInfosCord_22);
    }
    else
      TermInfos_24 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 4)));
    if (succeeded)
    {
      MR_Word TermInfos2Cord_25;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Box conv9_TermInfos2Cord_25;
      MR_Box conv8_Var_26;
      MR_Box conv7_STATE_VARIABLE_IO_60_60;

      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_59 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, NoReuseOrderPredInfos_20, ((MR_Box) (Var_59)), &conv9_TermInfos2Cord_25, ((MR_Box) (StartIsFirst_14)), &conv8_Var_26, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_60_60);
      TermInfos2Cord_25 = ((MR_Word) (conv9_TermInfos2Cord_25));
      TermInfos2_27 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), TermInfos2Cord_25);
    }
    else
      TermInfos2_27 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
    {
      MR_Word ExceptionsCord_28;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Box conv14_ExceptionsCord_28;
      MR_Box conv13_Var_29;
      MR_Box conv12_STATE_VARIABLE_IO_64_64;

      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_63 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, NoReuseOrderPredInfos_20, ((MR_Box) (Var_63)), &conv14_ExceptionsCord_28, ((MR_Box) (StartIsFirst_14)), &conv13_Var_29, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_64_64);
      ExceptionsCord_28 = ((MR_Word) (conv14_ExceptionsCord_28));
      Exceptions_30 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), ExceptionsCord_28);
    }
    else
      Exceptions_30 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 1)));
    if (succeeded)
    {
      MR_Word TrailingInfosCord_31;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Box conv19_TrailingInfosCord_31;
      MR_Box conv18_Var_32;
      MR_Box conv17_STATE_VARIABLE_IO_68_68;

      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_4));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_67 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[7]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[8]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, NoReuseOrderPredInfos_20, ((MR_Box) (Var_67)), &conv19_TrailingInfosCord_31, ((MR_Box) (StartIsFirst_14)), &conv18_Var_32, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_68_68);
      TrailingInfosCord_31 = ((MR_Word) (conv19_TrailingInfosCord_31));
      TrailingInfos_33 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[7]), TrailingInfosCord_31);
    }
    else
      TrailingInfos_33 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 2)));
    if (succeeded)
    {
      MR_Word MMTablingInfosCord_34;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Box conv24_MMTablingInfosCord_34;
      MR_Box conv23_Var_35;
      MR_Box conv22_STATE_VARIABLE_IO_72_72;

      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[5]));
        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_5));
        MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_71 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[9]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, NoReuseOrderPredInfos_20, ((MR_Box) (Var_71)), &conv24_MMTablingInfosCord_34, ((MR_Box) (StartIsFirst_14)), &conv23_Var_35, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_72_72);
      MMTablingInfosCord_34 = ((MR_Word) (conv24_MMTablingInfosCord_34));
      MMTablingInfos_36 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[9]), MMTablingInfosCord_34);
    }
    else
      MMTablingInfos_36 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 5)));
    if (succeeded)
    {
      MR_Word SharingInfosCord_37;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Box conv29_SharingInfosCord_37;
      MR_Box conv28_Var_38;
      MR_Box conv27_STATE_VARIABLE_IO_76_76;

      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[6]));
        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_6));
        MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_75 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[11]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, NoReuseOrderPredInfos_20, ((MR_Box) (Var_75)), &conv29_SharingInfosCord_37, ((MR_Box) (StartIsFirst_14)), &conv28_Var_38, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_76_76);
      SharingInfosCord_37 = ((MR_Word) (conv29_SharingInfosCord_37));
      SharingInfos_39 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[11]), SharingInfosCord_37);
    }
    else
      SharingInfos_39 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 6)));
    if (succeeded)
    {
      MR_Word ReuseInfosCord_40;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Box conv34_ReuseInfosCord_40;
      MR_Box conv33_Var_41;
      MR_Box conv32_STATE_VARIABLE_IO_80_80;

      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[7]));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_5_p_0_7));
        MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ModuleInfo_7));
      }
      Var_79 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[13]));
      mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[14]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, NoReuseOrderPredInfos_20, ((MR_Box) (Var_79)), &conv34_ReuseInfosCord_40, ((MR_Box) (StartIsFirst_14)), &conv33_Var_41, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_80_80);
      ReuseInfosCord_40 = ((MR_Word) (conv34_ReuseInfosCord_40));
      ReuseInfos_42 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), ReuseInfosCord_40);
    }
    else
      ReuseInfos_42 = (MR_Word) ((MR_Unsigned) 0U);
    Var_81 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeTransOpt_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TermInfos_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TermInfos2_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Exceptions_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TrailingInfos_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MMTablingInfos_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SharingInfos_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ReuseInfos_42));
    }
    mercury__io__set_output_stream_4_p_0(OldOutputStream_11, &Var_43);
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_sharing_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_reuse_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;
    MR_Word PredOrigin_13;
    MR_Word Var_21;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &PredOrigin_13);
        succeeded = ((((MR_tag((MR_Word) PredOrigin_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PredOrigin_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PredOrigin_13, (MR_Integer) 1))));
          succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 16U));
        }
        succeeded = !(succeeded);
        if (succeeded)
          switch (WhatFor_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeSpecInfo_16;
                MR_Word TypeSpecForcePreds_18;

                hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_16);
                TypeSpecForcePreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 1))));
                succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_18);
                succeeded = !(succeeded);
              }
              break;
          }
      }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_mm_tabling_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 11;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 12;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_trailing_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 11;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 12;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_exception_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 11;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 12;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_9(
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
    MR_Word conv35_STATE_VARIABLE_ReuseInfosCord_21;
    MR_Word conv34_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_structure_reuse_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_STATE_VARIABLE_ReuseInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv34_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv35_STATE_VARIABLE_ReuseInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv34_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_8(
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
    MR_Word conv30_STATE_VARIABLE_SharingInfosCord_21;
    MR_Word conv29_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_structure_sharing_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_SharingInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv29_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_SharingInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv29_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_7(
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
    MR_Word conv25_STATE_VARIABLE_MMTablingInfosCord_21;
    MR_Word conv24_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_STATE_VARIABLE_MMTablingInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv24_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv25_STATE_VARIABLE_MMTablingInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv24_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_6(
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
    MR_Word conv20_STATE_VARIABLE_TrailingInfosCord_21;
    MR_Word conv19_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_trailing_info_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_TrailingInfosCord_21, ((MR_Word) (wrapper_arg_4)), &conv19_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_TrailingInfosCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv19_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_5(
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
    MR_Word conv15_STATE_VARIABLE_ExceptionsCord_21;
    MR_Word conv14_STATE_VARIABLE_First_23;

    transform_hlds__intermod__write_pragma_exceptions_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_ExceptionsCord_21, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_First_23);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_ExceptionsCord_21));
    *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_First_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_4(
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
    MR_Word conv10_STATE_VARIABLE_TermInfos2Cord_27;
    MR_Word conv9_STATE_VARIABLE_First_29;

    transform_hlds__intermod__write_pragma_termination2_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_TermInfos2Cord_27, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_First_29);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_TermInfos2Cord_27));
    *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_First_29));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_3(
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
    MR_Word conv5_STATE_VARIABLE_TermInfosCord_27;
    MR_Word conv4_STATE_VARIABLE_First_29;

    transform_hlds__intermod__write_pragma_termination_for_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TermInfosCord_27, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_First_29);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TermInfosCord_27));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_First_29));
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_308;

    conv3_HeadVar__2_308 = transform_hlds__intermod__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__2521__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_308));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_10;

    transform_hlds__intermod__write_pragma_unused_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_First_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_First_10));
  }
}

void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0(
  MR_Word TmpOptStream_8,
  MR_Word ModuleInfo_9,
  MR_Word UnusedArgsInfos_10,
  MR_Word STATE_VARIABLE_ParseTreePlainOpt_0_33,
  MR_Word * STATE_VARIABLE_ParseTreePlainOpt_34)
{
  {
    MR_bool succeeded;
    MR_Word ProcAnalysisKinds_13;
    MR_Word TypeCtorInfo_296_296;

    hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(ModuleInfo_9, &ProcAnalysisKinds_13);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13);
    if (succeeded)
    {
      TypeCtorInfo_296_296 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_296_296, UnusedArgsInfos_10);
    }
    if (succeeded)
      *STATE_VARIABLE_ParseTreePlainOpt_34 = STATE_VARIABLE_ParseTreePlainOpt_0_33;
    else
    {
      MR_Word OldOutputStream_14;
      MR_Word PredIds_15;
      MR_Word OrderPredInfos_16;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_41_41;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_50_50;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_57_57;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_64_64;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_71_71;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_78_78;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_85_85;
      MR_Word Var_32;

      mercury__io__set_output_stream_4_p_0(TmpOptStream_8, &OldOutputStream_14);
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_9, &PredIds_15);
      transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_9, PredIds_15, &OrderPredInfos_16);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfos_10);
      if (succeeded)
      {
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Box conv2_Var_17;
        MR_Box conv1_STATE_VARIABLE_IO_40_40;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
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
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;

        mercury__set__foldl2_6_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[14]), UnusedArgsInfos_10, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_40);
        Var_44 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfos_10);
        Var_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[0]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[15]), Var_44);
        Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 0))));
        Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 1))));
        Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 2))));
        Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 3))));
        Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 4))));
        Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 5))));
        Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 6))));
        Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 7))));
        Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 8))));
        Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 9))));
        Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 10))));
        Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 11))));
        Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 12))));
        Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 13))));
        Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 14))));
        Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 15))));
        Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 16))));
        Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 18))));
        Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 19))));
        Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 20))));
        Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 21))));
        Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 22))));
        Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 23))));
        Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_33, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_41_41 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 1) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 2) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 3) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 4) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 5) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 6) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 7) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 8) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 9) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 10) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 11) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 12) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 13) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 14) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 15) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 16) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 17) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 18) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 19) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 20) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 21) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 22) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 23) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 24) = ((MR_Box) (Var_119));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_41_41 = STATE_VARIABLE_ParseTreePlainOpt_0_33;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 3)));
      if (succeeded)
      {
        MR_Word TermInfosCord_18;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_51;
        MR_Box conv8_TermInfosCord_18;
        MR_Box conv7_Var_19;
        MR_Box conv6_STATE_VARIABLE_IO_49_49;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_3));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_47 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, OrderPredInfos_16, ((MR_Box) (Var_47)), &conv8_TermInfosCord_18, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_19, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_49_49);
        TermInfosCord_18 = ((MR_Word) (conv8_TermInfosCord_18));
        Var_51 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[1]), TermInfosCord_18);
        Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 0))));
        Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 1))));
        Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 2))));
        Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 3))));
        Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 4))));
        Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 5))));
        Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 6))));
        Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 7))));
        Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 8))));
        Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 9))));
        Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 10))));
        Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 11))));
        Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 12))));
        Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 13))));
        Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 14))));
        Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 15))));
        Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 16))));
        Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 17))));
        Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 19))));
        Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 20))));
        Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 21))));
        Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 22))));
        Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 23))));
        Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_50_50 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 0) = ((MR_Box) (Var_120));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 1) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 2) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 3) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 4) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 5) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 6) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 7) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 8) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 9) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 10) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 11) = ((MR_Box) (Var_131));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 12) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 13) = ((MR_Box) (Var_133));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 14) = ((MR_Box) (Var_134));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 15) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 16) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 17) = ((MR_Box) (Var_137));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 18) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 19) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 20) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 21) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 22) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 23) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 24) = ((MR_Box) (Var_144));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_50_50 = STATE_VARIABLE_ParseTreePlainOpt_41_41;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 4)));
      if (succeeded)
      {
        MR_Word TermInfos2Cord_20;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_58;
        MR_Box conv13_TermInfos2Cord_20;
        MR_Box conv12_Var_21;
        MR_Box conv11_STATE_VARIABLE_IO_56_56;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;

        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[2]));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_4));
          MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_54 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[4]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, OrderPredInfos_16, ((MR_Box) (Var_54)), &conv13_TermInfos2Cord_20, ((MR_Box) ((MR_Integer) 1)), &conv12_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_56_56);
        TermInfos2Cord_20 = ((MR_Word) (conv13_TermInfos2Cord_20));
        Var_58 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[3]), TermInfos2Cord_20);
        Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 0))));
        Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 1))));
        Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 2))));
        Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 3))));
        Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 4))));
        Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 5))));
        Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 6))));
        Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 7))));
        Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 8))));
        Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 9))));
        Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 10))));
        Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 11))));
        Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 12))));
        Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 13))));
        Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 14))));
        Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 15))));
        Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 16))));
        Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 17))));
        Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 18))));
        Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 20))));
        Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 21))));
        Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 22))));
        Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 23))));
        Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_57_57 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 0) = ((MR_Box) (Var_145));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 1) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 2) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 3) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 4) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 5) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 6) = ((MR_Box) (Var_151));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 7) = ((MR_Box) (Var_152));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 8) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 9) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 10) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 11) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 12) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 13) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 14) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 15) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 16) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 17) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 18) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 19) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 20) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 21) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 22) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 23) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, 24) = ((MR_Box) (Var_169));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_57_57 = STATE_VARIABLE_ParseTreePlainOpt_50_50;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 0)));
      if (succeeded)
      {
        MR_Word ExceptionsCord_22;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_65;
        MR_Box conv18_ExceptionsCord_22;
        MR_Box conv17_Var_23;
        MR_Box conv16_STATE_VARIABLE_IO_63_63;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_186;
        MR_Word Var_187;
        MR_Word Var_188;
        MR_Word Var_189;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_194;

        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[3]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_5));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_61 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, OrderPredInfos_16, ((MR_Box) (Var_61)), &conv18_ExceptionsCord_22, ((MR_Box) ((MR_Integer) 1)), &conv17_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_63_63);
        ExceptionsCord_22 = ((MR_Word) (conv18_ExceptionsCord_22));
        Var_65 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[5]), ExceptionsCord_22);
        Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 0))));
        Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 1))));
        Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 2))));
        Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 3))));
        Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 4))));
        Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 5))));
        Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 6))));
        Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 7))));
        Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 8))));
        Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 9))));
        Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 10))));
        Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 11))));
        Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 12))));
        Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 13))));
        Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 14))));
        Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 15))));
        Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 16))));
        Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 17))));
        Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 18))));
        Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 19))));
        Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 21))));
        Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 22))));
        Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 23))));
        Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_57_57, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_64_64 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 0) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 1) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 2) = ((MR_Box) (Var_172));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 3) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 4) = ((MR_Box) (Var_174));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 5) = ((MR_Box) (Var_175));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 6) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 7) = ((MR_Box) (Var_177));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 8) = ((MR_Box) (Var_178));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 9) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 10) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 11) = ((MR_Box) (Var_181));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 12) = ((MR_Box) (Var_182));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 13) = ((MR_Box) (Var_183));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 14) = ((MR_Box) (Var_184));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 15) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 16) = ((MR_Box) (Var_186));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 17) = ((MR_Box) (Var_187));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 18) = ((MR_Box) (Var_188));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 19) = ((MR_Box) (Var_189));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 20) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 21) = ((MR_Box) (Var_191));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 22) = ((MR_Box) (Var_192));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 23) = ((MR_Box) (Var_193));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, 24) = ((MR_Box) (Var_194));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_64_64 = STATE_VARIABLE_ParseTreePlainOpt_57_57;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 1)));
      if (succeeded)
      {
        MR_Word TrailingInfosCord_24;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_72;
        MR_Box conv23_TrailingInfosCord_24;
        MR_Box conv22_Var_25;
        MR_Box conv21_STATE_VARIABLE_IO_70_70;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_198;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_201;
        MR_Word Var_202;
        MR_Word Var_203;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_207;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_214;
        MR_Word Var_215;
        MR_Word Var_217;
        MR_Word Var_218;
        MR_Word Var_219;

        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[4]));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_6));
          MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_68 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[7]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[8]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, OrderPredInfos_16, ((MR_Box) (Var_68)), &conv23_TrailingInfosCord_24, ((MR_Box) ((MR_Integer) 1)), &conv22_Var_25, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_70_70);
        TrailingInfosCord_24 = ((MR_Word) (conv23_TrailingInfosCord_24));
        Var_72 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[7]), TrailingInfosCord_24);
        Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 0))));
        Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 1))));
        Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 2))));
        Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 3))));
        Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 4))));
        Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 5))));
        Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 6))));
        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 7))));
        Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 8))));
        Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 9))));
        Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 10))));
        Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 11))));
        Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 12))));
        Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 13))));
        Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 14))));
        Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 15))));
        Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 16))));
        Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 17))));
        Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 18))));
        Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 19))));
        Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 20))));
        Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 22))));
        Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 23))));
        Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_64_64, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_71_71 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 0) = ((MR_Box) (Var_195));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 1) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 2) = ((MR_Box) (Var_197));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 3) = ((MR_Box) (Var_198));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 4) = ((MR_Box) (Var_199));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 5) = ((MR_Box) (Var_200));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 6) = ((MR_Box) (Var_201));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 7) = ((MR_Box) (Var_202));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 8) = ((MR_Box) (Var_203));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 9) = ((MR_Box) (Var_204));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 10) = ((MR_Box) (Var_205));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 11) = ((MR_Box) (Var_206));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 12) = ((MR_Box) (Var_207));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 13) = ((MR_Box) (Var_208));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 14) = ((MR_Box) (Var_209));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 15) = ((MR_Box) (Var_210));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 16) = ((MR_Box) (Var_211));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 17) = ((MR_Box) (Var_212));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 18) = ((MR_Box) (Var_213));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 19) = ((MR_Box) (Var_214));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 20) = ((MR_Box) (Var_215));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 21) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 22) = ((MR_Box) (Var_217));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 23) = ((MR_Box) (Var_218));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, 24) = ((MR_Box) (Var_219));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_71_71 = STATE_VARIABLE_ParseTreePlainOpt_64_64;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 2)));
      if (succeeded)
      {
        MR_Word MMTablingInfosCord_26;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_79;
        MR_Box conv28_MMTablingInfosCord_26;
        MR_Box conv27_Var_27;
        MR_Box conv26_STATE_VARIABLE_IO_77_77;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_233;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word Var_236;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_241;
        MR_Word Var_243;
        MR_Word Var_244;

        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[5]));
          MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_7));
          MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_75 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[9]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[10]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, OrderPredInfos_16, ((MR_Box) (Var_75)), &conv28_MMTablingInfosCord_26, ((MR_Box) ((MR_Integer) 1)), &conv27_Var_27, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_77_77);
        MMTablingInfosCord_26 = ((MR_Word) (conv28_MMTablingInfosCord_26));
        Var_79 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[9]), MMTablingInfosCord_26);
        Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 0))));
        Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 1))));
        Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 2))));
        Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 3))));
        Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 4))));
        Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 5))));
        Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 6))));
        Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 7))));
        Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 8))));
        Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 9))));
        Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 10))));
        Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 11))));
        Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 12))));
        Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 13))));
        Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 14))));
        Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 15))));
        Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 16))));
        Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 17))));
        Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 18))));
        Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 19))));
        Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 20))));
        Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 21))));
        Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 23))));
        Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_71_71, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_78_78 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 0) = ((MR_Box) (Var_220));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 1) = ((MR_Box) (Var_221));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 2) = ((MR_Box) (Var_222));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 3) = ((MR_Box) (Var_223));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 4) = ((MR_Box) (Var_224));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 5) = ((MR_Box) (Var_225));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 6) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 7) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 8) = ((MR_Box) (Var_228));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 9) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 10) = ((MR_Box) (Var_230));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 11) = ((MR_Box) (Var_231));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 12) = ((MR_Box) (Var_232));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 13) = ((MR_Box) (Var_233));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 14) = ((MR_Box) (Var_234));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 15) = ((MR_Box) (Var_235));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 16) = ((MR_Box) (Var_236));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 17) = ((MR_Box) (Var_237));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 18) = ((MR_Box) (Var_238));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 19) = ((MR_Box) (Var_239));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 20) = ((MR_Box) (Var_240));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 21) = ((MR_Box) (Var_241));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 22) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 23) = ((MR_Box) (Var_243));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, 24) = ((MR_Box) (Var_244));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_78_78 = STATE_VARIABLE_ParseTreePlainOpt_71_71;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 5)));
      if (succeeded)
      {
        MR_Word SharingInfosCord_28;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_86;
        MR_Box conv33_SharingInfosCord_28;
        MR_Box conv32_Var_29;
        MR_Box conv31_STATE_VARIABLE_IO_84_84;
        MR_Word Var_245;
        MR_Word Var_246;
        MR_Word Var_247;
        MR_Word Var_248;
        MR_Word Var_249;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_256;
        MR_Word Var_257;
        MR_Word Var_258;
        MR_Word Var_259;
        MR_Word Var_260;
        MR_Word Var_261;
        MR_Word Var_262;
        MR_Word Var_263;
        MR_Word Var_264;
        MR_Word Var_265;
        MR_Word Var_266;
        MR_Word Var_267;
        MR_Word Var_269;

        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[6]));
          MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_8));
          MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_82 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[11]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[12]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, OrderPredInfos_16, ((MR_Box) (Var_82)), &conv33_SharingInfosCord_28, ((MR_Box) ((MR_Integer) 1)), &conv32_Var_29, ((MR_Box) ((MR_Integer) 0)), &conv31_STATE_VARIABLE_IO_84_84);
        SharingInfosCord_28 = ((MR_Word) (conv33_SharingInfosCord_28));
        Var_86 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[11]), SharingInfosCord_28);
        Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 0))));
        Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 1))));
        Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 2))));
        Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 3))));
        Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 4))));
        Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 5))));
        Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 6))));
        Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 7))));
        Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 8))));
        Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 9))));
        Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 10))));
        Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 11))));
        Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 12))));
        Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 13))));
        Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 14))));
        Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 15))));
        Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 16))));
        Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 17))));
        Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 18))));
        Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 19))));
        Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 20))));
        Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 21))));
        Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 22))));
        Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_78_78, (MR_Integer) 24))));
        {
          STATE_VARIABLE_ParseTreePlainOpt_85_85 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 0) = ((MR_Box) (Var_245));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 1) = ((MR_Box) (Var_246));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 2) = ((MR_Box) (Var_247));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 3) = ((MR_Box) (Var_248));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 4) = ((MR_Box) (Var_249));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 5) = ((MR_Box) (Var_250));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 6) = ((MR_Box) (Var_251));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 7) = ((MR_Box) (Var_252));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 8) = ((MR_Box) (Var_253));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 9) = ((MR_Box) (Var_254));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 10) = ((MR_Box) (Var_255));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 11) = ((MR_Box) (Var_256));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 12) = ((MR_Box) (Var_257));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 13) = ((MR_Box) (Var_258));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 14) = ((MR_Box) (Var_259));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 15) = ((MR_Box) (Var_260));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 16) = ((MR_Box) (Var_261));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 17) = ((MR_Box) (Var_262));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 18) = ((MR_Box) (Var_263));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 19) = ((MR_Box) (Var_264));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 20) = ((MR_Box) (Var_265));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 21) = ((MR_Box) (Var_266));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 22) = ((MR_Box) (Var_267));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 23) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, 24) = ((MR_Box) (Var_269));
        }
      }
      else
        STATE_VARIABLE_ParseTreePlainOpt_85_85 = STATE_VARIABLE_ParseTreePlainOpt_78_78;
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13, ((MR_Box) ((MR_Integer) 6)));
      if (succeeded)
      {
        MR_Word ReuseInfosCord_30;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_93;
        MR_Box conv38_ReuseInfosCord_30;
        MR_Box conv37_Var_31;
        MR_Box conv36_STATE_VARIABLE_IO_91_91;
        MR_Word Var_270;
        MR_Word Var_271;
        MR_Word Var_272;
        MR_Word Var_273;
        MR_Word Var_274;
        MR_Word Var_275;
        MR_Word Var_276;
        MR_Word Var_277;
        MR_Word Var_278;
        MR_Word Var_279;
        MR_Word Var_280;
        MR_Word Var_281;
        MR_Word Var_282;
        MR_Word Var_283;
        MR_Word Var_284;
        MR_Word Var_285;
        MR_Word Var_286;
        MR_Word Var_287;
        MR_Word Var_288;
        MR_Word Var_289;
        MR_Word Var_290;
        MR_Word Var_291;
        MR_Word Var_292;
        MR_Word Var_293;

        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[7]));
          MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_7_p_0_9));
          MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (ModuleInfo_9));
        }
        Var_89 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[13]));
        mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[14]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_88, OrderPredInfos_16, ((MR_Box) (Var_89)), &conv38_ReuseInfosCord_30, ((MR_Box) ((MR_Integer) 1)), &conv37_Var_31, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_IO_91_91);
        ReuseInfosCord_30 = ((MR_Word) (conv38_ReuseInfosCord_30));
        Var_93 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[13]), ReuseInfosCord_30);
        Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 0))));
        Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 1))));
        Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 2))));
        Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 3))));
        Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 4))));
        Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 5))));
        Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 6))));
        Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 7))));
        Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 8))));
        Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 9))));
        Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 10))));
        Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 11))));
        Var_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 12))));
        Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 13))));
        Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 14))));
        Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 15))));
        Var_286 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 16))));
        Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 17))));
        Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 18))));
        Var_289 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 19))));
        Var_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 20))));
        Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 21))));
        Var_292 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 22))));
        Var_293 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_85_85, (MR_Integer) 23))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ParseTreePlainOpt_34 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_270));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_271));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_272));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_273));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_274));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_275));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_276));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_277));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_278));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_279));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_280));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_281));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_282));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_283));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_284));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_285));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_286));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_287));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_288));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_289));
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_290));
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_291));
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_292));
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_293));
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_93));
        }
      }
      else
        *STATE_VARIABLE_ParseTreePlainOpt_34 = STATE_VARIABLE_ParseTreePlainOpt_85_85;
      mercury__io__set_output_stream_4_p_0(OldOutputStream_14, &Var_32);
    }
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
    MR_Word OldOutputStream_12;
    MR_Word Var_13;

    transform_hlds__intermod__decide_what_to_opt_export_2_p_0(ModuleInfo_8, IntermodInfo_9);
    mercury__io__set_output_stream_4_p_0(TmpOptStream_7, &OldOutputStream_12);
    transform_hlds__intermod__write_opt_file_initial_4_p_0(*IntermodInfo_9, ParseTreePlainOpt_10);
    mercury__io__set_output_stream_4_p_0(OldOutputStream_12, &Var_13);
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_4_p_0(
  MR_Word IntermodInfo_5,
  MR_Word * ParseTreePlainOpt_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 0))));
    MR_Word ModuleName_9;
    MR_Word PredClauses_10;
    MR_Word PredDecls_11;
    MR_Word Instances_12;
    MR_Word TypeTable_13;
    MR_Word TypeCtorsDefns_14;
    MR_Word Var_22;
    MR_Word Var_52;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_9);
    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_9);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    PredClauses_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 2))));
    PredDecls_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 3))));
    Instances_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 4))));
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredClauses_10);
    if (succeeded)
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDecls_11);
      if (succeeded)
      {
        succeeded = (Instances_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_13);
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_13, &TypeCtorsDefns_14);
          Var_22 = (MR_Integer) 0;
          transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(TypeCtorsDefns_14, &Var_52);
          succeeded = (Var_22 == Var_52);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;

      Var_23 = mercury__term__context_init_0_f_0();
      Var_24 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[18]));
      Var_25 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        *ParseTreePlainOpt_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
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
      transform_hlds__intermod__write_opt_file_initial_body_4_p_0(IntermodInfo_5, ParseTreePlainOpt_6);
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out__mercury_output_fim_spec_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_60;

    transform_hlds__intermod__IntroducedFrom__pred__write_opt_file_initial_body__1432__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_60);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_60));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_use_module_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_opt_file_initial_body_4_p_0(
  MR_Word IntermodInfo_5,
  MR_Word * ParseTreePlainOpt_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 0))));
    MR_Word WritePredPredIdSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 2))));
    MR_Word WriteDeclPredIdSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 3))));
    MR_Word InstanceDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 4))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 5))));
    MR_Word NeedFIMs_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntermodInfo_5, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word WritePredPredIds_15;
    MR_Word WriteDeclPredIds_16;
    MR_Word AvailModuleMap_17;
    MR_Word UsedModuleNames_18;
    MR_Word UseMap_23;
    MR_Word Globals_24;
    MR_Word OutInfo0_25;
    MR_Word MercInfo0_26;
    MR_Word MercInfo_27;
    MR_Word OutInfo_28;
    MR_Word OutInfoForPreds_29;
    MR_Word TypeDefns_30;
    MR_Word ForeignEnums_31;
    MR_Word InstDefns_32;
    MR_Word ModeDefns_33;
    MR_Word TypeClasses_34;
    MR_Word Instances_35;
    MR_Word FIMSpecs_37;
    MR_Word DeclOrderPredInfos_38;
    MR_Word PredOrderPredInfos_39;
    MR_Word PredMarkerPragmasCord0_40;
    MR_Word PredMarkerPragmasCord1_41;
    MR_Word TypeSpecPragmas_42;
    MR_Word PredMarkerPragmasCord_48;
    MR_Word PredMarkerPragmas_49;
    MR_Word ModuleName_53;
    MR_Word Var_62;
    MR_Word Var_77;
    MR_String Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Box conv0_STATE_VARIABLE_IO_57_57;
    MR_Box conv2_UseMap_23;
    MR_String Var_93;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WritePredPredIdSet_10, &WritePredPredIds_15);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WriteDeclPredIdSet_11, &WriteDeclPredIds_16);
    hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_8, &AvailModuleMap_17);
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_17, &UsedModuleNames_18);
    mercury__list__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[11]), UsedModuleNames_18, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_57_57);
    Var_62 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[1]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[12]), UsedModuleNames_18, ((MR_Box) (Var_62)), &conv2_UseMap_23);
    UseMap_23 = ((MR_Word) (conv2_UseMap_23));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_24);
    OutInfo0_25 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_24, (MR_Integer) 0);
    MercInfo0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo0_25, (MR_Integer) 4))));
    MercInfo_27 = parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(MercInfo0_26);
    Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(0), OutInfo0_25, (MR_Integer) 0))));
    Var_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), OutInfo0_25, (MR_Integer) 1))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo0_25, (MR_Integer) 2))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutInfo0_25, (MR_Integer) 3))));
    {
      OutInfo_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutInfo_28, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), OutInfo_28, 1) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), OutInfo_28, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), OutInfo_28, 3) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), OutInfo_28, 4) = ((MR_Box) (MercInfo_27));
    }
    {
      OutInfoForPreds_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutInfoForPreds_29, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_29, 1) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_29, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_29, 3) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_29, 4) = ((MR_Box) (MercInfo_27));
    }
    transform_hlds__intermod__intermod_write_types_6_p_0(OutInfo_28, Types_13, &TypeDefns_30, &ForeignEnums_31);
    transform_hlds__intermod__intermod_write_insts_5_p_0(OutInfo_28, ModuleInfo_8, &InstDefns_32);
    transform_hlds__intermod__intermod_write_modes_5_p_0(OutInfo_28, ModuleInfo_8, &ModeDefns_33);
    transform_hlds__intermod__intermod_write_classes_5_p_0(OutInfo_28, ModuleInfo_8, &TypeClasses_34);
    transform_hlds__intermod__intermod_write_instances_5_p_0(OutInfo_28, InstanceDefns_12, &Instances_35);
    switch (NeedFIMs_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word CJCsEFIMs_36;

          hlds__hlds_module__module_info_get_c_j_cs_e_fims_2_p_0(ModuleInfo_8, &CJCsEFIMs_36);
          FIMSpecs_37 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(CJCsEFIMs_36);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_37);
          if (!(succeeded))
          {
            MR_Box conv3_STATE_VARIABLE_IO_72_72;

            mercury__io__nl_2_p_0();
            mercury__set__fold_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[13]), FIMSpecs_37, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_72_72);
          }
        }
        break;
      case (MR_Integer) 0:
        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &FIMSpecs_37);
        break;
    }
    transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_8, WriteDeclPredIds_16, &DeclOrderPredInfos_38);
    transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_8, WritePredPredIds_15, &PredOrderPredInfos_39);
    PredMarkerPragmasCord0_40 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]));
    if ((DeclOrderPredInfos_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PredMarkerPragmasCord1_41 = PredMarkerPragmasCord0_40;
      TypeSpecPragmas_42 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeSpecPragmasCord_45;
      MR_Word Var_74;
      MR_Word OrderPredInfo_133;
      MR_Word OrderPredInfos_134;
      MR_Word STATE_VARIABLE_PredMarkerPragmasCord_31_144;
      MR_Word STATE_VARIABLE_TypeSpecPragmasCord_32_145;

      mercury__io__nl_2_p_0();
      Var_74 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[20]));
      OrderPredInfo_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclOrderPredInfos_38, (MR_Integer) 0))));
      OrderPredInfos_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclOrderPredInfos_38, (MR_Integer) 1))));
      transform_hlds__intermod__intermod_write_pred_decl_8_p_0(ModuleInfo_8, OrderPredInfo_133, PredMarkerPragmasCord0_40, &STATE_VARIABLE_PredMarkerPragmasCord_31_144, Var_74, &STATE_VARIABLE_TypeSpecPragmasCord_32_145);
      transform_hlds__intermod__intermod_write_pred_decls_8_p_0(ModuleInfo_8, OrderPredInfos_134, STATE_VARIABLE_PredMarkerPragmasCord_31_144, &PredMarkerPragmasCord1_41, STATE_VARIABLE_TypeSpecPragmasCord_32_145, &TypeSpecPragmasCord_45);
      TypeSpecPragmas_42 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[20]), TypeSpecPragmasCord_45);
    }
    transform_hlds__intermod__intermod_write_preds_7_p_0(OutInfoForPreds_29, ModuleInfo_8, PredOrderPredInfos_39, PredMarkerPragmasCord1_41, &PredMarkerPragmasCord_48);
    PredMarkerPragmas_49 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), PredMarkerPragmasCord_48);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_53);
    Var_77 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreePlainOpt_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_53));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (UseMap_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FIMSpecs_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TypeDefns_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignEnums_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InstDefns_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModeDefns_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeClasses_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Instances_35));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (PredMarkerPragmas_49));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (TypeSpecPragmas_42));
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
transform_hlds__intermod__intermod_write_preds_7_p_0(
  MR_Word OutInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_4,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredMarkerPragmas_5 = STATE_VARIABLE_PredMarkerPragmas_0_4;
    else
    {
      MR_Word OrderPredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word OrderPredInfos_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredMarkerPragmas_26_26;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_PredMarkerPragmas_0_4;

      transform_hlds__intermod__intermod_write_pred_7_p_0(OutInfo_1, ModuleInfo_2, OrderPredInfo_18, STATE_VARIABLE_PredMarkerPragmas_0_4, &STATE_VARIABLE_PredMarkerPragmas_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OrderPredInfos_19;
      next_value_of_STATE_VARIABLE_PredMarkerPragmas_0_4 = STATE_VARIABLE_PredMarkerPragmas_26_26;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_PredMarkerPragmas_0_4 = next_value_of_STATE_VARIABLE_PredMarkerPragmas_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_clause_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_7_p_0(
  MR_Word OutInfo_8,
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_PredMarkerPragmas_0_35,
  MR_Word * STATE_VARIABLE_PredMarkerPragmas_36)
{
  {
    MR_String PredName_13;
    MR_Word PredOrFunc_15;
    MR_Word PredId_16;
    MR_Word PredInfo_17;
    MR_Word ModuleName_18;
    MR_Word PredSymName_19;
    MR_Word ClausesInfo_20;
    MR_Word VarSet_21;
    MR_Word HeadVars_22;
    MR_Word ClausesRep_23;
    MR_Word VarTypes_25;
    MR_Word Clauses_26;
    MR_Word GoalType_27;
    MR_Word ModuleName_70;
    MR_String PredName_71;
    MR_Integer PredArity_72;
    MR_Word PredOrFunc_73;
    MR_Word PredSymName_74;
    MR_Word Markers_75;
    MR_Word MarkerList_76;
    MR_Word _ItemNumbers_24;

    mercury__io__nl_2_p_0();
    PredName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0))));
    PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2))) & (MR_Integer) 1);
    PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3))));
    PredInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_17);
    {
      PredSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_19, 0) = ((MR_Box) (ModuleName_18));
      MR_hl_field(MR_mktag(1), PredSymName_19, 1) = ((MR_Box) (PredName_13));
    }
    ModuleName_70 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_17);
    PredName_71 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_17);
    PredArity_72 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_17);
    PredOrFunc_73 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_17);
    {
      PredSymName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_74, 0) = ((MR_Box) (ModuleName_70));
      MR_hl_field(MR_mktag(1), PredSymName_74, 1) = ((MR_Box) (PredName_71));
    }
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_17, &Markers_75);
    hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_75, &MarkerList_76);
    transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_8_p_0(PredOrFunc_73, PredSymName_74, PredArity_72, MarkerList_76, STATE_VARIABLE_PredMarkerPragmas_0_35, STATE_VARIABLE_PredMarkerPragmas_36);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_17, &ClausesInfo_20);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_20, &VarSet_21);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_20, &HeadVars_22);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_20, &ClausesRep_23, &_ItemNumbers_24);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_20, &VarTypes_25);
    hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_23, &Clauses_26);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_17, &GoalType_27);
    switch (MR_tag((MR_Word) GoalType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeVarset_33;
          MR_Word TypeQual_34;
          MR_Word Var_42;
          MR_Box conv0_STATE_VARIABLE_IO_38;

          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_17, &TypeVarset_33);
          {
            TypeQual_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeQual_34, 0) = ((MR_Box) (TypeVarset_33));
            MR_hl_field(MR_mktag(1), TypeQual_34, 1) = ((MR_Box) (VarTypes_25));
          }
          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_pred_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (OutInfo_8));
            MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (ModuleInfo_9));
            MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (PredId_16));
            MR_hl_field(MR_mktag(0), Var_42, 6) = ((MR_Box) (PredSymName_19));
            MR_hl_field(MR_mktag(0), Var_42, 7) = ((MR_Box) (PredOrFunc_15));
            MR_hl_field(MR_mktag(0), Var_42, 8) = ((MR_Box) (VarSet_21));
            MR_hl_field(MR_mktag(0), Var_42, 9) = ((MR_Box) (TypeQual_34));
            MR_hl_field(MR_mktag(0), Var_42, 10) = ((MR_Box) (HeadVars_22));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, Clauses_26, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_38);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PromiseType_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), GoalType_27, (MR_Integer) 0))) & (MR_Integer) 3);

          if ((Clauses_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred\'/7", (MR_String) "assertion not a single clause.");
              return;
            }
          else
          {
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_26, (MR_Integer) 1))));
            MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_26, (MR_Integer) 0))));

            if ((Var_61 == (MR_Word) ((MR_Unsigned) 0U)))
              hlds__hlds_out__hlds_out_module__write_promise_13_p_0(OutInfo_8, ModuleInfo_9, VarSet_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, PromiseType_28, PredId_16, PredOrFunc_15, HeadVars_22, Var_62);
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred\'/7", (MR_String) "assertion not a single clause.");
                return;
              }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_3,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_4,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_5,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TypeSpecPragmasCord_6 = STATE_VARIABLE_TypeSpecPragmasCord_0_5;
      *STATE_VARIABLE_PredMarkerPragmasCord_4 = STATE_VARIABLE_PredMarkerPragmasCord_0_3;
    }
    else
    {
      MR_Word OrderPredInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word OrderPredInfos_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredMarkerPragmasCord_31_31;
      MR_Word STATE_VARIABLE_TypeSpecPragmasCord_32_32;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TypeSpecPragmasCord_0_5;

      transform_hlds__intermod__intermod_write_pred_decl_8_p_0(ModuleInfo_1, OrderPredInfo_20, STATE_VARIABLE_PredMarkerPragmasCord_0_3, &STATE_VARIABLE_PredMarkerPragmasCord_31_31, STATE_VARIABLE_TypeSpecPragmasCord_0_5, &STATE_VARIABLE_TypeSpecPragmasCord_32_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = OrderPredInfos_21;
      next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_3 = STATE_VARIABLE_PredMarkerPragmasCord_31_31;
      next_value_of_STATE_VARIABLE_TypeSpecPragmasCord_0_5 = STATE_VARIABLE_TypeSpecPragmasCord_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PredMarkerPragmasCord_0_3 = next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_3;
      STATE_VARIABLE_TypeSpecPragmasCord_0_5 = next_value_of_STATE_VARIABLE_TypeSpecPragmasCord_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decl_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_33,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_34,
  MR_Word STATE_VARIABLE_TypeSpecPragmasCord_0_35,
  MR_Word * STATE_VARIABLE_TypeSpecPragmasCord_36)
{
  {
    MR_String PredName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0))));
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3))));
    MR_Word PredInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4))));
    MR_Word ModuleName_19;
    MR_Word TVarSet_20;
    MR_Word ExistQVars_21;
    MR_Word ArgTypes_22;
    MR_Word Purity_23;
    MR_Word ClassContext_24;
    MR_Word GoalType_25;
    MR_Word VarNamePrint_26;
    MR_Word PredSymName_28;
    MR_Word ProcMap_31;
    MR_Word SortedProcPairs_32;
    MR_Word ModuleName_58;
    MR_String PredName_59;
    MR_Integer PredArity_60;
    MR_Word PredOrFunc_61;
    MR_Word PredSymName_62;
    MR_Word Markers_63;
    MR_Word MarkerList_64;

    ModuleName_19 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_18);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_18, &TVarSet_20, &ExistQVars_21, &ArgTypes_22);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_18, &Purity_23);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_18, &ClassContext_24);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_18, &GoalType_25);
    switch (MR_tag((MR_Word) GoalType_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(GoalType_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            VarNamePrint_26 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            VarNamePrint_26 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            VarNamePrint_26 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        VarNamePrint_26 = (MR_Integer) 1;
        break;
    }
    {
      PredSymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_28, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(MR_mktag(1), PredSymName_28, 1) = ((MR_Box) (PredName_14));
    }
    switch (PredOrFunc_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgTypes_29;
          MR_Word FuncRetType_30;
          MR_Box conv0_FuncRetType_30;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_22, &FuncArgTypes_29, &conv0_FuncRetType_30);
          FuncRetType_30 = ((MR_Word) (conv0_FuncRetType_30));
          parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(TVarSet_20, VarNamePrint_26, ExistQVars_21, PredSymName_28, FuncArgTypes_29, FuncRetType_30, (MR_Word) ((MR_Unsigned) 0U), Purity_23, ClassContext_24);
        }
        break;
      case (MR_Integer) 0:
        parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(TVarSet_20, VarNamePrint_26, ExistQVars_21, PredSymName_28, ArgTypes_22, (MR_Word) ((MR_Unsigned) 0U), Purity_23, ClassContext_24);
        break;
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_18, &ProcMap_31);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcMap_31, &SortedProcPairs_32);
    transform_hlds__intermod__intermod_write_pred_valid_modes_5_p_0(PredOrFunc_16, PredSymName_28, SortedProcPairs_32);
    ModuleName_58 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_18);
    PredName_59 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_18);
    PredArity_60 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_18);
    PredOrFunc_61 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_18);
    {
      PredSymName_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_62, 0) = ((MR_Box) (ModuleName_58));
      MR_hl_field(MR_mktag(1), PredSymName_62, 1) = ((MR_Box) (PredName_59));
    }
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_18, &Markers_63);
    hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_63, &MarkerList_64);
    transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_8_p_0(PredOrFunc_61, PredSymName_62, PredArity_60, MarkerList_64, STATE_VARIABLE_PredMarkerPragmasCord_0_33, STATE_VARIABLE_PredMarkerPragmasCord_34);
    transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0(ModuleInfo_9, PredId_17, STATE_VARIABLE_TypeSpecPragmasCord_0_35, STATE_VARIABLE_TypeSpecPragmasCord_36);
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_38;

    conv1_HeadVar__2_38 = transform_hlds__intermod__IntroducedFrom__func__intermod_write_pred_type_spec_pragmas__2158__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_38));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_type_spec_pragmas_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_TypeSpecsCord_0_14,
  MR_Word * STATE_VARIABLE_TypeSpecsCord_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeSpecInfo_11;
    MR_Word PragmaMap_12;
    MR_Word TypeSpecPragmas_13;

    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_11);
    PragmaMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_11, (MR_Integer) 3))));
    succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), PragmaMap_12, ((MR_Box) (PredId_8)), &TypeSpecPragmas_13);
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Box conv0_STATE_VARIABLE_IO_17;

      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&transform_hlds__intermod_scalar_common_4[1]), TypeSpecPragmas_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
      Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[20]), (MR_Word) (&transform_hlds__intermod_scalar_common_2[10]), TypeSpecPragmas_13);
      Var_23 = mercury__cord__from_list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[20]), Var_24);
      *STATE_VARIABLE_TypeSpecsCord_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[20]), STATE_VARIABLE_TypeSpecsCord_0_14, Var_23);
    }
    else
      *STATE_VARIABLE_TypeSpecsCord_15 = STATE_VARIABLE_TypeSpecsCord_0_14;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_marker_pragmas_loop_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Integer PredArity_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredMarkerPragmasCord_0_5,
  MR_Word * STATE_VARIABLE_PredMarkerPragmasCord_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredMarkerPragmasCord_6 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
    else
    {
      MR_Word Marker_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Markers_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_PredMarkerPragmasCord_37_37;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_5;

      switch (Marker_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 21:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 20:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 11:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 10:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 9:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 19:
          {
            MR_Integer Arity_26;
            MR_Word PredNameArity_27;
            MR_Word PredMarkerInfo_28;
            MR_Word PragmaInfo_29;
            MR_String MarkerName_30;
            MR_Word Var_35;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_26, PredArity_3);
            {
              PredNameArity_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_27, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_27, 1) = ((MR_Box) (Arity_26));
            }
            {
              PredMarkerInfo_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_28, 0) = ((MR_Box) (PredNameArity_27));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
            }
            Var_35 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_29, 0) = ((MR_Box) (PredMarkerInfo_28));
              MR_hl_field(MR_mktag(0), PragmaInfo_29, 1) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), PragmaInfo_29, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_29)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_30);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_30, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 26:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 25:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 24:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 8:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 3:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 13:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 14:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 22:
          {
            MR_Integer Arity_44;
            MR_Word PredNameArity_45;
            MR_Word PredMarkerInfo_46;
            MR_Word PragmaInfo_47;
            MR_String MarkerName_48;
            MR_Word Var_49;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_44, PredArity_3);
            {
              PredNameArity_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_45, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_45, 1) = ((MR_Box) (Arity_44));
            }
            {
              PredMarkerInfo_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_46, 0) = ((MR_Box) (PredNameArity_45));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
            }
            Var_49 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_47, 0) = ((MR_Box) (PredMarkerInfo_46));
              MR_hl_field(MR_mktag(0), PragmaInfo_47, 1) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), PragmaInfo_47, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_47)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_48);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_48, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 23:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 12:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 5:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 4:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 17:
          {
            MR_Integer Arity_54;
            MR_Word PredNameArity_55;
            MR_Word PredMarkerInfo_56;
            MR_Word PragmaInfo_57;
            MR_String MarkerName_58;
            MR_Word Var_59;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_54, PredArity_3);
            {
              PredNameArity_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_55, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_55, 1) = ((MR_Box) (Arity_54));
            }
            {
              PredMarkerInfo_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_56, 0) = ((MR_Box) (PredNameArity_55));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_56, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
            }
            Var_59 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_57, 0) = ((MR_Box) (PredMarkerInfo_56));
              MR_hl_field(MR_mktag(0), PragmaInfo_57, 1) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), PragmaInfo_57, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_57)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_58);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_58, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Integer Arity_64;
            MR_Word PredNameArity_65;
            MR_Word PredMarkerInfo_66;
            MR_Word PragmaInfo_67;
            MR_String MarkerName_68;
            MR_Word Var_69;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_64, PredArity_3);
            {
              PredNameArity_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_65, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_65, 1) = ((MR_Box) (Arity_64));
            }
            {
              PredMarkerInfo_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_66, 0) = ((MR_Box) (PredNameArity_65));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_66, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            }
            Var_69 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_67, 0) = ((MR_Box) (PredMarkerInfo_66));
              MR_hl_field(MR_mktag(0), PragmaInfo_67, 1) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), PragmaInfo_67, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_67)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_68);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_68, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Integer Arity_74;
            MR_Word PredNameArity_75;
            MR_Word PredMarkerInfo_76;
            MR_Word PragmaInfo_77;
            MR_String MarkerName_78;
            MR_Word Var_79;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_74, PredArity_3);
            {
              PredNameArity_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_75, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_75, 1) = ((MR_Box) (Arity_74));
            }
            {
              PredMarkerInfo_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_76, 0) = ((MR_Box) (PredNameArity_75));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_76, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
            }
            Var_79 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_77, 0) = ((MR_Box) (PredMarkerInfo_76));
              MR_hl_field(MR_mktag(0), PragmaInfo_77, 1) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), PragmaInfo_77, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_77)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_78);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_78, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_PredMarkerPragmasCord_37_37 = STATE_VARIABLE_PredMarkerPragmasCord_0_5;
          break;
        case (MR_Integer) 18:
          {
            MR_Integer Arity_84;
            MR_Word PredNameArity_85;
            MR_Word PredMarkerInfo_86;
            MR_Word PragmaInfo_87;
            MR_String MarkerName_88;
            MR_Word Var_89;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_84, PredArity_3);
            {
              PredNameArity_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_85, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_85, 1) = ((MR_Box) (Arity_84));
            }
            {
              PredMarkerInfo_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_86, 0) = ((MR_Box) (PredNameArity_85));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_86, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
            }
            Var_89 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_87, 0) = ((MR_Box) (PredMarkerInfo_86));
              MR_hl_field(MR_mktag(0), PragmaInfo_87, 1) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), PragmaInfo_87, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_87)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_88);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_88, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Arity_94;
            MR_Word PredNameArity_95;
            MR_Word PredMarkerInfo_96;
            MR_Word PragmaInfo_97;
            MR_String MarkerName_98;
            MR_Word Var_99;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_94, PredArity_3);
            {
              PredNameArity_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_95, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_95, 1) = ((MR_Box) (Arity_94));
            }
            {
              PredMarkerInfo_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_96, 0) = ((MR_Box) (PredNameArity_95));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_96, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            Var_99 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_97 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_97, 0) = ((MR_Box) (PredMarkerInfo_96));
              MR_hl_field(MR_mktag(0), PragmaInfo_97, 1) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(0), PragmaInfo_97, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_97)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_98);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_98, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer Arity_104;
            MR_Word PredNameArity_105;
            MR_Word PredMarkerInfo_106;
            MR_Word PragmaInfo_107;
            MR_String MarkerName_108;
            MR_Word Var_109;

            parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_1, &Arity_104, PredArity_3);
            {
              PredNameArity_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameArity_105, 0) = ((MR_Box) (PredSymName_2));
              MR_hl_field(MR_mktag(0), PredNameArity_105, 1) = ((MR_Box) (Arity_104));
            }
            {
              PredMarkerInfo_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredMarkerInfo_106, 0) = ((MR_Box) (PredNameArity_105));
              MR_hl_field(MR_mktag(0), PredMarkerInfo_106, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            Var_109 = mercury__term__context_init_0_f_0();
            {
              PragmaInfo_107 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PragmaInfo_107, 0) = ((MR_Box) (PredMarkerInfo_106));
              MR_hl_field(MR_mktag(0), PragmaInfo_107, 1) = ((MR_Box) (Var_109));
              MR_hl_field(MR_mktag(0), PragmaInfo_107, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__cord__snoc_3_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[19]), ((MR_Box) (PragmaInfo_107)), STATE_VARIABLE_PredMarkerPragmasCord_0_5, &STATE_VARIABLE_PredMarkerPragmasCord_37_37);
            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_21, &MarkerName_108);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_108, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Markers_22;
      next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_5 = STATE_VARIABLE_PredMarkerPragmasCord_37_37;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredMarkerPragmasCord_0_5 = next_value_of_STATE_VARIABLE_PredMarkerPragmasCord_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_valid_modes_5_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProcIdInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIdInfos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ProcInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcIdInfo_13, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_17);
      if (succeeded)
      {
        MR_Word MaybeArgModes_28;
        MR_Word MaybeDetism_29;
        MR_Word ArgModes_32;
        MR_Word Detism_33;
        MR_Word Varset_34;
        MR_Word ArgModesPrime_30;
        MR_Word DetismPrime_31;

        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_17, &MaybeArgModes_28);
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_17, &MaybeDetism_29);
        succeeded = (MaybeArgModes_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgModesPrime_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_28, (MR_Integer) 0))));
          succeeded = (MaybeDetism_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            DetismPrime_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_29, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          ArgModes_32 = ArgModesPrime_30;
          Detism_33 = DetismPrime_31;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_mode\'/5", (MR_String) "attempt to write undeclared mode");
            return;
          }
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &Varset_34);
        switch (PredOrFunc_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgModes_35;
              MR_Word FuncRetMode_36;
              MR_Word Var_44;
              MR_Box conv0_FuncRetMode_36;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_32, &FuncArgModes_35, &conv0_FuncRetMode_36);
              FuncRetMode_36 = ((MR_Word) (conv0_FuncRetMode_36));
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Detism_33));
              }
              parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0((MR_Integer) 0, Varset_34, PredSymName_2, FuncArgModes_35, FuncRetMode_36, Var_44);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Detism_33));
              }
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 0, Varset_34, PredSymName_2, ArgModes_32, (MR_Word) ((MR_Unsigned) 0U), Var_41);
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIdInfos_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIds_5,
  MR_Word * SortedOrderPredInfos_6)
{
  {
    MR_Word OrderPredInfos_7;

    transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(ModuleInfo_4, PredIds_5, (MR_Word) ((MR_Unsigned) 0U), &OrderPredInfos_7);
    mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0), OrderPredInfos_7, SortedOrderPredInfos_6);
  }
}

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OrderPredInfos_0_3,
  MR_Word * STATE_VARIABLE_OrderPredInfos_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OrderPredInfos_4 = STATE_VARIABLE_OrderPredInfos_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_String PredName_14;
      MR_Integer PredArity_15;
      MR_Word PredOrFunc_16;
      MR_Word OrderPredInfo_17;
      MR_Word STATE_VARIABLE_OrderPredInfos_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OrderPredInfos_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_10, &PredInfo_13);
      PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
      PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_13);
      PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
      {
        OrderPredInfo_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 0) = ((MR_Box) (PredName_14));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 1) = ((MR_Box) (PredArity_15));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 3) = ((MR_Box) (PredId_10));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 4) = ((MR_Box) (PredInfo_13));
      }
      {
        STATE_VARIABLE_OrderPredInfos_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OrderPredInfos_20_20, 0) = ((MR_Box) (OrderPredInfo_17));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OrderPredInfos_20_20, 1) = ((MR_Box) (STATE_VARIABLE_OrderPredInfos_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_OrderPredInfos_0_3 = STATE_VARIABLE_OrderPredInfos_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_OrderPredInfos_0_3 = next_value_of_STATE_VARIABLE_OrderPredInfos_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstancesCord_28;

    transform_hlds__intermod__intermod_write_instance_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstancesCord_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstancesCord_28));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_5_p_0(
  MR_Word OutInfo_6,
  MR_Word InstanceDefns_7,
  MR_Word * Instances_8)
{
  {
    MR_Word SortedInstanceDefns_12;
    MR_Word InstancesCord_13;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv2_InstancesCord_13;
    MR_Box conv1_STATE_VARIABLE_IO_15;

    if (!((InstanceDefns_7 == (MR_Word) ((MR_Unsigned) 0U))))
      mercury__io__nl_2_p_0();
    mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[4]), InstanceDefns_7, &SortedInstanceDefns_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (OutInfo_6));
    }
    Var_18 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    mercury__list__foldl2_6_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_2[4]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[29]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, SortedInstanceDefns_12, ((MR_Box) (Var_18)), &conv2_InstancesCord_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
    InstancesCord_13 = ((MR_Word) (conv2_InstancesCord_13));
    *Instances_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), InstancesCord_13);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_5_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_TypeClassesCord_37;
    MR_Word conv0_STATE_VARIABLE_First_39;

    transform_hlds__intermod__intermod_write_class_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TypeClassesCord_37, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_39);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TypeClassesCord_37));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_39));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_5_p_0(
  MR_Word OutInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * TypeClasses_8)
{
  {
    MR_Word ModuleName_10;
    MR_Word ClassDefnMap_11;
    MR_Word TypeClassesCord_12;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Box conv4_TypeClassesCord_12;
    MR_Box conv3_Var_13;
    MR_Box conv2_STATE_VARIABLE_IO_15;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_10);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassDefnMap_11);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (OutInfo_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ModuleName_10));
    }
    Var_17 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    mercury__map__foldl3_8_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[27]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, ClassDefnMap_11, ((MR_Box) (Var_17)), &conv4_TypeClassesCord_12, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_15);
    TypeClassesCord_12 = ((MR_Word) (conv4_TypeClassesCord_12));
    *TypeClasses_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), TypeClassesCord_12);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_5_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_ModeDefnsCord_31;
    MR_Word conv0_STATE_VARIABLE_First_33;

    transform_hlds__intermod__intermod_write_mode_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ModeDefnsCord_31, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_33);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ModeDefnsCord_31));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_33));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_5_p_0(
  MR_Word OutInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * ModeDefns_8)
{
  {
    MR_Word ModuleName_10;
    MR_Word Modes_11;
    MR_Word ModeDefnMap_12;
    MR_Word ModeDefnsCord_13;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv4_ModeDefnsCord_13;
    MR_Box conv3_Var_14;
    MR_Box conv2_STATE_VARIABLE_IO_16;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_10);
    hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_7, &Modes_11);
    hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(Modes_11, &ModeDefnMap_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (OutInfo_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ModuleName_10));
    }
    Var_18 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0));
    mercury__map__foldl3_8_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[26]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, ModeDefnMap_12, ((MR_Box) (Var_18)), &conv4_ModeDefnsCord_13, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_16);
    ModeDefnsCord_13 = ((MR_Word) (conv4_ModeDefnsCord_13));
    *ModeDefns_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), ModeDefnsCord_13);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_5_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_InstDefnsCord_34;
    MR_Word conv0_STATE_VARIABLE_First_36;

    transform_hlds__intermod__intermod_write_inst_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InstDefnsCord_34, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_First_36);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InstDefnsCord_34));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_First_36));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_5_p_0(
  MR_Word OutInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * InstDefns_8)
{
  {
    MR_Word ModuleName_10;
    MR_Word Insts_11;
    MR_Word UserInstMap_12;
    MR_Word InstDefnsCord_13;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv4_InstDefnsCord_13;
    MR_Box conv3_Var_14;
    MR_Box conv2_STATE_VARIABLE_IO_16;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_10);
    hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_7, &Insts_11);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(Insts_11, &UserInstMap_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (OutInfo_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ModuleName_10));
    }
    Var_18 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0));
    mercury__map__foldl3_8_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[25]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, UserInstMap_12, ((MR_Box) (Var_18)), &conv4_InstDefnsCord_13, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_16);
    InstDefnsCord_13 = ((MR_Word) (conv4_InstDefnsCord_13));
    *InstDefns_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), InstDefnsCord_13);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_6_p_0_1(
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

    transform_hlds__intermod__intermod_write_type_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeDefnsCord_93, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ForeignEnumsCord_95);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeDefnsCord_93));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ForeignEnumsCord_95));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_types_6_p_0(
  MR_Word OutInfo_7,
  MR_Word Types_8,
  MR_Word * TypeDefns_9,
  MR_Word * ForeignEnums_10)
{
  {
    MR_Word SortedTypes_14;
    MR_Word TypeDefnsCord_15;
    MR_Word ForeignEnumsCord_16;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Box conv4_TypeDefnsCord_15;
    MR_Box conv3_ForeignEnumsCord_16;
    MR_Box conv2_STATE_VARIABLE_IO_18;

    if (!((Types_8 == (MR_Word) ((MR_Unsigned) 0U))))
      mercury__io__nl_2_p_0();
    mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_2[2]), Types_8, &SortedTypes_14);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_types_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (OutInfo_7));
    }
    Var_21 = mercury__cord__init_0_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]));
    Var_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0));
    mercury__list__foldl3_8_p_2((MR_Word) (&transform_hlds__intermod_scalar_common_2[2]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[22]), (MR_Word) (&transform_hlds__intermod_scalar_common_1[23]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, SortedTypes_14, ((MR_Box) (Var_21)), &conv4_TypeDefnsCord_15, ((MR_Box) (Var_22)), &conv3_ForeignEnumsCord_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
    TypeDefnsCord_15 = ((MR_Word) (conv4_TypeDefnsCord_15));
    ForeignEnumsCord_16 = ((MR_Word) (conv3_ForeignEnumsCord_16));
    *TypeDefns_9 = mercury__cord__list_1_f_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[21]), TypeDefnsCord_15);
    *ForeignEnums_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ForeignEnumsCord_16);
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
transform_hlds__intermod__decide_what_to_opt_export_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_IntermodInfo_28;

    transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_IntermodInfo_28);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_IntermodInfo_28));
  }
}

static void MR_CALL 
transform_hlds__intermod__decide_what_to_opt_export_2_p_0_1(
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
transform_hlds__intermod__decide_what_to_opt_export_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_IntermodInfo_13)
{
  {
    MR_Word Globals_5;
    MR_Integer Threshold_6;
    MR_Word Deforestation_7;
    MR_Integer HigherOrderSizeLimit_8;
    MR_Word RealPredIds_9;
    MR_Word AssertionTable_10;
    MR_Word AssertPredIds_11;
    MR_Word PredIds_12;
    MR_Word STATE_VARIABLE_IntermodInfo_17_17;
    MR_Word STATE_VARIABLE_IntermodInfo_19_19;
    MR_Word STATE_VARIABLE_IntermodInfo_20_20;
    MR_Word Modules_25;
    MR_Word PredClauses_26;
    MR_Word PredDecls_27;
    MR_Word ExtraExportedPreds0_42;
    MR_Word STATE_VARIABLE_IntermodInfo_18_43;
    MR_Word ModuleInfo_49;
    MR_Word Instances_50;
    MR_Word Var_51;
    MR_Word ModuleInfo_71;
    MR_Word TypeTable_72;
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_20_20;
    MR_Box conv3_STATE_VARIABLE_IntermodInfo_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
    libs__globals__lookup_int_option_3_p_0(Globals_5, (MR_Integer) 371, &Threshold_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 419, &Deforestation_7);
    libs__globals__lookup_int_option_3_p_0(Globals_5, (MR_Integer) 383, &HigherOrderSizeLimit_8);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &RealPredIds_9);
    hlds__hlds_module__module_info_get_assertion_table_2_p_0(ModuleInfo_3, &AssertionTable_10);
    hlds__hlds_promise__assertion_table_pred_ids_2_p_0(AssertionTable_10, &AssertPredIds_11);
    PredIds_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AssertPredIds_11, RealPredIds_9);
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Modules_25);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &PredClauses_26);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &PredDecls_27);
    {
      STATE_VARIABLE_IntermodInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 1) = ((MR_Box) (Modules_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 2) = ((MR_Box) (PredClauses_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 3) = ((MR_Box) (PredDecls_27));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_17_17, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(PredIds_12, (MR_Integer) 0, Threshold_6, HigherOrderSizeLimit_8, Deforestation_7, STATE_VARIABLE_IntermodInfo_17_17, &STATE_VARIABLE_IntermodInfo_18_43);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &ExtraExportedPreds0_42);
    transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(ExtraExportedPreds0_42, Threshold_6, HigherOrderSizeLimit_8, Deforestation_7, STATE_VARIABLE_IntermodInfo_18_43, &STATE_VARIABLE_IntermodInfo_19_19);
    ModuleInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_19_19, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_49, &Instances_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__intermod__decide_what_to_opt_export_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_49));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_scalar_common_1[15]), (MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), Var_51, Instances_50, ((MR_Box) (STATE_VARIABLE_IntermodInfo_19_19)), &conv1_STATE_VARIABLE_IntermodInfo_20_20);
    STATE_VARIABLE_IntermodInfo_20_20 = ((MR_Word) (conv1_STATE_VARIABLE_IntermodInfo_20_20));
    ModuleInfo_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_20_20, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_71, &TypeTable_72);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0), (MR_Word) (&transform_hlds__intermod_scalar_common_2[9]), TypeTable_72, ((MR_Box) (STATE_VARIABLE_IntermodInfo_20_20)), &conv3_STATE_VARIABLE_IntermodInfo_13);
    *STATE_VARIABLE_IntermodInfo_13 = ((MR_Word) (conv3_STATE_VARIABLE_IntermodInfo_13));
  }
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word ExtraExportedPreds0_8,
  MR_Integer InlineThreshold_10,
  MR_Integer HigherOrderSizeLimit_11,
  MR_Word Deforestation_12,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20)
{
  while (MR_TRUE)
  {
    MR_Word ExtraExportedPreds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 3))));
    MR_Word NewlyExportedPreds_15;
    MR_Word Var_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_21 = mercury__set__difference_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExtraExportedPreds_14, ExtraExportedPreds0_8);
    NewlyExportedPreds_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_21);
    if ((NewlyExportedPreds_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
    else
    {
      MR_Word STATE_VARIABLE_IntermodInfo_22_22;
      MR_Word next_value_of_ExtraExportedPreds0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_19;

      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(NewlyExportedPreds_15, (MR_Integer) 1, InlineThreshold_10, HigherOrderSizeLimit_11, Deforestation_12, STATE_VARIABLE_IntermodInfo_0_19, &STATE_VARIABLE_IntermodInfo_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_ExtraExportedPreds0_8 = ExtraExportedPreds_14;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_19 = STATE_VARIABLE_IntermodInfo_22_22;
      ExtraExportedPreds0_8 = next_value_of_ExtraExportedPreds0_8;
      STATE_VARIABLE_IntermodInfo_0_19 = next_value_of_STATE_VARIABLE_IntermodInfo_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessLocalPreds_2,
  MR_Integer InlineThreshold_4,
  MR_Integer HigherOrderSizeLimit_5,
  MR_Word Deforestation_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_7,
  MR_Word * STATE_VARIABLE_IntermodInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IntermodInfo_8 = STATE_VARIABLE_IntermodInfo_0_7;
    else
    {
      MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 0))));
      MR_Word PredTable_26;
      MR_Word PredInfo_27;
      MR_Word TypeSpecInfo_28;
      MR_Word TypeSpecForcePreds_30;
      MR_Word ClausesInfo_33;
      MR_Word STATE_VARIABLE_IntermodInfo_49_49;
      MR_Box conv0_PredInfo_27;
      MR_Word ExplicitVarTypes_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_7;

      hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_25, &PredTable_26);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_26, ((MR_Box) (PredId_17)), &conv0_PredInfo_27);
      PredInfo_27 = ((MR_Word) (conv0_PredInfo_27));
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_25, &TypeSpecInfo_28);
      TypeSpecForcePreds_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_28, (MR_Integer) 1))));
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_27, &ClausesInfo_33);
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(ClausesInfo_33, &ExplicitVarTypes_34);
      succeeded = hlds__vartypes__vartypes_is_empty_1_p_0(ExplicitVarTypes_34);
      if (succeeded)
        succeeded = transform_hlds__intermod__should_opt_export_pred_8_p_0(ModuleInfo_25, PredId_17, PredInfo_27, ProcessLocalPreds_2, TypeSpecForcePreds_30, InlineThreshold_4, HigherOrderSizeLimit_5, Deforestation_6);
      if (succeeded)
      {
        MR_Word ClausesRep_37;
        MR_Word _ItemNumbers_38;
        MR_Word Var_67;

        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_33, &ClausesRep_37, &_ItemNumbers_38);
        Var_67 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_17, Var_67);
        if (succeeded)
          STATE_VARIABLE_IntermodInfo_49_49 = STATE_VARIABLE_IntermodInfo_0_7;
        else
        {
          MR_Word DoWrite0_89;
          MR_Word STATE_VARIABLE_IntermodInfo_45_90;

          transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_17, &DoWrite0_89, STATE_VARIABLE_IntermodInfo_0_7, &STATE_VARIABLE_IntermodInfo_45_90);
          switch (DoWrite0_89) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_IntermodInfo_49_49 = STATE_VARIABLE_IntermodInfo_0_7;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Clauses_39;
                MR_Word DoWrite_93;
                MR_Word STATE_VARIABLE_IntermodInfo_46_94;

                hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep_37, &Clauses_39);
                transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_4_p_0(Clauses_39, &DoWrite_93, STATE_VARIABLE_IntermodInfo_45_90, &STATE_VARIABLE_IntermodInfo_46_94);
                switch (DoWrite_93) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_IntermodInfo_49_49 = STATE_VARIABLE_IntermodInfo_0_7;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredClauses0_41;
                      MR_Word PredClauses_42;
                      MR_Word STATE_VARIABLE_IntermodInfo_48_48;

                      succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(PredInfo_27);
                      if (succeeded)
                      {
                        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_46_94, (MR_Integer) 0))));
                        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_46_94, (MR_Integer) 1))));
                        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_46_94, (MR_Integer) 2))));
                        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_46_94, (MR_Integer) 3))));
                        MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_46_94, (MR_Integer) 4))));
                        MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_46_94, (MR_Integer) 5))));

                        {
                          STATE_VARIABLE_IntermodInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 0) = ((MR_Box) (Var_74));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 1) = ((MR_Box) (Var_75));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 2) = ((MR_Box) (Var_76));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 3) = ((MR_Box) (Var_77));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 4) = ((MR_Box) (Var_78));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 5) = ((MR_Box) (Var_79));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        }
                      }
                      else
                        STATE_VARIABLE_IntermodInfo_48_48 = STATE_VARIABLE_IntermodInfo_46_94;
                      PredClauses0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_48_48, (MR_Integer) 2))));
                      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_17)), PredClauses0_41, &PredClauses_42);
                      transform_hlds__intermod__intermod_info_set_pred_clauses_3_p_0(PredClauses_42, STATE_VARIABLE_IntermodInfo_48_48, &STATE_VARIABLE_IntermodInfo_49_49);
                    }
                    break;
                }
              }
              break;
          }
        }
      }
      else
        STATE_VARIABLE_IntermodInfo_49_49 = STATE_VARIABLE_IntermodInfo_0_7;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_18;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_7 = STATE_VARIABLE_IntermodInfo_49_49;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntermodInfo_0_7 = next_value_of_STATE_VARIABLE_IntermodInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_pred_clauses_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_15));
    }
  }
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
      MR_Word Goal_12;
      MR_Word DoWrite1_13;
      MR_Word STATE_VARIABLE_IntermodInfo_16_16;
      MR_Word GoalExpr_23;

      Goal_12 = hlds__hlds_clauses__clause_body_1_f_0(Clause_8);
      GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(GoalExpr_23, &DoWrite1_13, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
      switch (DoWrite1_13) {
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
  MR_Word * tscc_output_ptr_1_DoWrite_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word tscc_proc_2_input_1_GoalExpr_5;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
    MR_Word tscc_proc_3_input_1_RHS_5;
    MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
    MR_Word tscc_output_1_DoWrite_6;
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
      MR_Word DoWrite_6;
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
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_5 = tscc_proc_2_input_1_GoalExpr_5;
      MR_Word DoWrite_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_72 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      MR_Word STATE_VARIABLE_IntermodInfo_73;

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
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_5 = next_value_of_tscc_proc_3_input_1_RHS_5;
            tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));

            transform_hlds__intermod__intermod_add_proc_4_p_0(PredId_13, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
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
                    DoWrite_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    DoWrite_6 = (MR_Integer) 0;
                    break;
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_41;

                MaybeMayDuplicate_41 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_34);
                if ((MaybeMayDuplicate_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  DoWrite_6 = (MR_Integer) 1;
                else
                {
                  MR_Word MayDuplicate_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_41, (MR_Integer) 0))));

                  switch (MayDuplicate_42) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      DoWrite_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      DoWrite_6 = (MR_Integer) 0;
                      break;
                  }
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_44, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_92, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(Cases_47, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_93;
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
                MR_Word DoWrite1_52;
                MR_Word DoWrite2_53;
                MR_Word DoWrite3_54;
                MR_Word STATE_VARIABLE_IntermodInfo_80_80;
                MR_Word STATE_VARIABLE_IntermodInfo_81_81;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_85;

                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Cond_49, &DoWrite1_52, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_80_80);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Then_50, &DoWrite2_53, STATE_VARIABLE_IntermodInfo_80_80, &STATE_VARIABLE_IntermodInfo_81_81);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Else_51, &DoWrite3_54, STATE_VARIABLE_IntermodInfo_81_81, &STATE_VARIABLE_IntermodInfo_73);
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (DoWrite3_54));
                  MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (DoWrite2_53));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DoWrite1_52));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
                }
                mercury__bool__and_list_2_p_0(Var_83, &DoWrite_6);
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
                      MR_Word DoWriteMain_65;
                      MR_Word DoWriteOrElse_66;
                      MR_Word STATE_VARIABLE_IntermodInfo_76_76;

                      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_62, &DoWriteMain_65, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_76_76);
                      transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_63, &DoWriteOrElse_66, STATE_VARIABLE_IntermodInfo_76_76, &STATE_VARIABLE_IntermodInfo_73);
                      mercury__bool__and_3_p_0(DoWriteMain_65, DoWriteOrElse_66, &DoWrite_6);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      DoWrite_6 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_73;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_5 = tscc_proc_3_input_1_RHS_5;
      MR_Word DoWrite_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_25 = tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
      MR_Word STATE_VARIABLE_IntermodInfo_26;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DoWrite_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_5, (MR_Integer) 0))));
            MR_Word ShroudedPredProcId_21;

            succeeded = ((((MR_tag((MR_Word) Functor_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_18, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_18, (MR_Integer) 1))));
              {
                MR_Word PredId_23;
                MR_Word Var_27;
                MR_Word Var_36;

                Var_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_21);
                PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
                Var_36 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_23, Var_36);
                if (succeeded)
                {
                  DoWrite_6 = (MR_Integer) 0;
                  STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
                }
                else
                  transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_23, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_25, &STATE_VARIABLE_IntermodInfo_26);
              }
            }
            else
            {
              DoWrite_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_5, (MR_Integer) 6))));
            MR_Word GoalExpr_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_43;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_25;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
            tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_26;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_DoWrite_6 = tscc_output_1_DoWrite_6;
    *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
    return;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_5,
  MR_Word * tscc_output_ptr_1_DoWrite_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_5;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
    MR_Word tscc_proc_3_input_1_RHS_5;
    MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
    MR_Word tscc_output_1_DoWrite_6;
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
      MR_Word DoWrite_6;
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
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_5 = tscc_proc_2_input_1_GoalExpr_5;
      MR_Word DoWrite_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_72 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      MR_Word STATE_VARIABLE_IntermodInfo_73;

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
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_5 = next_value_of_tscc_proc_3_input_1_RHS_5;
            tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));

            transform_hlds__intermod__intermod_add_proc_4_p_0(PredId_13, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
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
                    DoWrite_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    DoWrite_6 = (MR_Integer) 0;
                    break;
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_41;

                MaybeMayDuplicate_41 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_34);
                if ((MaybeMayDuplicate_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  DoWrite_6 = (MR_Integer) 1;
                else
                {
                  MR_Word MayDuplicate_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_41, (MR_Integer) 0))));

                  switch (MayDuplicate_42) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      DoWrite_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      DoWrite_6 = (MR_Integer) 0;
                      break;
                  }
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_44, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_92, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(Cases_47, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_93;
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
                MR_Word DoWrite1_52;
                MR_Word DoWrite2_53;
                MR_Word DoWrite3_54;
                MR_Word STATE_VARIABLE_IntermodInfo_80_80;
                MR_Word STATE_VARIABLE_IntermodInfo_81_81;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_85;

                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Cond_49, &DoWrite1_52, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_80_80);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Then_50, &DoWrite2_53, STATE_VARIABLE_IntermodInfo_80_80, &STATE_VARIABLE_IntermodInfo_81_81);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Else_51, &DoWrite3_54, STATE_VARIABLE_IntermodInfo_81_81, &STATE_VARIABLE_IntermodInfo_73);
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (DoWrite3_54));
                  MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (DoWrite2_53));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DoWrite1_52));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
                }
                mercury__bool__and_list_2_p_0(Var_83, &DoWrite_6);
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
                      MR_Word DoWriteMain_65;
                      MR_Word DoWriteOrElse_66;
                      MR_Word STATE_VARIABLE_IntermodInfo_76_76;

                      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_62, &DoWriteMain_65, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_76_76);
                      transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_63, &DoWriteOrElse_66, STATE_VARIABLE_IntermodInfo_76_76, &STATE_VARIABLE_IntermodInfo_73);
                      mercury__bool__and_3_p_0(DoWriteMain_65, DoWriteOrElse_66, &DoWrite_6);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      DoWrite_6 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_73;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_5 = tscc_proc_3_input_1_RHS_5;
      MR_Word DoWrite_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_25 = tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
      MR_Word STATE_VARIABLE_IntermodInfo_26;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DoWrite_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_5, (MR_Integer) 0))));
            MR_Word ShroudedPredProcId_21;

            succeeded = ((((MR_tag((MR_Word) Functor_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_18, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_18, (MR_Integer) 1))));
              {
                MR_Word PredId_23;
                MR_Word Var_27;
                MR_Word Var_36;

                Var_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_21);
                PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
                Var_36 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_23, Var_36);
                if (succeeded)
                {
                  DoWrite_6 = (MR_Integer) 0;
                  STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
                }
                else
                  transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_23, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_25, &STATE_VARIABLE_IntermodInfo_26);
              }
            }
            else
            {
              DoWrite_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_5, (MR_Integer) 6))));
            MR_Word GoalExpr_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_43;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_25;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
            tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_26;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_DoWrite_6 = tscc_output_1_DoWrite_6;
    *tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11 = tscc_output_2_STATE_VARIABLE_IntermodInfo_11;
    return;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_unify_rhs_4_p_0(
  MR_Word tscc_proc_3_input_1_RHS_5,
  MR_Word * tscc_output_ptr_1_DoWrite_6,
  MR_Word tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_5;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_IntermodInfo_0_10;
    MR_Word tscc_proc_2_input_1_GoalExpr_5;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
    MR_Word tscc_output_1_DoWrite_6;
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
      MR_Word DoWrite_6;
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
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_5 = tscc_proc_2_input_1_GoalExpr_5;
      MR_Word DoWrite_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_72 = tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
      MR_Word STATE_VARIABLE_IntermodInfo_73;

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
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25 = STATE_VARIABLE_IntermodInfo_0_72;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_5 = next_value_of_tscc_proc_3_input_1_RHS_5;
            tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));

            transform_hlds__intermod__intermod_add_proc_4_p_0(PredId_13, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
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
                    DoWrite_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    DoWrite_6 = (MR_Integer) 0;
                    break;
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word MaybeMayDuplicate_41;

                MaybeMayDuplicate_41 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_34);
                if ((MaybeMayDuplicate_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  DoWrite_6 = (MR_Integer) 1;
                else
                {
                  MR_Word MayDuplicate_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_41, (MR_Integer) 0))));

                  switch (MayDuplicate_42) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      DoWrite_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      DoWrite_6 = (MR_Integer) 0;
                      break;
                  }
                }
                STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_44, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(Goals_92, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                transform_hlds__intermod__gather_entities_to_opt_export_in_cases_4_p_0(Cases_47, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_73);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_93;
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
                MR_Word DoWrite1_52;
                MR_Word DoWrite2_53;
                MR_Word DoWrite3_54;
                MR_Word STATE_VARIABLE_IntermodInfo_80_80;
                MR_Word STATE_VARIABLE_IntermodInfo_81_81;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_85;

                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Cond_49, &DoWrite1_52, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_80_80);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Then_50, &DoWrite2_53, STATE_VARIABLE_IntermodInfo_80_80, &STATE_VARIABLE_IntermodInfo_81_81);
                transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(Else_51, &DoWrite3_54, STATE_VARIABLE_IntermodInfo_81_81, &STATE_VARIABLE_IntermodInfo_73);
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (DoWrite3_54));
                  MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (DoWrite2_53));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DoWrite1_52));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
                }
                mercury__bool__and_list_2_p_0(Var_83, &DoWrite_6);
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
                      MR_Word DoWriteMain_65;
                      MR_Word DoWriteOrElse_66;
                      MR_Word STATE_VARIABLE_IntermodInfo_76_76;

                      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_4_p_0(MainGoal_62, &DoWriteMain_65, STATE_VARIABLE_IntermodInfo_0_72, &STATE_VARIABLE_IntermodInfo_76_76);
                      transform_hlds__intermod__gather_entities_to_opt_export_in_goals_4_p_0(OrElseGoals_63, &DoWriteOrElse_66, STATE_VARIABLE_IntermodInfo_76_76, &STATE_VARIABLE_IntermodInfo_73);
                      mercury__bool__and_3_p_0(DoWriteMain_65, DoWriteOrElse_66, &DoWrite_6);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      DoWrite_6 = (MR_Integer) 0;
                      STATE_VARIABLE_IntermodInfo_73 = STATE_VARIABLE_IntermodInfo_0_72;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_73;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_5 = tscc_proc_3_input_1_RHS_5;
      MR_Word DoWrite_6;
      MR_Word STATE_VARIABLE_IntermodInfo_0_25 = tscc_proc_3_input_2_STATE_VARIABLE_IntermodInfo_0_25;
      MR_Word STATE_VARIABLE_IntermodInfo_26;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DoWrite_6 = (MR_Integer) 1;
            STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_5, (MR_Integer) 0))));
            MR_Word ShroudedPredProcId_21;

            succeeded = ((((MR_tag((MR_Word) Functor_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_18, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_18, (MR_Integer) 1))));
              {
                MR_Word PredId_23;
                MR_Word Var_27;
                MR_Word Var_36;

                Var_27 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_21);
                PredId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
                Var_36 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_23, Var_36);
                if (succeeded)
                {
                  DoWrite_6 = (MR_Integer) 0;
                  STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
                }
                else
                  transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_23, &DoWrite_6, STATE_VARIABLE_IntermodInfo_0_25, &STATE_VARIABLE_IntermodInfo_26);
              }
            }
            else
            {
              DoWrite_6 = (MR_Integer) 1;
              STATE_VARIABLE_IntermodInfo_26 = STATE_VARIABLE_IntermodInfo_0_25;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_5, (MR_Integer) 6))));
            MR_Word GoalExpr_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_5 = GoalExpr_43;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = STATE_VARIABLE_IntermodInfo_0_25;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_5 = next_value_of_tscc_proc_2_input_1_GoalExpr_5;
            tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_IntermodInfo_0_72;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_DoWrite_6 = DoWrite_6;
      tscc_output_2_STATE_VARIABLE_IntermodInfo_11 = STATE_VARIABLE_IntermodInfo_26;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_DoWrite_6 = tscc_output_1_DoWrite_6;
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
      MR_Word STATE_VARIABLE_DoWrite_18_18;
      MR_Word STATE_VARIABLE_IntermodInfo_19_19;
      MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));

      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(GoalExpr_27, &STATE_VARIABLE_DoWrite_18_18, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_19_19);
      switch (STATE_VARIABLE_DoWrite_18_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = STATE_VARIABLE_DoWrite_18_18;
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
      MR_Word STATE_VARIABLE_DoWrite_15_15;
      MR_Word STATE_VARIABLE_IntermodInfo_16_16;
      MR_Word GoalExpr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));

      transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_4_p_0(GoalExpr_24, &STATE_VARIABLE_DoWrite_15_15, STATE_VARIABLE_IntermodInfo_0_3, &STATE_VARIABLE_IntermodInfo_16_16);
      switch (STATE_VARIABLE_DoWrite_15_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = STATE_VARIABLE_DoWrite_15_15;
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
transform_hlds__intermod__intermod_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
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
      *DoWrite_6 = (MR_Integer) 0;
      *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
    }
    else
      transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_5, DoWrite_6, STATE_VARIABLE_IntermodInfo_0_8, STATE_VARIABLE_IntermodInfo_9);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcId_15 = ((MR_Integer) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__conv0_ProcId_15));
    transform_hlds__intermod__intermod_do_add_proc_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Box conv1_ProcInfo_16;

      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
      mercury__map__lookup_3_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_41_41, (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42, (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Procs_14, ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcId_15)), &conv1_ProcInfo_16);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcInfo_16 = ((MR_Word) (conv1_ProcInfo_16));
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_26 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcInfo_16, &(env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_45);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeInfo_50_50 = (MR_Word) (&transform_hlds__intermod_scalar_common_1[37]);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeInfo_50_50, ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_26)), ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_45)));
      if ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
        transform_hlds__intermod__intermod_do_add_proc_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__commit_0) == 0)
      {
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &(env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Procs_14);
        (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_41_41, &(env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__conv0_ProcId_15, (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcIds_11, transform_hlds__intermod__intermod_do_add_proc_4_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * STATE_VARIABLE_IntermodInfo_25)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s env;

    {
      MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0))));
      MR_Word PredStatus_10;
      MR_Word Markers_12;
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5))));
      MR_Word Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, PredId_5, &(env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
      hlds__hlds_pred__pred_info_get_status_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &PredStatus_10);
      (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
      hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Markers_12);
      (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
      if (!((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded))
      {
        MR_Word Var_13;

        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Var_13);
      }
      if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
      {
        *DoWrite_6 = (MR_Integer) 1;
        *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
      }
      else
      {
        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 3);
        if (!((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded))
          transform_hlds__intermod__intermod_do_add_proc_4_p_0_4(&env);
        if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
        {
          *DoWrite_6 = (MR_Integer) 0;
          *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
        }
        else
        {
          MR_Word Var_46;
          MR_Word Var_29;

          hlds__hlds_pred__pred_info_get_purity_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Var_46);
          (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = ((MR_Integer) 2 == Var_46);
          if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
          {
            Var_29 = (MR_Integer) 23;
            (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, Var_29);
            (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = !((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded);
          }
          if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
          {
            *DoWrite_6 = (MR_Integer) 0;
            *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
          else
          {
            MR_Word Var_48 = (MR_Word) (PredStatus_10);

            if ((Var_48 == (MR_Word) ((MR_Unsigned) 12U)))
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1))
            {
              MR_Word OldExternalStatus_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
              MR_Word Var_31;

              Var_31 = hlds__status__old_status_is_exported_1_f_0(OldExternalStatus_17);
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = (Var_31 == (MR_Integer) 1);
            }
            else
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
            if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
            {
              *DoWrite_6 = (MR_Integer) 1;
              *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
            }
            else
            {
              MR_Word Var_33;
              MR_Word Var_47;

              hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Var_47);
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__intermod_scalar_common_1[38]), ((MR_Box) (Markers_12)), ((MR_Box) (Var_47)));
              if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
              {
                Var_33 = (MR_Integer) 10;
                (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, Var_33);
              }
              if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
              {
                *DoWrite_6 = (MR_Integer) 1;
                *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
              }
              else
              {
                MR_Word OldStatus_60 = (MR_Word) (PredStatus_10);

                switch (MR_tag((MR_Word) OldStatus_60)) {
                  default:
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(OldStatus_60)) {
                      default:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 4:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 5:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 7:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 8:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
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
                      (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = (Var_108 == (MR_Integer) 1);
                    }
                    break;
                }
                if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
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
                  MR_Word Var_79;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_80;
                  MR_Unsigned packed_word_2;

                  *DoWrite_6 = (MR_Integer) 1;
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0))));
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1))));
                  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2))));
                  PredDecls0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3))));
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
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredDecls_19));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((MR_Unsigned) (Var_83));
                  }
                }
                else
                {
                  MR_Word Var_49 = (MR_Word) (PredStatus_10);

                  if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                  if (((MR_tag((MR_Word) Var_49)) == (MR_Integer) 2))
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
                  if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
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

                    *DoWrite_6 = (MR_Integer) 1;
                    PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
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
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.intermod.intermod_do_add_proc\'/4", (MR_String) "unexpected status");
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
transform_hlds__intermod__should_opt_export_pred_8_p_0_2(
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

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_1(
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
transform_hlds__intermod__should_opt_export_pred_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clause1_79 = ((MR_Word) ((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__conv1_Clause1_79));
    transform_hlds__intermod__should_opt_export_pred_8_p_0_4(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Goal1_70 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clause1_79);
    (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Goal1_70, (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10);
    if ((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
      transform_hlds__intermod__should_opt_export_pred_8_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__conv1_Clause1_79, (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, transform_hlds__intermod__should_opt_export_pred_8_p_0_5, env_ptr);
        (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcessLocalPreds_12,
  MR_Word TypeSpecForcePreds_13,
  MR_Integer InlineThreshold_14,
  MR_Integer HigherOrderSizeLimit_15,
  MR_Word Deforestation_16)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s env;

    (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10 = PredId_10;
    switch (ProcessLocalPreds_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_11);
          if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
            (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20;

          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_11, &Var_20);
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__status____Unify____pred_status_0_0((MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Var_20);
        }
        break;
    }
    if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
    {
      {
        MR_Word Var_17;

        (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_11, &Var_17);
      }
      if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
      {
        MR_Word TypeCtorInfo_16_34;
        MR_Word TypeCtorInfo_17_35;
        MR_Word Markers_25;
        MR_Word ProcTable_26;
        MR_Word ProcInfos_27;
        MR_Word Var_32;
        MR_Word ClauseInfo_43;
        MR_Word ClausesRep_44;
        MR_Integer Arity_47;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word TypeCtorInfo_15_33;
        MR_Word Var_31;
        MR_Word _ItemNumbers_45;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_11, &Markers_25);
        (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, (MR_Integer) 10);
        (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
        if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
        {
          Var_29 = (MR_Integer) 11;
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_29);
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
          if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
          {
            Var_30 = (MR_Integer) 0;
            (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_30);
            (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
            if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
            {
              (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_11);
              (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
              if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
              {
                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_11);
                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                {
                  TypeCtorInfo_15_33 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(TypeCtorInfo_15_33, ((MR_Box) ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10)), TypeSpecForcePreds_13);
                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
                  if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                  {
                    Var_31 = (MR_Integer) 7;
                    (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_31);
                    (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
                    if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                    {
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_26);
                      TypeCtorInfo_16_34 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
                      TypeCtorInfo_17_35 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
                      mercury__map__values_2_p_0(TypeCtorInfo_16_34, TypeCtorInfo_17_35, ProcTable_26, &ProcInfos_27);
                      Var_32 = (MR_Word) (&transform_hlds__intermod_scalar_common_2[8]);
                      (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_17_35, Var_32, ProcInfos_27);
                      if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                      {
                        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_11, &ClauseInfo_43);
                        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClauseInfo_43, &ClausesRep_44, &_ItemNumbers_45);
                        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_44, &(env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46);
                        Arity_47 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
                        {
                          MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) InlineThreshold_14 + (MR_Unsigned) Arity_47);

                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, Var_57);
                        }
                        if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                        {
                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(PredInfo_11);
                          if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                          {
                            {
                              MR_Word Markers_48;

                              hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_11, &Markers_48);
                              (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_48, (MR_Integer) 23);
                            }
                            if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                            {
                              {
                                MR_Integer GoalSize_49;
                                MR_Integer Var_55;
                                MR_Word ProcTable_60;
                                MR_Word ProcInfos_61;
                                MR_Word Var_63;
                                MR_Word _FirstProcInfoWithHoInput_62;
                                MR_Box conv0__FirstProcInfoWithHoInput_62;

                                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_60);
                                mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_60, &ProcInfos_61);
                                {
                                  Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0]));
                                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__intermod__should_opt_export_pred_8_p_0_2));
                                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleInfo_9));
                                }
                                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_63, ProcInfos_61, &conv0__FirstProcInfoWithHoInput_62);
                                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                {
                                  _FirstProcInfoWithHoInput_62 = ((MR_Word) (conv0__FirstProcInfoWithHoInput_62));
                                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_TRUE;
                                }
                                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                {
                                  hlds__goal_util__clause_list_size_2_p_0((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, &GoalSize_49);
                                  Var_55 = (MR_Integer) ((MR_Unsigned) HigherOrderSizeLimit_15 + (MR_Unsigned) Arity_47);
                                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = (GoalSize_49 <= Var_55);
                                }
                              }
                              if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                              {
                                MR_Integer DeforestThreshold_50;
                                MR_Integer Var_51;
                                MR_Integer Var_52;
                                MR_Integer Var_53;
                                MR_Integer Var_54;
                                MR_Word Var_81;
                                MR_Word Var_82;

                                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = (Deforestation_16 == (MR_Integer) 1);
                                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                {
                                  Var_52 = (MR_Integer) 2;
                                  Var_51 = (MR_Integer) ((MR_Unsigned) InlineThreshold_14 * (MR_Unsigned) Var_52);
                                  Var_53 = (MR_Integer) 1;
                                  DeforestThreshold_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) Var_53);
                                  Var_54 = (MR_Integer) ((MR_Unsigned) DeforestThreshold_50 + (MR_Unsigned) Arity_47);
                                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, Var_54);
                                  if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                  {
                                    transform_hlds__intermod__should_opt_export_pred_8_p_0_6(&env);
                                    if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                    {
                                      (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46 != (MR_Word) ((MR_Unsigned) 0U));
                                      if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                      {
                                        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, (MR_Integer) 0))));
                                        Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, (MR_Integer) 1))));
                                        if ((Var_81 == (MR_Word) ((MR_Unsigned) 0U)))
                                        {
                                          MR_Word Goal2_75;
                                          MR_Word GoalList_76;

                                          Goal2_75 = hlds__hlds_clauses__clause_body_1_f_0(Var_82);
                                          hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal2_75, &GoalList_76);
                                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(GoalList_76, (MR_Integer) 0);
                                        }
                                        else
                                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_TRUE;
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
    return (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded;
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
transform_hlds__intermod____Unify____maybe_should_write_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_should_write_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_should_write_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_should_write_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____order_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____order_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____should_write_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____should_write_for_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____should_write_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____should_write_for_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_need_foreign_import_modules_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_should_write_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_should_write_for_0);
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
