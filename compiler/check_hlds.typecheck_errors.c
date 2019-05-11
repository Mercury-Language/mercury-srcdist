/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2091-05-10
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


// :- module check_hlds.typecheck_errors.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_errors__init
ENDINIT
*/

#include "check_hlds.typecheck_errors.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
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
#include "edit_seq.mih"
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
#include "solutions.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s {
  MR_Word check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__VisibleModules_4;
  MR_Word * check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__UnimportedParent_6;
  MR_Cont check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__cont;
  void * check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__MatchingModuleName_7;
  MR_Word check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__ParentModules_8;
  MR_Box check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__conv0_MatchingModuleName_7;
  MR_Box check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__conv1_UnimportedParent_6;
};

struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s {
  MR_Word check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefnList_14;
  MR_bool check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded;
  jmp_buf check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41;
  MR_Word check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__Var_62;
  MR_Box check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__conv2_ConsDefn_41;
};

struct check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0_s {
  MR_Box * check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__wrapper_arg_1;
  MR_Cont check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__cont;
  void * check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__cont_env_ptr;
  MR_Word check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__conv0_UnimportedParent_6;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_errors__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_actual_expected_types_0_0[2];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_actual_expected_types_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_actual_expected_types_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_actual_expected_types_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_actual_expected_types_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_actual_expected_types_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_type_stuff_0_0[4];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_arg_type_stuff_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_type_stuff_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_type_stuff_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_type_stuff_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_type_stuff_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_1;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_2[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_2;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_3[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_3;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_4[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_4;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_5[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_5;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_3[3];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_kind_0[4];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_kind_0[6];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_kind_0[6];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_type_error_0_0[3];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_2[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_3[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_3[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_cons_error_0[4];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_cons_error_0[4];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_cons_error_0[4];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_does_some_type_stuff_match_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_maybe_add_quotes_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_maybe_add_quotes_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_add_quotes_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_mismatch_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_spec_and_maybe_actual_expected_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_error_goal_context_0_0[2];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_error_goal_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_error_goal_context_0_1[1];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_error_goal_context_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_2;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_2[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_error_goal_context_0[3];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_error_goal_context_0[3];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_error_goal_context_0[3];

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0[3];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0[3];

static const MR_DuArgLocn check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0[3];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_errors__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_stuff_0_0[4];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_stuff_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_stuff_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_stuff_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_stuff_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_stuff_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_var_vector_kind_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_1;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_2;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_3;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_4;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_5;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_6;

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_7;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_0[7];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_var_vector_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_var_vector_kind_0[8];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_var_vector_kind_0[8];

static MR_String MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__arg_decl_lines__2504__1_1_f_0(
  MR_String LambdaHeadVar__1_20);

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__2404__1_2_p_0(
  MR_Word HeadVar__1_28,
  MR_Word * HeadVar__2_29);

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__2317__1_2_p_0(
  MR_Word HeadVar__1_17,
  MR_Word * HeadVar__2_18);

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__2241__1_2_p_0(
  MR_Integer LambdaHeadVar__1_17,
  MR_Integer * LambdaHeadVar__2_18);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__548__1_1_f_0(
  MR_Word HeadVar__1_115);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1377__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_87);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1359__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_19);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_stuff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_stuff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_add_quotes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_add_quotes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__diff_to_pieces_1_f_0(
  MR_Word Diff_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__string_to_pieces_1_f_0(
  MR_String Str_3);

static void MR_CALL 
check_hlds__typecheck_errors__typestuff_to_typestr_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_String MR_CALL 
check_hlds__typecheck_errors__typestuff_to_typestr_1_f_0(
  MR_Word TypeStuff_3);

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0(
  MR_Word VisibleModules_4,
  MR_Word MatchingModuleNames_5,
  MR_Word * UnimportedParent_6,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(
  MR_Word ActualExpected_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__expected_types_to_pieces_2_f_0(
  MR_Word ActualExpected_4,
  MR_Word Pieces0_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_f_0(
  MR_Word ArgTypeStuff_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_f_0(
  MR_Word Type_4,
  MR_Word VarTypeStuff_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_quote_1_f_0(
  MR_String Str_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_NumUnsatisfied_0_17,
  MR_Integer * STATE_VARIABLE_NumUnsatisfied_18);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_cons_error_2_f_0(
  MR_Word Context_4,
  MR_Word ConsError_5);

static void MR_CALL 
check_hlds__typecheck_errors__substitute_types_check_match_6_p_0(
  MR_Word ExpType_7,
  MR_Word TypeStuff_8,
  MR_Word STATE_VARIABLE_TypeMismatches_0_23,
  MR_Word * STATE_VARIABLE_TypeMismatches_24,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_25,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_26);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_cons_type_info_source_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Source_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__context_to_error_msg_2_f_0(
  MR_Word Pieces_4,
  MR_Word Context_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__func_decl_lines_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__func_decl_lines_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__func_decl_lines_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgTypes_6,
  MR_Word ReturnType_7,
  MR_Word * Lines_8);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__pred_decl_lines_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__pred_decl_lines_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__pred_decl_lines_3_p_0(
  MR_Word TVarSet_4,
  MR_Word ArgTypes_5,
  MR_Word * Lines_6);

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_f_0(
  MR_Word Name_5,
  MR_Integer Arity_6,
  MR_Word ActualArities_7);

static void MR_CALL 
check_hlds__typecheck_errors__return_function_arities_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FuncArities_0_3,
  MR_Word * STATE_VARIABLE_FuncArities_4);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__syntax_functor_components_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * Components_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__language_builtin_functor_components_3_p_0(
  MR_String Name_4,
  MR_Integer Arity_5,
  MR_Word * Components_6);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__language_builtin_functor_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_arg_var_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__get_arg_type_stuff_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_f_0(
  MR_Word ArgTypeAssignSet0_4,
  MR_Word VarSet_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_7_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_vector_kind_to_pieces_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word ArgVectorKind_5);

static void MR_CALL 
check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(
  MR_Word VarSet_6,
  MR_Word AllErrors_7,
  MR_Word HeadError_8,
  MR_Word TailErrors_9,
  MR_Word * Pieces_10);

static void MR_CALL 
check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word GoalContext_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(
  MR_Word ActualExpectedList_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_6(
  void * env_ptr_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word TypeAssignSet_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word First_2,
  MR_Word VarSet_3,
  MR_Word Functor_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_actual_types_3_f_0(
  MR_Word FirstActualTypePieces_5,
  MR_Word SecondActualTypePieces_6,
  MR_Word ThirdPlusActualTypePieces_7);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_types_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_7_p_0(
  MR_Integer CurArgNum_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeAssignSet_3,
  MR_Word STATE_VARIABLE_RevSubsumesMismatches_0_4,
  MR_Word * STATE_VARIABLE_RevSubsumesMismatches_5,
  MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_0_6,
  MR_Word * STATE_VARIABLE_RevNoSubsumeMismatches_7);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_3_f_0(
  MR_Word Functor_5,
  MR_Integer Arity_6,
  MR_Word ConsDefnList_7);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Functor_2,
  MR_Integer Arity_3);

static void MR_CALL 
check_hlds__typecheck_errors__type_to_pieces_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_to_pieces_4_f_0(
  MR_Word MaybeAddQuotes_6,
  MR_Word Type0_7,
  MR_Word TVarSet_8,
  MR_Word ExternalTypeParams_9);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__make_list_term_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word Functor_4,
  MR_Integer Arity_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(
  MR_Word TypeAssignSet0_4,
  MR_Word VarSet_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(
  MR_Word TypeAssignSet_4,
  MR_Word Var_5);

static void MR_CALL 
check_hlds__typecheck_errors__get_type_stuff_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word OverloadedSymbolMap_8,
  MR_Word IsError_9);

static void MR_CALL 
check_hlds__typecheck_errors__report_non_contiguous_clause_contexts_6_p_0(
  MR_Word PredPieces_7,
  MR_Integer GapNumber_8,
  MR_Word FirstRegion_9,
  MR_Word SecondRegion_10,
  MR_Word LaterRegions_11,
  MR_Word * Msgs_12);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_undef_pred_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word SimpleCallId_7);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word ModuleQualifier_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_apply_instead_of_pred_0_f_0(void);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word SimpleCallId_8,
  MR_Word Arities_9);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(
  MR_Word ClauseContext_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____actual_expected_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____actual_expected_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____cons_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____cons_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_add_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_add_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_error_goal_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_error_goal_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____var_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____var_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[546][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[23][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[27][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[14][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[8][6];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[1][9];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[3][7];


/* sealed */ struct check_hlds__typecheck_errors__vector_common_type_7_0_s {
  const MR_String check_hlds__typecheck_errors__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_7_0_s check_hlds__typecheck_errors_vector_common_7[96];



static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[546][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[3]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[7]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":- ...\':"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match its expected type;"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type was either"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous overloading causes type ambiguity."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraint:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraints:"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "version is"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "\?)"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) " = ..."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Perhaps you forgot to add"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with that name, however."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "*"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with that name, however.)"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every if-then must have an else."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Note: the else part is not optional."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: unmatched"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[78])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[83])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every if-then must have an"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[78])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part is not optional."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Note: the"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "marker in an inappropriate place."))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Such markers only belong before predicate calls."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of variables."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error in existential quantification:"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be used as an expression, not as a goal."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the language construct"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply(Func, X, Y) :- apply(Func, X, Y)."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with the appropriate arity, e.g."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is defined"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = my_apply(OldFunc, X)"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = apply(OldFunc, X)"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "e.g. instead of "))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use a forwarding function:"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you\'re trying to curry a higher-order function,"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you\'re trying to invoke a higher-order predicate,"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[155])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "starts after this clause."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "ends with this clause."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: highly ambiguous overloading."))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It may also make your code difficult to understand."))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This may cause type-checking to be very slow."))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: excessively ambiguous overloading."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This caused the type checker to exceed its limits."))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[165])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the following context."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following symbol was overloaded"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the following contexts."))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following symbols were overloaded"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[177])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[39])))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has one of the following type mismatches."))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the actual type is the same as the expected type of"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[189]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[190])))
  },
  /* row 193 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[192])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[23])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be used as a goal, not as an expression."))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if <goal> then yes else no"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[198])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as a boolean function, you should write"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[200])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you are trying to use a goal"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[202])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "correctly imported)."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a separate module, check that the module is"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[206])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is actually defined (if it is defined"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[208])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[210])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you have the arity correct, and that the functor"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the language builtin call/N, make sure that"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[213])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as an expression and not as an application of"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[216]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[215])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[217])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you really are trying to use"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[218])))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[220])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the Mercury Language Reference Manual."))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[222]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[221])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "see the \"Creating higher-order terms\" section of"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[223])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a higher-order predicate,"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[226]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[225])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you\'re trying to curry"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[229])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[230])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[231])))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[232])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[233])))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[234])))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you should use"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[235])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a higher-order function,"))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[238]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[237])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[240]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[239])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "state variable operator."))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[242]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[243])))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid use of"))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[246]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[248]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[249])))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[251]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[250])))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You probably meant to use"))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[253]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[252])))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[255]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-->"))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[257]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[256])))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[258])))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error in DCG lambda expression"))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[260]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[259])))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[73])))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "./2"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[263]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[264])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[265])))
  },
  /* row 267 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[3])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[267]))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[266])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the list constructor is now"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[256])))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[273])))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error in lambda expression"))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[275]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[274])))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[277]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[256])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[278])))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid use of field update operator"))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[280]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[279])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is probably some kind of syntax error."))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[282]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[284]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[256])))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[285])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid use of field selection operator"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[286])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not a variable or other term."))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[289]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The field name must be an atom,"))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[291]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[290])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[282]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[292])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[95])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[294])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[295])))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for those foreign types."))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[297]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which are not implemented"))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[299]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[298])))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in all predicates and functions"))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[301]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[300])))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it is treated as an abstract type"))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[303]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[302])))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[304])))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[306]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be updated because"))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[308]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[307])))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not existentially typed."))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[310]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "\"Syntax\" chapter of the Mercury language reference manual."))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[312]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) " sub-section of the \"Data-terms\" section of the"))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[314]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[313])))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[315])))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "For details see the"))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[317]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[316])))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is to use \"with_type\"."))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[319]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[318])))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The way to add an explicit type qualification"))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[321]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[320])))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to resolve the type ambiguity."))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[323]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[322])))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You will need to add an explicit type qualification"))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[325]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[324])))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[327]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has overloaded type {"))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[329]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[328])))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[331]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[333]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[332])))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[329]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[39])))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[336])))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has not been imported)."))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[338]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have not been imported)."))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[340]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in inner variable of atomic goal:"))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[342]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the clause head:"))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[344]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[346]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 348 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of atomic goal:"))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[348]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 350 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the first outer variable"))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[350]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[349])))
  },
  /* row 352 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 353 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[352]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[351])))
  },
  /* row 354 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the second outer variable"))
  },
  /* row 355 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[354]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[349])))
  },
  /* row 356 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 357 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[356]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[355])))
  },
  /* row 358 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "output variable of atomic goal:"))
  },
  /* row 359 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[358]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 360 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "quantified variable in if-then-else condition:"))
  },
  /* row 361 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[360]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 362 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable of quantification scope:"))
  },
  /* row 363 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[362]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 364 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable of loop control scope:"))
  },
  /* row 365 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[364]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 366 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable of promise_solutions scope:"))
  },
  /* row 367 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[366]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 368 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in initial I/O state variable of try goal:"))
  },
  /* row 369 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[368]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 370 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[352]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[369])))
  },
  /* row 371 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in final I/O state variable of try goal:"))
  },
  /* row 372 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[371]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 373 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[356]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[372])))
  },
  /* row 374 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in arguments of the clause head:"))
  },
  /* row 375 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[374]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])))
  },
  /* row 376 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 377 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 378 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 379 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 380 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[379]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 381 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrong number of arguments ("))
  },
  /* row 382 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 383 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 384 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 385 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[384]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 386 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row 387 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[157])))
  },
  /* row 388 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[387]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 389 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[388])))
  },
  /* row 390 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(the module"))
  },
  /* row 391 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(the possible parent module"))
  },
  /* row 392 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[391]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 393 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(the possible parent modules"))
  },
  /* row 394 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[393]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 395 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[76])))
  },
  /* row 396 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[395]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 397 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[396])))
  },
  /* row 398 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 399 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[101])))
  },
  /* row 400 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[399]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 401 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[400])))
  },
  /* row 402 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[105])))
  },
  /* row 403 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[402]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 404 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 405 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: undefined"))
  },
  /* row 406 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There is a"))
  },
  /* row 407 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "*"))
  },
  /* row 408 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: there is no event named"))
  },
  /* row 409 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 410 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[409]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 411 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 412 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[411]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 413 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in event"))
  },
  /* row 414 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no clauses for"))
  },
  /* row 415 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: no clauses for "))
  },
  /* row 416 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Gap"))
  },
  /* row 417 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in clauses of"))
  },
  /* row 418 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: non-contiguous clauses for "))
  },
  /* row 419 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[167])))
  },
  /* row 420 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[171])))
  },
  /* row 421 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[12])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 422 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row 423 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 424 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 425 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[424]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 426 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error in unification of variable"))
  },
  /* row 427 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and variable"))
  },
  /* row 428 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 429 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 430 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[429]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 431 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error in unification of"))
  },
  /* row 432 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[431]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 433 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "lambda expression has type"))
  },
  /* row 434 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[433]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 435 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 436 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "func("))
  },
  /* row 437 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "func = _"))
  },
  /* row 438 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[437]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 439 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "pred("))
  },
  /* row 440 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 441 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[440]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 442 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row 443 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "higher-order term (with arity"))
  },
  /* row 444 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functor"))
  },
  /* row 445 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "\140"))
  },
  /* row 446 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "\'"))
  },
  /* row 447 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[446]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 448 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 449 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[448]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 450 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[378]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 451 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[422]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 452 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[445]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 453 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[377]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 454 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Possibility"))
  },
  /* row 455 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "actual type"))
  },
  /* row 456 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[455]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 457 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type"))
  },
  /* row 458 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[457]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 459 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 460 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 461 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row 462 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[461]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 463 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in unification of"))
  },
  /* row 464 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[463]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 465 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and term"))
  },
  /* row 466 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error in"))
  },
  /* row 467 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 468 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[467]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 469 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row 470 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row 471 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 472 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 473 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error:"))
  },
  /* row 474 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[473]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 475 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type of"))
  },
  /* row 476 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[475]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 477 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has overloaded actual/expected types {"))
  },
  /* row 478 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[477]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 479 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[423]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 480 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is variable"))
  },
  /* row 481 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in arguments of event"))
  },
  /* row 482 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the language construct"))
  },
  /* row 483 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[204])))
  },
  /* row 484 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[254])))
  },
  /* row 485 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[484]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 486 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[20])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[485])))
  },
  /* row 487 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[21])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 488 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[262])))
  },
  /* row 489 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[488]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 490 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[489])))
  },
  /* row 491 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[22])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 492 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[23])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 493 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[283])))
  },
  /* row 494 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[493]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 495 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[24])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[494])))
  },
  /* row 496 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[293])))
  },
  /* row 497 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[496]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 498 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[497])))
  },
  /* row 499 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[296])))
  },
  /* row 500 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[499]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 501 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[500])))
  },
  /* row 502 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 503 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[502]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 504 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in use of constructor"))
  },
  /* row 505 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: undefined symbol"))
  },
  /* row 506 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Possible type assignments include:"))
  },
  /* row 507 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[326])))
  },
  /* row 508 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[507]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 509 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The foreign language code for"))
  },
  /* row 510 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should define the variable"))
  },
  /* row 511 */
  {
    ((MR_Box) ((MR_String) "pred(")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 512 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 513 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 514 */
  {
    ((MR_Box) ((MR_String) "func(")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 515 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The argument list difference from the arity"))
  },
  /* row 516 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The function symbol"))
  },
  /* row 517 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is also overloaded here."))
  },
  /* row 518 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[517]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 519 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The predicate symbol"))
  },
  /* row 520 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the builtin operator constructor"))
  },
  /* row 521 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the builtin type constructor"))
  },
  /* row 522 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 523 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "get"))
  },
  /* row 524 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row 525 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the type constructor"))
  },
  /* row 526 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "set"))
  },
  /* row 527 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row 528 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the type constructor"))
  },
  /* row 529 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 530 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 531 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for type"))
  },
  /* row 532 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Field"))
  },
  /* row 533 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row 534 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[533]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 535 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row 536 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row 537 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[536]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 538 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the types of field"))
  },
  /* row 539 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and some other field"))
  },
  /* row 540 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in definition of constructor"))
  },
  /* row 541 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid use of"))
  },
  /* row 542 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "new"))
  },
  /* row 543 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on a constructor of type"))
  },
  /* row 544 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(expected)"))
  },
  /* row 545 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(inferred)"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[5]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 38U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[2])),
    ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[3])),
    ((MR_Box) (check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[4])),
    ((MR_Box) (check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[5])),
    ((MR_Box) (check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[6])),
    ((MR_Box) (check_hlds__typecheck_errors__type_to_pieces_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[7])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[8])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[2])),
    ((MR_Box) (check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[9])),
    ((MR_Box) (check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[10])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_arg_var_5_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[11])),
    ((MR_Box) (check_hlds__typecheck_errors__pred_decl_lines_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[11])),
    ((MR_Box) (check_hlds__typecheck_errors__func_decl_lines_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[11])),
    ((MR_Box) (check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[12])),
    ((MR_Box) (check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[13])),
    ((MR_Box) (check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[6])),
    ((MR_Box) (check_hlds__typecheck_errors__typestuff_to_typestr_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[27][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "}."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "} or {"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[80])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\"Explicit type qualification\""))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "<any>"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[119])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[71])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[89])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[93])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[113])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[180])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "Functor"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "Argument"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[247])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[261])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[271])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[276])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[281])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[288])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[14][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};


static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_7_0_s check_hlds__typecheck_errors_vector_common_7[96] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     NULL },
  /* row 3 */   {     (MR_String) "<=" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     (MR_String) "semipure" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     (MR_String) "some" },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     (MR_String) "not" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     (MR_String) "<=>" },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     (MR_String) "=>" },
  /* row 34 */   {     (MR_String) "all" },
  /* row 35 */   {     (MR_String) "\\=" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     (MR_String) "call" },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     (MR_String) "," },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "impure" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     (MR_String) "\\+" },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     (MR_String) ";" },
  /* row 59 */   {     NULL },
  /* row 60 */   {     (MR_String) "=" },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     (MR_String) "!" },
  /* row 65 */   {     NULL },
  /* row 66 */   {     NULL },
  /* row 67 */   {     NULL },
  /* row 68 */   {     NULL },
  /* row 69 */   {     (MR_String) ":=" },
  /* row 70 */   {     NULL },
  /* row 71 */   {     NULL },
  /* row 72 */   {     NULL },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     NULL },
  /* row 77 */   {     (MR_String) "if" },
  /* row 78 */   {     NULL },
  /* row 79 */   {     (MR_String) "." },
  /* row 80 */   {     NULL },
  /* row 81 */   {     (MR_String) "->" },
  /* row 82 */   {     NULL },
  /* row 83 */   {     (MR_String) "then" },
  /* row 84 */   {     NULL },
  /* row 85 */   {     (MR_String) ":-" },
  /* row 86 */   {     NULL },
  /* row 87 */   {     NULL },
  /* row 88 */   {     NULL },
  /* row 89 */   {     NULL },
  /* row 90 */   {     NULL },
  /* row 91 */   {     (MR_String) "else" },
  /* row 92 */   {     NULL },
  /* row 93 */   {     (MR_String) "-->" },
  /* row 94 */   {     NULL },
  /* row 95 */   {     (MR_String) "^" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_errors__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_diff_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_actual_expected_types_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_actual_expected_types_0_0[2] = {
  (MR_String) "actual_type",
  (MR_String) "expected_type"
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0 = {
  (MR_String) "actual_expected_types",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_actual_expected_types_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_actual_expected_types_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_actual_expected_types_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_actual_expected_types_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_actual_expected_types_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_actual_expected_types_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_actual_expected_types_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____actual_expected_types_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____actual_expected_types_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "actual_expected_types",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_actual_expected_types_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_actual_expected_types_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_actual_expected_types_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_type_stuff_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_arg_type_stuff_0_0[4] = {
  (MR_String) "arg_type_stuff_arg_type",
  (MR_String) "arg_type_stuff_var_type",
  (MR_String) "arg_type_stuff_tvarset",
  (MR_String) "arg_type_stuff_external_type_params"
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0 = {
  (MR_String) "arg_type_stuff",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_type_stuff_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_arg_type_stuff_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_type_stuff_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_type_stuff_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_type_stuff_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_type_stuff_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_type_stuff_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_type_stuff",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_type_stuff_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_type_stuff_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_type_stuff_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_0 = {
  (MR_String) "arg_vector_clause_head",
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

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_1 = {
  (MR_String) "arg_vector_plain_call_pred_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_2 = {
  (MR_String) "arg_vector_plain_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_3[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_generic_call_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_3 = {
  (MR_String) "arg_vector_generic_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_4[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_4 = {
  (MR_String) "arg_vector_foreign_proc_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_5 = {
  (MR_String) "arg_vector_event",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_kind_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_1[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_1
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_2[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_3[3] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_3,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_4,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_5
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_kind_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_kind_0[6] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_5,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_4,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_3,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_2,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_1
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_vector_kind",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_kind_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_kind_0 },
  (MR_Integer) 6,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_kind_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_type_error_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0 = {
  (MR_String) "arg_vector_type_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_type_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_vector_type_error",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0 = {
  (MR_String) "foreign_type_constructor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1 = {
  (MR_String) "abstract_imported_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_2[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2 = {
  (MR_String) "invalid_field_update",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3 = {
  (MR_String) "new_on_non_existential_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_cons_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_1[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_2[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_3[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_cons_error_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_cons_error_0[4] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_cons_error_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____cons_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____cons_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "cons_error",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_cons_error_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_cons_error_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_cons_error_0
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0 = {
  (MR_String) "actual_does_not_subsume_expected",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1 = {
  (MR_String) "actual_subsumes_expected",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_does_actual_subsume_expected_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "does_actual_subsume_expected",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_does_actual_subsume_expected_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0 = {
  (MR_String) "no_type_stuff_matches",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1 = {
  (MR_String) "some_type_stuff_matches",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_does_some_type_stuff_match_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "does_some_type_stuff_match",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_does_some_type_stuff_match_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_0 = {
  (MR_String) "do_not_add_quotes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_1 = {
  (MR_String) "add_quotes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_maybe_add_quotes_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_maybe_add_quotes_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_add_quotes_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_add_quotes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_maybe_add_quotes_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____maybe_add_quotes_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____maybe_add_quotes_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "maybe_add_quotes",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_maybe_add_quotes_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_value_ordered_maybe_add_quotes_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_add_quotes_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_mismatch_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0 = {
  (MR_String) "mismatch_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_mismatch_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "mismatch_info",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_spec_and_maybe_actual_expected_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0 = {
  (MR_String) "spec_and_maybe_actual_expected",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_spec_and_maybe_actual_expected_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_spec_and_maybe_actual_expected_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "spec_and_maybe_actual_expected",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_error_goal_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_var_vector_kind_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_error_goal_context_0_0[2] = {
  (MR_String) "teiav_kind",
  (MR_String) "teiav_arg_num"
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_0 = {
  (MR_String) "type_error_in_var_vector",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_error_goal_context_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_error_goal_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_error_goal_context_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_error_goal_context_0_1[1] = {
  (MR_String) "teiu_unify_context"
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_1 = {
  (MR_String) "type_error_in_unify",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_error_goal_context_0_1,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_error_goal_context_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_2 = {
  (MR_String) "type_error_in_atomic_inner",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_1[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_2[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_1
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_error_goal_context_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_error_goal_context_0[3] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_2,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_error_goal_context_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_error_goal_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_error_goal_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_error_goal_context_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_error_goal_context_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_error_goal_context",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_error_goal_context_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_error_goal_context_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_error_goal_context_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0[3] = {
  (MR_String) "expected_type_desc",
  (MR_String) "actual_type_desc",
  (MR_String) "mismatch_subsumes"
};

static const MR_DuArgLocn check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0[3] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0 = {
  (MR_String) "type_mismatch_exp_act",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_mismatch",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_errors__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_stuff_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_stuff_0_0[4] = {
  (MR_String) "type_stuff_base_type",
  (MR_String) "type_stuff_tvarset",
  (MR_String) "type_stuff_binding",
  (MR_String) "type_stuff_external_type_params"
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0 = {
  (MR_String) "type_stuff",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_stuff_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_stuff_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_stuff_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_stuff_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_stuff_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_stuff_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_stuff_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_stuff_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_stuff_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_stuff",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_stuff_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_stuff_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_stuff_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_var_vector_kind_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_kind_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_0 = {
  (MR_String) "var_vector_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_var_vector_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_1 = {
  (MR_String) "var_vector_cond_quant",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_2 = {
  (MR_String) "var_vector_exist_quant",
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

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_3 = {
  (MR_String) "var_vector_promise_solutions",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_4 = {
  (MR_String) "var_vector_loop_control",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_5 = {
  (MR_String) "var_vector_try_io",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_6 = {
  (MR_String) "var_vector_atomic_output",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_7 = {
  (MR_String) "var_vector_atomic_outer",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_0[7] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_2,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_3,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_4,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_5,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_6,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_7
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_1[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_var_vector_kind_0[2] = {
  {
    UINT32_C(7),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_var_vector_kind_0[8] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_7,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_6,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_2,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_4,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_3,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_var_vector_kind_0_5
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_var_vector_kind_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_var_vector_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____var_vector_kind_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____var_vector_kind_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "var_vector_kind",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_var_vector_kind_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_var_vector_kind_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_var_vector_kind_0
};

static MR_String MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__arg_decl_lines__2504__1_1_f_0(
  MR_String LambdaHeadVar__1_20)
{
  {
    MR_String LambdaHeadVar__2_21;
    MR_String Var_23;

    Var_23 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_20, (MR_String) ",");
    LambdaHeadVar__2_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_23);
    return LambdaHeadVar__2_21;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__2404__1_2_p_0(
  MR_Word HeadVar__1_28,
  MR_Word * HeadVar__2_29)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_28, HeadVar__2_29);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__2317__1_2_p_0(
  MR_Word HeadVar__1_17,
  MR_Word * HeadVar__2_18)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_17, HeadVar__2_18);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__2241__1_2_p_0(
  MR_Integer LambdaHeadVar__1_17,
  MR_Integer * LambdaHeadVar__2_18)
{
  {
    parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, LambdaHeadVar__2_18, LambdaHeadVar__1_17);
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__548__1_1_f_0(
  MR_Word HeadVar__1_115)
{
  {
    MR_Word HeadVar__2_116;

    HeadVar__2_116 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), HeadVar__1_115);
    return HeadVar__2_116;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1377__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_87)
{
  {
    MR_bool succeeded = (Arity_13 == FunctorArity_87);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1359__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_19)
{
  {
    MR_bool succeeded = (Arity_13 == FunctorArity_19);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_stuff_0_0(
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

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[10]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_stuff_0_0(
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
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____type_error_goal_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  check_hlds__typecheck_errors____Compare____var_vector_kind_0_0(&SubResult1_6, Var_30, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    succeeded = (Var_29 < ArgY2_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_29 > ArgY2_8);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
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
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, Var_28, ArgY1_18);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____var_vector_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_20 == CastY_21);
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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 6:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
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
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0(HeadVar__1_1, Var_23, ArgY1_5);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_error_goal_context_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_10 == CastX_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = check_hlds__typecheck_errors____Unify____var_vector_kind_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____var_vector_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
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
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0(
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

      parse_tree__error_util____Compare____error_spec_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0(
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

      succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[12]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          check_hlds__typecheck_errors____Compare____type_mismatch_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0(
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
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_17 < Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > Var_18);
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

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0(
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
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = check_hlds__typecheck_errors____Unify____type_mismatch_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0(
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
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_add_quotes_0_0(
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
check_hlds__typecheck_errors____Unify____maybe_add_quotes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0(
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
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0(
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
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____cons_error_0_0(
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
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, Var_74, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, Var_73, ArgY2_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_39;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_39, Var_78, ArgY1_38);
                  succeeded = (SubResult1_39 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_39;
                  else
                  {
                    MR_Word SubResult2_42;

                    hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0(&SubResult2_42, Var_77, ArgY2_41);
                    succeeded = (SubResult2_42 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_42;
                    else
                    {
                      MR_Word SubResult3_45;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[10]), &SubResult3_45, ((MR_Box) (Var_76)), ((MR_Box) (ArgY3_44)));
                      succeeded = (SubResult3_45 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_45;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Var_75)), ((MR_Box) (ArgY4_47)));
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_79, ArgY1_63);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____cons_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_8 == CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_25_25;
            MR_Word TypeInfo_26_26;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_14;
            MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0(ArgX2_11, ArgY2_12);
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[10]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                  if (succeeded)
                  {
                    TypeInfo_26_26 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_17, ArgY1_18);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          check_hlds__typecheck_errors____Compare____actual_expected_types_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = check_hlds__typecheck_errors____Unify____actual_expected_types_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0(
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
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_75, ArgY1_11);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____simple_call_id_0_0(HeadVar__1_1, Var_74, ArgY1_24);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          hlds__hlds_pred____Compare____generic_call_id_0_0(HeadVar__1_1, Var_73, ArgY1_37);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_72, ArgY1_50);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_71 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ArgY1_63 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_71, ArgY1_63);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_pred____Unify____generic_call_id_0_0(ArgX1_9, ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_11, ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0(
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

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[10]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0(
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
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____actual_expected_types_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____actual_expected_types_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__diff_to_pieces_1_f_0(
  MR_Word Diff_3)
{
  {
    MR_Word Pieces_4;
    MR_String Line_5;
    MR_String Char_6;
    MR_Word Var_7;
    MR_String Var_8;
    MR_String Var_9;

    switch (MR_tag((MR_Word) Diff_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Line_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Diff_3, (MR_Integer) 0))));
          Char_6 = (MR_String) " ";
        }
        break;
      case (MR_Integer) 1:
        {
          Line_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Diff_3, (MR_Integer) 0))));
          Char_6 = (MR_String) "-";
        }
        break;
      case (MR_Integer) 2:
        {
          Line_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Diff_3, (MR_Integer) 0))));
          Char_6 = (MR_String) "+";
        }
        break;
    }
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " ", Line_5);
    Var_8 = mercury__string__f_43_43_2_f_0(Char_6, Var_9);
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Var_8));
    }
    {
      Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])));
    }
    return Pieces_4;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__string_to_pieces_1_f_0(
  MR_String Str_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Str_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__typestuff_to_typestr_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_18;

    check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__2317__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_18);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_18));
  }
}

static MR_String MR_CALL 
check_hlds__typecheck_errors__typestuff_to_typestr_1_f_0(
  MR_Word TypeStuff_3)
{
  {
    MR_String TypeStr_4;
    MR_Word Type0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_3, (MR_Integer) 0))));
    MR_Word TypeVarSet_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_3, (MR_Integer) 1))));
    MR_Word TypeBindings_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_3, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_3, (MR_Integer) 3))));
    MR_Word Type1_9;
    MR_Word Type_10;
    MR_Word Term0_11;
    MR_Word ExistQVars_12;
    MR_Word Term_13;
    MR_Word VarSet_14;
    MR_Word Vars_29;
    MR_Word ExistQVars_30;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_7, Type0_5, &Type1_9);
    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_9, &Type_10);
    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_10, &Term0_11);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[22]), ExternalTypeParams_8, &ExistQVars_12);
    mercury__term__vars_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term0_11, &Vars_29);
    Var_35 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), ExistQVars_12);
    Var_36 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), Vars_29);
    Var_34 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), Var_35, Var_36);
    ExistQVars_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), Var_34);
    if ((ExistQVars_30 == (MR_Word) ((MR_Unsigned) 0U)))
      Term_13 = Term0_11;
    else
    {
      MR_Word QTerm_33;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_43;

      QTerm_33 = check_hlds__typecheck_errors__make_list_term_1_f_0(ExistQVars_30);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Term0_11));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (QTerm_33));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
      }
      Var_43 = mercury__term__context_init_0_f_0();
      {
        Term_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_13, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[16]));
        MR_hl_field(MR_mktag(0), Term_13, 1) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), Term_13, 2) = ((MR_Box) (Var_43));
      }
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeVarSet_6, &VarSet_14);
    TypeStr_4 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_14, (MR_Integer) 0, Term_13);
    return TypeStr_4;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__MatchingModuleName_7 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__conv0_MatchingModuleName_7));
    check_hlds__typecheck_errors__get_unimported_parent_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__UnimportedParent_6) = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__conv1_UnimportedParent_6));
    check_hlds__typecheck_errors__get_unimported_parent_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__VisibleModules_4, ((MR_Box) (*((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__UnimportedParent_6))));
    (env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__cont)((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__ParentModules_8 = mdbcomp__sym_name__get_ancestors_1_f_0((env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__MatchingModuleName_7);
    mercury__list__member_2_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &(env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__conv1_UnimportedParent_6, (env_ptr)->check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__ParentModules_8, check_hlds__typecheck_errors__get_unimported_parent_3_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_unimported_parent_3_p_0(
  MR_Word VisibleModules_4,
  MR_Word MatchingModuleNames_5,
  MR_Word * UnimportedParent_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0_s env;

    (env).check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__VisibleModules_4 = VisibleModules_4;
    (env).check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__UnimportedParent_6 = UnimportedParent_6;
    (env).check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__cont = cont;
    (env).check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__set__member_2_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &(env).check_hlds__typecheck_errors__get_unimported_parent_3_p_0_env_0__conv0_MatchingModuleName_7, MatchingModuleNames_5, check_hlds__typecheck_errors__get_unimported_parent_3_p_0_2, &env);
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(
  MR_Word ActualExpected_3)
{
  {
    MR_Word Pieces_4;
    MR_Word ActualPieces_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_3, (MR_Integer) 0))));

    {
      Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[545])));
      MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (ActualPieces_5));
    }
    return Pieces_4;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__expected_types_to_pieces_2_f_0(
  MR_Word ActualExpected_4,
  MR_Word Pieces0_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_Word ExpectedPieces_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_4, (MR_Integer) 1))));
    MR_Word TaggedPieces_9;

    {
      TaggedPieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TaggedPieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[544])));
      MR_hl_field(MR_mktag(1), TaggedPieces_9, 1) = ((MR_Box) (ExpectedPieces_8));
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), ((MR_Box) (TaggedPieces_9)), Pieces0_5);
    if (succeeded)
      Pieces_6 = Pieces0_5;
    else
    {
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (TaggedPieces_9));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Pieces0_5, Var_12);
    }
    return Pieces_6;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_f_0(
  MR_Word ArgTypeStuff_3)
{
  {
    MR_Word ActualExpected_4;
    MR_Word Type_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_3, (MR_Integer) 0))));
    MR_Word VarType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_3, (MR_Integer) 1))));
    MR_Word TVarSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_3, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_3, (MR_Integer) 3))));
    MR_Word ActualPieces_9;
    MR_Word ExpectedPieces_10;

    ActualPieces_9 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, VarType_6, TVarSet_7, ExternalTypeParams_8);
    ExpectedPieces_10 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, Type_5, TVarSet_7, ExternalTypeParams_8);
    {
      ActualExpected_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ActualExpected_4, 0) = ((MR_Box) (ActualPieces_9));
      MR_hl_field(MR_mktag(0), ActualExpected_4, 1) = ((MR_Box) (ExpectedPieces_10));
    }
    return ActualExpected_4;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_f_0(
  MR_Word Type_4,
  MR_Word VarTypeStuff_5)
{
  {
    MR_Word ActualExpected_6;
    MR_Word VarType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_5, (MR_Integer) 0))));
    MR_Word TVarSet_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_5, (MR_Integer) 1))));
    MR_Word TypeBinding_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_5, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_5, (MR_Integer) 3))));
    MR_Word ActualPieces_11;
    MR_Word ExpectedPieces_12;
    MR_Word Type_18;
    MR_Word Type_25;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_9, VarType_7, &Type_18);
    ActualPieces_11 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, Type_18, TVarSet_8, ExternalTypeParams_10);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_9, Type_4, &Type_25);
    ExpectedPieces_12 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, Type_25, TVarSet_8, ExternalTypeParams_10);
    {
      ActualExpected_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ActualExpected_6, 0) = ((MR_Box) (ActualPieces_11));
      MR_hl_field(MR_mktag(0), ActualExpected_6, 1) = ((MR_Box) (ExpectedPieces_12));
    }
    return ActualExpected_6;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_quote_1_f_0(
  MR_String Str_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Str_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = check_hlds__typecheck_errors__wrap_quote_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_NumUnsatisfied_0_17,
  MR_Integer * STATE_VARIABLE_NumUnsatisfied_18)
{
  {
    MR_Word Constraints_8;
    MR_Word UnprovenConstraints_9;
    MR_Word UnprovenProgConstraints0_10;
    MR_Word VarSet_11;
    MR_Word Bindings_12;
    MR_Word UnprovenProgConstraints1_13;
    MR_Word UnprovenProgConstraints_14;
    MR_Word UnprovenProgConstraintStrings_15;
    MR_Word UnprovenProgConstraintsPieces_16;
    MR_Integer Var_20;
    MR_Word Var_21;

    check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign_5, &Constraints_8);
    UnprovenConstraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_8, (MR_Integer) 0))));
    hlds__hlds_class__retrieve_prog_constraint_list_2_p_0(UnprovenConstraints_9, &UnprovenProgConstraints0_10);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &VarSet_11);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &Bindings_12);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Bindings_12, UnprovenProgConstraints0_10, &UnprovenProgConstraints1_13);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenProgConstraints1_13, &UnprovenProgConstraints_14);
    Var_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenProgConstraints_14);
    *STATE_VARIABLE_NumUnsatisfied_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumUnsatisfied_0_17 + (MR_Unsigned) Var_20);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[7]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (VarSet_11));
    }
    UnprovenProgConstraintStrings_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, UnprovenProgConstraints_14);
    UnprovenProgConstraintsPieces_16 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[21]), UnprovenProgConstraintStrings_15);
    *Pieces_6 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", UnprovenProgConstraintsPieces_16);
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_cons_error_2_f_0(
  MR_Word Context_4,
  MR_Word ConsError_5)
{
  {
    MR_Word Msgs_6;

    switch (MR_tag((MR_Word) ConsError_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Msgs_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsError_5, (MR_Integer) 0))));
          MR_Word TypeName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
          MR_Integer TypeArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1))));
          MR_Word Pieces_11;
          MR_Word Var_108;
          MR_Word Var_111;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_137;

          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (TypeName_9));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (TypeArity_10));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_116));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[305])));
          }
          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[531])));
            MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_114));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[530])));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
          }
          {
            Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[529])));
            MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_137 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Pieces_11));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Context_4));
            MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (Var_136));
          }
          {
            Msgs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_6, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(1), Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 0))));
          MR_Word FieldDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 1))));
          MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 2))));
          MR_Word TVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 3))));
          MR_Word DefnContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_13, (MR_Integer) 0))));
          MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_13, (MR_Integer) 3))));
          MR_Word Pieces1_21;
          MR_Word Pieces2_24;
          MR_Word Pieces3_28;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_84;
          MR_Word Var_86;
          MR_Word Var_89;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Pieces_141;

          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (FieldName_12));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[309])));
          }
          {
            Pieces1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces1_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[532])));
            MR_hl_field(MR_mktag(1), Pieces1_21, 1) = ((MR_Box) (Var_53));
          }
          if ((TVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_cons_error\'/2", (MR_String) "no type variables");
          }
          else
          {
            MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TVars_15, (MR_Integer) 1))));
            MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TVars_15, (MR_Integer) 0))));

            if ((Var_149 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String TVarsStr_23;
              MR_Word Var_74;
              MR_Word Var_75;

              TVarsStr_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_14, Var_150);
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TVarsStr_23));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[534])));
              }
              {
                Pieces2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces2_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[428])));
                MR_hl_field(MR_mktag(1), Pieces2_24, 1) = ((MR_Box) (Var_74));
              }
            }
            else
            {
              MR_Word Var_65;
              MR_Word Var_66;
              MR_String TVarsStr_140;

              TVarsStr_140 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_14, TVars_15);
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (TVarsStr_140));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[537])));
              }
              {
                Pieces2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces2_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[535])));
                MR_hl_field(MR_mktag(1), Pieces2_24, 1) = ((MR_Box) (Var_65));
              }
            }
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (ConsId_19));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[540])));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[539])));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
          }
          {
            Pieces3_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces3_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[538])));
            MR_hl_field(MR_mktag(1), Pieces3_28, 1) = ((MR_Box) (Var_84));
          }
          Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces2_24, Pieces3_28);
          Pieces_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_21, Var_100);
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Pieces_141));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (DefnContext_16));
            MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (Var_102));
          }
          {
            Msgs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_6, 0) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(1), Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word TypeCtor_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsError_5, (MR_Integer) 0))));
          MR_Word TypeName_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_142, (MR_Integer) 0))));
          MR_Integer TypeArity_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_142, (MR_Integer) 1))));
          MR_Word Pieces_145;

          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (TypeName_143));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (TypeArity_144));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[311])));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[543])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[542])));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          {
            Pieces_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[541])));
            MR_hl_field(MR_mktag(1), Pieces_145, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Pieces_145));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Context_4));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Var_47));
          }
          {
            Msgs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_6, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    return Msgs_6;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__substitute_types_check_match_6_p_0(
  MR_Word ExpType_7,
  MR_Word TypeStuff_8,
  MR_Word STATE_VARIABLE_TypeMismatches_0_23,
  MR_Word * STATE_VARIABLE_TypeMismatches_24,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_25,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_26)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_8, (MR_Integer) 0))));
    MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_8, (MR_Integer) 1))));
    MR_Word TypeBindings_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_8, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_8, (MR_Integer) 3))));
    MR_Word FullArgType_15;
    MR_Word FullExpType_16;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_13, ArgType_11, &FullArgType_15);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_13, ExpType_7, &FullExpType_16);
    {
      MR_Word TypeInfo_10_41;
      MR_Word TypeSubst0_36;
      MR_Word TypeSubst_37;

      mercury__map__init_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_36);
      succeeded = parse_tree__prog_type__type_unify_5_p_0(FullArgType_15, FullExpType_16, (MR_Word) ((MR_Unsigned) 0U), TypeSubst0_36, &TypeSubst_37);
      if (succeeded)
      {
        TypeInfo_10_41 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_41, ((MR_Box) (TypeSubst_37)), ((MR_Box) (TypeSubst0_36)));
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) FullArgType_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_15, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_15, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
            succeeded = (strcmp(Var_28, (MR_String) "<any>") == 0);
          }
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_DoesSomeTypeStuffMatch_26 = (MR_Integer) 1;
      *STATE_VARIABLE_TypeMismatches_24 = STATE_VARIABLE_TypeMismatches_0_23;
    }
    else
    {
      MR_Word ActualSubsumesExpected_19;
      MR_Word ExpectedPieces_20;
      MR_Word ActualPieces_21;
      MR_Word TypeMismatch_22;
      MR_Word _Subst_18;

      succeeded = parse_tree__prog_type__type_subsumes_3_p_0(FullArgType_15, FullExpType_16, &_Subst_18);
      if (succeeded)
        ActualSubsumesExpected_19 = (MR_Integer) 1;
      else
        ActualSubsumesExpected_19 = (MR_Integer) 0;
      ExpectedPieces_20 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, FullExpType_16, TVarSet_12, ExternalTypeParams_14);
      ActualPieces_21 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, FullArgType_15, TVarSet_12, ExternalTypeParams_14);
      {
        TypeMismatch_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeMismatch_22, 0) = ((MR_Box) (ExpectedPieces_20));
        MR_hl_field(MR_mktag(0), TypeMismatch_22, 1) = ((MR_Box) (ActualPieces_21));
        MR_hl_field(MR_mktag(0), TypeMismatch_22, 2) = (MR_Box) ((MR_Unsigned) (ActualSubsumesExpected_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeMismatches_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeMismatch_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TypeMismatches_0_23));
      }
      *STATE_VARIABLE_DoesSomeTypeStuffMatch_26 = STATE_VARIABLE_DoesSomeTypeStuffMatch_0_25;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_cons_type_info_source_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Source_5)
{
  {
    MR_Word Pieces_6;

    switch (MR_tag((MR_Word) Source_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Source_5, (MR_Integer) 0))));
          MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
          MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1))));
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (SymName_8));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Arity_9));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[528])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_56));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String TypeCtorName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Source_5, (MR_Integer) 0))));
          MR_Word Var_51;
          MR_Word Var_52;

          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (TypeCtorName_10));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[521])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_51));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_42;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word TypeCtor_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Source_5, (MR_Integer) 0))));
          MR_Word SymName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_60, (MR_Integer) 0))));
          MR_Integer Arity_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_60, (MR_Integer) 1))));

          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (SymName_61));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Arity_62));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[525])));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[524])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[523])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[522])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_36));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_21;
              MR_Word Var_24;
              MR_Word Var_27;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_32;
              MR_Word TypeCtor_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 1))));
              MR_Word SymName_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_63, (MR_Integer) 0))));
              MR_Integer Arity_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_63, (MR_Integer) 1))));

              {
                Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (SymName_64));
                MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Arity_65));
              }
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
              }
              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[525])));
                MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
              }
              {
                Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[527])));
                MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
              }
              {
                Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[526])));
                MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[522])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_21));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ApplyOp_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 1))));
              MR_Word Var_15;
              MR_Word Var_16;

              {
                Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (ApplyOp_12));
              }
              {
                Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
                MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[520])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_15));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 1))));

              Pieces_6 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_11);
            }
            break;
        }
        break;
    }
    return Pieces_6;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__context_to_error_msg_2_f_0(
  MR_Word Pieces_4,
  MR_Word Context_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Pieces_4));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = check_hlds__typecheck_errors__context_to_error_msg_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_6;

    conv0_Pieces_6 = check_hlds__typecheck_errors__describe_cons_type_info_source_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Pieces_6));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Msgs_7;
    MR_Word Symbol_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SortedContexts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    if ((SortedContexts_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.describe_overloaded_symbol\'/2", (MR_String) "no context");
    }
    else
    {
      MR_Word FirstContext_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_6, (MR_Integer) 0))));
      MR_Word LaterContexts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_6, (MR_Integer) 1))));
      MR_Word FirstPieces_15;
      MR_Word LaterPieces_16;
      MR_Word FirstMsg_22;
      MR_Word LaterMsgs_23;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_86;

      if (((MR_tag((MR_Word) Symbol_5)) == (MR_Integer) 1))
      {
        MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Symbol_5, (MR_Integer) 0))));
        MR_Word Sources0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Symbol_5, (MR_Integer) 1))));
        MR_Word Sources_19;
        MR_Word SourcePiecesList_20;
        MR_Word SourcePieces_21;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_40;
        MR_Word Var_47;
        MR_Word StartPieces_89;

        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0), Sources0_18, &Sources_19);
        Var_24 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[516]));
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (ConsId_17));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[184])));
        }
        {
          StartPieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), StartPieces_89, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), StartPieces_89, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[5]));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_1));
          MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleInfo_4));
        }
        SourcePiecesList_20 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_40, Sources_19);
        SourcePieces_21 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(SourcePiecesList_20, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
        FirstPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_89, SourcePieces_21);
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[518])));
        }
        {
          LaterPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LaterPieces_16, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), LaterPieces_16, 1) = ((MR_Box) (Var_47));
        }
      }
      else
      {
        MR_Word CallId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Symbol_5, (MR_Integer) 0))));
        MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Symbol_5, (MR_Integer) 1))));
        MR_Word StartPieces_12;
        MR_Word PredIdPiecesList_13;
        MR_Word PredIdPieces_14;
        MR_Word Var_53 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[519]));
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_69;
        MR_Word Var_77;

        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (CallId_10));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[184])));
        }
        {
          StartPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), StartPieces_12, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), StartPieces_12, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_2));
          MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ModuleInfo_4));
          MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        PredIdPiecesList_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_69, PredIds_11);
        PredIdPieces_14 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PredIdPiecesList_13, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
        FirstPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_12, PredIdPieces_14);
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[518])));
        }
        {
          LaterPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LaterPieces_16, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), LaterPieces_16, 1) = ((MR_Box) (Var_77));
        }
      }
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (FirstPieces_15));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FirstMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMsg_22, 0) = ((MR_Box) (FirstContext_8));
        MR_hl_field(MR_mktag(0), FirstMsg_22, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[6]));
        MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_3));
        MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (LaterPieces_16));
      }
      LaterMsgs_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_86, LaterContexts_9);
      {
        Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_7, 0) = ((MR_Box) (FirstMsg_22));
        MR_hl_field(MR_mktag(1), Msgs_7, 1) = ((MR_Box) (LaterMsgs_23));
      }
    }
    return Msgs_7;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_Pieces_4;

    conv4_Pieces_4 = check_hlds__typecheck_errors__diff_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_Pieces_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_errors__IntroducedFrom__func__arg_decl_lines__2504__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ActualArgTypes_7,
  MR_Word MaybeActualReturnType_8,
  MR_Word OtherPredId_9,
  MR_Word * Pieces_10)
{
  {
    MR_bool succeeded;
    MR_Word OtherPredInfo_11;
    MR_Word OtherTypes_12;
    MR_Word TVarSet_13;
    MR_Integer OtherArity_14;
    MR_Word ActualLines_15;
    MR_Word OtherLines_16;
    MR_Word EditSeq_21;
    MR_Word DiffSeq_22;
    MR_Word DiffPieceLists_23;
    MR_Word DiffPieces_24;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, OtherPredId_9, &OtherPredInfo_11);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(OtherPredInfo_11, &OtherTypes_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_13);
    if ((MaybeActualReturnType_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word NonLastArgTypes_52;
      MR_Word LastArgType_53;
      MR_Box conv0_LastArgType_53;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &OtherArity_14);
      succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_7, &NonLastArgTypes_52, &conv0_LastArgType_53);
      if (succeeded)
      {
        LastArgType_53 = ((MR_Word) (conv0_LastArgType_53));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word NonLastArgTypeStrs_65;
        MR_Word NonLastArgTypeLines_68;
        MR_String LastArgTypeStr_69;
        MR_Word Var_70;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_String Var_84;

        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (TVarSet_13));
          MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        NonLastArgTypeStrs_65 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_70, NonLastArgTypes_52);
        NonLastArgTypeLines_68 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[18]), NonLastArgTypeStrs_65);
        LastArgTypeStr_69 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 2, LastArgType_53);
        Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_69);
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[512])));
        }
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_68, Var_83);
        ActualLines_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[511])), Var_82);
      }
      else
        ActualLines_15 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[513]));
      check_hlds__typecheck_errors__pred_decl_lines_3_p_0(TVarSet_13, OtherTypes_12, &OtherLines_16);
    }
    else
    {
      MR_Word ActualReturnType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualReturnType_8, (MR_Integer) 0))));
      MR_Word OtherArgTypes_18;
      MR_Word OtherReturnType_19;
      MR_Box conv3_OtherReturnType_19;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &OtherArgTypes_18, &conv3_OtherReturnType_19);
      OtherReturnType_19 = ((MR_Word) (conv3_OtherReturnType_19));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherArgTypes_18, &OtherArity_14);
      check_hlds__typecheck_errors__func_decl_lines_4_p_0(TVarSet_13, ActualArgTypes_7, ActualReturnType_17, &ActualLines_15);
      check_hlds__typecheck_errors__func_decl_lines_4_p_0(TVarSet_13, OtherArgTypes_18, OtherReturnType_19, &OtherLines_16);
    }
    mercury__edit_seq__find_shortest_edit_seq_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[19]), OtherLines_16, ActualLines_15, &EditSeq_21);
    mercury__edit_seq__find_diff_seq_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherLines_16, EditSeq_21, &DiffSeq_22);
    DiffPieceLists_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[20]), DiffSeq_22);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DiffPieceLists_23, &DiffPieces_24);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (OtherArity_14));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[49])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[515])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, DiffPieces_24);
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__func_decl_lines_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_errors__IntroducedFrom__func__arg_decl_lines__2504__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__func_decl_lines_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__func_decl_lines_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgTypes_6,
  MR_Word ReturnType_7,
  MR_Word * Lines_8)
{
  {
    MR_bool succeeded;
    MR_String ReturnTypeStr_9;
    MR_String ReturnTypeSuffix_10;
    MR_Word NonLastArgTypes_11;
    MR_Word LastArgType_12;
    MR_Box conv0_LastArgType_12;

    ReturnTypeStr_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, ReturnType_7);
    ReturnTypeSuffix_10 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ReturnTypeStr_9);
    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, &NonLastArgTypes_11, &conv0_LastArgType_12);
    if (succeeded)
    {
      LastArgType_12 = ((MR_Word) (conv0_LastArgType_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NonLastArgTypeStrs_26;
      MR_Word NonLastArgTypeLines_29;
      MR_String LastArgTypeStr_30;
      MR_Word Var_31;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_String Var_45;
      MR_Word Var_47;
      MR_String Var_48;

      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (check_hlds__typecheck_errors__func_decl_lines_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TVarSet_5));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      NonLastArgTypeStrs_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, NonLastArgTypes_11);
      NonLastArgTypeLines_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[17]), NonLastArgTypeStrs_26);
      LastArgTypeStr_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, LastArgType_12);
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_30);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ")", ReturnTypeSuffix_10);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_29, Var_44);
      *Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[514])), Var_43);
    }
    else
    {
      MR_String Var_16;

      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "func", ReturnTypeSuffix_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Lines_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__pred_decl_lines_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_errors__IntroducedFrom__func__arg_decl_lines__2504__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__pred_decl_lines_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__pred_decl_lines_3_p_0(
  MR_Word TVarSet_4,
  MR_Word ArgTypes_5,
  MR_Word * Lines_6)
{
  {
    MR_bool succeeded;
    MR_Word NonLastArgTypes_7;
    MR_Word LastArgType_8;
    MR_Box conv0_LastArgType_8;

    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_5, &NonLastArgTypes_7, &conv0_LastArgType_8);
    if (succeeded)
    {
      LastArgType_8 = ((MR_Word) (conv0_LastArgType_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NonLastArgTypeStrs_20;
      MR_Word NonLastArgTypeLines_23;
      MR_String LastArgTypeStr_24;
      MR_Word Var_25;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_String Var_39;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__typecheck_errors__pred_decl_lines_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TVarSet_4));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      NonLastArgTypeStrs_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, NonLastArgTypes_7);
      NonLastArgTypeLines_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[16]), NonLastArgTypeStrs_20);
      LastArgTypeStr_24 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_4, (MR_Integer) 2, LastArgType_8);
      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_24);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[512])));
      }
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_23, Var_38);
      *Lines_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[511])), Var_37);
    }
    else
      *Lines_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[513]));
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_String VarName_7)
{
  {
    MR_Word Spec_8;
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 0))));
    MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 1))));
    MR_Word Pieces_11;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    Var_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_9, (MR_Integer) 0, PredId_10);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[509])));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (VarName_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[510])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_12, Var_17);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_28));
    }
    return Spec_8;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Pieces_6;
    MR_Integer conv0_STATE_VARIABLE_NumUnsatisfied_18;

    check_hlds__typecheck_errors__constraints_to_pieces_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Pieces_6, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_NumUnsatisfied_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_Pieces_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_NumUnsatisfied_18));
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word TypeAssignSet_7)
{
  {
    MR_bool succeeded;
    MR_Word Spec_8;
    MR_Word InClauseForPieces_9;
    MR_Word ConstraintPieceLists_10;
    MR_Integer NumUnsatisfied_11;
    MR_Word Pieces1_12;
    MR_Word Pieces2_13;
    MR_Word Msg_14;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;
    MR_Box conv2_NumUnsatisfied_11;

    InClauseForPieces_9 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_5);
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[15]), TypeAssignSet_7, &ConstraintPieceLists_10, ((MR_Box) ((MR_Integer) 0)), &conv2_NumUnsatisfied_11);
    NumUnsatisfied_11 = ((MR_Integer) (conv2_NumUnsatisfied_11));
    succeeded = (NumUnsatisfied_11 == (MR_Integer) 1);
    if (succeeded)
      Pieces1_12 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[45]));
    else
      Pieces1_12 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[47]));
    Pieces2_13 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(ConstraintPieceLists_10, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, Pieces2_13);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_9, Var_34);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_14, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_14, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_14));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_38));
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word OverloadedSymbolMap_9,
  MR_Word TypeAssign1_10,
  MR_Word TypeAssign2_11)
{
  {
    MR_Word Spec_12;
    MR_Word InClauseForPieces_13;
    MR_Word VarSet_15;
    MR_Word VarTypes1_16;
    MR_Word Vars1_17;
    MR_Word AmbiguityPieces_18;
    MR_Word Pieces2_19;
    MR_Word VerboseComponents_20;
    MR_Word WarningMsgs_21;
    MR_Word MainMsg_24;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_45;

    InClauseForPieces_13 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_7);
    VarSet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_7, (MR_Integer) 5))));
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_10, &VarTypes1_16);
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes1_16, &Vars1_17);
    AmbiguityPieces_18 = check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_f_0(Vars1_17, VarSet_15, TypeAssign1_10, TypeAssign2_11);
    if ((AmbiguityPieces_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Pieces2_19 = (MR_Word) ((MR_Unsigned) 0U);
      VerboseComponents_20 = (MR_Word) ((MR_Unsigned) 0U);
      WarningMsgs_21 = check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0(ClauseContext_7, Context_8, OverloadedSymbolMap_9, (MR_Integer) 0);
    }
    else
    {
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (AmbiguityPieces_18));
      }
      {
        Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[506])));
        MR_hl_field(MR_mktag(1), Pieces2_19, 1) = ((MR_Box) (Var_32));
      }
      VerboseComponents_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[508]));
      WarningMsgs_21 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[43])), Pieces2_19);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_13, Var_42);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (VerboseComponents_20));
    }
    {
      MainMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_24, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), MainMsg_24, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MainMsg_24));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (WarningMsgs_21));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_45));
    }
    return Spec_12;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarTypes1_15;
      MR_Word VarTypes2_16;
      MR_Word TypeBindings1_17;
      MR_Word TypeBindings2_18;
      MR_Word ExternalTypeParams1_19;
      MR_Word ExternalTypeParams2_20;
      MR_Word HeadPieces_27;
      MR_Word TailPieces_28;
      MR_Word T1_23;
      MR_Word T2_24;
      MR_Word Type1_21;
      MR_Word Type2_22;
      MR_Word TypeInfo_8_58;
      MR_Word TypeCtorInfo_9_59;
      MR_Word TypeInfo_10_60;
      MR_Word TypeSubst0_55;
      MR_Word TypeSubst_56;
      MR_Word Var_57;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(HeadVar__3_3, &VarTypes1_15);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(HeadVar__4_4, &VarTypes2_16);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(HeadVar__3_3, &TypeBindings1_17);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(HeadVar__4_4, &TypeBindings2_18);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(HeadVar__3_3, &ExternalTypeParams1_19);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(HeadVar__4_4, &ExternalTypeParams2_20);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes1_15, Var_9, &Type1_21);
      if (succeeded)
      {
        succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes2_16, Var_9, &Type2_22);
        if (succeeded)
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_17, Type1_21, &T1_23);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings2_18, Type2_22, &T2_24);
          TypeInfo_8_58 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]);
          TypeCtorInfo_9_59 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          mercury__map__init_1_p_0(TypeInfo_8_58, TypeCtorInfo_9_59, &TypeSubst0_55);
          Var_57 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(T1_23, T2_24, Var_57, TypeSubst0_55, &TypeSubst_56);
          if (succeeded)
          {
            TypeInfo_10_60 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_60, ((MR_Box) (TypeSubst_56)), ((MR_Box) (TypeSubst0_55)));
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word TVarSet1_25;
        MR_Word TVarSet2_26;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_String Var_31;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_44;
        MR_Word Var_45;

        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(HeadVar__3_3, &TVarSet1_25);
        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(HeadVar__4_4, &TVarSet2_26);
        Var_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__2_2, Var_9);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[449])));
        }
        Var_37 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, T1_23, TVarSet1_25, ExternalTypeParams1_19);
        Var_45 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 1, T2_24, TVarSet2_26, ExternalTypeParams2_20);
        Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])));
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])), Var_44);
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37, Var_39);
        HeadPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, Var_36);
      }
      else
        HeadPieces_27 = (MR_Word) ((MR_Unsigned) 0U);
      TailPieces_28 = check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_f_0(Vars_10, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_27, TailPieces_28);
    }
    return HeadVar__5_5;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Msgs_6;

    conv0_Msgs_6 = check_hlds__typecheck_errors__report_cons_error_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Msgs_6));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1377__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1359__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word ConsErrors_11,
  MR_Word Functor_12,
  MR_Integer Arity_13)
{
  {
    MR_bool succeeded;
    MR_Word Spec_14;
    MR_Word InClauseForPieces_15;
    MR_Word GoalContextPieces_16;
    MR_Word InitComp_17;
    MR_Word FunctorComps_23;
    MR_Word ReportConsErrors_24;
    MR_Word ConsMsgs_48;
    MR_Word Var_49;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word FunctorComps1_22;
    MR_String FunctorName_18;
    MR_Integer FunctorArity_19;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_String Var_52;
    MR_String Var_53;
    MR_Word FunctorComps0_21;

    InClauseForPieces_15 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_8);
    GoalContextPieces_16 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_8, GoalContext_9);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_15, GoalContextPieces_16);
    {
      InitComp_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InitComp_17, 0) = ((MR_Box) (Var_49));
    }
    succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
      FunctorArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
        Var_52 = (MR_String) "function \140check_hlds.typecheck_errors.report_error_undef_cons\'/6";
        Var_53 = (MR_String) "arity mismatch";
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_1));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Arity_13));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (FunctorArity_19));
        }
        mercury__require__expect_3_p_0(Var_51, Var_52, Var_53);
        succeeded = check_hlds__typecheck_errors__language_builtin_functor_components_3_p_0(FunctorName_18, Arity_13, &FunctorComps0_21);
        if (succeeded)
        {
          FunctorComps1_22 = FunctorComps0_21;
          succeeded = MR_TRUE;
        }
        else
          succeeded = check_hlds__typecheck_errors__syntax_functor_components_3_p_0(FunctorName_18, FunctorArity_19, &FunctorComps1_22);
      }
    }
    if (succeeded)
    {
      FunctorComps_23 = FunctorComps1_22;
      ReportConsErrors_24 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Constructor_25;
      MR_Word OtherArities_34;
      MR_Word TypeCtorInfo_100_100;
      MR_Word ModuleInfo_27;
      MR_Word ConsTable_28;
      MR_Word ConsArities_29;
      MR_Word PredTable_30;
      MR_Word PredIds_31;
      MR_Word FuncArities_32;
      MR_Word AllArities_33;
      MR_Word Var_54;
      MR_String Var_55;
      MR_String Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Integer FunctorArity_87;

      succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Constructor_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
        FunctorArity_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
        Var_55 = (MR_String) "function \140check_hlds.typecheck_errors.report_error_undef_cons\'/6";
        Var_56 = (MR_String) "arity mismatch";
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_2));
          MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Arity_13));
          MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (FunctorArity_87));
        }
        mercury__require__expect_3_p_0(Var_54, Var_55, Var_56);
        ModuleInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_8, (MR_Integer) 0))));
        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_27, &ConsTable_28);
        hlds__hlds_cons__return_cons_arities_3_p_0(ConsTable_28, Constructor_25, &ConsArities_29);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_27, &PredTable_30);
        Var_57 = (MR_Integer) 1;
        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_30, Var_57, Constructor_25, &PredIds_31);
        Var_58 = (MR_Word) ((MR_Unsigned) 0U);
        check_hlds__typecheck_errors__return_function_arities_4_p_0(ModuleInfo_27, PredIds_31, Var_58, &FuncArities_32);
        TypeCtorInfo_100_100 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        Var_59 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_100_100, ConsArities_29, FuncArities_32);
        mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_100_100, Var_59, &AllArities_33);
        mercury__list__delete_all_3_p_1(TypeCtorInfo_100_100, AllArities_33, ((MR_Box) (Arity_13)), &OtherArities_34);
        succeeded = (OtherArities_34 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word FunctorPieces_37;
        MR_Word Var_60;

        FunctorPieces_37 = check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_f_0(Constructor_25, Arity_13, OtherArities_34);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (FunctorPieces_37));
        }
        {
          FunctorComps_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FunctorComps_23, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), FunctorComps_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ReportConsErrors_24 = (MR_Integer) 1;
      }
      else
      {
        MR_Word Pieces1_38;
        MR_Word Pieces2_43;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word ModQual_41;
        MR_Word Constructor_88;

        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Functor_12));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[505])));
          MR_hl_field(MR_mktag(1), Pieces1_38, 1) = ((MR_Box) (Var_64));
        }
        succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Constructor_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Constructor_88)) == (MR_Integer) 1);
          if (succeeded)
            ModQual_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constructor_88, (MR_Integer) 0))));
        }
        if (succeeded)
          Pieces2_43 = check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0(ClauseContext_8, ModQual_41);
        else
        {
          MR_Word Var_67;
          MR_String Var_68;
          MR_Integer Var_69;

          succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
            Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
            succeeded = (Var_69 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_68 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_67, (MR_Integer) 0))));
                succeeded = (strcmp(Var_68, (MR_String) "[|]") == 0);
              }
            }
          }
          if (succeeded)
          {
            Pieces2_43 = check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0(ClauseContext_8, (MR_Word) (&check_hlds__typecheck_errors_scalar_common_3[26]));
          }
          else
            Pieces2_43 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15]));
        }
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_38, Pieces2_43);
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
        }
        {
          FunctorComps_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FunctorComps_23, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), FunctorComps_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ReportConsErrors_24 = (MR_Integer) 1;
      }
    }
    succeeded = (ReportConsErrors_24 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (ConsErrors_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ConsMsgLists_47;
      MR_Word Var_80;

      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_3));
        MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Context_10));
      }
      ConsMsgLists_47 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Var_80, ConsErrors_11);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ConsMsgLists_47, &ConsMsgs_48);
    }
    else
      ConsMsgs_48 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (InitComp_17));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (FunctorComps_23));
    }
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (ConsMsgs_48));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_83));
    }
    return Spec_14;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_f_0(
  MR_Word Name_5,
  MR_Integer Arity_6,
  MR_Word ActualArities_7)
{
  {
    MR_Word Pieces_8;
    MR_Word NumArgsPieces_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word RightAritiesPieces_35;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_Word Var_47;
    MR_Word Var_50;

    RightAritiesPieces_35 = check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(ActualArities_7);
    Var_46 = mercury__string__int_to_string_1_f_0(Arity_6);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[383])));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (RightAritiesPieces_35));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[382])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[381])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    NumArgsPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[385])));
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Name_5));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[504])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NumArgsPieces_10, Var_16);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[503])), Var_15);
    return Pieces_8;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__return_function_arities_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FuncArities_0_3,
  MR_Word * STATE_VARIABLE_FuncArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FuncArities_4 = STATE_VARIABLE_FuncArities_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_Word PredOrFunc_14;
      MR_Word STATE_VARIABLE_FuncArities_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FuncArities_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_10, &PredInfo_13);
      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_13, &PredOrFunc_14);
      switch (PredOrFunc_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer OrigArity_15;
            MR_Integer FuncArity_16;

            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_13, &OrigArity_15);
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_16, OrigArity_15);
            {
              STATE_VARIABLE_FuncArities_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_FuncArities_20_20, 0) = ((MR_Box) (FuncArity_16));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_FuncArities_20_20, 1) = ((MR_Box) (STATE_VARIABLE_FuncArities_0_3));
            }
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_FuncArities_20_20 = STATE_VARIABLE_FuncArities_0_3;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_FuncArities_0_3 = STATE_VARIABLE_FuncArities_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FuncArities_0_3 = next_value_of_STATE_VARIABLE_FuncArities_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__syntax_functor_components_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * Components_3)
{
  {
    MR_bool succeeded;
    MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 31);
    MR_String str_1 = ((&check_hlds__typecheck_errors_vector_common_7[64 + slot_0]))->check_hlds__typecheck_errors__vector_common_type_7_0__vct_7_f_0;

    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "!"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 1);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[486]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            // case ":="
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[495]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "if"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[398]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            // case "."
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[491]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 17:
          {
            // case "->"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[490]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 19:
          {
            // case "then"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[501]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 21:
          {
            // case ":-"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[492]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 27:
          {
            // case "else"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[81]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 29:
          {
            // case "-->"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[487]));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 31:
          {
            // case "^"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
            if (succeeded)
            {
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[498]));
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__language_builtin_functor_components_3_p_0(
  MR_String Name_4,
  MR_Integer Arity_5,
  MR_Word * Components_6)
{
  {
    MR_bool succeeded;
    MR_Word MainPieces_7;
    MR_Word VerboseCallPieces_9;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;

    succeeded = check_hlds__typecheck_errors__language_builtin_functor_2_p_0(Name_4, Arity_5);
    if (succeeded)
    {
      Var_16 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[196]));
      Var_10 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[482]));
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Name_4));
      }
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_5));
      }
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_14));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_16));
      }
      {
        MainPieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_7, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(1), MainPieces_7, 1) = ((MR_Box) (Var_12));
      }
      succeeded = (strcmp(Name_4, (MR_String) "call") == 0);
      if (succeeded)
        VerboseCallPieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[241]));
      else
        VerboseCallPieces_9 = (MR_Word) ((MR_Unsigned) 0U);
      Var_111 = (MR_Integer) 1;
      Var_112 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (MainPieces_7));
      }
      Var_107 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[483]));
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_110, 0) = (MR_Box) ((MR_Unsigned) (Var_111));
        MR_hl_field(MR_mktag(2), Var_110, 1) = ((MR_Box) (VerboseCallPieces_9));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_112));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Components_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_106));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__language_builtin_functor_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 63);
    MR_String str_1 = ((&check_hlds__typecheck_errors_vector_common_7[0 + slot_0]))->check_hlds__typecheck_errors__vector_common_type_7_0__vct_7_f_0;

    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            // case "<="
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 8:
          {
            // case "semipure"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 16:
          {
            // case "some"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 22:
          {
            // case "not"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 28:
          {
            // case "<=>"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 33:
          {
            // case "=>"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 34:
          {
            // case "all"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 35:
          {
            // case "\="
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 38:
          {
            // case "call"
            ;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 45:
          {
            // case ","
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 48:
          {
            // case "impure"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 53:
          {
            // case "\+"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 58:
          {
            // case ";"
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 60:
          {
            // case "="
            ;
            succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_arg_var_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ActualExpected_4;

    conv0_ActualExpected_4 = check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ActualExpected_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_arg_var_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word GoalContext_8,
  MR_Word Context_9,
  MR_Word Var_10,
  MR_Word ArgTypeAssignSet0_11)
{
  {
    MR_bool succeeded;
    MR_Word Spec_12;
    MR_Word InClauseForPieces_13;
    MR_Word GoalContextPieces_14;
    MR_Word ArgTypeStuffList_15;
    MR_Word ActualExpectedList0_16;
    MR_Word ActualExpectedList_17;
    MR_Word VarSet_19;
    MR_Word Pieces2_23;
    MR_Word VerbosePieces_24;
    MR_Word Msg_25;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_103;
    MR_Word ActualExpected_20;
    MR_Word Var_30;

    InClauseForPieces_13 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_7);
    GoalContextPieces_14 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_7, GoalContext_8);
    check_hlds__typecheck_errors__get_arg_type_stuff_3_p_0(ArgTypeAssignSet0_11, Var_10, &ArgTypeStuffList_15);
    ActualExpectedList0_16 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[14]), ArgTypeStuffList_15);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedList0_16, &ActualExpectedList_17);
    VarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_7, (MR_Integer) 5))));
    succeeded = (ActualExpectedList_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualExpected_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_17, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_17, (MR_Integer) 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word ActualPieces_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_20, (MR_Integer) 0))));
      MR_Word ExpectedPieces_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_20, (MR_Integer) 1))));
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_48;

      Var_31 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_19, Var_10);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPieces_22, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[28])), Var_48);
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_21, Var_38);
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_37);
      Pieces2_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_32);
    }
    else
    {
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_75;
      MR_Word Var_80;
      MR_Word Var_81;

      Var_60 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_19, Var_10);
      Var_69 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_19, Var_10);
      Var_81 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedList_17);
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_81, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[33])));
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[479])), Var_80);
      Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[478])), Var_75);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[30])), Var_68);
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_60, Var_61);
      Pieces2_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[476])), Var_59);
    }
    VerbosePieces_24 = check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_f_0(ArgTypeAssignSet0_11, VarSet_19);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_13, GoalContextPieces_14);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Var_93));
    }
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[474])), Pieces2_23);
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Var_96));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_98, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_98, 1) = ((MR_Box) (VerbosePieces_24));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
    }
    {
      Msg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_25, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_25, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Msg_25));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_103));
    }
    return Spec_12;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_arg_type_stuff_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgTypeAssign_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypeAssigns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeAssign_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_5, (MR_Integer) 0))));
      MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_5, (MR_Integer) 1))));
      MR_Word TailArgTypeStuffs_12;
      MR_Word ExternalTypeParams_13;
      MR_Word TypeBindings_14;
      MR_Word TVarSet_15;
      MR_Word VarTypes_16;
      MR_Word VarType_18;
      MR_Word ArgType_19;
      MR_Word ArgType2_20;
      MR_Word VarType2_21;
      MR_Word ArgTypeStuff_22;
      MR_Word VarType0_17;
      MR_Box conv0_ArgType_19;

      check_hlds__typecheck_errors__get_arg_type_stuff_3_p_0(ArgTypeAssigns_6, HeadVar__2_2, &TailArgTypeStuffs_12);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_9, &ExternalTypeParams_13);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_9, &TypeBindings_14);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_9, &TVarSet_15);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_9, &VarTypes_16);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_16, HeadVar__2_2, &VarType0_17);
      if (succeeded)
        VarType_18 = VarType0_17;
      else
        VarType_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[3]));
      mercury__list__det_index0_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_10, (MR_Integer) 0, &conv0_ArgType_19);
      ArgType_19 = ((MR_Word) (conv0_ArgType_19));
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_14, ArgType_19, &ArgType2_20);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_14, VarType_18, &VarType2_21);
      {
        ArgTypeStuff_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgTypeStuff_22, 0) = ((MR_Box) (ArgType2_20));
        MR_hl_field(MR_mktag(0), ArgTypeStuff_22, 1) = ((MR_Box) (VarType2_21));
        MR_hl_field(MR_mktag(0), ArgTypeStuff_22, 2) = ((MR_Box) (TVarSet_15));
        MR_hl_field(MR_mktag(0), ArgTypeStuff_22, 3) = ((MR_Box) (ExternalTypeParams_13));
      }
      succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0), ((MR_Box) (ArgTypeStuff_22)), TailArgTypeStuffs_12);
      if (succeeded)
        *HeadVar__3_3 = TailArgTypeStuffs_12;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTypeStuff_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgTypeStuffs_12));
        }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_f_0(
  MR_Word ArgTypeAssignSet0_4,
  MR_Word VarSet_5)
{
  {
    MR_bool succeeded = (ArgTypeAssignSet0_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Pieces_6;
    MR_String FirstWords_8;
    MR_Word MaybeSeq_9;
    MR_Word ArgTypeAssignSet_10;
    MR_Word LaterPieces_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypeAssignSet0_4, (MR_Integer) 1))));
      succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      FirstWords_8 = (MR_String) "The partial type assignment was:";
      MaybeSeq_9 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      FirstWords_8 = (MR_String) "The possible partial type assignments were:";
      MaybeSeq_9 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_3[13]));
    }
    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), ArgTypeAssignSet0_4, &ArgTypeAssignSet_10);
    LaterPieces_11 = check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(ArgTypeAssignSet_10, MaybeSeq_9, VarSet_5);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (FirstWords_8));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[423])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (LaterPieces_11));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[425])));
    return Pieces_6;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_7_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_ActualExpected_6;

    conv1_ActualExpected_6 = check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_ActualExpected_6));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ActualExpected_6;

    conv0_ActualExpected_6 = check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ActualExpected_6));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_7_f_0(
  MR_Word ClauseContext_9,
  MR_Word GoalContext_10,
  MR_Word Context_11,
  MR_Word Var_12,
  MR_Word TypeA_13,
  MR_Word TypeB_14,
  MR_Word TypeAssignSet0_15)
{
  {
    MR_bool succeeded;
    MR_Word Spec_16;
    MR_Word InClauseForPieces_17;
    MR_Word GoalContextPieces_18;
    MR_Word TypeStuffList_19;
    MR_Word ActualExpectedListA0_20;
    MR_Word ActualExpectedListB0_21;
    MR_Word ActualExpectedListA_22;
    MR_Word ActualExpectedListB_23;
    MR_Word VarSet_25;
    MR_Word Pieces2_32;
    MR_Word VerbosePieces_33;
    MR_Word Msg_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_133;
    MR_Word ActualExpectedA_26;
    MR_Word ActualExpectedB_27;
    MR_Word Var_40;
    MR_Word Var_41;

    InClauseForPieces_17 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_9);
    GoalContextPieces_18 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_9, GoalContext_10);
    check_hlds__typecheck_errors__get_type_stuff_3_p_0(TypeAssignSet0_15, Var_12, &TypeStuffList_19);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_either_type_7_f_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (TypeA_13));
    }
    ActualExpectedListA0_20 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), Var_35, TypeStuffList_19);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_either_type_7_f_0_2));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TypeB_14));
    }
    ActualExpectedListB0_21 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), Var_36, TypeStuffList_19);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedListA0_20, &ActualExpectedListA_22);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedListB0_21, &ActualExpectedListB_23);
    VarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_9, (MR_Integer) 5))));
    succeeded = (ActualExpectedListA_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualExpectedA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListA_22, (MR_Integer) 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListA_22, (MR_Integer) 1))));
      succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ActualExpectedListB_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ActualExpectedB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListB_23, (MR_Integer) 0))));
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListB_23, (MR_Integer) 1))));
          succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word ActualPieces_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpectedA_26, (MR_Integer) 0))));
      MR_Word ExpectedPiecesA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpectedA_26, (MR_Integer) 1))));
      MR_Word ExpectedPiecesB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpectedB_27, (MR_Integer) 1))));
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;

      Var_42 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_25, Var_12);
      Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPiecesB_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])), Var_65);
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPiecesA_29, Var_60);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[37])), Var_59);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_28, Var_49);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_48);
      Pieces2_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_42, Var_43);
    }
    else
    {
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_92;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_110;
      MR_Word Var_111;

      Var_77 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_25, Var_12);
      Var_86 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_25, Var_12);
      Var_98 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedListA_22);
      Var_111 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedListB_23);
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_111, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[33])));
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[41])), Var_110);
      Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_98, Var_99);
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[479])), Var_97);
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[478])), Var_92);
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_86, Var_87);
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[30])), Var_85);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_77, Var_78);
      Pieces2_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[476])), Var_76);
    }
    VerbosePieces_33 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet0_15, VarSet_25);
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_17, GoalContextPieces_18);
    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (Var_123));
    }
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[474])), Pieces2_32);
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (Var_126));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_128, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_128, 1) = ((MR_Box) (VerbosePieces_33));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_124));
    }
    {
      Msg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_34, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_34, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Msg_34));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_133));
    }
    return Spec_16;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word ArgVectorKind_9,
  MR_Word TypeAssignSet0_10,
  MR_Word ArgVectorTypeErrors0_11)
{
  {
    MR_Word Spec_12;
    MR_Word ArgVectorTypeErrors_13;
    MR_Word InClauseForPieces_14;
    MR_Word ArgVectorKindPieces_15;
    MR_Word VarSet_16;
    MR_Word HeadArgVectorTypeErrors_17;
    MR_Word TailArgVectorTypeErrors_18;
    MR_Word ArgErrorPieces_19;
    MR_Word VerbosePieces_20;
    MR_Word Msg_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;

    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0), ArgVectorTypeErrors0_11, &ArgVectorTypeErrors_13);
    InClauseForPieces_14 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_7);
    ArgVectorKindPieces_15 = check_hlds__typecheck_errors__arg_vector_kind_to_pieces_2_f_0(ClauseContext_7, ArgVectorKind_9);
    VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_7, (MR_Integer) 5))));
    if ((ArgVectorTypeErrors_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_arg_vector_type_errors\'/5", (MR_String) "ArgVectorTypeErrors = []");
    }
    else
    {
      HeadArgVectorTypeErrors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_13, (MR_Integer) 0))));
      TailArgVectorTypeErrors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_13, (MR_Integer) 1))));
    }
    check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_16, ArgVectorTypeErrors_13, HeadArgVectorTypeErrors_17, TailArgVectorTypeErrors_18, &ArgErrorPieces_19);
    VerbosePieces_20 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet0_10, VarSet_16);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (InClauseForPieces_14));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (ArgVectorKindPieces_15));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (ArgErrorPieces_19));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_31, 1) = ((MR_Box) (VerbosePieces_20));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Msg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_21, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Msg_21));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_36));
    }
    return Spec_12;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_vector_kind_to_pieces_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word ArgVectorKind_5)
{
  {
    MR_Word Pieces_6;

    switch (MR_tag((MR_Word) ArgVectorKind_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[375]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorKind_5, (MR_Integer) 0))));
          MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 0))));
          MR_Word PredInfo_11;
          MR_Word ModuleName_12;
          MR_String Name_13;
          MR_Integer Arity_14;
          MR_Word PredOrFunc_15;
          MR_Word Var_32;
          MR_Word SimpleCallId_50;
          MR_Word CallId_85;
          MR_Word PredMarkers_86;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_String Var_91;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_9, &PredInfo_11);
          hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_11, &ModuleName_12);
          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_11, &Name_13);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_11, &Arity_14);
          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_11, &PredOrFunc_15);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Name_13));
          }
          {
            SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_50, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
            MR_hl_field(MR_mktag(0), SimpleCallId_50, 1) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(0), SimpleCallId_50, 2) = ((MR_Box) (Arity_14));
          }
          {
            CallId_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallId_85, 0) = ((MR_Box) (SimpleCallId_50));
          }
          PredMarkers_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
          Var_91 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_85, (MR_Integer) -1, PredMarkers_86);
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_89));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SimpleCallId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgVectorKind_5, (MR_Integer) 0))));
          MR_Word CallId_66;
          MR_Word PredMarkers_67;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_String Var_72;

          {
            CallId_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallId_66, 0) = ((MR_Box) (SimpleCallId_7));
          }
          PredMarkers_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
          Var_72 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_66, (MR_Integer) -1, PredMarkers_67);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_70));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgVectorKind_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallId_8;
              MR_Word GenericId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgVectorKind_5, (MR_Integer) 1))));
              MR_Word PredMarkers_17;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_String Var_37;

              {
                CallId_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_8, 0) = ((MR_Box) (GenericId_16));
              }
              PredMarkers_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
              Var_37 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_8, (MR_Integer) -1, PredMarkers_17);
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
              }
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_35));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.arg_vector_kind_to_pieces\'/2", (MR_String) "arg_vector_foreign_proc_call");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String EventName_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), ArgVectorKind_5, (MR_Integer) 1))));
              MR_Word Var_22;
              MR_Word Var_23;

              {
                Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (EventName_19));
              }
              {
                Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
                MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[481])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_22));
              }
            }
            break;
        }
        break;
    }
    return Pieces_6;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(
  MR_Word VarSet_6,
  MR_Word AllErrors_7,
  MR_Word HeadError_8,
  MR_Word TailErrors_9,
  MR_Word * Pieces_10)
{
  {
    MR_Word SuffixPiece_11;
    MR_Word TailPieces_12;
    MR_Integer ArgNum_15;
    MR_Word Var_16;
    MR_Word ActualExpected_17;
    MR_Word ActualPieces_18;
    MR_Word ExpectedPieces_19;
    MR_Word MismatchPieces_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word MismatchPieces_62;

    if ((TailErrors_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      SuffixPiece_11 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[409]));
      TailPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word HeadTailError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailErrors_9, (MR_Integer) 0))));
      MR_Word TailTailErrors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailErrors_9, (MR_Integer) 1))));

      SuffixPiece_11 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[382]));
      check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_6, AllErrors_7, HeadTailError_13, TailTailErrors_14, &TailPieces_12);
    }
    ArgNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadError_8, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadError_8, (MR_Integer) 1))));
    ActualExpected_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadError_8, (MR_Integer) 2))));
    ActualPieces_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_17, (MR_Integer) 0))));
    ExpectedPieces_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_17, (MR_Integer) 1))));
    check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(VarSet_6, ActualPieces_18, AllErrors_7, &MismatchPieces_62);
    if ((MismatchPieces_62 == (MR_Word) ((MR_Unsigned) 0U)))
      MismatchPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_74;

      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchPieces_62, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[385])));
      MismatchPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[193])), Var_74);
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (ArgNum_15));
    }
    Var_34 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_6, Var_16);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[423])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[448])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[469])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[424])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (TailPieces_12));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (SuffixPiece_11));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchPieces_20, Var_53);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPieces_19, Var_52);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[28])), Var_51);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_18, Var_41);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_40);
    *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_23, Var_35);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadError_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailErrors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TailMismatchPieces_12;
      MR_Integer ArgNum_13;
      MR_Word Var_14;
      MR_Word ActualExpected_15;
      MR_Word ExpectedPieces_17;

      check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(HeadVar__1_1, HeadVar__2_2, TailErrors_10, &TailMismatchPieces_12);
      ArgNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadError_9, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadError_9, (MR_Integer) 1))));
      ActualExpected_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadError_9, (MR_Integer) 2))));
      ExpectedPieces_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_15, (MR_Integer) 1))));
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ExpectedPieces_17)));
      if (succeeded)
      {
        MR_Word HeadMismatchPieces_19;
        MR_String Var_18;

        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_14, &Var_18);
        if (succeeded)
        {
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_30;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_String Var_35;

          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (ArgNum_13));
          }
          Var_35 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_14);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[480])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[378])));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
          }
          {
            HeadMismatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[429])));
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 1) = ((MR_Box) (Var_25));
          }
        }
        else
        {
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ArgNum_13));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            HeadMismatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[429])));
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 1) = ((MR_Box) (Var_39));
          }
        }
        if ((TailMismatchPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__4_4 = HeadMismatchPieces_19;
        else
        {
          MR_Word Var_48;

          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[194])), TailMismatchPieces_12);
          *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadMismatchPieces_19, Var_48);
        }
      }
      else
        *HeadVar__4_4 = TailMismatchPieces_12;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ActualExpected_6;

    conv0_ActualExpected_6 = check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ActualExpected_6));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_var_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13)
{
  {
    MR_bool succeeded;
    MR_Word SpecAndMaybeActualExpected_14;
    MR_Word InClauseForPieces_15;
    MR_Word GoalContextPieces_16;
    MR_Word TypeStuffList_17;
    MR_Word ActualExpectedList0_18;
    MR_Word ActualExpectedList_19;
    MR_Word VarSet_21;
    MR_Word MaybeActualExpected_23;
    MR_Word Pieces2_26;
    MR_Word VerbosePieces_27;
    MR_Word Msg_28;
    MR_Word Spec_29;
    MR_Word Var_30;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_108;
    MR_Word ActualExpected_22;
    MR_Word Var_34;

    InClauseForPieces_15 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_8);
    GoalContextPieces_16 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_8, GoalContext_9);
    check_hlds__typecheck_errors__get_type_stuff_3_p_0(TypeAssignSet0_13, Var_11, &TypeStuffList_17);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_6_f_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Type_12));
    }
    ActualExpectedList0_18 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), Var_30, TypeStuffList_17);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedList0_18, &ActualExpectedList_19);
    VarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_8, (MR_Integer) 5))));
    succeeded = (ActualExpectedList_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualExpected_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_19, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_19, (MR_Integer) 1))));
      succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word ActualPieces_24;
      MR_Word ExpectedPieces_25;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_52;

      {
        MaybeActualExpected_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeActualExpected_23, 0) = ((MR_Box) (ActualExpected_22));
      }
      ActualPieces_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_22, (MR_Integer) 0))));
      ExpectedPieces_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_22, (MR_Integer) 1))));
      Var_35 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_11);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[28])), Var_52);
      Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_24, Var_42);
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_41);
      Pieces2_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, Var_36);
    }
    else
    {
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_79;
      MR_Word Var_84;
      MR_Word Var_85;

      MaybeActualExpected_23 = (MR_Word) ((MR_Unsigned) 0U);
      Var_64 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_11);
      Var_73 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_11);
      Var_85 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedList_19);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[33])));
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[479])), Var_84);
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[478])), Var_79);
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, Var_74);
      Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[30])), Var_72);
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_65);
      Pieces2_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[476])), Var_63);
    }
    VerbosePieces_27 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet0_13, VarSet_21);
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (InClauseForPieces_15));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (GoalContextPieces_16));
    }
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[474])), Pieces2_26);
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Var_101));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_103, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_103, 1) = ((MR_Box) (VerbosePieces_27));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Msg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_28, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_28, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Msg_28));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_29, 2) = ((MR_Box) (Var_108));
    }
    {
      SpecAndMaybeActualExpected_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_14, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_14, 1) = ((MR_Box) (MaybeActualExpected_23));
    }
    return SpecAndMaybeActualExpected_14;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word GoalContext_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;

    switch (MR_tag((MR_Word) GoalContext_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[343]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarVectorKind_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalContext_5, (MR_Integer) 0))));
          MR_Integer ArgNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GoalContext_5, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) VarVectorKind_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(VarVectorKind_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word Var_124;
                    MR_Word Var_125;

                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
                      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[361])));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_124));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[472])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_122));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_110;
                    MR_Word Var_111;
                    MR_Word Var_112;
                    MR_Word Var_113;

                    {
                      Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[363])));
                    }
                    {
                      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
                      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_112));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[472])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_110));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_98;
                    MR_Word Var_99;
                    MR_Word Var_100;
                    MR_Word Var_101;

                    {
                      Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[367])));
                    }
                    {
                      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
                      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[472])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_98));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Var_86;
                    MR_Word Var_87;
                    MR_Word Var_88;
                    MR_Word Var_89;

                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[365])));
                    }
                    {
                      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
                      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[472])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_86));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = (ArgNum_8 == (MR_Integer) 1);
                    if (succeeded)
                      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[370]));
                    else
                    {
                      succeeded = (ArgNum_8 == (MR_Integer) 2);
                      if (succeeded)
                        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[373]));
                      else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.goal_context_to_pieces\'/2", (MR_String) "try io variable not arg 1 or 2");
                      }
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Var_56;
                    MR_Word Var_57;
                    MR_Word Var_58;
                    MR_Word Var_59;

                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
                      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[359])));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[472])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_56));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = (ArgNum_8 == (MR_Integer) 1);
                    if (succeeded)
                      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[353]));
                    else
                    {
                      succeeded = (ArgNum_8 == (MR_Integer) 2);
                      if (succeeded)
                        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[357]));
                      else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.goal_context_to_pieces\'/2", (MR_String) "outer variable not arg 1 or 2");
                      }
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgVectorKind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarVectorKind_7, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) ArgVectorKind_9)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_165;
                      MR_Word Var_166;
                      MR_Word Var_167;
                      MR_Word Var_168;

                      {
                        Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                        MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (ArgNum_8));
                      }
                      {
                        Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (ArgNum_8));
                      }
                      {
                        Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Var_168));
                        MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[345])));
                      }
                      {
                        Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_166));
                        MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_167));
                      }
                      {
                        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[469])));
                        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_165));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorKind_9, (MR_Integer) 0))));
                      MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 0))));
                      MR_Word PredInfo_14;
                      MR_Word ModuleName_15;
                      MR_String Name_16;
                      MR_Integer Arity_17;
                      MR_Word PredOrFunc_18;
                      MR_Word Var_151;
                      MR_Word SimpleCallId_175;
                      MR_Word CallId_209;
                      MR_Word PredMarkers_210;
                      MR_Word Var_213;
                      MR_Word Var_214;
                      MR_String Var_215;

                      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_12, &PredInfo_14);
                      hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_14, &ModuleName_15);
                      hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_14, &Name_16);
                      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_14, &Arity_17);
                      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_14, &PredOrFunc_18);
                      {
                        Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (ModuleName_15));
                        MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Name_16));
                      }
                      {
                        SimpleCallId_175 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SimpleCallId_175, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
                        MR_hl_field(MR_mktag(0), SimpleCallId_175, 1) = ((MR_Box) (Var_151));
                        MR_hl_field(MR_mktag(0), SimpleCallId_175, 2) = ((MR_Box) (Arity_17));
                      }
                      {
                        CallId_209 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), CallId_209, 0) = ((MR_Box) (SimpleCallId_175));
                      }
                      PredMarkers_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
                      Var_215 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_209, ArgNum_8, PredMarkers_210);
                      {
                        Var_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_214, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), Var_214, 1) = ((MR_Box) (Var_215));
                      }
                      {
                        Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (Var_214));
                        MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
                      }
                      {
                        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471])));
                        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_213));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SimpleCallId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgVectorKind_9, (MR_Integer) 0))));
                      MR_Word CallId_191;
                      MR_Word PredMarkers_192;
                      MR_Word Var_195;
                      MR_Word Var_196;
                      MR_String Var_197;

                      {
                        CallId_191 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), CallId_191, 0) = ((MR_Box) (SimpleCallId_10));
                      }
                      PredMarkers_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
                      Var_197 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_191, ArgNum_8, PredMarkers_192);
                      {
                        Var_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_196, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), Var_196, 1) = ((MR_Box) (Var_197));
                      }
                      {
                        Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Var_196));
                        MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
                      }
                      {
                        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471])));
                        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_195));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgVectorKind_9, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word CallId_11;
                          MR_Word GenericId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgVectorKind_9, (MR_Integer) 1))));
                          MR_Word PredMarkers_20;
                          MR_Word Var_154;
                          MR_Word Var_155;
                          MR_String Var_156;

                          {
                            CallId_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), CallId_11, 0) = ((MR_Box) (GenericId_19));
                          }
                          PredMarkers_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
                          Var_156 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_11, ArgNum_8, PredMarkers_20);
                          {
                            Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (Var_156));
                          }
                          {
                            Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
                            MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
                          }
                          {
                            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471])));
                            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_154));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.goal_context_to_pieces\'/2", (MR_String) "arg_vector_foreign_proc_call");
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String EventName_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), ArgVectorKind_9, (MR_Integer) 1))));
                          MR_Word Var_134;
                          MR_Word Var_135;
                          MR_Word Var_136;
                          MR_Word Var_137;
                          MR_Word Var_138;
                          MR_Word Var_141;
                          MR_Word Var_142;

                          {
                            Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                            MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (ArgNum_8));
                          }
                          {
                            Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (ArgNum_8));
                          }
                          {
                            Var_142 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_142, 0) = ((MR_Box) (EventName_22));
                          }
                          {
                            Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                            MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
                          }
                          {
                            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[470])));
                            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
                          }
                          {
                            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
                            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
                          }
                          {
                            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
                            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
                          }
                          {
                            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[469])));
                            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_134));
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UnifyContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalContext_5, (MR_Integer) 0))));

          hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_23, (MR_Word) ((MR_Unsigned) 0U), &Pieces_6);
        }
        break;
    }
    return Pieces_6;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Pieces_4;

    conv2_Pieces_4 = check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Pieces_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_6;

    conv0_Pieces_6 = check_hlds__typecheck_errors__expected_types_to_pieces_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_Pieces_6));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(
  MR_Word ActualExpectedList_3)
{
  {
    MR_Word Pieces_4;
    MR_Word ExpectedPieces_5;
    MR_Word ActualPieces_6;
    MR_Word Var_10;
    MR_Box conv1_ExpectedPieces_5;

    conv1_ExpectedPieces_5 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[8]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[12]), ActualExpectedList_3, ((MR_Box) ((MR_Unsigned) 0U)));
    ExpectedPieces_5 = ((MR_Word) (conv1_ExpectedPieces_5));
    ActualPieces_6 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[13]), ActualExpectedList_3);
    Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), ExpectedPieces_5, ActualPieces_6);
    Pieces_4 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_10, (MR_Word) ((MR_Unsigned) 0U));
    return Pieces_4;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = check_hlds__type_assign__get_caller_arg_assign_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = check_hlds__type_assign__get_callee_arg_types_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__conv2_ConsDefn_41));
    check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41, (MR_Integer) 0))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41, (MR_Integer) 1))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41, (MR_Integer) 2))));
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_42;
      MR_Word Var_43;

      (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41, (MR_Integer) 3))));
      Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41, (MR_Integer) 4))));
      Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefn_41, (MR_Integer) 5))));
      (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded = ((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__Var_62 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__Var_62, (MR_Integer) 0))));
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__Var_62, (MR_Integer) 1))));
        check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_3(env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), &(env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__conv2_ConsDefn_41, (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefnList_14, check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_5, env_ptr);
        }
        (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(
  MR_Word ClauseContext_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsDefnList_14,
  MR_Word Functor_15,
  MR_Word Args_16,
  MR_Word ArgsTypeAssignSet_17)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0_s env;

    (env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefnList_14 = ConsDefnList_14;
    {
      MR_Word Spec_18;
      MR_Word InClauseForPieces_19;
      MR_Word UnifyContextPieces_20;
      MR_Word ModuleInfo_21;
      MR_Word VarSet_22;
      MR_Word StrippedFunctor_23;
      MR_String StrippedFunctorStr_24;
      MR_Integer Arity_25;
      MR_Word ConsArgTypesSet_26;
      MR_Word MaybeNumMismatches_36;
      MR_Word ErrorPieces_37;
      MR_Word VerboseComponents_39;
      MR_String Arguments_47;
      MR_Word VarAndTermPieces_49;
      MR_Word Msg_50;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_88;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_96;
      MR_Word Var_98;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_123;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Integer Var_127;
      MR_Word Var_128;
      MR_Word ConsArgTypes_27;
      MR_Word Var_28;

      InClauseForPieces_19 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_10);
      hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, (MR_Word) ((MR_Unsigned) 0U), &UnifyContextPieces_20);
      ModuleInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 0))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 1))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 2))));
      Var_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 3))));
      Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 4))));
      VarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 5))));
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_15, &StrippedFunctor_23);
      StrippedFunctorStr_24 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_21, VarSet_22, (MR_Integer) 0, StrippedFunctor_23, Args_16);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), Args_16, &Arity_25);
      ConsArgTypesSet_26 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[10]), ArgsTypeAssignSet_17);
      (env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded = mercury__list__all_same_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ConsArgTypesSet_26);
      if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded)
      {
        (env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded = (ConsArgTypesSet_26 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded)
        {
          ConsArgTypes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgTypesSet_26, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgTypesSet_26, (MR_Integer) 1))));
        }
      }
      if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded)
      {
        MR_Word ArgExpTypes_29;
        MR_Word TypeAssigns_30;
        MR_Word RevSubsumesMismatches_31;
        MR_Word RevNoSubsumeMismatches_32;

        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_16, ConsArgTypes_27, &ArgExpTypes_29);
        TypeAssigns_30 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[11]), ArgsTypeAssignSet_17);
        check_hlds__typecheck_errors__find_mismatched_args_7_p_0((MR_Integer) 1, ArgExpTypes_29, TypeAssigns_30, (MR_Word) ((MR_Unsigned) 0U), &RevSubsumesMismatches_31, (MR_Word) ((MR_Unsigned) 0U), &RevNoSubsumeMismatches_32);
        if ((RevNoSubsumeMismatches_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubsumesMismatches_38;
          MR_Integer Var_58;

          mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevSubsumesMismatches_31, &SubsumesMismatches_38);
          Var_58 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), SubsumesMismatches_38);
          {
            MaybeNumMismatches_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeNumMismatches_36, 0) = ((MR_Box) (Var_58));
          }
          ErrorPieces_37 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(SubsumesMismatches_38, (MR_Integer) 1, VarSet_22, Functor_15);
        }
        else
        {
          MR_Word NoSubsumeMismatches_35;
          MR_Integer Var_60;

          mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevNoSubsumeMismatches_32, &NoSubsumeMismatches_35);
          Var_60 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), NoSubsumeMismatches_35);
          {
            MaybeNumMismatches_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeNumMismatches_36, 0) = ((MR_Box) (Var_60));
          }
          ErrorPieces_37 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(NoSubsumeMismatches_35, (MR_Integer) 1, VarSet_22, Functor_15);
        }
        VerboseComponents_39 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word TypeAssignSet_40;
        MR_Word ResultTypePieces_44;
        MR_Word AllTypesPieces_45;
        MR_Word VerbosePieces_46;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;

        MaybeNumMismatches_36 = (MR_Word) ((MR_Unsigned) 0U);
        TypeAssignSet_40 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_17);
        check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0_6(&env);
        if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded)
        {
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;

          Var_63 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
          Var_65 = check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(TypeAssignSet_40, Var_13);
          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21])));
          ResultTypePieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_63, Var_64);
        }
        else
          ResultTypePieces_44 = (MR_Word) ((MR_Unsigned) 0U);
        Var_72 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_25);
        Var_74 = check_hlds__typecheck_errors__type_of_functor_to_pieces_3_f_0(Functor_15, Arity_25, (env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__ConsDefnList_14);
        Var_75 = check_hlds__typecheck_errors__types_of_vars_to_pieces_3_f_0(Args_16, VarSet_22, TypeAssignSet_40);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_74, Var_75);
        AllTypesPieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_72, Var_73);
        ErrorPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ResultTypePieces_44, AllTypesPieces_45);
        VerbosePieces_46 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet_40, VarSet_22);
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_76, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_76, 1) = ((MR_Box) (VerbosePieces_46));
        }
        {
          VerboseComponents_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VerboseComponents_39, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(1), VerboseComponents_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      if ((MaybeNumMismatches_36 == (MR_Word) ((MR_Unsigned) 0U)))
        Arguments_47 = (MR_String) "argument(s)";
      else
      {
        MR_Integer NumMismatches_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNumMismatches_36, (MR_Integer) 0))));

        (env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded = (NumMismatches_48 == (MR_Integer) 1);
        if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_env_0__succeeded)
          Arguments_47 = (MR_String) "argument";
        else
          Arguments_47 = (MR_String) "arguments";
      }
      Var_84 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (StrippedFunctorStr_24));
      }
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Arguments_47));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[468])));
      }
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[466])));
        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_101));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[448])));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_93));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[465])));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
      }
      Var_108 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(StrippedFunctor_23, Arity_25);
      Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_108, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_86, Var_107);
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_84, Var_85);
      VarAndTermPieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[464])), Var_83);
      Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_19, UnifyContextPieces_20);
      {
        Var_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Var_117));
      }
      Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarAndTermPieces_49, ErrorPieces_37);
      {
        Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Var_120));
      }
      {
        Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (VerboseComponents_39));
      }
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_118));
      }
      {
        Msg_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_50, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Msg_50, 1) = ((MR_Box) (Var_115));
      }
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Msg_50));
        MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_123));
      }
      return Spec_18;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word TypeAssignSet_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15]));
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;

      Var_23 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_2, Var_12);
      Var_25 = check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(TypeAssignSet_3, Var_12);
      Var_26 = check_hlds__typecheck_errors__types_of_vars_to_pieces_3_f_0(Vars_13, VarSet_2, TypeAssignSet_3);
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_25, Var_26);
      Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_23, Var_24);
      HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21])), Var_22);
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word First_2,
  MR_Word VarSet_3,
  MR_Word Functor_4)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Mismatch_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Mismatches_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mismatch_9, (MR_Integer) 0))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_9, (MR_Integer) 1))));
      MR_Word HeadTypeMismatch_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_9, (MR_Integer) 2))));
      MR_Word TailTypeMismatches_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_9, (MR_Integer) 3))));
      MR_Word ArgNumPieces_21;
      MR_Word VarNamePieces_23;
      MR_Word HeadExpectedTypePieces_24;
      MR_Word HeadActualTypePieces_25;
      MR_Word ErrorDescPieces_28;
      MR_Word FollowingMismatchPieces_32;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Integer Arity_19;
      MR_Word Var_35;
      MR_String Var_36;
      MR_Integer Var_37;
      MR_String Var_22;
      MR_Word TailActualTypePieces_27;

      succeeded = ((((MR_tag((MR_Word) Functor_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 1))));
        Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
          succeeded = (strcmp(Var_36, (MR_String) "") == 0);
          if (succeeded)
          {
            Var_37 = (MR_Integer) 0;
            succeeded = (Arity_19 > Var_37);
          }
        }
      }
      if (succeeded)
        switch (First_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) ArgNum_15 - (MR_Unsigned) (MR_Integer) 1);

              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
              }
              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgNumPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[17])));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 1) = ((MR_Box) (Var_40));
              }
            }
            break;
          case (MR_Integer) 1:
            ArgNumPieces_21 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[459]));
            break;
        }
      else
        switch (First_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_50;
              MR_Word Var_51;

              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ArgNum_15));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgNumPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[17])));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 1) = ((MR_Box) (Var_50));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_55;
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (ArgNum_15));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgNumPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[19])));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 1) = ((MR_Box) (Var_55));
              }
            }
            break;
        }
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, Var_16, &Var_22);
      if (succeeded)
      {
        MR_Word Var_60;
        MR_Word Var_61;
        MR_String Var_62;

        Var_62 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, Var_16);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[385])));
        }
        {
          VarNamePieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VarNamePieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[460])));
          MR_hl_field(MR_mktag(1), VarNamePieces_23, 1) = ((MR_Box) (Var_60));
        }
      }
      else
        VarNamePieces_23 = (MR_Word) ((MR_Unsigned) 0U);
      HeadExpectedTypePieces_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTypeMismatch_17, (MR_Integer) 0))));
      HeadActualTypePieces_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTypeMismatch_17, (MR_Integer) 1))));
      succeeded = check_hlds__typecheck_errors__expected_types_match_3_p_0(HeadExpectedTypePieces_24, TailTypeMismatches_18, &TailActualTypePieces_27);
      if (succeeded)
        if ((TailActualTypePieces_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_97;

          Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[462])), HeadExpectedTypePieces_24);
          Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21])), Var_97);
          Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadActualTypePieces_25, Var_90);
          ErrorDescPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_89);
        }
        else
        {
          MR_Word SecondActualTypePieces_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailActualTypePieces_27, (MR_Integer) 0))));
          MR_Word ThirdPlusActualTypePieces_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailActualTypePieces_27, (MR_Integer) 1))));
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_80;

          Var_72 = check_hlds__typecheck_errors__report_actual_types_3_f_0(HeadActualTypePieces_25, SecondActualTypePieces_29, ThirdPlusActualTypePieces_30);
          Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[462])), HeadExpectedTypePieces_24);
          Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21])), Var_80);
          Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_72, Var_73);
          ErrorDescPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_71);
        }
      else
      {
        MR_Word AllMismatches_31;
        MR_Word Var_108;

        {
          AllMismatches_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllMismatches_31, 0) = ((MR_Box) (HeadTypeMismatch_17));
          MR_hl_field(MR_mktag(1), AllMismatches_31, 1) = ((MR_Box) (TailTypeMismatches_18));
        }
        Var_108 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0((MR_Integer) 1, AllMismatches_31);
        ErrorDescPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[186])), Var_108);
      }
      if ((Mismatches_10 == (MR_Word) ((MR_Unsigned) 0U)))
        FollowingMismatchPieces_32 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15]));
      else
      {
        MR_Word Var_116;

        Var_116 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(Mismatches_10, (MR_Integer) 0, VarSet_3, Functor_4);
        FollowingMismatchPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[188])), Var_116);
      }
      Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorDescPieces_28, FollowingMismatchPieces_32);
      Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarNamePieces_23, Var_124);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgNumPieces_21, Var_123);
    }
    return HeadVar__5_5;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Mismatch_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Mismatches_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ExpectedTypePieces_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_6, (MR_Integer) 0))));
      MR_Word ActualTypePieces_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_6, (MR_Integer) 1))));
      MR_Word HeadPieces_12;
      MR_Word TailPieces_13;
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_23;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Integer Var_46;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (HeadVar__1_1));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[449])));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[454])));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
      }
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedTypePieces_9, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[458])), Var_39);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[450])), Var_34);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualTypePieces_10, Var_29);
      Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[456])), Var_28);
      HeadPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, Var_23);
      Var_46 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) (MR_Integer) 1);
      TailPieces_13 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(Var_46, Mismatches_7);
      HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_12, TailPieces_13);
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_actual_types_3_f_0(
  MR_Word FirstActualTypePieces_5,
  MR_Word SecondActualTypePieces_6,
  MR_Word ThirdPlusActualTypePieces_7)
{
  {
    MR_Word Pieces_8;

    if ((ThirdPlusActualTypePieces_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_17;

      Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])), SecondActualTypePieces_6);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FirstActualTypePieces_5, Var_17);
    }
    else
    {
      MR_Word ThirdActualTypePieces_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThirdPlusActualTypePieces_7, (MR_Integer) 0))));
      MR_Word FourthPlusActualTypePieces_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThirdPlusActualTypePieces_7, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_16;

      Var_16 = check_hlds__typecheck_errors__report_actual_types_3_f_0(SecondActualTypePieces_6, ThirdActualTypePieces_9, FourthPlusActualTypePieces_10);
      Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[450])), Var_16);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FirstActualTypePieces_5, Var_11);
    }
    return Pieces_8;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_types_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadMismatch_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailMismatches_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadActualTypePieces_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMismatch_6, (MR_Integer) 1))));
      MR_Word TailActualTypePieces_9;
      MR_Word HeadExpTypePieces_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMismatch_6, (MR_Integer) 0))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadExpTypePieces_10)));
      if (succeeded)
      {
        succeeded = check_hlds__typecheck_errors__expected_types_match_3_p_0(HeadVar__1_1, TailMismatches_7, &TailActualTypePieces_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadActualTypePieces_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailActualTypePieces_9));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeMismatches_24;
    MR_Word conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_26;

    check_hlds__typecheck_errors__substitute_types_check_match_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMismatches_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMismatches_24));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_26));
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_7_p_0(
  MR_Integer CurArgNum_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeAssignSet_3,
  MR_Word STATE_VARIABLE_RevSubsumesMismatches_0_4,
  MR_Word * STATE_VARIABLE_RevSubsumesMismatches_5,
  MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_0_6,
  MR_Word * STATE_VARIABLE_RevNoSubsumeMismatches_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevNoSubsumeMismatches_7 = STATE_VARIABLE_RevNoSubsumeMismatches_0_6;
      *STATE_VARIABLE_RevSubsumesMismatches_5 = STATE_VARIABLE_RevSubsumesMismatches_0_4;
    }
    else
    {
      MR_Word Arg_17;
      MR_Word ExpType_18;
      MR_Word ArgExpTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TypeStuffList_23;
      MR_Word TypeMismatches0_24;
      MR_Word DoesSomeTypeStuffMatch_25;
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_38_38;
      MR_Word STATE_VARIABLE_RevSubsumesMismatches_39_39;
      MR_Integer Var_42;
      MR_Box conv3_TypeMismatches0_24;
      MR_Box conv2_DoesSomeTypeStuffMatch_25;
      MR_Integer next_value_of_CurArgNum_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_4;
      MR_Word next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_6;

      Arg_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
      ExpType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1))));
      check_hlds__typecheck_errors__get_type_stuff_3_p_0(TypeAssignSet_3, Arg_17, &TypeStuffList_23);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__typecheck_errors__find_mismatched_args_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ExpType_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0), Var_35, TypeStuffList_23, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeMismatches0_24, ((MR_Box) ((MR_Integer) 0)), &conv2_DoesSomeTypeStuffMatch_25);
      TypeMismatches0_24 = ((MR_Word) (conv3_TypeMismatches0_24));
      DoesSomeTypeStuffMatch_25 = ((MR_Word) (conv2_DoesSomeTypeStuffMatch_25));
      switch (DoesSomeTypeStuffMatch_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeMismatches_26;

            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0), TypeMismatches0_24, &TypeMismatches_26);
            if ((TypeMismatches_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_errors.find_mismatched_args\'/7", (MR_String) "no_type_stuff_matches but TypeMismatches = []");
                return;
              }
            }
            else
            {
              MR_Word HeadTypeMismatch_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_26, (MR_Integer) 0))));
              MR_Word TailTypeMismatches_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_26, (MR_Integer) 1))));
              MR_Word Mismatch_29;
              MR_Word Mismatch_55;
              MR_Word Mismatches_56;
              MR_Word Var_59;

              {
                Mismatch_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Mismatch_29, 0) = ((MR_Box) (CurArgNum_1));
                MR_hl_field(MR_mktag(0), Mismatch_29, 1) = ((MR_Box) (Arg_17));
                MR_hl_field(MR_mktag(0), Mismatch_29, 2) = ((MR_Box) (HeadTypeMismatch_27));
                MR_hl_field(MR_mktag(0), Mismatch_29, 3) = ((MR_Box) (TailTypeMismatches_28));
              }
              Mismatch_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_26, (MR_Integer) 0))));
              Mismatches_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_26, (MR_Integer) 1))));
              Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Mismatch_55, (MR_Integer) 2))) & (MR_Integer) 1);
              succeeded = (Var_59 == (MR_Integer) 0);
              if (succeeded)
                succeeded = check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(Mismatches_56);
              if (succeeded)
              {
                {
                  STATE_VARIABLE_RevNoSubsumeMismatches_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevNoSubsumeMismatches_38_38, 0) = ((MR_Box) (Mismatch_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevNoSubsumeMismatches_38_38, 1) = ((MR_Box) (STATE_VARIABLE_RevNoSubsumeMismatches_0_6));
                }
                STATE_VARIABLE_RevSubsumesMismatches_39_39 = STATE_VARIABLE_RevSubsumesMismatches_0_4;
              }
              else
              {
                {
                  STATE_VARIABLE_RevSubsumesMismatches_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSubsumesMismatches_39_39, 0) = ((MR_Box) (Mismatch_29));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSubsumesMismatches_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevSubsumesMismatches_0_4));
                }
                STATE_VARIABLE_RevNoSubsumeMismatches_38_38 = STATE_VARIABLE_RevNoSubsumeMismatches_0_6;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevSubsumesMismatches_39_39 = STATE_VARIABLE_RevSubsumesMismatches_0_4;
            STATE_VARIABLE_RevNoSubsumeMismatches_38_38 = STATE_VARIABLE_RevNoSubsumeMismatches_0_6;
          }
          break;
      }
      Var_42 = (MR_Integer) ((MR_Unsigned) CurArgNum_1 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_1 = Var_42;
      next_value_of_HeadVar__2_2 = ArgExpTypes_19;
      next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_4 = STATE_VARIABLE_RevSubsumesMismatches_39_39;
      next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_6 = STATE_VARIABLE_RevNoSubsumeMismatches_38_38;
      CurArgNum_1 = next_value_of_CurArgNum_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevSubsumesMismatches_0_4 = next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_4;
      STATE_VARIABLE_RevNoSubsumeMismatches_0_6 = next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(
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
      MR_Word Mismatch_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Mismatches_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Mismatch_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (Var_6 == (MR_Integer) 0);
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

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_functor_type_8_f_0(
  MR_Word ClauseContext_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsDefnList_14,
  MR_Word Functor_15,
  MR_Integer Arity_16,
  MR_Word TypeAssignSet_17)
{
  {
    MR_Word Spec_18;
    MR_Word InClauseForPieces_19;
    MR_Word UnifyContextPieces_20;
    MR_Word VarSet_21;
    MR_Word MainPieces_22;
    MR_Word VerbosePieces_23;
    MR_Word Msg_24;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_80;

    InClauseForPieces_19 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_10);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, (MR_Word) ((MR_Unsigned) 0U), &UnifyContextPieces_20);
    VarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 5))));
    Var_31 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_13);
    Var_40 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
    Var_49 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_13);
    Var_51 = check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(TypeAssignSet_17, Var_13);
    Var_60 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
    Var_62 = check_hlds__typecheck_errors__type_of_functor_to_pieces_3_f_0(Functor_15, Arity_16, ConsDefnList_14);
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_60, Var_61);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21])), Var_59);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51, Var_52);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, Var_50);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])), Var_48);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, Var_41);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[24])), Var_39);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_32);
    MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[432])), Var_30);
    VerbosePieces_23 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet_17, VarSet_21);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_19, UnifyContextPieces_20);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (MainPieces_22));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_75, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_75, 1) = ((MR_Box) (VerbosePieces_23));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
    }
    {
      Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Msg_24));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_80));
    }
    return Spec_18;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_3_f_0(
  MR_Word Functor_5,
  MR_Integer Arity_6,
  MR_Word ConsDefnList_7)
{
  {
    MR_bool succeeded = (ConsDefnList_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Pieces_8;
    MR_Word SingleDefn_9;
    MR_Word Var_13;

    if (succeeded)
    {
      SingleDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefnList_7, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefnList_7, (MR_Integer) 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word SepPieces_10;
      MR_Word ConsTypePieces_11;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_26;
      MR_Word TVarSet_51;
      MR_Word ExistQVars_52;
      MR_Word ConsType_53;
      MR_Word ArgTypes_54;
      MR_Word ArgPieces_63;
      MR_Word Var_73;

      succeeded = (Arity_6 == (MR_Integer) 0);
      if (succeeded)
        SepPieces_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
        SepPieces_10 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13]));
      TVarSet_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_9, (MR_Integer) 0))));
      ExistQVars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_9, (MR_Integer) 1))));
      ConsType_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_9, (MR_Integer) 2))));
      ArgTypes_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_9, (MR_Integer) 3))));
      if ((ArgTypes_54 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgPieces_63 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word SymName_59;

        succeeded = ((((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_5, (MR_Integer) 1))));
          {
            MR_Word Type_62;
            MR_Word Var_65;

            {
              Type_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Type_62, 0) = ((MR_Box) (SymName_59));
              MR_hl_field(MR_mktag(1), Type_62, 1) = ((MR_Box) (ArgTypes_54));
              MR_hl_field(MR_mktag(1), Type_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_65 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 0, Type_62, TVarSet_51, ExistQVars_52);
            ArgPieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[449])));
          }
        }
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/2", (MR_String) "invalid cons_id");
        }
      }
      Var_73 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 0, ConsType_53, TVarSet_51, ExistQVars_52);
      ConsTypePieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_63, Var_73);
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConsTypePieces_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[447])));
      Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[452])), Var_26);
      Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SepPieces_10, Var_21);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[451])), Var_20);
    }
    else
    {
      MR_Word ConsTypeListPieces_12;
      MR_Word Var_38;

      ConsTypeListPieces_12 = check_hlds__typecheck_errors__cons_type_list_to_pieces_3_f_0(ConsDefnList_7, Functor_5, Arity_6);
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConsTypeListPieces_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[337])));
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[335])), Var_38);
    }
    return Pieces_8;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Functor_2,
  MR_Integer Arity_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConsDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ThisPieces_12;
      MR_Word TVarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_7, (MR_Integer) 0))));
      MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_7, (MR_Integer) 1))));
      MR_Word ConsType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_7, (MR_Integer) 2))));
      MR_Word ArgTypes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_7, (MR_Integer) 3))));
      MR_Word ArgPieces_42;
      MR_Word Var_52;

      if ((ArgTypes_33 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgPieces_42 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word SymName_38;

        succeeded = ((((MR_tag((MR_Word) Functor_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_2, (MR_Integer) 1))));
          {
            MR_Word Type_41;
            MR_Word Var_44;

            {
              Type_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Type_41, 0) = ((MR_Box) (SymName_38));
              MR_hl_field(MR_mktag(1), Type_41, 1) = ((MR_Box) (ArgTypes_33));
              MR_hl_field(MR_mktag(1), Type_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_44 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 0, Type_41, TVarSet_30, ExistQVars_31);
            ArgPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_44, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[449])));
          }
        }
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/2", (MR_String) "invalid cons_id");
        }
      }
      Var_52 = check_hlds__typecheck_errors__type_to_pieces_4_f_0((MR_Integer) 0, ConsType_32, TVarSet_30, ExistQVars_31);
      ThisPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_42, Var_52);
      if ((ConsDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__4_4 = ThisPieces_12;
      else
      {
        MR_Word ConnectPieces_15;
        MR_Word TailPieces_16;
        MR_Word Var_25;

        succeeded = (Arity_3 == (MR_Integer) 0);
        if (succeeded)
          ConnectPieces_15 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[450]));
        else
          ConnectPieces_15 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21]));
        TailPieces_16 = check_hlds__typecheck_errors__cons_type_list_to_pieces_3_f_0(ConsDefns_8, Functor_2, Arity_3);
        Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConnectPieces_15, TailPieces_16);
        HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ThisPieces_12, Var_25);
      }
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__type_to_pieces_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_29;

    check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__2404__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_29);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_29));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_to_pieces_4_f_0(
  MR_Word MaybeAddQuotes_6,
  MR_Word Type0_7,
  MR_Word TVarSet_8,
  MR_Word ExternalTypeParams_9)
{
  {
    MR_Word Pieces_10;
    MR_Word Type_11;
    MR_Word Term0_12;
    MR_Word ExistQVars_13;
    MR_Word Term_14;
    MR_Word VarSet_15;
    MR_Word TermPiece_16;
    MR_String Var_18;
    MR_Word Vars_40;
    MR_Word ExistQVars_41;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type0_7, &Type_11);
    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_11, &Term0_12);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[9]), ExternalTypeParams_9, &ExistQVars_13);
    mercury__term__vars_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term0_12, &Vars_40);
    Var_46 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), ExistQVars_13);
    Var_47 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), Vars_40);
    Var_45 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), Var_46, Var_47);
    ExistQVars_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), Var_45);
    if ((ExistQVars_41 == (MR_Word) ((MR_Unsigned) 0U)))
      Term_14 = Term0_12;
    else
    {
      MR_Word QTerm_44;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;

      QTerm_44 = check_hlds__typecheck_errors__make_list_term_1_f_0(ExistQVars_41);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Term0_12));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (QTerm_44));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
      }
      Var_54 = mercury__term__context_init_0_f_0();
      {
        Term_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_14, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[16]));
        MR_hl_field(MR_mktag(0), Term_14, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Term_14, 2) = ((MR_Box) (Var_54));
      }
    }
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TVarSet_8, &VarSet_15);
    Var_18 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_15, (MR_Integer) 0, Term_14);
    {
      TermPiece_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TermPiece_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), TermPiece_16, 1) = ((MR_Box) (Var_18));
    }
    switch (MaybeAddQuotes_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (TermPiece_16));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[447])));
          }
          {
            Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[445])));
            MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_22));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (TermPiece_16));
            MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    return Pieces_10;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__make_list_term_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_6;

      Var_6 = mercury__term__context_init_0_f_0();
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[15]));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
      }
    }
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_17;

      Var_13 = mercury__term__context_init_0_f_0();
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_7));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
      }
      Var_15 = check_hlds__typecheck_errors__make_list_term_1_f_0(Vars_8);
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
      }
      Var_17 = mercury__term__context_init_0_f_0();
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_17));
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word Functor_4,
  MR_Integer Arity_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_Word StrippedFunctor_7;

    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_4, &StrippedFunctor_7);
    succeeded = (Arity_5 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Piece2_12;
      MR_Word Var_17;
      MR_Word Name_9;

      succeeded = ((((MR_tag((MR_Word) Functor_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 1))));
        {
          Piece2_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Piece2_12, 1) = ((MR_Box) (Name_9));
        }
      }
      else
      {
        MR_String Var_16;

        Var_16 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(StrippedFunctor_7);
        {
          Piece2_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Piece2_12, 1) = ((MR_Box) (Var_16));
        }
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Piece2_12));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[442])));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_17));
      }
    }
    else
    {
      MR_Word Var_19;
      MR_String Var_20;

      succeeded = ((((MR_tag((MR_Word) Functor_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
          succeeded = (strcmp(Var_20, (MR_String) "") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Arity_5 - (MR_Unsigned) (MR_Integer) 1);

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[385])));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[443])));
          MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_23));
        }
      }
      else
      {
        MR_Word Var_33;
        MR_Word Var_34;

        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Functor_4));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[444])));
          MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_33));
        }
      }
    }
    return Pieces_6;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_lambda_var_8_f_0(
  MR_Word ClauseContext_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word PredOrFunc_13,
  MR_Word Var_15,
  MR_Word ArgVars_16,
  MR_Word TypeAssignSet_17)
{
  {
    MR_Word Spec_18;

    Spec_18 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_53_93_95_48_8_f_0(ClauseContext_10, UnifyContext_11, Context_12, PredOrFunc_13, Var_15, ArgVars_16, TypeAssignSet_17);
    return Spec_18;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_53_93_95_48_8_f_0(
  MR_Word ClauseContext_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word PredOrFunc_13,
  MR_Word Var_15,
  MR_Word ArgVars_16,
  MR_Word TypeAssignSet_17)
{
  {
    MR_Word Spec_18;
    MR_Word InClauseForPieces_19;
    MR_Word UnifyContextPieces_20;
    MR_Word VarSet_21;
    MR_Word Pieces1_22;
    MR_Word Pieces2_23;
    MR_Word Pieces3_26;
    MR_Word Pieces4b_29;
    MR_Word Pieces4_40;
    MR_Word VerbosePieces_41;
    MR_Word Msg_42;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_150;

    InClauseForPieces_19 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_10);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, (MR_Word) ((MR_Unsigned) 0U), &UnifyContextPieces_20);
    VarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 5))));
    Var_49 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_15);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])));
    Pieces1_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[432])), Var_48);
    Var_93 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_21, Var_15);
    Var_95 = check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(TypeAssignSet_17, Var_15);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_95, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[21])));
    Pieces3_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_93, Var_94);
    switch (PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgs_24;
          MR_Word RetVar_25;
          MR_Word FuncArgVars_35;
          MR_Word Var_55;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_String Var_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_String Var_69;
          MR_Box conv0_RetVar_25;
          MR_Box conv1_Var_36;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ArgVars_16, &FuncArgs_24, &conv0_RetVar_25);
          RetVar_25 = ((MR_Word) (conv0_RetVar_25));
          Var_60 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, FuncArgs_24);
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
          }
          Var_69 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, RetVar_25);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[14])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[384])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[436])));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
          }
          {
            Pieces2_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[435])));
            MR_hl_field(MR_mktag(1), Pieces2_23, 1) = ((MR_Box) (Var_55));
          }
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ArgVars_16, &FuncArgVars_35, &conv1_Var_36);
          if ((FuncArgVars_35 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces4b_29 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[438]));
          else
          {
            MR_Integer Var_104;
            MR_Word Var_108;
            MR_String Var_109;
            MR_String Var_111;
            MR_Integer NumArgVars_152;
            MR_Word Strings_153;
            MR_String JoinedString_154;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), FuncArgVars_35, &NumArgVars_152);
            Var_104 = (MR_Integer) ((MR_Unsigned) NumArgVars_152 - (MR_Unsigned) (MR_Integer) 1);
            mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, ((MR_Box) ((MR_String) ", _")), &Strings_153);
            JoinedString_154 = mercury__string__join_list_2_f_0((MR_String) "", Strings_153);
            Var_111 = mercury__string__f_43_43_2_f_0(JoinedString_154, (MR_String) ") = _");
            Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "func(_", Var_111);
            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (Var_109));
            }
            {
              Pieces4b_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces4b_29, 0) = ((MR_Box) (Var_108));
              MR_hl_field(MR_mktag(1), Pieces4b_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_String Var_83;

          Var_83 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, ArgVars_16);
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[19])));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[439])));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
          }
          {
            Pieces2_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[435])));
            MR_hl_field(MR_mktag(1), Pieces2_23, 1) = ((MR_Box) (Var_78));
          }
          if ((ArgVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces4b_29 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[441]));
          else
          {
            MR_Integer NumArgVars_32;
            MR_Word Strings_33;
            MR_String JoinedString_34;
            MR_Integer Var_117;
            MR_Word Var_121;
            MR_String Var_122;
            MR_String Var_124;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ArgVars_16, &NumArgVars_32);
            Var_117 = (MR_Integer) ((MR_Unsigned) NumArgVars_32 - (MR_Unsigned) (MR_Integer) 1);
            mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_117, ((MR_Box) ((MR_String) ", _")), &Strings_33);
            JoinedString_34 = mercury__string__join_list_2_f_0((MR_String) "", Strings_33);
            Var_124 = mercury__string__f_43_43_2_f_0(JoinedString_34, (MR_String) ")");
            Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "pred(_", Var_124);
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
            }
            {
              Pieces4b_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces4b_29, 0) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(1), Pieces4b_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
    }
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces4b_29, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
    Pieces4_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[434])), Var_135);
    VerbosePieces_41 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet_17, VarSet_21);
    Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_19, UnifyContextPieces_20);
    {
      Var_137 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Var_138));
    }
    Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces3_26, Pieces4_40);
    Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces2_23, Var_143);
    Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_22, Var_142);
    {
      Var_140 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (Var_141));
    }
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_145, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_145, 1) = ((MR_Box) (VerbosePieces_41));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
    }
    {
      Msg_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_42, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Msg_42, 1) = ((MR_Box) (Var_136));
    }
    {
      Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Msg_42));
      MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_150));
    }
    return Spec_18;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_String Var_7;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_5, &Var_7);
    if (succeeded)
    {
      MR_Word Var_10;
      MR_Word Var_11;
      MR_String Var_12;

      Var_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_5);
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[428])));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_10));
      }
    }
    else
      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[430]));
    return Pieces_6;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unif_var_var_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word UnifyContext_9,
  MR_Word Context_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word TypeAssignSet_13)
{
  {
    MR_Word Spec_14;
    MR_Word InClauseForPieces_15;
    MR_Word UnifyContextPieces_16;
    MR_Word VarSet_17;
    MR_Word MainPieces_18;
    MR_Word VerbosePieces_19;
    MR_Word Msg_20;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_77;

    InClauseForPieces_15 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_8);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_9, (MR_Word) ((MR_Unsigned) 0U), &UnifyContextPieces_16);
    VarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_8, (MR_Integer) 5))));
    Var_27 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, X_11);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
    }
    Var_35 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, Y_12);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
    }
    Var_43 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, X_11);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[409])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[427])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[426])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_46 = check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(TypeAssignSet_13, X_11);
    Var_55 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, Y_12);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[378])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    Var_58 = check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(TypeAssignSet_13, Y_12);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_57);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_46, Var_47);
    MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_22, Var_45);
    VerbosePieces_19 = check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(TypeAssignSet_13, VarSet_17);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (InClauseForPieces_15));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (UnifyContextPieces_16));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (MainPieces_18));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_72, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_72, 1) = ((MR_Box) (VerbosePieces_19));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Msg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Msg_20));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_77));
    }
    return Spec_14;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_f_0(
  MR_Word TypeAssignSet0_4,
  MR_Word VarSet_5)
{
  {
    MR_bool succeeded = (TypeAssignSet0_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Pieces_6;
    MR_String FirstWords_8;
    MR_Word MaybeSeq_9;
    MR_Word TypeAssignSet_10;
    MR_Word LaterPieces_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet0_4, (MR_Integer) 1))));
      succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      FirstWords_8 = (MR_String) "The partial type assignment was:";
      MaybeSeq_9 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      FirstWords_8 = (MR_String) "The possible partial type assignments were:";
      MaybeSeq_9 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_3[13]));
    }
    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), TypeAssignSet0_4, &TypeAssignSet_10);
    LaterPieces_11 = check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(TypeAssignSet_10, MaybeSeq_9, VarSet_5);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (FirstWords_8));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[423])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (LaterPieces_11));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[425])));
    return Pieces_6;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = check_hlds__typecheck_errors__string_to_pieces_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_TypeStr_4;

    conv0_TypeStr_4 = check_hlds__typecheck_errors__typestuff_to_typestr_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TypeStr_4));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_2_f_0(
  MR_Word TypeAssignSet_4,
  MR_Word Var_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_Word TypeStuffList_7;
    MR_Word TypeStrs0_8;
    MR_Word TypeStrs_9;
    MR_String TypeStr_10;
    MR_Word Var_12;

    check_hlds__typecheck_errors__get_type_stuff_3_p_0(TypeAssignSet_4, Var_5, &TypeStuffList_7);
    TypeStrs0_8 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[7]), TypeStuffList_7);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeStrs0_8, &TypeStrs_9);
    succeeded = (TypeStrs_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeStr_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeStrs_9, (MR_Integer) 0))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeStrs_9, (MR_Integer) 1))));
      succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Word Var_16;
      MR_String Var_17;

      Var_17 = parse_tree__error_util__add_quotes_1_f_0(TypeStr_10);
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
      }
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[422])));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_15));
      }
    }
    else
    {
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[8]), TypeStrs_9);
      Var_27 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_28, (MR_Word) ((MR_Unsigned) 0U));
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_27, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[334])));
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[330])), Var_26);
    }
    return Pieces_6;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_type_stuff_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeAssign_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailTypeStuffs_9;
      MR_Word ExternalTypeParams_10;
      MR_Word TypeBindings_11;
      MR_Word TVarSet_12;
      MR_Word VarTypes_13;
      MR_Word Type_15;
      MR_Word TypeStuff_16;
      MR_Word Type0_14;

      check_hlds__typecheck_errors__get_type_stuff_3_p_0(TypeAssigns_6, HeadVar__2_2, &TailTypeStuffs_9);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_5, &ExternalTypeParams_10);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_11);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_12);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_13);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_13, HeadVar__2_2, &Type0_14);
      if (succeeded)
        Type_15 = Type0_14;
      else
        Type_15 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[3]));
      {
        TypeStuff_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeStuff_16, 0) = ((MR_Box) (Type_15));
        MR_hl_field(MR_mktag(0), TypeStuff_16, 1) = ((MR_Box) (TVarSet_12));
        MR_hl_field(MR_mktag(0), TypeStuff_16, 2) = ((MR_Box) (TypeBindings_11));
        MR_hl_field(MR_mktag(0), TypeStuff_16, 3) = ((MR_Box) (ExternalTypeParams_10));
      }
      succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), ((MR_Box) (TypeStuff_16)), TailTypeStuffs_9);
      if (succeeded)
        *HeadVar__3_3 = TailTypeStuffs_9;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeStuff_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypeStuffs_9));
        }
    }
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7)
{
  {
    MR_Word Spec_8;
    MR_Word Msgs_9;

    Msgs_9 = check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0(ClauseContext_5, Context_6, OverloadedSymbolMap_7, (MR_Integer) 1);
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Msgs_9));
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word OverloadedSymbolMap_7)
{
  {
    MR_Word Spec_8;
    MR_Word Msgs_9;

    Msgs_9 = check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0(ClauseContext_5, Context_6, OverloadedSymbolMap_7, (MR_Integer) 0);
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Msgs_9));
    }
    return Spec_8;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Msgs_7;

    conv2_Msgs_7 = check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Msgs_7));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Msgs_7;

    conv1_Msgs_7 = check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Msgs_7));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_116;

    conv0_HeadVar__2_116 = check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__548__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_116));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word OverloadedSymbolMap_8,
  MR_Word IsError_9)
{
  {
    MR_Word Msgs_10;
    MR_Word InClauseForPieces_11;
    MR_Word InitComponent_13;
    MR_Word VerboseComponent_15;
    MR_Word FirstMsg_16;
    MR_Word OverloadedSymbols_17;
    MR_Word OverloadedSymbolsSortedContexts_18;
    MR_Word Var_63;
    MR_Word Var_64;

    InClauseForPieces_11 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_6);
    switch (IsError_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InitPieces_12;

          InitPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[163])));
          {
            InitComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InitComponent_13, 0) = ((MR_Box) (InitPieces_12));
          }
          VerboseComponent_15 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[419]));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitPieces_104;

          InitPieces_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[169])));
          {
            InitComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InitComponent_13, 0) = ((MR_Box) (InitPieces_104));
          }
          VerboseComponent_15 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[420]));
        }
        break;
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (VerboseComponent_15));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (InitComponent_13));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      FirstMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMsg_16, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), FirstMsg_16, 1) = ((MR_Box) (Var_63));
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]), OverloadedSymbolMap_8, &OverloadedSymbols_17);
    OverloadedSymbolsSortedContexts_18 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[6]), OverloadedSymbols_17);
    if ((OverloadedSymbolsSortedContexts_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
        MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OverloadedSymbolsSortedContexts_18, (MR_Integer) 1))));
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OverloadedSymbolsSortedContexts_18, (MR_Integer) 0))));

      if ((Var_148 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Contexts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_149, (MR_Integer) 1))));
        MR_Word SecondPieces_22;
        MR_Word SecondMsg_29;
        MR_Word ModuleInfo_30;
        MR_Word DetailMsgsList_31;
        MR_Word DetailMsgs_32;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_Word Var_102;

        if ((Contexts_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.too_much_overloading_to_msgs\'/4", (MR_String) "no contexts");
        }
        else
        {
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contexts_20, (MR_Integer) 1))));

          if ((Var_150 == (MR_Word) ((MR_Unsigned) 0U)))
            SecondPieces_22 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[175]));
          else
            SecondPieces_22 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[178]));
        }
        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (SecondPieces_22));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          SecondMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SecondMsg_29, 0) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), SecondMsg_29, 1) = ((MR_Box) (Var_98));
        }
        ModuleInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_6, (MR_Integer) 0))));
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_2));
          MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (ModuleInfo_30));
        }
        DetailMsgsList_31 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Var_101, OverloadedSymbolsSortedContexts_18);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), DetailMsgsList_31, &DetailMsgs_32);
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (SecondMsg_29));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (DetailMsgs_32));
        }
        {
          Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
          MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (Var_102));
        }
      }
      else
      {
        MR_Word SecondMsg_131;
        MR_Word ModuleInfo_132;
        MR_Word DetailMsgsList_133;
        MR_Word DetailMsgs_134;
        MR_Word Var_138;
        MR_Word Var_139;

        {
          SecondMsg_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SecondMsg_131, 0) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), SecondMsg_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[421])));
        }
        ModuleInfo_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_6, (MR_Integer) 0))));
        {
          Var_138 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_3));
          MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (ModuleInfo_132));
        }
        DetailMsgsList_133 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Var_138, OverloadedSymbolsSortedContexts_18);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), DetailMsgsList_133, &DetailMsgs_134);
        {
          Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (SecondMsg_131));
          MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (DetailMsgs_134));
        }
        {
          Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
          MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (Var_139));
        }
      }
    }
    return Msgs_10;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word FirstRegion_11,
  MR_Word SecondRegion_12,
  MR_Word LaterRegions_13)
{
  {
    MR_Word Spec_14;
    MR_Word PredPieces_15;
    MR_Word FrontPieces_16;
    MR_Word Context_17;
    MR_Word FrontMsg_18;
    MR_Word ContextMsgs_19;
    MR_Word Msgs_20;
    MR_Word Var_22;
    MR_Word Var_29;
    MR_Word Var_30;

    PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[418])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (PredPieces_15));
    }
    FrontPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_22, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_17);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (FrontPieces_16));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FrontMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FrontMsg_18, 0) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), FrontMsg_18, 1) = ((MR_Box) (Var_29));
    }
    check_hlds__typecheck_errors__report_non_contiguous_clause_contexts_6_p_0(PredPieces_15, (MR_Integer) 1, FirstRegion_11, SecondRegion_12, LaterRegions_13, &ContextMsgs_19);
    {
      Msgs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_20, 0) = ((MR_Box) (FrontMsg_18));
      MR_hl_field(MR_mktag(1), Msgs_20, 1) = ((MR_Box) (ContextMsgs_19));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Msgs_20));
    }
    return Spec_14;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_non_contiguous_clause_contexts_6_p_0(
  MR_Word PredPieces_7,
  MR_Integer GapNumber_8,
  MR_Word FirstRegion_9,
  MR_Word SecondRegion_10,
  MR_Word LaterRegions_11,
  MR_Word * Msgs_12)
{
  {
    MR_bool succeeded = (GapNumber_8 == (MR_Integer) 1);
    MR_Word FirstUpperContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRegion_9, (MR_Integer) 3))));
    MR_Word SecondLowerContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRegion_10, (MR_Integer) 2))));
    MR_Word GapPieces_21;
    MR_Word FirstPieces_22;
    MR_Word SecondPieces_23;
    MR_Word FirstMsg_24;
    MR_Word SecondMsg_25;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_47;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;

    if (succeeded)
      succeeded = (LaterRegions_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      GapPieces_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (GapNumber_8));
      }
      {
        GapPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GapPieces_21, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), GapPieces_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[416])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (GapPieces_21));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[417])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (PredPieces_7));
    }
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[159])));
    FirstPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_34);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[161])));
    SecondPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_47);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (FirstPieces_22));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FirstMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMsg_24, 0) = ((MR_Box) (FirstUpperContext_16));
      MR_hl_field(MR_mktag(0), FirstMsg_24, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (SecondPieces_23));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SecondMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SecondMsg_25, 0) = ((MR_Box) (SecondLowerContext_19));
      MR_hl_field(MR_mktag(0), SecondMsg_25, 1) = ((MR_Box) (Var_60));
    }
    if ((LaterRegions_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_66;

      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (SecondMsg_25));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Msgs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstMsg_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_66));
      }
    }
    else
    {
      MR_Word FirstLaterRegion_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterRegions_11, (MR_Integer) 0))));
      MR_Word LaterLaterRegions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterRegions_11, (MR_Integer) 1))));
      MR_Word LaterMsgs_28;
      MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) GapNumber_8 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word Var_65;

      check_hlds__typecheck_errors__report_non_contiguous_clause_contexts_6_p_0(PredPieces_7, Var_63, SecondRegion_10, FirstLaterRegion_26, LaterLaterRegions_27, &LaterMsgs_28);
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (SecondMsg_25));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (LaterMsgs_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Msgs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstMsg_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_65));
      }
    }
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_Word Spec_8;
    MR_Word PredPieces_9;
    MR_Word Pieces_10;
    MR_Word Context_11;
    MR_Word Msg_12;
    MR_Word Var_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_35;

    PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[415])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (PredPieces_9));
    }
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 38) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2])));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_35));
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_no_clauses_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_Word Spec_8;
    MR_Word PredPieces_9;
    MR_Word Pieces_10;
    MR_Word Context_11;
    MR_Word Msg_12;
    MR_Word Var_14;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_26;

    PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[414])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (PredPieces_9));
    }
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_26));
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(
  MR_Word Context_6,
  MR_String EventName_7,
  MR_Word EventArgTypes_8,
  MR_Word Args_9)
{
  {
    MR_Word Spec_10;
    MR_Word Pieces_11;
    MR_Word Msg_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_22;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;
    MR_Integer Arity_47;
    MR_Word Arities_51;
    MR_Word RightAritiesPieces_52;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_64;
    MR_Word Var_67;

    Arity_47 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), Args_9);
    Var_22 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_8);
    {
      Arities_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Arities_51, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Arities_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    RightAritiesPieces_52 = check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(Arities_51);
    Var_63 = mercury__string__int_to_string_1_f_0(Arity_47);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[383])));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (RightAritiesPieces_52));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[382])));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[381])));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
    }
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[385])));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (EventName_7));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[413])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, Var_24);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[412])), Var_17);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_38));
    }
    return Spec_10;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(
  MR_Word Context_4,
  MR_String EventName_5)
{
  {
    MR_Word Spec_6;
    MR_Word Pieces_7;
    MR_Word Msg_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_22;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (EventName_5));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[410])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[408])));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Pieces_7));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_8, 0) = ((MR_Box) (Context_4));
      MR_hl_field(MR_mktag(0), Msg_8, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Msg_8));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_22));
    }
    return Spec_6;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_pred_call_error_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word PredCallId_7)
{
  {
    MR_Word Spec_8;
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredCallId_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredCallId_7, (MR_Integer) 1))));
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 0))));
    MR_Word PredicateTable_13;
    MR_Word PredMarkers_14;
    MR_Word IsFullyQualified_15;
    MR_Word OtherIds_16;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_12, &PredicateTable_13);
    PredMarkers_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 2))));
    IsFullyQualified_15 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(PredMarkers_14);
    hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_13, IsFullyQualified_15, PredOrFunc_9, SymName_10, &OtherIds_16);
    if ((OtherIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UndefMsg_21;
      MR_Word SwitchedPredOrFunc_22;
      MR_Word SwitchedOtherIds_23;
      MR_Word Msgs_27;

      UndefMsg_21 = check_hlds__typecheck_errors__report_error_undef_pred_3_f_0(ClauseContext_5, Context_6, PredCallId_7);
      switch (PredOrFunc_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          SwitchedPredOrFunc_22 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
          SwitchedPredOrFunc_22 = (MR_Integer) 1;
          break;
      }
      hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_13, IsFullyQualified_15, SwitchedPredOrFunc_22, SymName_10, &SwitchedOtherIds_23);
      if ((SwitchedOtherIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Msgs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msgs_27, 0) = ((MR_Box) (UndefMsg_21));
          MR_hl_field(MR_mktag(1), Msgs_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word KindMsg_26;
        MR_Word Var_29;
        MR_Word Pieces_46;
        MR_Word Var_90;
        MR_Word Var_91;

        switch (SwitchedPredOrFunc_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_65;
              MR_Word Var_68;
              MR_Word Var_69;

              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), Var_69, 1) = (MR_Box) ((MR_Unsigned) (SwitchedPredOrFunc_22));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[60])));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[407])));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
              }
              {
                Pieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[406])));
                MR_hl_field(MR_mktag(1), Pieces_46, 1) = ((MR_Box) (Var_65));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_49;
              MR_Word Var_52;
              MR_Word Var_53;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), Var_53, 1) = (MR_Box) ((MR_Unsigned) (SwitchedPredOrFunc_22));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[63])));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[407])));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
              }
              {
                Pieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[406])));
                MR_hl_field(MR_mktag(1), Pieces_46, 1) = ((MR_Box) (Var_49));
              }
            }
            break;
        }
        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Pieces_46));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          KindMsg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), KindMsg_26, 0) = ((MR_Box) (Context_6));
          MR_hl_field(MR_mktag(0), KindMsg_26, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (KindMsg_26));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msgs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msgs_27, 0) = ((MR_Box) (UndefMsg_21));
          MR_hl_field(MR_mktag(1), Msgs_27, 1) = ((MR_Box) (Var_29));
        }
      }
      {
        Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Msgs_27));
      }
    }
    else
    {
      MR_Word Preds_19;
      MR_Word Arities_20;

      hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_13, &Preds_19);
      hlds__hlds_error_util__find_pred_arities_3_p_0(Preds_19, OtherIds_16, &Arities_20);
      Spec_8 = check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0(ClauseContext_5, Context_6, PredCallId_7, Arities_20);
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_undef_pred_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word SimpleCallId_7)
{
  {
    MR_bool succeeded;
    MR_Word Msg_8;
    MR_Word PredName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_7, (MR_Integer) 1))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_7, (MR_Integer) 2))));
    MR_Word InClauseForPieces_12;
    MR_Word InClauseForComponent_13;
    MR_Word Components_18;
    MR_Word Var_196;
    MR_String Var_24;

    InClauseForPieces_12 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_5);
    {
      InClauseForComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InClauseForComponent_13, 0) = ((MR_Box) (InClauseForPieces_12));
    }
    switch (Arity_11) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 4:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
        succeeded = (strcmp(Var_24, (MR_String) "->") == 0);
      }
    }
    if (succeeded)
      Components_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[397]));
    else
    {
      MR_String Var_55;

      switch (Arity_11) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_55 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
          succeeded = (strcmp(Var_55, (MR_String) "else") == 0);
        }
      }
      if (succeeded)
        Components_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[81]));
      else
      {
        MR_String Var_70;

        switch (Arity_11) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
            succeeded = (strcmp(Var_70, (MR_String) "if") == 0);
          }
        }
        if (succeeded)
          Components_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[398]));
        else
        {
          MR_String Var_96;

          switch (Arity_11) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_96 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
              succeeded = (strcmp(Var_96, (MR_String) "then") == 0);
            }
          }
          if (succeeded)
            Components_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[401]));
          else
          {
            MR_String Var_145;
            MR_Integer Var_146;

            succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_145 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
              succeeded = (strcmp(Var_145, (MR_String) "apply") == 0);
              if (succeeded)
              {
                Var_146 = (MR_Integer) 1;
                succeeded = (Arity_11 >= Var_146);
              }
            }
            if (succeeded)
              Components_18 = check_hlds__typecheck_errors__report_apply_instead_of_pred_0_f_0();
            else
            {
              MR_String PurityString_20;

              succeeded = (Arity_11 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
                if (succeeded)
                {
                  PurityString_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
                  if ((strcmp(PurityString_20, (MR_String) "impure") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(PurityString_20, (MR_String) "semipure") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
              }
              if (succeeded)
              {
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word MainPieces_201;
                MR_Word MainComponent_202;

                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PurityString_20));
                }
                {
                  Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[103])));
                }
                {
                  MainPieces_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MainPieces_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[379])));
                  MR_hl_field(MR_mktag(1), MainPieces_201, 1) = ((MR_Box) (Var_149));
                }
                {
                  MainComponent_202 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MainComponent_202, 0) = ((MR_Box) (MainPieces_201));
                }
                {
                  Components_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Components_18, 0) = ((MR_Box) (MainComponent_202));
                  MR_hl_field(MR_mktag(1), Components_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[403])));
                }
              }
              else
              {
                MR_String Var_165;

                succeeded = (Arity_11 == (MR_Integer) 2);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_165 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_10, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_165, (MR_String) "some") == 0);
                  }
                }
                if (succeeded)
                  Components_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[404]));
                else
                {
                  MR_Word Var_184;
                  MR_Word Var_185;
                  MR_Word Var_194;
                  MR_Word MainPieces_206;
                  MR_Word Pieces_207;

                  {
                    Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                    MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (SimpleCallId_7));
                  }
                  {
                    Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
                    MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MainPieces_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MainPieces_206, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[405])));
                    MR_hl_field(MR_mktag(1), MainPieces_206, 1) = ((MR_Box) (Var_184));
                  }
                  if (((MR_tag((MR_Word) PredName_10)) == (MR_Integer) 1))
                  {
                    MR_Word ModuleQualifier_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_10, (MR_Integer) 0))));
                    MR_Word Var_193;

                    Var_193 = check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0(ClauseContext_5, ModuleQualifier_21);
                    Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_206, Var_193);
                  }
                  else
                  {
                    Pieces_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_206, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
                  }
                  {
                    Var_194 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_194, 0) = ((MR_Box) (Pieces_207));
                  }
                  {
                    Components_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Components_18, 0) = ((MR_Box) (Var_194));
                    MR_hl_field(MR_mktag(1), Components_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
        }
      }
    }
    {
      Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (InClauseForComponent_13));
      MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Components_18));
    }
    {
      Msg_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_8, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_8, 1) = ((MR_Box) (Var_196));
    }
    return Msg_8;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__error_util__describe_sym_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__conv0_UnimportedParent_6));
    ((env_ptr)->check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__cont)((env_ptr)->check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0_s env;

    (env).check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__cont = cont;
    (env).check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__typecheck_errors__get_unimported_parent_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).check_hlds__typecheck_errors__maybe_report_missing_import_addendum_3_f_0_3_env_0__conv0_UnimportedParent_6, check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_2, &env);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word ModuleQualifier_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 0))));
    MR_Word VisibleModules_8;
    MR_Word MatchingVisibleModules_9;
    MR_Word Var_13;

    hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_7, &VisibleModules_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleQualifier_5));
    }
    mercury__set__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_13, VisibleModules_8, &MatchingVisibleModules_9);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingVisibleModules_9);
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Word Var_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (ModuleQualifier_5));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[339])));
      }
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[390])));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_15));
      }
    }
    else
    {
      MR_Word UnimportedParents_10;
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_f_0_3));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (VisibleModules_8));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (MatchingVisibleModules_9));
      }
      mercury__solutions__solutions_2_p_1((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_26, &UnimportedParents_10);
      if ((UnimportedParents_10 == (MR_Word) ((MR_Unsigned) 0U)))
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15]));
      else
      {
        MR_Word Var_33;
        MR_Word UnimportedParentDescs_44;
        MR_Word AllUnimportedParents_45;
        MR_Word Var_48;

        UnimportedParentDescs_44 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[5]), UnimportedParents_10);
        AllUnimportedParents_45 = parse_tree__error_util__list_to_pieces_1_f_0(UnimportedParentDescs_44);
        succeeded = (AllUnimportedParents_45 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllUnimportedParents_45, (MR_Integer) 1))));
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word Var_53;

          Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AllUnimportedParents_45, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[339])));
          Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[392])), Var_53);
        }
        else
        {
          MR_Word Var_64;

          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AllUnimportedParents_45, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[341])));
          Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[394])), Var_64);
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_33));
        }
      }
    }
    return Pieces_6;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_apply_instead_of_pred_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[389]));
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_18;

    check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__2241__1_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_18);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word SimpleCallId_8,
  MR_Word Arities_9)
{
  {
    MR_bool succeeded;
    MR_Word Spec_10;
    MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimpleCallId_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_8, (MR_Integer) 1))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_8, (MR_Integer) 2))));
    MR_Word Pieces_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Arity_54;
    MR_Word Arities_58;
    MR_Word RightAritiesPieces_59;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_String Var_70;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_60;

    Var_15 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_6);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (PredOrFunc_11));
    }
    succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
      succeeded = (Var_60 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &Arity_54, Arity_13);
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[4]), Arities_9, &Arities_58);
    }
    else
    {
      Arity_54 = Arity_13;
      Arities_58 = Arities_9;
    }
    RightAritiesPieces_59 = check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(Arities_58);
    Var_70 = mercury__string__int_to_string_1_f_0(Arity_54);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[383])));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (RightAritiesPieces_59));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[382])));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[381])));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[385])));
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (SymName_12));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[386])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[13])), Var_28);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_22, Var_24);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[380])), Var_21);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_16);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Pieces_14));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_43));
    }
    return Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Arity_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Arities_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailPieces_6;
      MR_Word ArityPiece_7;
      MR_String Var_12;

      TailPieces_6 = check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(Arities_4);
      Var_12 = mercury__string__int_to_string_1_f_0(Arity_3);
      {
        ArityPiece_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ArityPiece_7, 0) = ((MR_Box) (Var_12));
      }
      if ((Arities_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (ArityPiece_7));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (TailPieces_6));
        }
      else
      {
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arities_4, (MR_Integer) 1))));

        if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[377])));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (TailPieces_6));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (ArityPiece_7));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_18));
          }
        }
        else
        {
          MR_Word Var_14;

          {
            Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[378])));
            MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (TailPieces_6));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (ArityPiece_7));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_14));
          }
        }
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(
  MR_Word ClauseContext_3)
{
  {
    MR_Word Pieces_4;
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_3, (MR_Integer) 0))));
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_3, (MR_Integer) 1))));
    MR_Word PredIdPieces_7;
    MR_Word Var_9;

    PredIdPieces_7 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[376])));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (PredIdPieces_7));
    }
    Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_9, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])));
    return Pieces_4;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____actual_expected_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____actual_expected_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____actual_expected_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____actual_expected_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____cons_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____cons_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____cons_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_add_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____maybe_add_quotes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_add_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____maybe_add_quotes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____mismatch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____mismatch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_error_goal_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____type_error_goal_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_error_goal_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____type_error_goal_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____type_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____type_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_stuff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____type_stuff_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_stuff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____type_stuff_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____var_vector_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____var_vector_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____var_vector_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____var_vector_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__typecheck_errors__init(void)
{
}

void mercury__check_hlds__typecheck_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_kind_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_maybe_add_quotes_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_spec_and_maybe_actual_expected_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_error_goal_context_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_var_vector_kind_0);
}

void mercury__check_hlds__typecheck_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_errors.
