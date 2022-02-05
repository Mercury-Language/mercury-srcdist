/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-05
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s {
  MR_Word check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefnList_16;
  MR_bool check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded;
  jmp_buf check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44;
  MR_Word check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__Var_63;
  MR_Box check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__conv2_ConsDefn_44;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_errors__pair__pti_pair_2__plain_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

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

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_some_type_stuff_match_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0[2];

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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0[4];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0[4];

static const MR_DuArgLocn check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0[1];

static const MR_NotagFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0;

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

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__2801__1_2_p_0(
  MR_Integer LambdaHeadVar__1_17,
  MR_Integer * LambdaHeadVar__2_18);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_any_missing_module_qualifiers__2596__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__maybe_report_missing_import_addendum__2515__1_2_f_0(
  MR_Word ModuleQualifierList_16,
  MR_Word LambdaHeadVar__1_36);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons_std__1729__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_18);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__640__1_1_f_0(
  MR_Word HeadVar__1_112);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1593__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_47);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1584__1_2_p_0(
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
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0(
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

static void MR_CALL 
check_hlds__typecheck_errors__get_all_type_stuffs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(
  MR_Word ActualExpected_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__expected_types_to_pieces_2_f_0(
  MR_Word ActualExpected_4,
  MR_Word Pieces0_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word ArgTypeStuff_5);

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
check_hlds__typecheck_errors__accumulate_matching_cons_module_names_4_p_0(
  MR_Word FunctorSymName_5,
  MR_Word ConsDefn_6,
  MR_Word STATE_VARIABLE_ModuleNames_0_15,
  MR_Word * STATE_VARIABLE_ModuleNames_16);

static void MR_CALL 
check_hlds__typecheck_errors__substitute_types_check_match_7_p_0(
  MR_Word InstVarSet_8,
  MR_Word ExpType_9,
  MR_Word TypeStuff_10,
  MR_Word STATE_VARIABLE_TypeMismatches_0_34,
  MR_Word * STATE_VARIABLE_TypeMismatches_35,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_36,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_37);

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

static void MR_CALL 
check_hlds__typecheck_errors__accumulate_matching_pf_module_names_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word SymName_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleNames_0_16,
  MR_Word * STATE_VARIABLE_ModuleNames_17);

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_5_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word InitComp_10,
  MR_Word ConsErrors_11,
  MR_Word Functor_12,
  MR_Integer Arity_13,
  MR_Word * Spec_14);

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

static void MR_CALL 
check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0(
  MR_Word PredicateTable_5,
  MR_Word PredOrFunc_6,
  MR_Word SymName_7);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__syntax_functor_components_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * Components_3);

static void MR_CALL 
check_hlds__typecheck_errors__language_builtin_functor_components_3_p_0(
  MR_String Name_4,
  MR_Integer Arity_5,
  MR_Word * Components_6);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_arg_var_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__arg_type_assign_set_msg_to_verbose_pieces_4_p_0(
  MR_Word Info_5,
  MR_Word ArgTypeAssignSet_6,
  MR_Word VarSet_7,
  MR_Word * VerboseComponents_8);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__args_type_assign_set_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeSeq_2,
  MR_Word VarSet_3);

static void MR_CALL 
check_hlds__typecheck_errors__get_arg_type_stuff_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_8_f_0_1(
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

static void MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(
  MR_Word Var_15,
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_stuff_to_actual_expected_3_f_0(
  MR_Word InstVarSet_5,
  MR_Word Type_6,
  MR_Word VarTypeStuff_7);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(
  MR_Word Type_2);

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
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_6(
  void * env_ptr_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_4_f_0(
  MR_Word VarSet_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word TypeAssignSet_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word First_2,
  MR_Word VarSet_3,
  MR_Word Functor_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(
  MR_Word Specials_3);

static void MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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
check_hlds__typecheck_errors__find_mismatched_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_8_p_0(
  MR_Word InstVarSet_1,
  MR_Integer CurArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word TypeAssignSet_4,
  MR_Word STATE_VARIABLE_RevSubsumesMismatches_0_5,
  MR_Word * STATE_VARIABLE_RevSubsumesMismatches_6,
  MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_0_7,
  MR_Word * STATE_VARIABLE_RevNoSubsumeMismatches_8);

static void MR_CALL 
check_hlds__typecheck_errors__get_all_type_stuffs_remove_dups_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_functor_type_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__get_all_transformed_type_stuffs__ho3_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__nosuffix_integer_pieces_0_f_0(void);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_4_f_0(
  MR_Word InstVarSet_6,
  MR_Word Functor_7,
  MR_Integer Arity_8,
  MR_Word ConsDefnList_9);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(
  MR_Word InstVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer Arity_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word Functor_4,
  MR_Integer Arity_5);

static void MR_CALL 
check_hlds__typecheck_errors__get_inst_varset_2_p_0(
  MR_Word ClauseContext_3,
  MR_Word * InstVarSet_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5);

static void MR_CALL 
check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(
  MR_Word Info_5,
  MR_Word TypeAssignSet_6,
  MR_Word VarSet_7,
  MR_Word * VerboseComponents_8);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_set_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeSeq_2,
  MR_Word VarSet_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_to_pieces_3_f_0(
  MR_Word TypeAssign_5,
  MR_Word MaybeSeq_6,
  MR_Word VarSet_7);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String Operator_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeBindings_3,
  MR_Word TypeVarSet_4,
  MR_Word FoundOne_5);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_types_to_pieces_6_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Word TypeBindings_4,
  MR_Word TypeVarSet_5,
  MR_Word FoundOne_6);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(
  MR_Word InstVarSet_5,
  MR_Word TypeAssignSet_6,
  MR_Word Var_7);

static void MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_pred_call_error_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_pred_call_error_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_String ItemName_8,
  MR_Word ModuleNamesSet0_9);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_undef_pred_5_p_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word * Msg_9,
  MR_Word * MissingImportModules_10);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0(
  MR_Word ClauseContext_5,
  MR_Word ModuleQualifier_6,
  MR_Word * Pieces_7,
  MR_Word * MissingImportModules_8);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_apply_instead_of_pred_0_f_0(void);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word Arities_9);

static void MR_CALL 
check_hlds__typecheck_errors__error_num_args_to_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__error_num_args_to_pieces_3_f_0(
  MR_Word MaybePredOrFunc_5,
  MR_Integer Arity0_6,
  MR_Word Arities0_7);

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
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0_10001(
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


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[618][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[16][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[23][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[11][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[8][6];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[1][4];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[1][10];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_9[4][7];


/* sealed */ struct check_hlds__typecheck_errors__vector_common_type_10_0_s {
  const MR_String check_hlds__typecheck_errors__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_10_0_s check_hlds__typecheck_errors_vector_common_10[96];



static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[618][2] = {
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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
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
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[2]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: there is no event named"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in event"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no clauses for"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: no clauses for "))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error in unification of variable"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and variable"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error in unification of"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "func("))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":- ...\':"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "pred("))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "lambda expression has type"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "func = _"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in unification of"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and term"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error in"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type error:"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type of"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match its expected type;"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has overloaded actual/expected types {"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type was either"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: ambiguous overloading causes type ambiguity."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Possible type assignments include:"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraint:"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraints:"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The foreign language code for"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should define the variable"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot coerce from"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the predicate in the"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module that used to be named"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has been renamed to"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every if-then must have an else."))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Note: the else part is not optional."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: unmatched"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[116])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[120])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Every if-then must have an"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[116])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part is not optional."))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[135])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Note: the"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "marker in an inappropriate place."))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Such markers only belong before predicate calls."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a list of variables."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error in existential quantification:"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: undefined"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the predicate"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the Mercury standard library has been renamed to"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be used as an expression, not as a goal."))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[155])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the language construct"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply(Func, X, Y) :- apply(Func, X, Y)."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with the appropriate arity, e.g."))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is defined"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[167])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = my_apply(OldFunc, X)"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[169])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = apply(OldFunc, X)"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "e.g. instead of "))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use a forwarding function:"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you are trying to curry a higher-order function,"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke a higher-order predicate,"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[191])))
  },
  /* row 194 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[193])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "\?)"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) " = ..."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[196])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Perhaps you forgot to add"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[198])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[202])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[203])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There is a *function* with that name, however."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[204])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: highly ambiguous overloading."))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It may also make your code difficult to understand."))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This may cause type-checking to be very slow."))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[210])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: excessively ambiguous overloading."))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This caused the type checker to exceed its limits."))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[210])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the following context."))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following symbol was overloaded"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[218])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the following contexts."))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[222])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following symbols were overloaded"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[222])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The function symbol"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])))
  },
  /* row 229 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[228])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[229])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is also overloaded here."))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[231]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The predicate symbol"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the builtin operator constructor"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the builtin type constructor"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "get"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the type constructor"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "set"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the type constructor"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has one of the following type mismatches."))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[246]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Possibility"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "actual type"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[251]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected type"))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[253]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Another possible reason for the error is that"))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[256]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the signatures of the option processing predicates"))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function."))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[260]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "option_error_to_string"))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[262]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[261])))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which can be converted to a string by calling the"))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[264]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[263])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Errors are now returned in a structured form,"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[266]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[265])))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have changed recently."))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[267])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the actual type is the same as the expected type of"))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[274]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[275])))
  },
  /* row 277 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[276])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is variable"))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[42])))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be used as a goal, not as an expression."))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[281]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[283]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if <goal> then yes else no"))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[285]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[284])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as a boolean function, you should write"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[286])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you are trying to use a goal"))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[289]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[288])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "check that the module is correctly imported.)"))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[291]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(If it is defined in a separate module,"))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[293]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[292])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is actually defined."))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[295]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[294])))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[296])))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and that the functor"))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[298]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[297])))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "make sure that you have the arity correct,"))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[300]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[299])))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and not as an application of the language builtin call/N,"))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[302]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[301])))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as an expression"))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[304]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[303])))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[305])))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you really are trying to use"))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[307]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[306])))
  },
  /* row 309 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[308])))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the Mercury Language Reference Manual."))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[310]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[309])))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "see the \"Creating higher-order terms\" section"))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[312]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[311])))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[313])))
  },
  /* row 315 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[314])))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[315])))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[316])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[317])))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[318])))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[319])))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you should use"))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[321]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[320])))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke a higher-order function,"))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[323]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[322])))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "state variable operator."))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[325]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!"))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[327]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[326])))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid use of"))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[329]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[328])))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[331]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[332])))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[334]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[333])))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You probably meant to use"))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[336]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[335])))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[338]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-->"))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[340]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[339])))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[341])))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error in DCG lambda expression"))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[343]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[342])))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[111])))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "./2"))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[346]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])))
  },
  /* row 348 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[347])))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[348])))
  },
  /* row 350 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[6])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[350]))
  },
  /* row 352 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[351]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[349])))
  },
  /* row 353 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the list constructor is now"))
  },
  /* row 354 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[353]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[352])))
  },
  /* row 355 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 356 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[355]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[339])))
  },
  /* row 357 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[356])))
  },
  /* row 358 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "syntax error in lambda expression"))
  },
  /* row 359 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[358]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[357])))
  },
  /* row 360 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 361 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[360]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[339])))
  },
  /* row 362 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[361])))
  },
  /* row 363 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid use of field update operator"))
  },
  /* row 364 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[363]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[362])))
  },
  /* row 365 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This is probably some kind of syntax error."))
  },
  /* row 366 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[365]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 367 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row 368 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[367]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[339])))
  },
  /* row 369 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[368])))
  },
  /* row 370 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: invalid use of field selection operator"))
  },
  /* row 371 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[370]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[369])))
  },
  /* row 372 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not a variable or other term."))
  },
  /* row 373 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[372]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 374 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The field name must be an atom,"))
  },
  /* row 375 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[374]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[373])))
  },
  /* row 376 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[365]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[375])))
  },
  /* row 377 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[132])))
  },
  /* row 378 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[377])))
  },
  /* row 379 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[378])))
  },
  /* row 380 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: undefined symbol"))
  },
  /* row 381 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 382 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[381]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 383 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in use of constructor"))
  },
  /* row 384 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 385 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 386 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row 387 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 388 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for those foreign types."))
  },
  /* row 389 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[388]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 390 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which are not implemented"))
  },
  /* row 391 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[390]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[389])))
  },
  /* row 392 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in all predicates and functions"))
  },
  /* row 393 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[392]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[391])))
  },
  /* row 394 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it is treated as an abstract type"))
  },
  /* row 395 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[394]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[393])))
  },
  /* row 396 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[395])))
  },
  /* row 397 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Field"))
  },
  /* row 398 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row 399 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[398]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 400 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be updated because"))
  },
  /* row 401 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[400]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[399])))
  },
  /* row 402 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 403 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row 404 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[403]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 405 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row 406 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row 407 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[406]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 408 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the types of field"))
  },
  /* row 409 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and some other field"))
  },
  /* row 410 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in definition of constructor"))
  },
  /* row 411 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid use of"))
  },
  /* row 412 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "new"))
  },
  /* row 413 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on a constructor of type"))
  },
  /* row 414 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not existentially typed."))
  },
  /* row 415 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[414]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 416 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "\"Syntax\" chapter of the Mercury language reference manual."))
  },
  /* row 417 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[416]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 418 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) " sub-section of the \"Data-terms\" section of the"))
  },
  /* row 419 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[418]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[417])))
  },
  /* row 420 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[419])))
  },
  /* row 421 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "For details see the"))
  },
  /* row 422 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[421]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[420])))
  },
  /* row 423 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is to use \"with_type\"."))
  },
  /* row 424 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[423]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[422])))
  },
  /* row 425 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The way to add an explicit type qualification"))
  },
  /* row 426 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[425]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[424])))
  },
  /* row 427 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to resolve the type ambiguity."))
  },
  /* row 428 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[427]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[426])))
  },
  /* row 429 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You will need to add an explicit type qualification"))
  },
  /* row 430 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[429]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[428])))
  },
  /* row 431 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[278]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 432 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row 433 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "higher-order term (with arity"))
  },
  /* row 434 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functor"))
  },
  /* row 435 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 436 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[435]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 437 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has overloaded type {"))
  },
  /* row 438 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[437]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[436])))
  },
  /* row 439 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 440 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[439]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 441 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 442 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[441]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[440])))
  },
  /* row 443 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "\140"))
  },
  /* row 444 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[443]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 445 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "\'"))
  },
  /* row 446 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[445]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 447 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[437]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])))
  },
  /* row 448 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 449 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[448])))
  },
  /* row 450 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(expected)"))
  },
  /* row 451 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(inferred)"))
  },
  /* row 452 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row 453 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 454 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row 455 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[454]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 456 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The module"))
  },
  /* row 457 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has not been imported.)"))
  },
  /* row 458 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[457]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 459 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The possible parent module"))
  },
  /* row 460 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[459]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 461 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The possible parent modules"))
  },
  /* row 462 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[461]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 463 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have not been imported.)"))
  },
  /* row 464 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[463]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 465 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That"))
  },
  /* row 466 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module"))
  },
  /* row 467 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 468 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[467]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 469 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 470 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[469]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[468])))
  },
  /* row 471 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which does not have an"))
  },
  /* row 472 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[471]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[470])))
  },
  /* row 473 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[472])))
  },
  /* row 474 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in modules"))
  },
  /* row 475 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[474]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 476 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[475])))
  },
  /* row 477 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 478 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[477]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 479 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[469]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[478])))
  },
  /* row 480 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "none of which have"))
  },
  /* row 481 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[480]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[479])))
  },
  /* row 482 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[481])))
  },
  /* row 483 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must always be fully module qualified."))
  },
  /* row 484 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[483]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 485 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[386]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[484])))
  },
  /* row 486 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 487 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[486]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[485])))
  },
  /* row 488 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "accessed via"))
  },
  /* row 489 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[488]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[487])))
  },
  /* row 490 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Note that symbols defined in modules"))
  },
  /* row 491 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[490]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[489])))
  },
  /* row 492 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in inner variable of atomic goal:"))
  },
  /* row 493 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[492]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 494 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the clause head:"))
  },
  /* row 495 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[494]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 496 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row 497 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 498 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of atomic goal:"))
  },
  /* row 499 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[498]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 500 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the first outer variable"))
  },
  /* row 501 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[500]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[499])))
  },
  /* row 502 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 503 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[502]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[501])))
  },
  /* row 504 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the second outer variable"))
  },
  /* row 505 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[504]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[499])))
  },
  /* row 506 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 507 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[506]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[505])))
  },
  /* row 508 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "output variable of atomic goal:"))
  },
  /* row 509 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[508]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 510 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "quantified variable in if-then-else condition:"))
  },
  /* row 511 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[510]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 512 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable of quantification scope:"))
  },
  /* row 513 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[512]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 514 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable of loop control scope:"))
  },
  /* row 515 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[514]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 516 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable of promise_solutions scope:"))
  },
  /* row 517 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[516]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 518 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in initial I/O state variable of try goal:"))
  },
  /* row 519 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[518]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 520 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[502]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[519])))
  },
  /* row 521 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in final I/O state variable of try goal:"))
  },
  /* row 522 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[521]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 523 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[506]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[522])))
  },
  /* row 524 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in arguments of the clause head:"))
  },
  /* row 525 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[524]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 526 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in arguments of event"))
  },
  /* row 527 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 528 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrong number of arguments ("))
  },
  /* row 529 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 530 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "if they are unsigned."))
  },
  /* row 531 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[530]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])))
  },
  /* row 532 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "suffix"))
  },
  /* row 533 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[532]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[531])))
  },
  /* row 534 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u64"))
  },
  /* row 535 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[534]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[533])))
  },
  /* row 536 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[535])))
  },
  /* row 537 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u32"))
  },
  /* row 538 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[537]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[536])))
  },
  /* row 539 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[538])))
  },
  /* row 540 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u16"))
  },
  /* row 541 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[540]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[539])))
  },
  /* row 542 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[541])))
  },
  /* row 543 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u8"))
  },
  /* row 544 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[543]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[542])))
  },
  /* row 545 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row 546 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[545]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[544])))
  },
  /* row 547 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "if they are signed, and"))
  },
  /* row 548 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[547]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[546])))
  },
  /* row 549 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[532]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[548])))
  },
  /* row 550 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i64"))
  },
  /* row 551 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[550]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[549])))
  },
  /* row 552 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[551])))
  },
  /* row 553 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i32"))
  },
  /* row 554 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[553]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[552])))
  },
  /* row 555 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[554])))
  },
  /* row 556 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i16"))
  },
  /* row 557 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[556]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[555])))
  },
  /* row 558 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[557])))
  },
  /* row 559 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i8"))
  },
  /* row 560 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[559]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[558])))
  },
  /* row 561 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[545]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[560])))
  },
  /* row 562 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constants of sized integer types should have"))
  },
  /* row 563 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[562]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[561])))
  },
  /* row 564 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[563])))
  },
  /* row 565 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u"))
  },
  /* row 566 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[565]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[564])))
  },
  /* row 567 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the suffix"))
  },
  /* row 568 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[567]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[566])))
  },
  /* row 569 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Unsigned integer constants of the default size"))
  },
  /* row 570 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[569]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[568])))
  },
  /* row 571 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[570])))
  },
  /* row 572 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 573 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[572]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[571])))
  },
  /* row 574 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is always of type"))
  },
  /* row 575 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[574]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[573])))
  },
  /* row 576 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A integer constant that consists only of digits"))
  },
  /* row 577 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[576]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[575])))
  },
  /* row 578 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 579 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[578]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 580 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[200])))
  },
  /* row 581 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[580]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 582 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[581])))
  },
  /* row 583 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[114])))
  },
  /* row 584 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[583]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 585 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[584])))
  },
  /* row 586 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[14])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 587 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[138])))
  },
  /* row 588 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[587]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 589 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[588])))
  },
  /* row 590 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[142])))
  },
  /* row 591 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[590]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 592 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 593 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[491])))
  },
  /* row 594 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[593]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 595 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[212])))
  },
  /* row 596 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[216])))
  },
  /* row 597 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[290])))
  },
  /* row 598 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[337])))
  },
  /* row 599 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[598]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 600 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[599])))
  },
  /* row 601 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[18])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 602 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[345])))
  },
  /* row 603 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[602]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 604 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[603])))
  },
  /* row 605 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[19])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 606 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[20])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 607 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[366])))
  },
  /* row 608 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[607]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 609 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[608])))
  },
  /* row 610 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[376])))
  },
  /* row 611 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[610]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 612 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[22])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[611])))
  },
  /* row 613 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[379])))
  },
  /* row 614 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[613]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 615 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[614])))
  },
  /* row 616 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[430])))
  },
  /* row 617 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[616]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[11])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_errors__error_num_args_to_pieces_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[2])),
    ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[3])),
    ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[4])),
    ((MR_Box) (check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[5])),
    ((MR_Box) (check_hlds__typecheck_errors__report_pred_call_error_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[6])),
    ((MR_Box) (check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_functor_type_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[7])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[8])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_2)),
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
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[2])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[10])),
    ((MR_Box) (check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[23][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "}."))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "} or {"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[118])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Argument"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "Functor"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "list"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\"Explicit type qualification\""))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "<any>"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[159])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[109])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[126])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[130])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[150])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[330])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[344])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[354])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[359])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[364])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[371])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[11][5] = {
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
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_term__type_ctor_info_context_0))
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
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0)),
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_9[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
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


static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_10_0_s check_hlds__typecheck_errors_vector_common_10[96] = {
  /* row 0 */   {     (MR_String) "!" },
  /* row 1 */   {     NULL },
  /* row 2 */   {     NULL },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     (MR_String) ":=" },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) "if" },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) "." },
  /* row 16 */   {     NULL },
  /* row 17 */   {     (MR_String) "->" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     (MR_String) "then" },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) ":-" },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     (MR_String) "else" },
  /* row 28 */   {     NULL },
  /* row 29 */   {     (MR_String) "-->" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "^" },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     (MR_String) "<=" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     (MR_String) "semipure" },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "some" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     (MR_String) "not" },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     (MR_String) "<=>" },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     NULL },
  /* row 65 */   {     (MR_String) "=>" },
  /* row 66 */   {     (MR_String) "all" },
  /* row 67 */   {     (MR_String) "\\=" },
  /* row 68 */   {     NULL },
  /* row 69 */   {     NULL },
  /* row 70 */   {     (MR_String) "call" },
  /* row 71 */   {     NULL },
  /* row 72 */   {     NULL },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     NULL },
  /* row 77 */   {     (MR_String) "," },
  /* row 78 */   {     NULL },
  /* row 79 */   {     NULL },
  /* row 80 */   {     (MR_String) "impure" },
  /* row 81 */   {     NULL },
  /* row 82 */   {     NULL },
  /* row 83 */   {     NULL },
  /* row 84 */   {     NULL },
  /* row 85 */   {     (MR_String) "\\+" },
  /* row 86 */   {     NULL },
  /* row 87 */   {     NULL },
  /* row 88 */   {     NULL },
  /* row 89 */   {     NULL },
  /* row 90 */   {     (MR_String) ";" },
  /* row 91 */   {     NULL },
  /* row 92 */   {     (MR_String) "=" },
  /* row 93 */   {     NULL },
  /* row 94 */   {     NULL },
  /* row 95 */   {     NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____actual_expected_types_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____actual_expected_types_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "actual_expected_types",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_actual_expected_types_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_actual_expected_types_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_actual_expected_types_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_type_stuff_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_type_stuff_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_type_stuff",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_type_stuff_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_type_stuff_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_type_stuff_0,

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
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_2 = {
  (MR_String) "arg_vector_plain_pred_call",
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_kind_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_kind_0[6] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_5,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_4,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_3,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_kind_0_2
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_vector_kind_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_vector_kind_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_vector_kind",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_kind_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_kind_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_kind_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_vector_type_error",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____cons_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____cons_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "cons_error",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_cons_error_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_cons_error_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_cons_error_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0 = {
  (MR_String) "actual_does_not_subsume_expected",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1 = {
  (MR_String) "actual_subsumes_expected",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_actual_subsume_expected_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "does_actual_subsume_expected",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_actual_subsume_expected_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0 = {
  (MR_String) "no_type_stuff_matches",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1 = {
  (MR_String) "some_type_stuff_matches",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_some_type_stuff_match_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "does_some_type_stuff_match",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_some_type_stuff_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "mismatch_info",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "spec_and_maybe_actual_expected",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_error_goal_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_error_goal_context_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_error_goal_context_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_error_goal_context",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_error_goal_context_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_error_goal_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_error_goal_context_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0[4] = {
  (MR_String) "expected_type_desc",
  (MR_String) "actual_type_desc",
  (MR_String) "mismatch_subsumes",
  (MR_String) "maybe_special"
};

static const MR_DuArgLocn check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0[4] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0 = {
  (MR_String) "type_mismatch_exp_act",
  INT16_C(4),
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_mismatch",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0,

};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0 = {
  (MR_String) "type_mismatch_special_getopt_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_mismatch_special",
  {     &check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0 },
  {     &check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_stuff_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_stuff_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_stuff",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_stuff_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_stuff_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_stuff_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_var_vector_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____var_vector_kind_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____var_vector_kind_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "var_vector_kind",
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_var_vector_kind_0 },
  {     check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_var_vector_kind_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_var_vector_kind_0,

};

static void MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__2801__1_2_p_0(
  MR_Integer LambdaHeadVar__1_17,
  MR_Integer * LambdaHeadVar__2_18)
{
  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, LambdaHeadVar__2_18, LambdaHeadVar__1_17);
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_any_missing_module_qualifiers__2596__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;

    {
      LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_32, 1) = ((MR_Box) (LambdaHeadVar__1_31));
    }
    return LambdaHeadVar__2_32;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__maybe_report_missing_import_addendum__2515__1_2_f_0(
  MR_Word ModuleQualifierList_16,
  MR_Word LambdaHeadVar__1_36)
{
  {
    MR_Word LambdaHeadVar__2_37;
    MR_Word AncestorMNList_20;
    MR_Word FullList_21;

    AncestorMNList_20 = mdbcomp__sym_name__sym_name_to_list_1_f_0(LambdaHeadVar__1_36);
    FullList_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AncestorMNList_20, ModuleQualifierList_16);
    mdbcomp__sym_name__det_list_to_sym_name_2_p_0(FullList_21, &LambdaHeadVar__2_37);
    return LambdaHeadVar__2_37;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons_std__1729__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_18)
{
  {
    MR_bool succeeded = (Arity_13 == FunctorArity_18);

    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__640__1_1_f_0(
  MR_Word HeadVar__1_112)
{
  {
    MR_Word HeadVar__2_113;

    HeadVar__2_113 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), HeadVar__1_112);
    return HeadVar__2_113;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1593__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_47)
{
  {
    MR_bool succeeded = (Arity_13 == FunctorArity_47);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1584__1_2_p_0(
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
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_21 > Var_22);
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
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[13]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
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
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Var_75)), ((MR_Box) (ArgY4_47)));
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
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_74, ArgY1_11);
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
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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

                  parse_tree__prog_data____Compare____sym_name_arity_0_0(HeadVar__1_1, Var_75, ArgY1_24);
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
              succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(ArgX1_7, ArgY1_8);
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
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_all_type_stuffs_3_p_0(
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
      MR_Word TypeStuff_8;
      MR_Word TypeStuffs_9;
      MR_Word ExternalTypeParams_13;
      MR_Word TypeBindings_14;
      MR_Word TVarSet_15;
      MR_Word VarTypes_16;
      MR_Word Type_18;
      MR_Word Type0_17;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_5, &ExternalTypeParams_13);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_14);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_15);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_16);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_16, HeadVar__2_2, &Type0_17);
      if (succeeded)
        Type_18 = Type0_17;
      else
        Type_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2]));
      {
        TypeStuff_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeStuff_8, 0) = ((MR_Box) (Type_18));
        MR_hl_field(MR_mktag(0), TypeStuff_8, 1) = ((MR_Box) (TVarSet_15));
        MR_hl_field(MR_mktag(0), TypeStuff_8, 2) = ((MR_Box) (TypeBindings_14));
        MR_hl_field(MR_mktag(0), TypeStuff_8, 3) = ((MR_Box) (ExternalTypeParams_13));
      }
      check_hlds__typecheck_errors__get_all_type_stuffs_3_p_0(TypeAssigns_6, HeadVar__2_2, &TypeStuffs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeStuff_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeStuffs_9));
      }
    }
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
      MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[451])));
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
      MR_hl_field(MR_mktag(1), TaggedPieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[450])));
      MR_hl_field(MR_mktag(1), TaggedPieces_9, 1) = ((MR_Box) (ExpectedPieces_8));
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (TaggedPieces_9)), Pieces0_5);
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
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Pieces0_5, Var_12);
    }
    return Pieces_6;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word ArgTypeStuff_5)
{
  {
    MR_bool succeeded;
    MR_Word ActualExpected_6;
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_5, (MR_Integer) 0))));
    MR_Word VarType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_5, (MR_Integer) 1))));
    MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_5, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeStuff_5, (MR_Integer) 3))));
    MR_Word ActualPieces0_11;
    MR_Word ExpectedPieces0_12;

    ActualPieces0_11 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet_9, InstVarSet_4, ExternalTypeParams_10, VarType_8);
    ExpectedPieces0_12 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet_9, InstVarSet_4, ExternalTypeParams_10, Type_7);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ActualPieces0_11)), ((MR_Box) (ExpectedPieces0_12)));
    if (succeeded)
    {
      MR_Word ActualPieces_13;
      MR_Word ExpectedPieces_14;

      ActualPieces_13 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet_9, InstVarSet_4, ExternalTypeParams_10, VarType_8);
      ExpectedPieces_14 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet_9, InstVarSet_4, ExternalTypeParams_10, Type_7);
      {
        ActualExpected_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ActualExpected_6, 0) = ((MR_Box) (ActualPieces_13));
        MR_hl_field(MR_mktag(0), ActualExpected_6, 1) = ((MR_Box) (ExpectedPieces_14));
      }
    }
    else
      {
        ActualExpected_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ActualExpected_6, 0) = ((MR_Box) (ActualPieces0_11));
        MR_hl_field(MR_mktag(0), ActualExpected_6, 1) = ((MR_Box) (ExpectedPieces0_12));
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
    UnprovenProgConstraintsPieces_16 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[15]), UnprovenProgConstraintStrings_15);
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
          MR_Word Pieces_9;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_105;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_128;

          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (TypeCtor_7));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[396])));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[387])));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[386])));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[385])));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
          }
          {
            Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[384])));
            MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (Context_4));
            MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (Pieces_9));
          }
          {
            Msgs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_6, 0) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(1), Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 0))));
          MR_Word FieldDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 1))));
          MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 2))));
          MR_Word TVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsError_5, (MR_Integer) 3))));
          MR_Word DefnContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_11, (MR_Integer) 0))));
          MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_11, (MR_Integer) 3))));
          MR_Word Pieces1_19;
          MR_Word Pieces2_22;
          MR_Word Pieces3_26;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_78;
          MR_Word Var_80;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Pieces_131;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (FieldName_10));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[401])));
          }
          {
            Pieces1_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces1_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[397])));
            MR_hl_field(MR_mktag(1), Pieces1_19, 1) = ((MR_Box) (Var_47));
          }
          if ((TVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_cons_error\'/2", (MR_String) "no type variables");
          else
          {
            MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TVars_13, (MR_Integer) 1))));
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TVars_13, (MR_Integer) 0))));

            if ((Var_137 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String TVarsStr_21;
              MR_Word Var_68;
              MR_Word Var_69;

              TVarsStr_21 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, Var_138);
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (TVarsStr_21));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[404])));
              }
              {
                Pieces2_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces2_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[402])));
                MR_hl_field(MR_mktag(1), Pieces2_22, 1) = ((MR_Box) (Var_68));
              }
            }
            else
            {
              MR_Word Var_59;
              MR_Word Var_60;
              MR_String TVarsStr_130;

              TVarsStr_130 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, TVars_13);
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (TVarsStr_130));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[407])));
              }
              {
                Pieces2_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces2_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[405])));
                MR_hl_field(MR_mktag(1), Pieces2_22, 1) = ((MR_Box) (Var_59));
              }
            }
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ConsId_17));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[410])));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[409])));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
          }
          {
            Pieces3_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces3_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[408])));
            MR_hl_field(MR_mktag(1), Pieces3_26, 1) = ((MR_Box) (Var_78));
          }
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces2_22, Pieces3_26);
          Pieces_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_19, Var_94);
          {
            Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (DefnContext_14));
            MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Pieces_131));
          }
          {
            Msgs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_6, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_29;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_43;
          MR_Word TypeCtor_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsError_5, (MR_Integer) 0))));
          MR_Word Pieces_133;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TypeCtor_132));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[415])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[413])));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[412])));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
          }
          {
            Pieces_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[411])));
            MR_hl_field(MR_mktag(1), Pieces_133, 1) = ((MR_Box) (Var_29));
          }
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Context_4));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Pieces_133));
          }
          {
            Msgs_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msgs_6, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    return Msgs_6;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__accumulate_matching_cons_module_names_4_p_0(
  MR_Word FunctorSymName_5,
  MR_Word ConsDefn_6,
  MR_Word STATE_VARIABLE_ModuleNames_0_15,
  MR_Word * STATE_VARIABLE_ModuleNames_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName_8;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_6, (MR_Integer) 0))));

    TypeCtorSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) TypeCtorSymName_8)) == (MR_Integer) 1))
    {
      MR_Word TypeCtorModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_8, (MR_Integer) 0))));
      MR_String FunctorName_13;
      MR_Word FullSymName_14;

      FunctorName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctorSymName_5);
      {
        FullSymName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FullSymName_14, 0) = ((MR_Box) (TypeCtorModuleName_11));
        MR_hl_field(MR_mktag(1), FullSymName_14, 1) = ((MR_Box) (FunctorName_13));
      }
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(FunctorSymName_5, FullSymName_14);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ModuleNames_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorModuleName_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ModuleNames_0_15));
        }
      else
        *STATE_VARIABLE_ModuleNames_16 = STATE_VARIABLE_ModuleNames_0_15;
    }
    else
      *STATE_VARIABLE_ModuleNames_16 = STATE_VARIABLE_ModuleNames_0_15;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__substitute_types_check_match_7_p_0(
  MR_Word InstVarSet_8,
  MR_Word ExpType_9,
  MR_Word TypeStuff_10,
  MR_Word STATE_VARIABLE_TypeMismatches_0_34,
  MR_Word * STATE_VARIABLE_TypeMismatches_35,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_36,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_37)
{
  {
    MR_bool succeeded;
    MR_Word ArgType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_10, (MR_Integer) 0))));
    MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_10, (MR_Integer) 1))));
    MR_Word TypeBindings_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_10, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_10, (MR_Integer) 3))));
    MR_Word FullArgType_17;
    MR_Word FullExpType_18;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_15, ArgType_13, &FullArgType_17);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_15, ExpType_9, &FullExpType_18);
    {
      MR_Word TypeInfo_10_63;
      MR_Word TypeSubst0_58;
      MR_Word TypeSubst_59;

      mercury__map__init_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_58);
      succeeded = parse_tree__prog_type__type_unify_5_p_0(FullArgType_17, FullExpType_18, (MR_Word) ((MR_Unsigned) 0U), TypeSubst0_58, &TypeSubst_59);
      if (succeeded)
      {
        TypeInfo_10_63 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_63, ((MR_Box) (TypeSubst_59)), ((MR_Box) (TypeSubst0_58)));
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_38;
      MR_String Var_39;
      MR_Word Var_40;

      succeeded = ((MR_tag((MR_Word) FullArgType_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_17, (MR_Integer) 0))));
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_17, (MR_Integer) 1))));
        succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
            succeeded = (strcmp(Var_39, (MR_String) "<any>") == 0);
          }
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_DoesSomeTypeStuffMatch_37 = (MR_Integer) 1;
      *STATE_VARIABLE_TypeMismatches_35 = STATE_VARIABLE_TypeMismatches_0_34;
    }
    else
    {
      MR_Word ActualSubsumesExpected_21;
      MR_Word ExpectedPieces0_22;
      MR_Word ActualPieces0_23;
      MR_Word ExpectedPieces_24;
      MR_Word ActualPieces_25;
      MR_Word MaybeSpecial_32;
      MR_Word TypeMismatch_33;
      MR_Word _Subst_20;
      MR_String StdLibModuleName_30;
      MR_Word ArgTypeCtorSymName_26;
      MR_Word ArgTypeModuleName_28;
      MR_String ArgTypeName_29;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;

      succeeded = parse_tree__prog_type__type_subsumes_3_p_0(FullArgType_17, FullExpType_18, &_Subst_20);
      if (succeeded)
        ActualSubsumesExpected_21 = (MR_Integer) 1;
      else
        ActualSubsumesExpected_21 = (MR_Integer) 0;
      ExpectedPieces0_22 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet_14, InstVarSet_8, ExternalTypeParams_16, FullExpType_18);
      ActualPieces0_23 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet_14, InstVarSet_8, ExternalTypeParams_16, FullArgType_17);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ExpectedPieces0_22)), ((MR_Box) (ActualPieces0_23)));
      if (succeeded)
      {
        ExpectedPieces_24 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet_14, InstVarSet_8, ExternalTypeParams_16, FullExpType_18);
        ActualPieces_25 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet_14, InstVarSet_8, ExternalTypeParams_16, FullArgType_17);
      }
      else
      {
        ExpectedPieces_24 = ExpectedPieces0_22;
        ActualPieces_25 = ActualPieces0_23;
      }
      succeeded = ((MR_tag((MR_Word) FullExpType_18)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FullExpType_18, (MR_Integer) 0))));
        succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) FullArgType_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgTypeCtorSymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_17, (MR_Integer) 0))));
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_17, (MR_Integer) 1))));
            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FullArgType_17, (MR_Integer) 2))));
            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 1))));
                succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgTypeCtorSymName_26)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgTypeModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypeCtorSymName_26, (MR_Integer) 0))));
                    ArgTypeName_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), ArgTypeCtorSymName_26, (MR_Integer) 1))));
                    succeeded = (strcmp(ArgTypeName_29, (MR_String) "option_error") == 0);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ArgTypeModuleName_28, &StdLibModuleName_30);
                      if (succeeded)
                      {
                        if ((strcmp(StdLibModuleName_30, (MR_String) "getopt") == 0))
                          succeeded = MR_TRUE;
                        else
                        if ((strcmp(StdLibModuleName_30, (MR_String) "getopt_io") == 0))
                          succeeded = MR_TRUE;
                        else
                          succeeded = MR_FALSE;
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
        MR_Word Special_31 = (MR_Word) (StdLibModuleName_30);

        {
          MaybeSpecial_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeSpecial_32, 0) = ((MR_Box) (Special_31));
        }
      }
      else
        MaybeSpecial_32 = (MR_Word) ((MR_Unsigned) 0U);
      {
        TypeMismatch_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeMismatch_33, 0) = ((MR_Box) (ExpectedPieces_24));
        MR_hl_field(MR_mktag(0), TypeMismatch_33, 1) = ((MR_Box) (ActualPieces_25));
        MR_hl_field(MR_mktag(0), TypeMismatch_33, 2) = (MR_Box) ((MR_Unsigned) (ActualSubsumesExpected_21));
        MR_hl_field(MR_mktag(0), TypeMismatch_33, 3) = ((MR_Box) (MaybeSpecial_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeMismatches_35 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeMismatch_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TypeMismatches_0_34));
      }
      *STATE_VARIABLE_DoesSomeTypeStuffMatch_37 = STATE_VARIABLE_DoesSomeTypeStuffMatch_0_36;
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
          MR_Word Var_52;
          MR_Word Var_53;

          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (TypeCtor_7));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[242])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_52));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String TypeCtorName_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), Source_5, (MR_Integer) 0))));
          MR_Word Var_47;
          MR_Word Var_48;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (TypeCtorName_8));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[235])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_33;
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word TypeCtor_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Source_5, (MR_Integer) 0))));

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (TypeCtor_55));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[239])));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[238])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[237])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[236])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_33));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_19;
              MR_Word Var_22;
              MR_Word Var_25;
              MR_Word Var_28;
              MR_Word Var_29;
              MR_Word TypeCtor_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 1))));

              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TypeCtor_56));
              }
              {
                Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[239])));
                MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
              }
              {
                Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[241])));
                MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
              }
              {
                Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[240])));
                MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[236])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_19));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ApplyOp_10 = ((MR_String) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 1))));
              MR_Word Var_13;
              MR_Word Var_14;

              {
                Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (ApplyOp_10));
              }
              {
                Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
                MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[234])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Source_5, (MR_Integer) 1))));

              Pieces_6 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_9);
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

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Pieces_4));
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
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.describe_overloaded_symbol\'/2", (MR_String) "no context");
    else
    {
      MR_Word FirstContext_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_6, (MR_Integer) 0))));
      MR_Word LaterContexts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedContexts_6, (MR_Integer) 1))));
      MR_Word FirstPieces_16;
      MR_Word LaterPieces_17;
      MR_Word FirstMsg_24;
      MR_Word LaterMsgs_25;
      MR_Word Var_85;

      if (((MR_tag((MR_Word) Symbol_5)) == (MR_Integer) 1))
      {
        MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Symbol_5, (MR_Integer) 0))));
        MR_Word Sources0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Symbol_5, (MR_Integer) 1))));
        MR_Word Sources_20;
        MR_Word SourcePiecesList_21;
        MR_Word SortedSourcePiecesList_22;
        MR_Word SourcePieces_23;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_42;
        MR_Word Var_49;
        MR_Word StartPieces_88;

        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0), Sources0_19, &Sources_20);
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ConsId_18));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[230])));
        }
        {
          StartPieces_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), StartPieces_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[226])));
          MR_hl_field(MR_mktag(1), StartPieces_88, 1) = ((MR_Box) (Var_28));
        }
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[5]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleInfo_4));
        }
        SourcePiecesList_21 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Var_42, Sources_20);
        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), SourcePiecesList_21, &SortedSourcePiecesList_22);
        SourcePieces_23 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(SortedSourcePiecesList_22, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[91])));
        FirstPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_88, SourcePieces_23);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[232])));
        }
        {
          LaterPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LaterPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[226])));
          MR_hl_field(MR_mktag(1), LaterPieces_17, 1) = ((MR_Box) (Var_49));
        }
      }
      else
      {
        MR_Word CallId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Symbol_5, (MR_Integer) 0))));
        MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Symbol_5, (MR_Integer) 1))));
        MR_Word StartPieces_12;
        MR_Word PredIdPiecesList_13;
        MR_Word SortedPredIdPiecesList_14;
        MR_Word PredIdPieces_15;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_71;
        MR_Word Var_79;

        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (CallId_10));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[230])));
        }
        {
          StartPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), StartPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[233])));
          MR_hl_field(MR_mktag(1), StartPieces_12, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[3]));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_2));
          MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (ModuleInfo_4));
          MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        PredIdPiecesList_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Var_71, PredIds_11);
        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), PredIdPiecesList_13, &SortedPredIdPiecesList_14);
        PredIdPieces_15 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(SortedPredIdPiecesList_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[91])));
        FirstPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_12, PredIdPieces_15);
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[232])));
        }
        {
          LaterPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LaterPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[233])));
          MR_hl_field(MR_mktag(1), LaterPieces_17, 1) = ((MR_Box) (Var_79));
        }
      }
      {
        FirstMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMsg_24, 0) = ((MR_Box) (FirstContext_8));
        MR_hl_field(MR_mktag(0), FirstMsg_24, 1) = ((MR_Box) (FirstPieces_16));
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[6]));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__typecheck_errors__describe_overloaded_symbol_2_f_0_3));
        MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (LaterPieces_17));
      }
      LaterMsgs_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_85, LaterContexts_9);
      {
        Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_7, 0) = ((MR_Box) (FirstMsg_24));
        MR_hl_field(MR_mktag(1), Msgs_7, 1) = ((MR_Box) (LaterMsgs_25));
      }
    }
    return Msgs_7;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__accumulate_matching_pf_module_names_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word SymName_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleNames_0_16,
  MR_Word * STATE_VARIABLE_ModuleNames_17)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_10;
    MR_Word PredInfo_11;
    MR_Word ModuleName_12;
    MR_Box conv0_PredInfo_11;

    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_6, &PredTable_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_10, ((MR_Box) (PredId_8)), &conv0_PredInfo_11);
    PredInfo_11 = ((MR_Word) (conv0_PredInfo_11));
    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_11, &ModuleName_12);
    if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
    {
      MR_Word SymModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(SymModuleName_14, ModuleName_12);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ModuleNames_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ModuleNames_0_16));
        }
      else
        *STATE_VARIABLE_ModuleNames_17 = STATE_VARIABLE_ModuleNames_0_16;
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ModuleNames_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ModuleNames_0_16));
      }
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_invalid_coerce_from_to_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word FromType_10,
  MR_Word ToType_11)
{
  {
    MR_Word Spec_12;
    MR_Word InClauseForPieces_13;
    MR_String FromTypeStr_14;
    MR_String ToTypeStr_15;
    MR_Word Pieces_16;
    MR_Word Msg_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_35;
    MR_Word Var_39;

    InClauseForPieces_13 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_7);
    FromTypeStr_14 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, FromType_10);
    ToTypeStr_15 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, ToType_11);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (FromTypeStr_14));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (ToTypeStr_15));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_22));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_13, Pieces_16);
    {
      Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Msg_17));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_invalid_coerce_from_to\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_39));
    }
    return Spec_12;
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

    Var_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_9, (MR_Integer) 0, PredId_10);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[92])));
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
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[91])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_12, Var_17);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_missing_tvar_in_foreign_code\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_11));
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
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Box conv2_NumUnsatisfied_11;

    InClauseForPieces_9 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_5);
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[14]), TypeAssignSet_7, &ConstraintPieceLists_10, ((MR_Box) ((MR_Integer) 0)), &conv2_NumUnsatisfied_11);
    NumUnsatisfied_11 = ((MR_Integer) (conv2_NumUnsatisfied_11));
    succeeded = (NumUnsatisfied_11 == (MR_Integer) 1);
    if (succeeded)
      Pieces1_12 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[88]));
    else
      Pieces1_12 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[90]));
    Pieces2_13 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(ConstraintPieceLists_10, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[91])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_12, Pieces2_13);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_9, Var_34);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unsatisfiable_constraints\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Var_33));
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
    MR_Word InstVarSet_16;
    MR_Word VarTypes1_17;
    MR_Word Vars1_18;
    MR_Word AmbiguityPieces_19;
    MR_Word Pieces2_20;
    MR_Word VerboseComponents_21;
    MR_Word WarningMsgs_22;
    MR_Word MainMsg_25;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_47;
    MR_Word ProgVarSet_56;

    InClauseForPieces_13 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_7);
    ProgVarSet_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_7, (MR_Integer) 5))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), ProgVarSet_56, &InstVarSet_16);
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_10, &VarTypes1_17);
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes1_17, &Vars1_18);
    AmbiguityPieces_19 = check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_5_f_0(Vars1_18, ProgVarSet_56, InstVarSet_16, TypeAssign1_10, TypeAssign2_11);
    if ((AmbiguityPieces_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Pieces2_20 = (MR_Word) ((MR_Unsigned) 0U);
      VerboseComponents_21 = (MR_Word) ((MR_Unsigned) 0U);
      WarningMsgs_22 = check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0(ClauseContext_7, Context_8, OverloadedSymbolMap_9, (MR_Integer) 0);
    }
    else
    {
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (AmbiguityPieces_19));
      }
      {
        Pieces2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[86])));
        MR_hl_field(MR_mktag(1), Pieces2_20, 1) = ((MR_Box) (Var_33));
      }
      VerboseComponents_21 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[617]));
      WarningMsgs_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[85])), Pieces2_20);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_13, Var_43);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (VerboseComponents_21));
    }
    {
      MainMsg_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MainMsg_25, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(2), MainMsg_25, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MainMsg_25));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (WarningMsgs_22));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_ambiguity_error\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_47));
    }
    return Spec_12;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_5_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__6_6;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarTypes1_18;
      MR_Word VarTypes2_19;
      MR_Word TypeBindings1_20;
      MR_Word TypeBindings2_21;
      MR_Word ExternalTypeParams1_22;
      MR_Word ExternalTypeParams2_23;
      MR_Word HeadPieces_34;
      MR_Word TailPieces_35;
      MR_Word T1_26;
      MR_Word T2_27;
      MR_Word Type1_24;
      MR_Word Type2_25;
      MR_Word TypeInfo_8_86;
      MR_Word TypeCtorInfo_9_87;
      MR_Word TypeInfo_10_88;
      MR_Word TypeSubst0_83;
      MR_Word TypeSubst_84;
      MR_Word Var_85;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(HeadVar__4_4, &VarTypes1_18);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(HeadVar__5_5, &VarTypes2_19);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(HeadVar__4_4, &TypeBindings1_20);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(HeadVar__5_5, &TypeBindings2_21);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(HeadVar__4_4, &ExternalTypeParams1_22);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(HeadVar__5_5, &ExternalTypeParams2_23);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes1_18, Var_11, &Type1_24);
      if (succeeded)
      {
        succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes2_19, Var_11, &Type2_25);
        if (succeeded)
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings1_20, Type1_24, &T1_26);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings2_21, Type2_25, &T2_27);
          TypeInfo_8_86 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]);
          TypeCtorInfo_9_87 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          mercury__map__init_1_p_0(TypeInfo_8_86, TypeCtorInfo_9_87, &TypeSubst0_83);
          Var_85 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(T1_26, T2_27, Var_85, TypeSubst0_83, &TypeSubst_84);
          if (succeeded)
          {
            TypeInfo_10_88 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_88, ((MR_Box) (TypeSubst_84)), ((MR_Box) (TypeSubst0_83)));
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word TVarSet1_28;
        MR_Word TVarSet2_29;
        MR_Word UnnamedPiecesT1_30;
        MR_Word UnnamedPiecesT2_31;
        MR_Word PiecesT1_32;
        MR_Word PiecesT2_33;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_String Var_46;
        MR_Word Var_51;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_62;
        MR_Word Var_67;
        MR_Word Var_72;

        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(HeadVar__4_4, &TVarSet1_28);
        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(HeadVar__5_5, &TVarSet2_29);
        UnnamedPiecesT1_30 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet1_28, HeadVar__3_3, ExternalTypeParams1_22, T1_26);
        UnnamedPiecesT2_31 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet2_29, HeadVar__3_3, ExternalTypeParams2_23, T2_27);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (UnnamedPiecesT1_30)), ((MR_Box) (UnnamedPiecesT2_31)));
        if (succeeded)
        {
          PiecesT1_32 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet1_28, HeadVar__3_3, ExternalTypeParams1_22, T1_26);
          PiecesT2_33 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet2_29, HeadVar__3_3, ExternalTypeParams2_23, T2_27);
        }
        else
        {
          PiecesT1_32 = UnnamedPiecesT1_30;
          PiecesT2_33 = UnnamedPiecesT2_31;
        }
        Var_46 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__2_2, Var_11);
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[250])));
        }
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PiecesT2_33, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[82])));
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])), Var_72);
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[75])), Var_67);
        Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[82])), Var_62);
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PiecesT1_32, Var_57);
        Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])), Var_56);
        HeadPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_44, Var_51);
      }
      else
        HeadPieces_34 = (MR_Word) ((MR_Unsigned) 0U);
      TailPieces_35 = check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_5_f_0(Vars_12, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
      HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_34, TailPieces_35);
    }
    return HeadVar__6_6;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1593__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__1584__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word Var_23;
    MR_String FunctorName_18;
    MR_Integer FunctorArity_19;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_String Var_26;
    MR_String Var_27;
    MR_Integer slot_0;
    MR_String str_1;

    InClauseForPieces_15 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_8);
    GoalContextPieces_16 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_8, GoalContext_9);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_15, GoalContextPieces_16);
    {
      InitComp_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InitComp_17, 0) = ((MR_Box) (Var_23));
    }
    succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
      FunctorArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        Var_26 = (MR_String) "function \140check_hlds.typecheck_errors.report_error_undef_cons\'/6";
        Var_27 = (MR_String) "arity mismatch";
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_1));
          MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Arity_13));
          MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (FunctorArity_19));
        }
        mercury__require__expect_3_p_0(Var_25, Var_26, Var_27);
        // hashed string jump switch
        ;
        // compute the hash value of the input string
        ;
        slot_0 = ((MR_hash_string4(FunctorName_18)) & (MR_Integer) 63);
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        str_1 = ((&check_hlds__typecheck_errors_vector_common_10[32 + slot_0]))->check_hlds__typecheck_errors__vector_common_type_10_0__vct_10_f_0;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, FunctorName_18) == 0))))
        {
          // we found a match; dispatch to the corresponding code
          ;
          switch (slot_0) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              {
                // case "<="
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 8:
              {
                // case "semipure"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 16:
              {
                // case "some"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 22:
              {
                // case "not"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 28:
              {
                // case "<=>"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 33:
              {
                // case "=>"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 34:
              {
                // case "all"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 35:
              {
                // case "\="
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
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
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 48:
              {
                // case "impure"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 53:
              {
                // case "\+"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 58:
              {
                // case ";"
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
            case (MR_Integer) 60:
              {
                // case "="
                ;
                succeeded = (FunctorArity_19 == (MR_Integer) 2);
              }
              break;
          }
          // jump out of search loop
          ;
          goto label_0;
        }
        succeeded = MR_FALSE;
      label_0:;
      }
    }
    if (succeeded)
    {
      MR_Word FunctorComps_21;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      check_hlds__typecheck_errors__language_builtin_functor_components_3_p_0(FunctorName_18, FunctorArity_19, &FunctorComps_21);
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (InitComp_17));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (FunctorComps_21));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(2), Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_undef_cons\'/6"));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_31));
      }
    }
    else
    {
      MR_Word FunctorComps_50;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_String Var_37;
      MR_String Var_38;
      MR_String FunctorName_46;
      MR_Integer FunctorArity_47;

      succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
        FunctorArity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
        if (succeeded)
        {
          FunctorName_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
          Var_37 = (MR_String) "function \140check_hlds.typecheck_errors.report_error_undef_cons\'/6";
          Var_38 = (MR_String) "arity mismatch";
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_6_f_0_2));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Arity_13));
            MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (FunctorArity_47));
          }
          mercury__require__expect_3_p_0(Var_36, Var_37, Var_38);
          succeeded = check_hlds__typecheck_errors__syntax_functor_components_3_p_0(FunctorName_46, FunctorArity_47, &FunctorComps_50);
        }
      }
      if (succeeded)
      {
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (InitComp_17));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (FunctorComps_50));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(2), Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_undef_cons\'/6"));
          MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_42));
        }
      }
      else
        check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0(ClauseContext_8, Context_10, InitComp_17, ConsErrors_11, Functor_12, Arity_13, &Spec_14);
    }
    return Spec_14;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Msgs_6;

    conv2_Msgs_6 = check_hlds__typecheck_errors__report_cons_error_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Msgs_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleNames_16;

    check_hlds__typecheck_errors__accumulate_matching_cons_module_names_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleNames_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleNames_16));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons_std__1729__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word InitComp_10,
  MR_Word ConsErrors_11,
  MR_Word Functor_12,
  MR_Integer Arity_13,
  MR_Word * Spec_14)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_8, (MR_Integer) 0))));
    MR_Word ConsTable_16;
    MR_Word FunctorComps_29;
    MR_Word QualMsgs_30;
    MR_Word ConsMsgs_50;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Constructor_17;
    MR_Word OtherArities_25;
    MR_Word TypeCtorInfo_104_104;
    MR_Integer FunctorArity_18;
    MR_Word ConsArities_20;
    MR_Word PredTable_21;
    MR_Word PredIds_22;
    MR_Word FuncArities_23;
    MR_Word AllArities_24;
    MR_Word Var_54;
    MR_String Var_55;
    MR_String Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_15, &ConsTable_16);
    succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Constructor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
      FunctorArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
      Var_55 = (MR_String) "predicate \140check_hlds.typecheck_errors.report_error_undef_cons_std\'/7";
      Var_56 = (MR_String) "arity mismatch";
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Arity_13));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (FunctorArity_18));
      }
      mercury__require__expect_3_p_0(Var_54, Var_55, Var_56);
      hlds__hlds_cons__return_cons_arities_3_p_0(ConsTable_16, Constructor_17, &ConsArities_20);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_15, &PredTable_21);
      Var_57 = (MR_Integer) 1;
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_21, Var_57, Constructor_17, &PredIds_22);
      Var_58 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__typecheck_errors__return_function_arities_4_p_0(ModuleInfo_15, PredIds_22, Var_58, &FuncArities_23);
      TypeCtorInfo_104_104 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      Var_59 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, ConsArities_20, FuncArities_23);
      mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_104_104, Var_59, &AllArities_24);
      mercury__list__delete_all_3_p_1(TypeCtorInfo_104_104, AllArities_24, ((MR_Box) (Arity_13)), &OtherArities_25);
      succeeded = (OtherArities_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word FunctorPieces_28;
      MR_Word Var_60;

      FunctorPieces_28 = check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_f_0(Constructor_17, Arity_13, OtherArities_25);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (FunctorPieces_28));
      }
      {
        FunctorComps_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FunctorComps_29, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), FunctorComps_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      QualMsgs_30 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Pieces1_31;
      MR_Word Pieces2_36;
      MR_Word MissingImportModules_37;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word ModQual_34;
      MR_Word Constructor_95;
      MR_Word FunctorName_39;

      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Functor_12));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      }
      {
        Pieces1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces1_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[380])));
        MR_hl_field(MR_mktag(1), Pieces1_31, 1) = ((MR_Box) (Var_64));
      }
      succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Constructor_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Constructor_95)) == (MR_Integer) 1);
        if (succeeded)
          ModQual_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constructor_95, (MR_Integer) 0))));
      }
      if (succeeded)
        check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0(ClauseContext_8, ModQual_34, &Pieces2_36, &MissingImportModules_37);
      else
      {
        MR_Word Var_72;
        MR_String Var_73;
        MR_Integer Var_74;

        succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
          Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 2))));
          succeeded = (Var_74 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_73 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))));
              succeeded = (strcmp(Var_73, (MR_String) "[|]") == 0);
            }
          }
        }
        if (succeeded)
          check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0(ClauseContext_8, (MR_Word) (&check_hlds__typecheck_errors_scalar_common_3[7]), &Pieces2_36, &MissingImportModules_37);
        else
        {
          Pieces2_36 = (MR_Word) ((MR_Unsigned) 0U);
          MissingImportModules_37 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_31, Pieces2_36);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
      }
      {
        FunctorComps_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FunctorComps_29, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), FunctorComps_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        FunctorName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_12, (MR_Integer) 1))));
        {
          MR_Word ConsDefns_42;
          MR_Word ConsModuleNames_43;
          MR_Word PredicateTable_44;
          MR_Word PredModuleNames_45;
          MR_Word FuncModuleNames_46;
          MR_Word ModuleNames_47;
          MR_Word ModuleNamesSet0_48;
          MR_Word ModuleNamesSet_49;
          MR_String Var_80;
          MR_Word Var_81;
          MR_Word Var_85;
          MR_Box conv1_ConsModuleNames_43;

          Var_80 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctorName_39);
          hlds__hlds_cons__return_cons_defns_with_given_name_3_p_0(ConsTable_16, Var_80, &ConsDefns_42);
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[1]));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (FunctorName_39));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_81, ConsDefns_42, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ConsModuleNames_43);
          ConsModuleNames_43 = ((MR_Word) (conv1_ConsModuleNames_43));
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_15, &PredicateTable_44);
          PredModuleNames_45 = check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0(PredicateTable_44, (MR_Integer) 0, FunctorName_39);
          FuncModuleNames_46 = check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0(PredicateTable_44, (MR_Integer) 1, FunctorName_39);
          Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PredModuleNames_45, FuncModuleNames_46);
          ModuleNames_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ConsModuleNames_43, Var_85);
          mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_47, &ModuleNamesSet0_48);
          mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MissingImportModules_37, ModuleNamesSet0_48, &ModuleNamesSet_49);
          QualMsgs_30 = check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0(ClauseContext_8, Context_9, (MR_String) "symbol", ModuleNamesSet_49);
        }
      }
      else
        QualMsgs_30 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((ConsErrors_11 == (MR_Word) ((MR_Unsigned) 0U)))
      ConsMsgs_50 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConsMsgLists_53;
      MR_Word Var_87;

      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_undef_cons_std_7_p_0_3));
        MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (Context_9));
      }
      ConsMsgLists_53 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]), Var_87, ConsErrors_11);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ConsMsgLists_53, &ConsMsgs_50);
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (InitComp_10));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (FunctorComps_29));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(2), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (ConsMsgs_50));
    }
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_92, QualMsgs_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Spec_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.typecheck_errors.report_error_undef_cons_std\'/7"));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_91));
    }
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
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[529])));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (RightAritiesPieces_35));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[272])));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[528])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    NumArgsPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])));
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Name_5));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[91])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[383])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NumArgsPieces_10, Var_16);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[382])), Var_15);
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

static void MR_CALL 
check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleNames_17;

    check_hlds__typecheck_errors__accumulate_matching_pf_module_names_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleNames_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleNames_17));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0(
  MR_Word PredicateTable_5,
  MR_Word PredOrFunc_6,
  MR_Word SymName_7)
{
  {
    MR_Word ModuleNames_8;
    MR_Word PredIds_9;
    MR_String Var_10;
    MR_Word Var_11;
    MR_Box conv1_ModuleNames_8;

    Var_10 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
    hlds__pred_table__predicate_table_lookup_pf_raw_name_4_p_0(PredicateTable_5, PredOrFunc_6, Var_10, &PredIds_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__typecheck_errors__find_possible_pf_missing_module_qualifiers_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (PredicateTable_5));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (SymName_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_11, PredIds_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ModuleNames_8);
    ModuleNames_8 = ((MR_Word) (conv1_ModuleNames_8));
    return ModuleNames_8;
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
    MR_String str_1 = ((&check_hlds__typecheck_errors_vector_common_10[0 + slot_0]))->check_hlds__typecheck_errors__vector_common_type_10_0__vct_10_f_0;

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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[600]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[609]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[586]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[605]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[604]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[615]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[606]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[119]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[601]));
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
              *Components_3 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[612]));
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

static void MR_CALL 
check_hlds__typecheck_errors__language_builtin_functor_components_3_p_0(
  MR_String Name_4,
  MR_Integer Arity_5,
  MR_Word * Components_6)
{
  {
    MR_bool succeeded;
    MR_Word MainPieces_7;
    MR_Word VerboseCallPieces_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_106;
    MR_Word Var_107;

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
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[282])));
    }
    {
      MainPieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[158])));
      MR_hl_field(MR_mktag(1), MainPieces_7, 1) = ((MR_Box) (Var_12));
    }
    succeeded = (strcmp(Name_4, (MR_String) "call") == 0);
    if (succeeded)
      VerboseCallPieces_9 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[324]));
    else
      VerboseCallPieces_9 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (MainPieces_7));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_107, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_107, 1) = ((MR_Box) (VerboseCallPieces_9));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[597])));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_106));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Components_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_103));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_arg_var_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ActualExpected_6;

    conv0_ActualExpected_6 = check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ActualExpected_6));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_arg_var_6_f_0(
  MR_Word Info_8,
  MR_Word ClauseContext_9,
  MR_Word GoalContext_10,
  MR_Word Context_11,
  MR_Word Var_12,
  MR_Word ArgTypeAssignSet_13)
{
  {
    MR_bool succeeded;
    MR_Word Spec_14;
    MR_Word InClauseForPieces_15;
    MR_Word GoalContextPieces_16;
    MR_Word InstVarSet_17;
    MR_Word ArgTypeStuffList_18;
    MR_Word ActualExpectedList0_19;
    MR_Word ActualExpectedList_20;
    MR_Word VarSet_22;
    MR_Word Pieces2_26;
    MR_Word VerboseComponents_27;
    MR_Word Msg_28;
    MR_Word Var_29;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_111;
    MR_Word ActualExpected_23;
    MR_Word Var_33;

    InClauseForPieces_15 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_9);
    GoalContextPieces_16 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_9, GoalContext_10);
    check_hlds__typecheck_errors__get_inst_varset_2_p_0(ClauseContext_9, &InstVarSet_17);
    check_hlds__typecheck_errors__get_arg_type_stuff_3_p_0(ArgTypeAssignSet_13, Var_12, &ArgTypeStuffList_18);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_arg_var_6_f_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (InstVarSet_17));
    }
    ActualExpectedList0_19 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), Var_29, ArgTypeStuffList_18);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedList0_19, &ActualExpectedList_20);
    VarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_9, (MR_Integer) 5))));
    succeeded = (ActualExpectedList_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualExpected_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_20, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_20, (MR_Integer) 1))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word ActualPieces_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_23, (MR_Integer) 0))));
      MR_Word ExpectedPieces_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_23, (MR_Integer) 1))));
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_58;

      Var_34 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_12);
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[83])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[81])), Var_58);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_24, Var_44);
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[78])), Var_43);
      Pieces2_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_35);
    }
    else
    {
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_86;
      MR_Word Var_91;
      MR_Word Var_92;

      Var_71 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_12);
      Var_80 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_12);
      Var_92 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedList_20);
      Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_92, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[69])));
      Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])), Var_91);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[64])), Var_86);
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_80, Var_81);
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[62])), Var_79);
      Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, Var_72);
      Pieces2_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[60])), Var_70);
    }
    check_hlds__typecheck_errors__arg_type_assign_set_msg_to_verbose_pieces_4_p_0(Info_8, ArgTypeAssignSet_13, VarSet_22, &VerboseComponents_27);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_15, GoalContextPieces_16);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
    }
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[52])), Pieces2_26);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (Var_107));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (VerboseComponents_27));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
    }
    {
      Msg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_28, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(2), Msg_28, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Msg_28));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_arg_var\'/6"));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_111));
    }
    return Spec_14;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__arg_type_assign_set_msg_to_verbose_pieces_4_p_0(
  MR_Word Info_5,
  MR_Word ArgTypeAssignSet_6,
  MR_Word VarSet_7,
  MR_Word * VerboseComponents_8)
{
  {
    MR_bool succeeded;
    MR_Word VerboseErrors_9;

    check_hlds__typecheck_info__typecheck_info_get_verbose_errors_2_p_0(Info_5, &VerboseErrors_9);
    switch (VerboseErrors_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *VerboseComponents_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[579]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word VerbosePieces_10;
          MR_Word Var_11;
          MR_String FirstWords_22;
          MR_Word MaybeSeq_23;
          MR_Word SortedArgTypeAssignSet_24;
          MR_Word LaterPieces_25;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_26;

          succeeded = (ArgTypeAssignSet_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypeAssignSet_6, (MR_Integer) 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            FirstWords_22 = (MR_String) "The partial type assignment was:";
            MaybeSeq_23 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            FirstWords_22 = (MR_String) "The possible partial type assignments were:";
            MaybeSeq_23 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_3[10]));
          }
          mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), ArgTypeAssignSet_6, &SortedArgTypeAssignSet_24);
          LaterPieces_25 = check_hlds__typecheck_errors__args_type_assign_set_to_pieces_3_f_0(SortedArgTypeAssignSet_24, MaybeSeq_23, VarSet_7);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (FirstWords_22));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[65])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (LaterPieces_25));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
          }
          VerbosePieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[82])));
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_11, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), Var_11, 1) = ((MR_Box) (VerbosePieces_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *VerboseComponents_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__args_type_assign_set_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeSeq_2,
  MR_Word VarSet_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgTypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypeAssigns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeAssign_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_7, (MR_Integer) 0))));
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;

      Var_15 = check_hlds__typecheck_errors__type_assign_to_pieces_3_f_0(TypeAssign_12, MaybeSeq_2, VarSet_3);
      if ((MaybeSeq_2 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_17 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSeq_2, (MR_Integer) 0))));
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) N_19 + (MR_Unsigned) 1);

        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_20));
        }
      }
      Var_16 = check_hlds__typecheck_errors__args_type_assign_set_to_pieces_3_f_0(ArgTypeAssigns_8, Var_17, VarSet_3);
      HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_16);
    }
    return HeadVar__4_4;
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
        VarType_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2]));
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

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_ActualExpected_8;

    conv1_ActualExpected_8 = check_hlds__typecheck_errors__type_stuff_to_actual_expected_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_ActualExpected_8));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ActualExpected_8;

    conv0_ActualExpected_8 = check_hlds__typecheck_errors__type_stuff_to_actual_expected_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ActualExpected_8));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_var_either_type_8_f_0(
  MR_Word Info_10,
  MR_Word ClauseContext_11,
  MR_Word GoalContext_12,
  MR_Word Context_13,
  MR_Word Var_14,
  MR_Word TypeA_15,
  MR_Word TypeB_16,
  MR_Word TypeAssignSet_17)
{
  {
    MR_bool succeeded;
    MR_Word Spec_18;
    MR_Word InClauseForPieces_19;
    MR_Word GoalContextPieces_20;
    MR_Word InstVarSet_21;
    MR_Word TypeStuffList_22;
    MR_Word ActualExpectedListA0_23;
    MR_Word ActualExpectedListB0_24;
    MR_Word ActualExpectedListA_25;
    MR_Word ActualExpectedListB_26;
    MR_Word VarSet_28;
    MR_Word Pieces2_35;
    MR_Word VerboseComponents_36;
    MR_Word Msg_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_133;
    MR_Word ActualExpectedA_29;
    MR_Word ActualExpectedB_30;
    MR_Word Var_43;
    MR_Word Var_44;

    InClauseForPieces_19 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_11);
    GoalContextPieces_20 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_11, GoalContext_12);
    check_hlds__typecheck_errors__get_inst_varset_2_p_0(ClauseContext_11, &InstVarSet_21);
    check_hlds__typecheck_errors__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_17, Var_14, &TypeStuffList_22);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_either_type_8_f_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (InstVarSet_21));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (TypeA_15));
    }
    ActualExpectedListA0_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), Var_38, TypeStuffList_22);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_either_type_8_f_0_2));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (InstVarSet_21));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (TypeB_16));
    }
    ActualExpectedListB0_24 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), Var_39, TypeStuffList_22);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedListA0_23, &ActualExpectedListA_25);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedListB0_24, &ActualExpectedListB_26);
    VarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_11, (MR_Integer) 5))));
    succeeded = (ActualExpectedListA_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualExpectedA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListA_25, (MR_Integer) 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListA_25, (MR_Integer) 1))));
      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ActualExpectedListB_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ActualExpectedB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListB_26, (MR_Integer) 0))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedListB_26, (MR_Integer) 1))));
          succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word ActualPieces_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpectedA_29, (MR_Integer) 0))));
      MR_Word ExpectedPiecesA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpectedA_29, (MR_Integer) 1))));
      MR_Word ExpectedPiecesB_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpectedB_30, (MR_Integer) 1))));
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_68;

      Var_45 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_28, Var_14);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPiecesB_34, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[75])), Var_68);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPiecesA_32, Var_63);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[73])), Var_62);
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_31, Var_52);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), Var_51);
      Pieces2_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, Var_46);
    }
    else
    {
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_95;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_113;
      MR_Word Var_114;

      Var_80 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_28, Var_14);
      Var_89 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_28, Var_14);
      Var_101 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedListA_25);
      Var_114 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedListB_26);
      Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_114, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[69])));
      Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[77])), Var_113);
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_101, Var_102);
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])), Var_100);
      Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[64])), Var_95);
      Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_89, Var_90);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[62])), Var_88);
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_80, Var_81);
      Pieces2_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[60])), Var_79);
    }
    check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_10, TypeAssignSet_17, VarSet_28, &VerboseComponents_36);
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_19, GoalContextPieces_20);
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (Var_126));
    }
    Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[52])), Pieces2_35);
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (Var_129));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (VerboseComponents_36));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
    }
    {
      Msg_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_37, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(2), Msg_37, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Msg_37));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_either_type\'/8"));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_18, 3) = ((MR_Box) (Var_133));
    }
    return Spec_18;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_arg_vector_type_errors_6_f_0(
  MR_Word Info_8,
  MR_Word ClauseContext_9,
  MR_Word Context_10,
  MR_Word ArgVectorKind_11,
  MR_Word TypeAssignSet_12,
  MR_Word ArgVectorTypeErrors0_13)
{
  {
    MR_Word Spec_14;
    MR_Word ArgVectorTypeErrors_15;
    MR_Word InClauseForPieces_16;
    MR_Word ArgVectorKindPieces_17;
    MR_Word VarSet_18;
    MR_Word HeadArgVectorTypeErrors_19;
    MR_Word TailArgVectorTypeErrors_20;
    MR_Word ArgErrorPieces_21;
    MR_Word VerboseComponents_22;
    MR_Word Msg_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_35;

    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0), ArgVectorTypeErrors0_13, &ArgVectorTypeErrors_15);
    InClauseForPieces_16 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_9);
    ArgVectorKindPieces_17 = check_hlds__typecheck_errors__arg_vector_kind_to_pieces_2_f_0(ClauseContext_9, ArgVectorKind_11);
    VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_9, (MR_Integer) 5))));
    if ((ArgVectorTypeErrors_15 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_arg_vector_type_errors\'/6", (MR_String) "ArgVectorTypeErrors = []");
    else
    {
      HeadArgVectorTypeErrors_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_15, (MR_Integer) 0))));
      TailArgVectorTypeErrors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_15, (MR_Integer) 1))));
    }
    check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_18, ArgVectorTypeErrors_15, HeadArgVectorTypeErrors_19, TailArgVectorTypeErrors_20, &ArgErrorPieces_21);
    check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_8, TypeAssignSet_12, VarSet_18, &VerboseComponents_22);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (InClauseForPieces_16));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (ArgVectorKindPieces_17));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (ArgErrorPieces_21));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (VerboseComponents_22));
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
      Msg_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_23, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(2), Msg_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Msg_23));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_arg_vector_type_errors\'/6"));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_35));
    }
    return Spec_14;
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
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[525]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorKind_5, (MR_Integer) 0))));
          MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 0))));
          MR_Word PredInfo_14;
          MR_Word ModuleName_15;
          MR_String Name_16;
          MR_Word PredOrFunc_17;
          MR_Word Var_34;
          MR_Integer Arity_53;
          MR_Word PFSymNameArity_54;
          MR_Word CallId_70;
          MR_Word PredMarkers_71;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_String Var_76;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_12, &PredInfo_14);
          hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_14, &ModuleName_15);
          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_14, &Name_16);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_14, &Arity_53);
          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_14, &PredOrFunc_17);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ModuleName_15));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Name_16));
          }
          {
            PFSymNameArity_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PFSymNameArity_54, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
            MR_hl_field(MR_mktag(0), PFSymNameArity_54, 1) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(0), PFSymNameArity_54, 2) = ((MR_Box) (Arity_53));
          }
          {
            CallId_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallId_70, 0) = ((MR_Box) (PFSymNameArity_54));
          }
          PredMarkers_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
          Var_76 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_70, (MR_Integer) -1, PredMarkers_71);
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[497])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_74));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SymNameArity_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgVectorKind_5, (MR_Integer) 0))));
          MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArity_7, (MR_Integer) 0))));
          MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SymNameArity_7, (MR_Integer) 1))));
          MR_Word PFSymNameArity_10;
          MR_Word CallId_89;
          MR_Word PredMarkers_90;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_String Var_95;

          {
            PFSymNameArity_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PFSymNameArity_10, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), PFSymNameArity_10, 1) = ((MR_Box) (SymName_8));
            MR_hl_field(MR_mktag(0), PFSymNameArity_10, 2) = ((MR_Box) (Arity_9));
          }
          {
            CallId_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallId_89, 0) = ((MR_Box) (PFSymNameArity_10));
          }
          PredMarkers_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
          Var_95 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_89, (MR_Integer) -1, PredMarkers_90);
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Var_95));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[497])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_93));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgVectorKind_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CallId_11;
              MR_Word GenericId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgVectorKind_5, (MR_Integer) 1))));
              MR_Word PredMarkers_19;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_String Var_40;

              {
                CallId_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_11, 0) = ((MR_Box) (GenericId_18));
              }
              PredMarkers_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
              Var_40 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_11, (MR_Integer) -1, PredMarkers_19);
              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
              }
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[497])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_38));
              }
            }
            break;
          case (MR_Integer) 1:
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.arg_vector_kind_to_pieces\'/2", (MR_String) "arg_vector_foreign_proc_call");
            break;
          case (MR_Integer) 2:
            {
              MR_String EventName_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), ArgVectorKind_5, (MR_Integer) 1))));
              MR_Word Var_24;
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (EventName_21));
              }
              {
                Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
              }
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[526])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_24));
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
      SuffixPiece_11 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16]));
      TailPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word HeadTailError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailErrors_9, (MR_Integer) 0))));
      MR_Word TailTailErrors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailErrors_9, (MR_Integer) 1))));

      SuffixPiece_11 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[272]));
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

      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchPieces_62, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])));
      MismatchPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[277])), Var_74);
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (ArgNum_15));
    }
    Var_34 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_6, Var_16);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[273])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (TailPieces_12));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (SuffixPiece_11));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchPieces_20, Var_53);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPieces_19, Var_52);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[58])), Var_51);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_18, Var_41);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), Var_40);
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
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ExpectedPieces_17)));
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
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[279])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25])));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
          }
          {
            HeadMismatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[278])));
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
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[278])));
            MR_hl_field(MR_mktag(1), HeadMismatchPieces_19, 1) = ((MR_Box) (Var_39));
          }
        }
        if ((TailMismatchPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__4_4 = HeadMismatchPieces_19;
        else
        {
          MR_Word Var_48;

          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[280])), TailMismatchPieces_12);
          *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadMismatchPieces_19, Var_48);
        }
      }
      else
        *HeadVar__4_4 = TailMismatchPieces_12;
    }
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_var_6_f_0(
  MR_Word Info_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet_13)
{
  {
    MR_bool succeeded;
    MR_Word SpecAndMaybeActualExpected_14;
    MR_Word ClauseContext_15;
    MR_Word InClauseForPieces_16;
    MR_Word GoalContextPieces_17;
    MR_Word InstVarSet_18;
    MR_Word ActualExpectedList0_19;
    MR_Word ActualExpectedList_20;
    MR_Word VarSet_22;
    MR_Word MaybeActualExpected_24;
    MR_Word MismatchPieces_27;
    MR_Word NoSuffixIntegerVarSet_28;
    MR_Word NoSuffixIntegerPieces_29;
    MR_Word VerboseComponents_30;
    MR_Word Msg_31;
    MR_Word Spec_32;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_109;
    MR_Word ActualExpected_23;
    MR_Word Var_37;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
    InClauseForPieces_16 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_15);
    GoalContextPieces_17 = check_hlds__typecheck_errors__goal_context_to_pieces_2_f_0(ClauseContext_15, GoalContext_9);
    check_hlds__typecheck_errors__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_18);
    check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(InstVarSet_18, Type_12, TypeAssignSet_13, Var_11, &ActualExpectedList0_19);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), ActualExpectedList0_19, &ActualExpectedList_20);
    VarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_15, (MR_Integer) 5))));
    succeeded = (ActualExpectedList_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualExpected_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_20, (MR_Integer) 0))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActualExpectedList_20, (MR_Integer) 1))));
      succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word ActualPieces_25;
      MR_Word ExpectedPieces_26;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_55;

      {
        MaybeActualExpected_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeActualExpected_24, 0) = ((MR_Box) (ActualExpected_23));
      }
      ActualPieces_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_23, (MR_Integer) 0))));
      ExpectedPieces_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ActualExpected_23, (MR_Integer) 1))));
      Var_38 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_11);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedPieces_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[58])), Var_55);
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualPieces_25, Var_45);
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), Var_44);
      MismatchPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_38, Var_39);
    }
    else
    {
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_82;
      MR_Word Var_87;
      MR_Word Var_88;

      MaybeActualExpected_24 = (MR_Word) ((MR_Unsigned) 0U);
      Var_67 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_11);
      Var_76 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_11);
      Var_88 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_f_0(ActualExpectedList_20);
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_88, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[69])));
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[66])), Var_87);
      Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[64])), Var_82);
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, Var_77);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[62])), Var_75);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_67, Var_68);
      MismatchPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[60])), Var_66);
    }
    check_hlds__typecheck_info__typecheck_info_get_nosuffix_integer_vars_2_p_0(Info_8, &NoSuffixIntegerVarSet_28);
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), NoSuffixIntegerVarSet_28, ((MR_Box) (Var_11)));
    if (succeeded)
      succeeded = check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(Type_12);
    if (succeeded)
      NoSuffixIntegerPieces_29 = check_hlds__typecheck_errors__nosuffix_integer_pieces_0_f_0();
    else
      NoSuffixIntegerPieces_29 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_8, TypeAssignSet_13, VarSet_22, &VerboseComponents_30);
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (InClauseForPieces_16));
    }
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (GoalContextPieces_17));
    }
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchPieces_27, NoSuffixIntegerPieces_29);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[52])), Var_105);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (VerboseComponents_30));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      Msg_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_31, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(2), Msg_31, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Msg_31));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var\'/6"));
      MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_32, 3) = ((MR_Box) (Var_109));
    }
    {
      SpecAndMaybeActualExpected_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_14, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_14, 1) = ((MR_Box) (MaybeActualExpected_24));
    }
    return SpecAndMaybeActualExpected_14;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(
  MR_Word Var_15,
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeAssign_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Result_11;
      MR_Word Results_12;
      MR_Word TypeStuff_13;
      MR_Word ExternalTypeParams_20;
      MR_Word TypeBindings_21;
      MR_Word TVarSet_22;
      MR_Word VarTypes_23;
      MR_Word Type_25;
      MR_Word Type0_24;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_8, &ExternalTypeParams_20);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_8, &TypeBindings_21);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_8, &TVarSet_22);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_8, &VarTypes_23);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_23, HeadVar__3_3, &Type0_24);
      if (succeeded)
        Type_25 = Type0_24;
      else
        Type_25 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2]));
      {
        TypeStuff_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeStuff_13, 0) = ((MR_Box) (Type_25));
        MR_hl_field(MR_mktag(0), TypeStuff_13, 1) = ((MR_Box) (TVarSet_22));
        MR_hl_field(MR_mktag(0), TypeStuff_13, 2) = ((MR_Box) (TypeBindings_21));
        MR_hl_field(MR_mktag(0), TypeStuff_13, 3) = ((MR_Box) (ExternalTypeParams_20));
      }
      Result_11 = check_hlds__typecheck_errors__type_stuff_to_actual_expected_3_f_0(Var_15, Var_16, TypeStuff_13);
      check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(Var_15, Var_16, TypeAssigns_9, HeadVar__3_3, &Results_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Result_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Results_12));
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_stuff_to_actual_expected_3_f_0(
  MR_Word InstVarSet_5,
  MR_Word Type_6,
  MR_Word VarTypeStuff_7)
{
  {
    MR_bool succeeded;
    MR_Word ActualExpected_8;
    MR_Word VarType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_7, (MR_Integer) 0))));
    MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_7, (MR_Integer) 1))));
    MR_Word TypeBinding_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_7, (MR_Integer) 2))));
    MR_Word ExternalTypeParams_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarTypeStuff_7, (MR_Integer) 3))));
    MR_Word ActualPieces0_13;
    MR_Word ExpectedPieces0_14;
    MR_Word Type_29;
    MR_Word Type_38;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_11, VarType_9, &Type_29);
    ActualPieces0_13 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet_10, InstVarSet_5, ExternalTypeParams_12, Type_29);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_11, Type_6, &Type_38);
    ExpectedPieces0_14 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TVarSet_10, InstVarSet_5, ExternalTypeParams_12, Type_38);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ActualPieces0_13)), ((MR_Box) (ExpectedPieces0_14)));
    if (succeeded)
    {
      MR_Word ActualPieces_15;
      MR_Word ExpectedPieces_16;
      MR_Word Type_47;
      MR_Word Type_56;

      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_11, VarType_9, &Type_47);
      ActualPieces_15 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet_10, InstVarSet_5, ExternalTypeParams_12, Type_47);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBinding_11, Type_6, &Type_56);
      ExpectedPieces_16 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 1, (MR_Integer) 1, TVarSet_10, InstVarSet_5, ExternalTypeParams_12, Type_56);
      {
        ActualExpected_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ActualExpected_8, 0) = ((MR_Box) (ActualPieces_15));
        MR_hl_field(MR_mktag(0), ActualExpected_8, 1) = ((MR_Box) (ExpectedPieces_16));
      }
    }
    else
      {
        ActualExpected_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ActualExpected_8, 0) = ((MR_Box) (ActualPieces0_13));
        MR_hl_field(MR_mktag(0), ActualExpected_8, 1) = ((MR_Box) (ExpectedPieces0_14));
      }
    return ActualExpected_8;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(
  MR_Word Type_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Type_2)) == (MR_Integer) 2);
    MR_Word BuiltinType_3;
    MR_Word BuiltinTypeInt_4;

    if (succeeded)
    {
      BuiltinType_3 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_2, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) BuiltinType_3)) == (MR_Integer) 1);
      if (succeeded)
      {
        BuiltinTypeInt_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_3, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (BuiltinTypeInt_4 != (MR_Integer) 0);
      }
    }
    return succeeded;
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
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[493]));
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
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_127;

                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
                      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[511])));
                    }
                    {
                      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
                      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_126));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[259])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_124));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_112;
                    MR_Word Var_113;
                    MR_Word Var_114;
                    MR_Word Var_115;

                    {
                      Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
                      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[513])));
                    }
                    {
                      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_114));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[259])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_112));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_100;
                    MR_Word Var_101;
                    MR_Word Var_102;
                    MR_Word Var_103;

                    {
                      Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
                      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[517])));
                    }
                    {
                      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[259])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_100));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word Var_91;

                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
                      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[515])));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_90));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[259])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_88));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = (ArgNum_8 == (MR_Integer) 1);
                    if (succeeded)
                      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[520]));
                    else
                    {
                      succeeded = (ArgNum_8 == (MR_Integer) 2);
                      if (succeeded)
                        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[523]));
                      else
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.goal_context_to_pieces\'/2", (MR_String) "try io variable not arg 1 or 2");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Word Var_61;

                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (ArgNum_8));
                    }
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[509])));
                    }
                    {
                      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
                      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[259])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_58));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = (ArgNum_8 == (MR_Integer) 1);
                    if (succeeded)
                      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[503]));
                    else
                    {
                      succeeded = (ArgNum_8 == (MR_Integer) 2);
                      if (succeeded)
                        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[507]));
                      else
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.goal_context_to_pieces\'/2", (MR_String) "outer variable not arg 1 or 2");
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
                      MR_Word Var_166;
                      MR_Word Var_167;
                      MR_Word Var_168;
                      MR_Word Var_169;

                      {
                        Var_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_167, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                        MR_hl_field(MR_mktag(3), Var_167, 1) = ((MR_Box) (ArgNum_8));
                      }
                      {
                        Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (ArgNum_8));
                      }
                      {
                        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
                        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[495])));
                      }
                      {
                        Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
                        MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_168));
                      }
                      {
                        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[273])));
                        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_166));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorKind_9, (MR_Integer) 0))));
                      MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 0))));
                      MR_Word PredInfo_17;
                      MR_Word ModuleName_18;
                      MR_String Name_19;
                      MR_Word PredOrFunc_20;
                      MR_Word Var_151;
                      MR_Integer Arity_176;
                      MR_Word PFSymNameArity_177;
                      MR_Word CallId_193;
                      MR_Word PredMarkers_194;
                      MR_Word Var_197;
                      MR_Word Var_198;
                      MR_String Var_199;

                      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_15, &PredInfo_17);
                      hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_17, &ModuleName_18);
                      hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_17, &Name_19);
                      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_17, &Arity_176);
                      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_17, &PredOrFunc_20);
                      {
                        Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (ModuleName_18));
                        MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Name_19));
                      }
                      {
                        PFSymNameArity_177 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PFSymNameArity_177, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
                        MR_hl_field(MR_mktag(0), PFSymNameArity_177, 1) = ((MR_Box) (Var_151));
                        MR_hl_field(MR_mktag(0), PFSymNameArity_177, 2) = ((MR_Box) (Arity_176));
                      }
                      {
                        CallId_193 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), CallId_193, 0) = ((MR_Box) (PFSymNameArity_177));
                      }
                      PredMarkers_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
                      Var_199 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_193, ArgNum_8, PredMarkers_194);
                      {
                        Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (Var_199));
                      }
                      {
                        Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Var_198));
                        MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
                      }
                      {
                        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[497])));
                        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_197));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SymNameArity_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgVectorKind_9, (MR_Integer) 0))));
                      MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArity_10, (MR_Integer) 0))));
                      MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SymNameArity_10, (MR_Integer) 1))));
                      MR_Word PFSymNameArity_13;
                      MR_Word CallId_211;
                      MR_Word PredMarkers_212;
                      MR_Word Var_215;
                      MR_Word Var_216;
                      MR_String Var_217;

                      {
                        PFSymNameArity_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PFSymNameArity_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(0), PFSymNameArity_13, 1) = ((MR_Box) (SymName_11));
                        MR_hl_field(MR_mktag(0), PFSymNameArity_13, 2) = ((MR_Box) (Arity_12));
                      }
                      {
                        CallId_211 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), CallId_211, 0) = ((MR_Box) (PFSymNameArity_13));
                      }
                      PredMarkers_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
                      Var_217 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_211, ArgNum_8, PredMarkers_212);
                      {
                        Var_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_216, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), Var_216, 1) = ((MR_Box) (Var_217));
                      }
                      {
                        Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (Var_216));
                        MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
                      }
                      {
                        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[497])));
                        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_215));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgVectorKind_9, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word CallId_14;
                          MR_Word GenericId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgVectorKind_9, (MR_Integer) 1))));
                          MR_Word PredMarkers_22;
                          MR_Word Var_155;
                          MR_Word Var_156;
                          MR_String Var_157;

                          {
                            CallId_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), CallId_14, 0) = ((MR_Box) (GenericId_21));
                          }
                          PredMarkers_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_4, (MR_Integer) 2))));
                          Var_157 = hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_f_0(CallId_14, ArgNum_8, PredMarkers_22);
                          {
                            Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (Var_157));
                          }
                          {
                            Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Var_156));
                            MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
                          }
                          {
                            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[497])));
                            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_155));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String EventName_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), ArgVectorKind_9, (MR_Integer) 1))));
                          MR_Word Var_136;
                          MR_Word Var_137;
                          MR_Word Var_138;
                          MR_Word Var_139;
                          MR_Word Var_140;
                          MR_Word Var_143;
                          MR_Word Var_144;

                          {
                            Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                            MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (ArgNum_8));
                          }
                          {
                            Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (ArgNum_8));
                          }
                          {
                            Var_144 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_144, 0) = ((MR_Box) (EventName_24));
                          }
                          {
                            Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
                            MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
                          }
                          {
                            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[496])));
                            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
                          }
                          {
                            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
                          }
                          {
                            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
                            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
                          }
                          {
                            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[273])));
                            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_136));
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
          MR_Word UnifyContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalContext_5, (MR_Integer) 0))));

          hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_25, (MR_Word) ((MR_Unsigned) 0U), &Pieces_6);
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
    ActualPieces_6 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[13]), ActualExpectedList_3);
    Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ExpectedPieces_5, ActualPieces_6);
    Pieces_4 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_10, (MR_Word) ((MR_Unsigned) 0U));
    return Pieces_4;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_2(
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
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_1(
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
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__conv2_ConsDefn_44));
    check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44, (MR_Integer) 0))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44, (MR_Integer) 1))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44, (MR_Integer) 2))));
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_45;
      MR_Word Var_46;

      (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44, (MR_Integer) 3))));
      Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44, (MR_Integer) 4))));
      Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefn_44, (MR_Integer) 5))));
      (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded = ((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__Var_63 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__Var_63, (MR_Integer) 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__Var_63, (MR_Integer) 1))));
        check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_3(env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), &(env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__conv2_ConsDefn_44, (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefnList_16, check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_5, env_ptr);
        (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0(
  MR_Word Info_11,
  MR_Word ClauseContext_12,
  MR_Word UnifyContext_13,
  MR_Word Context_14,
  MR_Word Var_15,
  MR_Word ConsDefnList_16,
  MR_Word Functor_17,
  MR_Word Args_18,
  MR_Word ArgsTypeAssignSet_19)
{
  {
    struct check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0_s env;

    (env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefnList_16 = ConsDefnList_16;
    {
      MR_Word Spec_20;
      MR_Word InClauseForPieces_21;
      MR_Word ContextPieces_22;
      MR_Word ModuleInfo_23;
      MR_Word VarSet_24;
      MR_Word InstVarSet_25;
      MR_Word StrippedFunctor_26;
      MR_String StrippedFunctorStr_27;
      MR_Integer Arity_28;
      MR_Word ConsArgTypesSet_29;
      MR_Word MaybeNumMismatches_39;
      MR_Word ErrorPieces_40;
      MR_Word VerboseComponents_42;
      MR_String Arguments_49;
      MR_Word VarAndTermPieces_51;
      MR_Word Msg_52;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_86;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_94;
      MR_Word Var_96;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_122;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Integer Var_126;
      MR_Word Var_127;
      MR_Word ConsArgTypes_30;
      MR_Word Var_31;

      InClauseForPieces_21 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_12);
      hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_13, InClauseForPieces_21, &ContextPieces_22);
      ModuleInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 0))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 1))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 2))));
      Var_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 3))));
      Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 4))));
      VarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 5))));
      check_hlds__typecheck_errors__get_inst_varset_2_p_0(ClauseContext_12, &InstVarSet_25);
      parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_17, &StrippedFunctor_26);
      StrippedFunctorStr_27 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_23, VarSet_24, (MR_Integer) 0, StrippedFunctor_26, Args_18);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), Args_18, &Arity_28);
      ConsArgTypesSet_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[10]), ArgsTypeAssignSet_19);
      (env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded = mercury__list__all_same_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ConsArgTypesSet_29);
      if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded)
      {
        (env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded = (ConsArgTypesSet_29 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded)
        {
          ConsArgTypes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgTypesSet_29, (MR_Integer) 0))));
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgTypesSet_29, (MR_Integer) 1))));
        }
      }
      if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded)
      {
        MR_Word ArgExpTypes_32;
        MR_Word TypeAssigns_33;
        MR_Word RevSubsumesMismatches_34;
        MR_Word RevNoSubsumeMismatches_35;

        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_18, ConsArgTypes_30, &ArgExpTypes_32);
        TypeAssigns_33 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[11]), ArgsTypeAssignSet_19);
        check_hlds__typecheck_errors__find_mismatched_args_8_p_0(InstVarSet_25, (MR_Integer) 1, ArgExpTypes_32, TypeAssigns_33, (MR_Word) ((MR_Unsigned) 0U), &RevSubsumesMismatches_34, (MR_Word) ((MR_Unsigned) 0U), &RevNoSubsumeMismatches_35);
        if ((RevNoSubsumeMismatches_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubsumesMismatches_41;
          MR_Integer Var_59;

          mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevSubsumesMismatches_34, &SubsumesMismatches_41);
          Var_59 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), SubsumesMismatches_41);
          {
            MaybeNumMismatches_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeNumMismatches_39, 0) = ((MR_Box) (Var_59));
          }
          ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(SubsumesMismatches_41, (MR_Integer) 1, VarSet_24, Functor_17);
        }
        else
        {
          MR_Word NoSubsumeMismatches_38;
          MR_Integer Var_61;

          mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevNoSubsumeMismatches_35, &NoSubsumeMismatches_38);
          Var_61 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), NoSubsumeMismatches_38);
          {
            MaybeNumMismatches_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeNumMismatches_39, 0) = ((MR_Box) (Var_61));
          }
          ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(NoSubsumeMismatches_38, (MR_Integer) 1, VarSet_24, Functor_17);
        }
        VerboseComponents_42 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word TypeAssignSet_43;
        MR_Word ResultTypePieces_47;
        MR_Word AllTypesPieces_48;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;

        MaybeNumMismatches_39 = (MR_Word) ((MR_Unsigned) 0U);
        TypeAssignSet_43 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_19);
        check_hlds__typecheck_errors__report_error_functor_arg_types_9_f_0_6(&env);
        if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded)
        {
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;

          Var_64 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_15);
          Var_66 = check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(InstVarSet_25, TypeAssignSet_43, Var_15);
          Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_66, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])));
          ResultTypePieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_65);
        }
        else
          ResultTypePieces_47 = (MR_Word) ((MR_Unsigned) 0U);
        Var_73 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_17, Arity_28);
        Var_75 = check_hlds__typecheck_errors__type_of_functor_to_pieces_4_f_0(InstVarSet_25, Functor_17, Arity_28, (env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__ConsDefnList_16);
        Var_76 = check_hlds__typecheck_errors__types_of_vars_to_pieces_4_f_0(VarSet_24, InstVarSet_25, Args_18, TypeAssignSet_43);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_75, Var_76);
        AllTypesPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, Var_74);
        ErrorPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ResultTypePieces_47, AllTypesPieces_48);
        check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_11, TypeAssignSet_43, VarSet_24, &VerboseComponents_42);
      }
      if ((MaybeNumMismatches_39 == (MR_Word) ((MR_Unsigned) 0U)))
        Arguments_49 = (MR_String) "argument(s)";
      else
      {
        MR_Integer NumMismatches_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeNumMismatches_39, (MR_Integer) 0))));

        (env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded = (NumMismatches_50 == (MR_Integer) 1);
        if ((env).check_hlds__typecheck_errors__report_error_functor_arg_types_10_f_0_env_0__succeeded)
          Arguments_49 = (MR_String) "argument";
        else
          Arguments_49 = (MR_String) "arguments";
      }
      Var_82 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_15);
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (StrippedFunctorStr_27));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Arguments_49));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[50])));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[48])));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
      }
      Var_106 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(StrippedFunctor_26, Arity_28);
      Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_106, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_84, Var_105);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_82, Var_83);
      VarAndTermPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[45])), Var_81);
      {
        Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (ContextPieces_22));
      }
      {
        Var_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (VarAndTermPieces_51));
      }
      {
        Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (ErrorPieces_40));
      }
      {
        Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (VerboseComponents_42));
      }
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_117));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
      }
      {
        Msg_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Msg_52, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), Msg_52, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Msg_52));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_functor_arg_types\'/9"));
        MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), Spec_20, 3) = ((MR_Box) (Var_122));
      }
      return Spec_20;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_4_f_0(
  MR_Word VarSet_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word TypeAssignSet_4)
{
  {
    MR_Word HeadVar__5_5;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17]));
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      Var_26 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_1, Var_16);
      Var_28 = check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(InstVarSet_2, TypeAssignSet_4, Var_16);
      Var_29 = check_hlds__typecheck_errors__types_of_vars_to_pieces_4_f_0(VarSet_1, InstVarSet_2, Vars_17, TypeAssignSet_4);
      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_29);
      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, Var_27);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])), Var_25);
    }
    return HeadVar__5_5;
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
      MR_Word ArgNumPieces_21;
      MR_Word VarNamePieces_23;
      MR_Word HeadExpectedTypePieces_24;
      MR_Word HeadActualTypePieces_25;
      MR_Word ErrorDescPieces_29;
      MR_Word SpecialMismatches_33;
      MR_Word SpecialReasonPieces_34;
      MR_Word ThisMismatchPieces_35;
      MR_Word FollowingMismatchPieces_36;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Mismatch_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_9, (MR_Integer) 2))));
      MR_Word Mismatches_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_9, (MR_Integer) 3))));
      MR_Word MaybeSpecial_146;
      MR_Word STATE_VARIABLE_Specials_12_149;
      MR_Integer Arity_19;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Integer Var_41;
      MR_String Var_22;
      MR_Word TailActualTypePieces_28;

      succeeded = ((((MR_tag((MR_Word) Functor_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 1))));
        Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_4, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
          succeeded = (strcmp(Var_40, (MR_String) "") == 0);
          if (succeeded)
          {
            Var_41 = (MR_Integer) 0;
            succeeded = (Arity_19 > Var_41);
          }
        }
      }
      if (succeeded)
        switch (First_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) ArgNum_15 - (MR_Unsigned) 1);

              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgNumPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[4])));
                MR_hl_field(MR_mktag(1), ArgNumPieces_21, 1) = ((MR_Box) (Var_44));
              }
            }
            break;
          case (MR_Integer) 1:
            ArgNumPieces_21 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[243]));
            break;
        }
      else
      {
        MR_Word Var_54;
        MR_Word Var_55;

        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (ArgNum_15));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ArgNumPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[4])));
          MR_hl_field(MR_mktag(1), ArgNumPieces_21, 1) = ((MR_Box) (Var_54));
        }
      }
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, Var_16, &Var_22);
      if (succeeded)
      {
        MR_Word Var_59;
        MR_Word Var_60;
        MR_String Var_61;

        Var_61 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, Var_16);
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])));
        }
        {
          VarNamePieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VarNamePieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[244])));
          MR_hl_field(MR_mktag(1), VarNamePieces_23, 1) = ((MR_Box) (Var_59));
        }
      }
      else
        VarNamePieces_23 = (MR_Word) ((MR_Unsigned) 0U);
      HeadExpectedTypePieces_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_140, (MR_Integer) 0))));
      HeadActualTypePieces_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_140, (MR_Integer) 1))));
      succeeded = check_hlds__typecheck_errors__expected_types_match_3_p_0(HeadExpectedTypePieces_24, Mismatches_141, &TailActualTypePieces_28);
      if (succeeded)
        if ((TailActualTypePieces_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_103;
          MR_Word Var_108;

          Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadExpectedTypePieces_24, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
          Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[56])), Var_108);
          Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])), Var_103);
          Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadActualTypePieces_25, Var_96);
          ErrorDescPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), Var_95);
        }
        else
        {
          MR_Word SecondActualTypePieces_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailActualTypePieces_28, (MR_Integer) 0))));
          MR_Word ThirdPlusActualTypePieces_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailActualTypePieces_28, (MR_Integer) 1))));
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_79;
          MR_Word Var_84;

          Var_71 = check_hlds__typecheck_errors__report_actual_types_3_f_0(HeadActualTypePieces_25, SecondActualTypePieces_30, ThirdPlusActualTypePieces_31);
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadExpectedTypePieces_24, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
          Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[56])), Var_84);
          Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])), Var_79);
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, Var_72);
          ErrorDescPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), Var_70);
        }
      else
      {
        MR_Word AllMismatches_32;
        MR_Word Var_121;
        MR_Word Var_122;

        {
          AllMismatches_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllMismatches_32, 0) = ((MR_Box) (Mismatch_140));
          MR_hl_field(MR_mktag(1), AllMismatches_32, 1) = ((MR_Box) (Mismatches_141));
        }
        Var_122 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0((MR_Integer) 1, AllMismatches_32);
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_122, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
        ErrorDescPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[247])), Var_121);
      }
      check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(Mismatches_141, &STATE_VARIABLE_Specials_12_149);
      MaybeSpecial_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_140, (MR_Integer) 3))));
      if ((MaybeSpecial_146 == (MR_Word) ((MR_Unsigned) 0U)))
        SpecialMismatches_33 = STATE_VARIABLE_Specials_12_149;
      else
      {
        MR_Word Special_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecial_146, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_147)), STATE_VARIABLE_Specials_12_149, &SpecialMismatches_33);
      }
      SpecialReasonPieces_34 = check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(SpecialMismatches_33);
      Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorDescPieces_29, SpecialReasonPieces_34);
      Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarNamePieces_23, Var_132);
      ThisMismatchPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgNumPieces_21, Var_131);
      if ((Mismatches_10 == (MR_Word) ((MR_Unsigned) 0U)))
        FollowingMismatchPieces_36 = (MR_Word) ((MR_Unsigned) 0U);
      else
        FollowingMismatchPieces_36 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(Mismatches_10, (MR_Integer) 0, VarSet_3, Functor_4);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ThisMismatchPieces_35, FollowingMismatchPieces_36);
    }
    return HeadVar__5_5;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(
  MR_Word Specials_3)
{
  {
    MR_Word Pieces_4;
    MR_Word Var_6;

    Var_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), Specials_3);
    check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0((MR_Integer) 0, Var_6, &Pieces_4);
    return Pieces_4;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadSpecial_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailSpecials_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailPieces_9;
    MR_Word HeadPieces_10;
    MR_Word ReasonIsPieces_16;
    MR_String GetoptModule_17;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;

    check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0((MR_Integer) 1, TailSpecials_7, &TailPieces_9);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ReasonIsPieces_16 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[255]));
        break;
      case (MR_Integer) 1:
        ReasonIsPieces_16 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[257]));
        break;
    }
    GetoptModule_17 = (MR_String) (HeadSpecial_6);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (GetoptModule_17));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[271])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[259])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[258])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    HeadPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ReasonIsPieces_16, Var_24);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_10, TailPieces_9);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0));
  else
  {
    MR_Word Mismatch_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mismatches_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MaybeSpecial_9;
    MR_Word STATE_VARIABLE_Specials_12_12;

    check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(Mismatches_4, &STATE_VARIABLE_Specials_12_12);
    MaybeSpecial_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_3, (MR_Integer) 3))));
    if ((MaybeSpecial_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = STATE_VARIABLE_Specials_12_12;
    else
    {
      MR_Word Special_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecial_9, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_10)), STATE_VARIABLE_Specials_12_12, HeadVar__2_2);
    }
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
      MR_Word HeadPieces_13;
      MR_Word TailPieces_14;
      MR_Word Var_15;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_24;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Integer Var_47;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (HeadVar__1_1));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[250])));
      }
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[249])));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
      }
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ExpectedTypePieces_9, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[254])), Var_40);
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[248])), Var_35);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ActualTypePieces_10, Var_30);
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[252])), Var_29);
      HeadPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_24);
      Var_47 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
      TailPieces_14 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(Var_47, Mismatches_7);
      HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_13, TailPieces_14);
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

      Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[75])), SecondActualTypePieces_6);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FirstActualTypePieces_5, Var_17);
    }
    else
    {
      MR_Word ThirdActualTypePieces_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThirdPlusActualTypePieces_7, (MR_Integer) 0))));
      MR_Word FourthPlusActualTypePieces_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThirdPlusActualTypePieces_7, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_16;

      Var_16 = check_hlds__typecheck_errors__report_actual_types_3_f_0(SecondActualTypePieces_6, ThirdActualTypePieces_9, FourthPlusActualTypePieces_10);
      Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[248])), Var_16);
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadExpTypePieces_10)));
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
check_hlds__typecheck_errors__find_mismatched_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeMismatches_35;
    MR_Word conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_37;

    check_hlds__typecheck_errors__substitute_types_check_match_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMismatches_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_37);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMismatches_35));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_37));
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_8_p_0(
  MR_Word InstVarSet_1,
  MR_Integer CurArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word TypeAssignSet_4,
  MR_Word STATE_VARIABLE_RevSubsumesMismatches_0_5,
  MR_Word * STATE_VARIABLE_RevSubsumesMismatches_6,
  MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_0_7,
  MR_Word * STATE_VARIABLE_RevNoSubsumeMismatches_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevNoSubsumeMismatches_8 = STATE_VARIABLE_RevNoSubsumeMismatches_0_7;
      *STATE_VARIABLE_RevSubsumesMismatches_6 = STATE_VARIABLE_RevSubsumesMismatches_0_5;
    }
    else
    {
      MR_Word Arg_20;
      MR_Word ExpType_21;
      MR_Word ArgExpTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeStuffList_26;
      MR_Word TypeMismatches0_27;
      MR_Word DoesSomeTypeStuffMatch_28;
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_41_41;
      MR_Word STATE_VARIABLE_RevSubsumesMismatches_42_42;
      MR_Integer Var_45;
      MR_Box conv3_TypeMismatches0_27;
      MR_Box conv2_DoesSomeTypeStuffMatch_28;
      MR_Integer next_value_of_CurArgNum_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_7;

      Arg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
      ExpType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
      check_hlds__typecheck_errors__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_4, Arg_20, &TypeStuffList_26);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__typecheck_errors__find_mismatched_args_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (InstVarSet_1));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (ExpType_21));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0), Var_38, TypeStuffList_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeMismatches0_27, ((MR_Box) ((MR_Integer) 0)), &conv2_DoesSomeTypeStuffMatch_28);
      TypeMismatches0_27 = ((MR_Word) (conv3_TypeMismatches0_27));
      DoesSomeTypeStuffMatch_28 = ((MR_Word) (conv2_DoesSomeTypeStuffMatch_28));
      switch (DoesSomeTypeStuffMatch_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeMismatches_29;

            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0), TypeMismatches0_27, &TypeMismatches_29);
            if ((TypeMismatches_29 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_errors.find_mismatched_args\'/8", (MR_String) "no_type_stuff_matches but TypeMismatches = []");
                return;
              }
            else
            {
              MR_Word HeadTypeMismatch_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_29, (MR_Integer) 0))));
              MR_Word TailTypeMismatches_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_29, (MR_Integer) 1))));
              MR_Word Mismatch_32;
              MR_Word Mismatch_58;
              MR_Word Mismatches_59;
              MR_Word Var_60;

              {
                Mismatch_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Mismatch_32, 0) = ((MR_Box) (CurArgNum_2));
                MR_hl_field(MR_mktag(0), Mismatch_32, 1) = ((MR_Box) (Arg_20));
                MR_hl_field(MR_mktag(0), Mismatch_32, 2) = ((MR_Box) (HeadTypeMismatch_30));
                MR_hl_field(MR_mktag(0), Mismatch_32, 3) = ((MR_Box) (TailTypeMismatches_31));
              }
              Mismatch_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_29, (MR_Integer) 0))));
              Mismatches_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeMismatches_29, (MR_Integer) 1))));
              Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Mismatch_58, (MR_Integer) 2))) & (MR_Integer) 1);
              succeeded = (Var_60 == (MR_Integer) 0);
              if (succeeded)
                succeeded = check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(Mismatches_59);
              if (succeeded)
              {
                {
                  STATE_VARIABLE_RevNoSubsumeMismatches_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevNoSubsumeMismatches_41_41, 0) = ((MR_Box) (Mismatch_32));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevNoSubsumeMismatches_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevNoSubsumeMismatches_0_7));
                }
                STATE_VARIABLE_RevSubsumesMismatches_42_42 = STATE_VARIABLE_RevSubsumesMismatches_0_5;
              }
              else
              {
                {
                  STATE_VARIABLE_RevSubsumesMismatches_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSubsumesMismatches_42_42, 0) = ((MR_Box) (Mismatch_32));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSubsumesMismatches_42_42, 1) = ((MR_Box) (STATE_VARIABLE_RevSubsumesMismatches_0_5));
                }
                STATE_VARIABLE_RevNoSubsumeMismatches_41_41 = STATE_VARIABLE_RevNoSubsumeMismatches_0_7;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevSubsumesMismatches_42_42 = STATE_VARIABLE_RevSubsumesMismatches_0_5;
            STATE_VARIABLE_RevNoSubsumeMismatches_41_41 = STATE_VARIABLE_RevNoSubsumeMismatches_0_7;
          }
          break;
      }
      Var_45 = (MR_Integer) ((MR_Unsigned) CurArgNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_2 = Var_45;
      next_value_of_HeadVar__3_3 = ArgExpTypes_22;
      next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_5 = STATE_VARIABLE_RevSubsumesMismatches_42_42;
      next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_7 = STATE_VARIABLE_RevNoSubsumeMismatches_41_41;
      CurArgNum_2 = next_value_of_CurArgNum_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevSubsumesMismatches_0_5 = next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_5;
      STATE_VARIABLE_RevNoSubsumeMismatches_0_7 = next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_all_type_stuffs_remove_dups_3_p_0(
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
      MR_Word TypeStuff_10;
      MR_Word ExternalTypeParams_15;
      MR_Word TypeBindings_16;
      MR_Word TVarSet_17;
      MR_Word VarTypes_18;
      MR_Word Type_20;
      MR_Word Type0_19;

      check_hlds__typecheck_errors__get_all_type_stuffs_remove_dups_3_p_0(TypeAssigns_6, HeadVar__2_2, &TailTypeStuffs_9);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_5, &ExternalTypeParams_15);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_16);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_17);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_18);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_18, HeadVar__2_2, &Type0_19);
      if (succeeded)
        Type_20 = Type0_19;
      else
        Type_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2]));
      {
        TypeStuff_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeStuff_10, 0) = ((MR_Box) (Type_20));
        MR_hl_field(MR_mktag(0), TypeStuff_10, 1) = ((MR_Box) (TVarSet_17));
        MR_hl_field(MR_mktag(0), TypeStuff_10, 2) = ((MR_Box) (TypeBindings_16));
        MR_hl_field(MR_mktag(0), TypeStuff_10, 3) = ((MR_Box) (ExternalTypeParams_15));
      }
      succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_stuff_0), ((MR_Box) (TypeStuff_10)), TailTypeStuffs_9);
      if (succeeded)
        *HeadVar__3_3 = TailTypeStuffs_9;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeStuff_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypeStuffs_9));
        }
    }
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
      MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Mismatch_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (Var_4 == (MR_Integer) 0);
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

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_functor_type_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_functor_type_8_f_0(
  MR_Word Info_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsDefnList_14,
  MR_Word Functor_15,
  MR_Integer Arity_16,
  MR_Word TypeAssignSet_17)
{
  {
    MR_bool succeeded;
    MR_Word Spec_18;
    MR_Word ClauseContext_19;
    MR_Word InClauseForPieces_20;
    MR_Word ContextPieces_21;
    MR_Word VarSet_22;
    MR_Word InstVarSet_23;
    MR_Word MainPieces_24;
    MR_Word NoSuffixIntegerPieces_27;
    MR_Word VerboseComponents_28;
    MR_Word AlwaysPieces_29;
    MR_Word Msg_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word TypeCtorInfo_93_93;
    MR_Word TypesOfVar_26;
    MR_Word Var_74;
    MR_Word Var_76;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
    InClauseForPieces_20 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_19);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
    VarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_19, (MR_Integer) 5))));
    check_hlds__typecheck_errors__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_23);
    Var_36 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
    Var_45 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
    Var_54 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
    Var_56 = check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(InstVarSet_23, TypeAssignSet_17, Var_13);
    Var_65 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
    Var_67 = check_hlds__typecheck_errors__type_of_functor_to_pieces_4_f_0(InstVarSet_23, Functor_15, Arity_16, ConsDefnList_14);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_67, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, Var_66);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])), Var_64);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, Var_57);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_54, Var_55);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])), Var_53);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, Var_46);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[43])), Var_44);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_36, Var_37);
    MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[27])), Var_35);
    succeeded = ((((MR_tag((MR_Word) Functor_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 0);
      if (succeeded)
      {
        TypeCtorInfo_93_93 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        check_hlds__typecheck_errors__get_all_transformed_type_stuffs__ho3_4_p_0(TypeAssignSet_17, Var_13, &TypesOfVar_26);
        Var_76 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[9]);
        succeeded = mercury__list__any_true_2_p_0(TypeCtorInfo_93_93, Var_76, TypesOfVar_26);
      }
    }
    if (succeeded)
      NoSuffixIntegerPieces_27 = check_hlds__typecheck_errors__nosuffix_integer_pieces_0_f_0();
    else
      NoSuffixIntegerPieces_27 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_10, TypeAssignSet_17, VarSet_22, &VerboseComponents_28);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_24, NoSuffixIntegerPieces_27);
    AlwaysPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_21, Var_77);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (AlwaysPieces_29));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (VerboseComponents_28));
    }
    {
      Msg_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_30, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(2), Msg_30, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Msg_30));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_functor_type\'/8"));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_18, 3) = ((MR_Box) (Var_83));
    }
    return Spec_18;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_all_transformed_type_stuffs__ho3_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeAssign_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Result_11;
      MR_Word Results_12;
      MR_Word VarTypes_21;
      MR_Word Type0_30;
      MR_Word TypeBindings_32;
      MR_Word Type1_34;
      MR_Word _ExternalTypeParams_33;
      MR_Word _TypeVarSet_31;
      MR_Word Type0_22;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_8, &_ExternalTypeParams_33);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_8, &TypeBindings_32);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_8, &_TypeVarSet_31);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_8, &VarTypes_21);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_21, HeadVar__3_3, &Type0_22);
      if (succeeded)
        Type0_30 = Type0_22;
      else
        Type0_30 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2]));
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_32, Type0_30, &Type1_34);
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_34, &Result_11);
      check_hlds__typecheck_errors__get_all_transformed_type_stuffs__ho3_4_p_0(TypeAssigns_9, HeadVar__3_3, &Results_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Result_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Results_12));
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__nosuffix_integer_pieces_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[577]));
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_4_f_0(
  MR_Word InstVarSet_6,
  MR_Word Functor_7,
  MR_Integer Arity_8,
  MR_Word ConsDefnList_9)
{
  {
    MR_bool succeeded = (ConsDefnList_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Pieces_10;
    MR_Word SingleDefn_11;
    MR_Word Var_15;

    if (succeeded)
    {
      SingleDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefnList_9, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefnList_9, (MR_Integer) 1))));
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word SepPieces_12;
      MR_Word ConsTypePieces_13;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_28;
      MR_Word TVarSet_54;
      MR_Word ExistQVars_55;
      MR_Word ConsType_56;
      MR_Word ArgTypes_57;
      MR_Word ArgPieces_66;
      MR_Word Var_77;

      succeeded = (Arity_8 == (MR_Integer) 0);
      if (succeeded)
        SepPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
        SepPieces_12 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15]));
      TVarSet_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_11, (MR_Integer) 0))));
      ExistQVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_11, (MR_Integer) 1))));
      ConsType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_11, (MR_Integer) 2))));
      ArgTypes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleDefn_11, (MR_Integer) 3))));
      if ((ArgTypes_57 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgPieces_66 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word SymName_62;

        succeeded = ((((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 1))));
          {
            MR_Word Type_65;
            MR_Word Var_68;

            {
              Type_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Type_65, 0) = ((MR_Box) (SymName_62));
              MR_hl_field(MR_mktag(1), Type_65, 1) = ((MR_Box) (ArgTypes_57));
              MR_hl_field(MR_mktag(1), Type_65, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_68 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 0, TVarSet_54, InstVarSet_6, ExistQVars_55, Type_65);
            ArgPieces_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[250])));
          }
        }
        else
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
      }
      Var_77 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 0, TVarSet_54, InstVarSet_6, ExistQVars_55, ConsType_56);
      ConsTypePieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_66, Var_77);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConsTypePieces_13, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[446])));
      Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[444])), Var_28);
      Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SepPieces_12, Var_23);
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), Var_22);
    }
    else
    {
      MR_Word ConsTypeListPieces_14;
      MR_Word Var_40;

      ConsTypeListPieces_14 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_6, ConsDefnList_9, Functor_7, Arity_8);
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConsTypeListPieces_14, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[449])));
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[447])), Var_40);
    }
    return Pieces_10;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(
  MR_Word InstVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer Arity_4)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConsDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ConsDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ThisPieces_15;
      MR_Word TVarSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 0))));
      MR_Word ExistQVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 1))));
      MR_Word ConsType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 2))));
      MR_Word ArgTypes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_10, (MR_Integer) 3))));
      MR_Word ArgPieces_46;
      MR_Word Var_57;

      if ((ArgTypes_37 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgPieces_46 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word SymName_42;

        succeeded = ((((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          SymName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_3, (MR_Integer) 1))));
          {
            MR_Word Type_45;
            MR_Word Var_48;

            {
              Type_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Type_45, 0) = ((MR_Box) (SymName_42));
              MR_hl_field(MR_mktag(1), Type_45, 1) = ((MR_Box) (ArgTypes_37));
              MR_hl_field(MR_mktag(1), Type_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_48 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 0, TVarSet_34, InstVarSet_1, ExistQVars_35, Type_45);
            ArgPieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[250])));
          }
        }
        else
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
      }
      Var_57 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 0, TVarSet_34, InstVarSet_1, ExistQVars_35, ConsType_36);
      ThisPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgPieces_46, Var_57);
      if ((ConsDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__5_5 = ThisPieces_15;
      else
      {
        MR_Word ConnectPieces_18;
        MR_Word TailPieces_19;
        MR_Word Var_28;

        succeeded = (Arity_4 == (MR_Integer) 0);
        if (succeeded)
          ConnectPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[248]));
        else
          ConnectPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35]));
        TailPieces_19 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_1, ConsDefns_11, Functor_3, Arity_4);
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConnectPieces_18, TailPieces_19);
        HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ThisPieces_15, Var_28);
      }
    }
    return HeadVar__5_5;
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
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[432])));
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
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Arity_5 - (MR_Unsigned) 1);

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[433])));
          MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_23));
        }
      }
      else
      {
        MR_Word Var_33;
        MR_Word Var_34;

        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Functor_4));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[434])));
          MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_33));
        }
      }
    }
    return Pieces_6;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_lambda_var_9_f_0(
  MR_Word Info_11,
  MR_Word ClauseContext_12,
  MR_Word UnifyContext_13,
  MR_Word Context_14,
  MR_Word PredOrFunc_15,
  MR_Word Var_17,
  MR_Word ArgVars_18,
  MR_Word TypeAssignSet_19)
{
  {
    MR_Word Spec_20;

    Spec_20 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_54_93_95_48_9_f_0(Info_11, ClauseContext_12, UnifyContext_13, Context_14, PredOrFunc_15, Var_17, ArgVars_18, TypeAssignSet_19);
    return Spec_20;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_54_93_95_48_9_f_0(
  MR_Word Info_11,
  MR_Word ClauseContext_12,
  MR_Word UnifyContext_13,
  MR_Word Context_14,
  MR_Word PredOrFunc_15,
  MR_Word Var_17,
  MR_Word ArgVars_18,
  MR_Word TypeAssignSet_19)
{
  {
    MR_Word Spec_20;
    MR_Word InClauseForPieces_21;
    MR_Word ContextPieces_22;
    MR_Word VarSet_23;
    MR_Word InstVarSet_24;
    MR_Word Pieces1_25;
    MR_Word Pieces2_26;
    MR_Word Pieces3_29;
    MR_Word Pieces4b_32;
    MR_Word Pieces4_43;
    MR_Word MainPieces_44;
    MR_Word VerboseComponents_45;
    MR_Word Msg_46;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_148;

    InClauseForPieces_21 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_12);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_13, InClauseForPieces_21, &ContextPieces_22);
    VarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_12, (MR_Integer) 5))));
    check_hlds__typecheck_errors__get_inst_varset_2_p_0(ClauseContext_12, &InstVarSet_24);
    Var_52 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_17);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
    Pieces1_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[27])), Var_51);
    Var_96 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_17);
    Var_98 = check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(InstVarSet_24, TypeAssignSet_19, Var_17);
    Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_98, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[35])));
    Pieces3_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_96, Var_97);
    switch (PredOrFunc_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgs_27;
          MR_Word RetVar_28;
          MR_Word FuncArgVars_38;
          MR_Word Var_58;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_String Var_63;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_String Var_72;
          MR_Box conv0_RetVar_28;
          MR_Box conv1_Var_39;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ArgVars_18, &FuncArgs_27, &conv0_RetVar_28);
          RetVar_28 = ((MR_Word) (conv0_RetVar_28));
          Var_63 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_23, FuncArgs_27);
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
          }
          Var_72 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_23, RetVar_28);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[32])));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_3[0])));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[30])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
          }
          {
            Pieces2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Pieces2_26, 1) = ((MR_Box) (Var_58));
          }
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ArgVars_18, &FuncArgVars_38, &conv1_Var_39);
          if ((FuncArgVars_38 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces4b_32 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[39]));
          else
          {
            MR_Integer Var_107;
            MR_Word Var_111;
            MR_String Var_112;
            MR_String Var_114;
            MR_Integer NumArgVars_150;
            MR_Word Strings_151;
            MR_String JoinedString_152;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), FuncArgVars_38, &NumArgVars_150);
            Var_107 = (MR_Integer) ((MR_Unsigned) NumArgVars_150 - (MR_Unsigned) 1);
            mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_107, ((MR_Box) ((MR_String) ", _")), &Strings_151);
            JoinedString_152 = mercury__string__join_list_2_f_0((MR_String) "", Strings_151);
            Var_114 = mercury__string__f_43_43_2_f_0(JoinedString_152, (MR_String) ") = _");
            Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "func(_", Var_114);
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (Var_112));
            }
            {
              Pieces4b_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces4b_32, 0) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(1), Pieces4b_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_String Var_86;

          Var_86 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_23, ArgVars_18);
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[34])));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[33])));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
          }
          {
            Pieces2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Pieces2_26, 1) = ((MR_Box) (Var_81));
          }
          if ((ArgVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
            Pieces4b_32 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[41]));
          else
          {
            MR_Integer NumArgVars_35;
            MR_Word Strings_36;
            MR_String JoinedString_37;
            MR_Integer Var_120;
            MR_Word Var_124;
            MR_String Var_125;
            MR_String Var_127;

            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ArgVars_18, &NumArgVars_35);
            Var_120 = (MR_Integer) ((MR_Unsigned) NumArgVars_35 - (MR_Unsigned) 1);
            mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_120, ((MR_Box) ((MR_String) ", _")), &Strings_36);
            JoinedString_37 = mercury__string__join_list_2_f_0((MR_String) "", Strings_36);
            Var_127 = mercury__string__f_43_43_2_f_0(JoinedString_37, (MR_String) ")");
            Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "pred(_", Var_127);
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (Var_125));
            }
            {
              Pieces4b_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces4b_32, 0) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(1), Pieces4b_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
    }
    Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces4b_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    Pieces4_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[37])), Var_138);
    Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces3_29, Pieces4_43);
    Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces2_26, Var_140);
    MainPieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_25, Var_139);
    check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_11, TypeAssignSet_19, VarSet_23, &VerboseComponents_45);
    {
      Var_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (ContextPieces_22));
    }
    {
      Var_144 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (MainPieces_44));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (VerboseComponents_45));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_143));
    }
    {
      Msg_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_46, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(2), Msg_46, 1) = ((MR_Box) (Var_141));
    }
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Msg_46));
      MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_lambda_var\'/9"));
      MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_20, 3) = ((MR_Box) (Var_148));
    }
    return Spec_20;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__get_inst_varset_2_p_0(
  MR_Word ClauseContext_3,
  MR_Word * InstVarSet_4)
{
  {
    MR_Word ProgVarSet_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_3, (MR_Integer) 5))));

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), ProgVarSet_5, InstVarSet_4);
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
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[402])));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_10));
      }
    }
    else
      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[431]));
    return Pieces_6;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_var_7_f_0(
  MR_Word Info_9,
  MR_Word ClauseContext_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word TypeAssignSet_15)
{
  {
    MR_Word Spec_16;
    MR_Word InClauseForPieces_17;
    MR_Word ContextPieces_18;
    MR_Word InstVarSet_20;
    MR_Word MainPieces_21;
    MR_Word VerboseComponents_22;
    MR_Word Msg_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_String Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_Word ProgVarSet_85;

    InClauseForPieces_17 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_10);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_17, &ContextPieces_18);
    ProgVarSet_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_10, (MR_Integer) 5))));
    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), ProgVarSet_85, &InstVarSet_20);
    Var_29 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_85, X_13);
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    Var_37 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_85, Y_14);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
    }
    Var_45 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_85, X_13);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[23])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    Var_48 = check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(InstVarSet_20, TypeAssignSet_15, X_13);
    Var_57 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_85, Y_14);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
    }
    Var_60 = check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(InstVarSet_20, TypeAssignSet_15, Y_14);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_60, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_50, Var_59);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_49);
    MainPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_24, Var_47);
    check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(Info_9, TypeAssignSet_15, ProgVarSet_85, &VerboseComponents_22);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (ContextPieces_18));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (MainPieces_21));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (VerboseComponents_22));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
    }
    {
      Msg_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_23, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(2), Msg_23, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Msg_23));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_var\'/7"));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_16, 3) = ((MR_Box) (Var_74));
    }
    return Spec_16;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__type_assign_set_msg_to_verbose_pieces_4_p_0(
  MR_Word Info_5,
  MR_Word TypeAssignSet_6,
  MR_Word VarSet_7,
  MR_Word * VerboseComponents_8)
{
  {
    MR_bool succeeded;
    MR_Word VerboseErrors_9;

    check_hlds__typecheck_info__typecheck_info_get_verbose_errors_2_p_0(Info_5, &VerboseErrors_9);
    switch (VerboseErrors_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *VerboseComponents_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[579]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word VerbosePieces_10;
          MR_Word Var_11;
          MR_String FirstWords_22;
          MR_Word MaybeSeq_23;
          MR_Word SortedTypeAssignSet_24;
          MR_Word LaterPieces_25;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_26;

          succeeded = (TypeAssignSet_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_6, (MR_Integer) 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            FirstWords_22 = (MR_String) "The partial type assignment was:";
            MaybeSeq_23 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            FirstWords_22 = (MR_String) "The possible partial type assignments were:";
            MaybeSeq_23 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_3[10]));
          }
          mercury__list__sort_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), TypeAssignSet_6, &SortedTypeAssignSet_24);
          LaterPieces_25 = check_hlds__typecheck_errors__type_assign_set_to_pieces_3_f_0(SortedTypeAssignSet_24, MaybeSeq_23, VarSet_7);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (FirstWords_22));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[65])));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (LaterPieces_25));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
          }
          VerbosePieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[82])));
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_11, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), Var_11, 1) = ((MR_Box) (VerbosePieces_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *VerboseComponents_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_set_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeSeq_2,
  MR_Word VarSet_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;

      Var_11 = check_hlds__typecheck_errors__type_assign_to_pieces_3_f_0(TypeAssign_7, MaybeSeq_2, VarSet_3);
      if ((MaybeSeq_2 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSeq_2, (MR_Integer) 0))));
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) N_15 + (MR_Unsigned) 1);

        {
          Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_16));
        }
      }
      Var_12 = check_hlds__typecheck_errors__type_assign_set_to_pieces_3_f_0(TypeAssigns_8, Var_13, VarSet_3);
      HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_11, Var_12);
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_to_pieces_3_f_0(
  MR_Word TypeAssign_5,
  MR_Word MaybeSeq_6,
  MR_Word VarSet_7)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_8;
    MR_Word SeqPieces_11;
    MR_Word ExternalTypeParams_12;
    MR_Word VarTypes_13;
    MR_Word Constraints_14;
    MR_Word TypeBindings_15;
    MR_Word TypeVarSet_16;
    MR_Word Vars_17;
    MR_Word HeadPieces_18;
    MR_Word TypePieces_22;
    MR_Word ConstraintPieces_23;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Pieces1_57;
    MR_Word Pieces2_58;
    MR_Word ConstraintsToProve_59;
    MR_Word AssumedConstraints_60;
    MR_Word PiecesList1_63;
    MR_Word PiecesList2_64;

    if ((MaybeSeq_6 == (MR_Word) ((MR_Unsigned) 0U)))
      SeqPieces_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSeq_6, (MR_Integer) 0))));
      MR_Word SeqPieces0_10;
      MR_Word Var_26;
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (N_9));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
      }
      {
        SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[452])));
        MR_hl_field(MR_mktag(1), SeqPieces0_10, 1) = ((MR_Box) (Var_26));
      }
      succeeded = (N_9 > (MR_Integer) 1);
      if (succeeded)
        {
          SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SeqPieces_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(1), SeqPieces_11, 1) = ((MR_Box) (SeqPieces0_10));
        }
      else
        SeqPieces_11 = SeqPieces0_10;
    }
    check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_5, &ExternalTypeParams_12);
    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_13);
    check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign_5, &Constraints_14);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_15);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TypeVarSet_16);
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes_13, &Vars_17);
    if ((ExternalTypeParams_12 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String VarsStr_21;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_40;

      VarsStr_21 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_16, (MR_Integer) 1, ExternalTypeParams_12);
      Var_40 = mercury__string__f_43_43_2_f_0(VarsStr_21, (MR_String) "]");
      Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", Var_40);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadPieces_18, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
      }
    }
    TypePieces_22 = check_hlds__typecheck_errors__type_assign_types_to_pieces_6_f_0(Vars_17, VarSet_7, VarTypes_13, TypeBindings_15, TypeVarSet_16, (MR_Integer) 0);
    ConstraintsToProve_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_14, (MR_Integer) 0))));
    AssumedConstraints_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_14, (MR_Integer) 1))));
    PiecesList1_63 = check_hlds__typecheck_errors__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", AssumedConstraints_60, TypeBindings_15, TypeVarSet_16, (MR_Integer) 0);
    PiecesList2_64 = check_hlds__typecheck_errors__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", ConstraintsToProve_59, TypeBindings_15, TypeVarSet_16, (MR_Integer) 0);
    Pieces1_57 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PiecesList1_63, (MR_Word) ((MR_Unsigned) 0U));
    Pieces2_58 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PiecesList2_64, (MR_Word) ((MR_Unsigned) 0U));
    ConstraintPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_57, Pieces2_58);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConstraintPieces_23, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), TypePieces_22, Var_48);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_18, Var_47);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SeqPieces_11, Var_46);
    return Pieces_8;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String Operator_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeBindings_3,
  MR_Word TypeVarSet_4,
  MR_Word FoundOne_5)
{
  {
    MR_Word HeadVar__6_6;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ThisPieces_17;
      MR_Word TailPieceLists_18;
      MR_String Prefix_19;
      MR_Word BoundConstraint_20;
      MR_Word ProgConstraint_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_String Var_26;
      MR_String Var_27;

      switch (FoundOne_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Prefix_19 = mercury__string__f_43_43_2_f_0(Operator_1, (MR_String) " ");
          break;
        case (MR_Integer) 1:
          Prefix_19 = (MR_String) "   ";
          break;
      }
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(TypeBindings_3, Constraint_12, &BoundConstraint_20);
      hlds__hlds_class__retrieve_prog_constraint_2_p_0(BoundConstraint_20, &ProgConstraint_21);
      Var_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(TypeVarSet_4, ProgConstraint_21);
      Var_26 = mercury__string__f_43_43_2_f_0(Prefix_19, Var_27);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
      }
      {
        ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ThisPieces_17, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), ThisPieces_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ThisPieces_17));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      TailPieceLists_18 = check_hlds__typecheck_errors__type_assign_constraints_to_pieces_list_5_f_0(Operator_1, Constraints_13, TypeBindings_3, TypeVarSet_4, (MR_Integer) 1);
      HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), Var_22, TailPieceLists_18);
    }
    return HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_assign_types_to_pieces_6_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Word TypeBindings_4,
  MR_Word TypeVarSet_5,
  MR_Word FoundOne_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Pieces_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (FoundOne_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces_7 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[455]));
          break;
        case (MR_Integer) 1:
          Pieces_7 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_25;

      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_3, Var_17, &Type_25);
      if (succeeded)
      {
        MR_Word PrefixPieces_26;
        MR_String VarStr_27;
        MR_String TypeStr_28;
        MR_Word AssignPieces_29;
        MR_Word TailPieces_30;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_42;
        MR_Word Type1_49;
        MR_Word Type_50;

        switch (FoundOne_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrefixPieces_26 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            PrefixPieces_26 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15]));
            break;
        }
        VarStr_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, (MR_Integer) 1, Var_17);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_4, Type_25, &Type1_49);
        parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_49, &Type_50);
        TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TypeVarSet_5, (MR_Integer) 0, Type_50);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (VarStr_27));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (TypeStr_28));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssignPieces_29, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), AssignPieces_29, 1) = ((MR_Box) (Var_35));
        }
        TailPieces_30 = check_hlds__typecheck_errors__type_assign_types_to_pieces_6_f_0(Vars_18, VarSet_2, VarTypes_3, TypeBindings_4, TypeVarSet_5, (MR_Integer) 1);
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AssignPieces_29, TailPieces_30);
        Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_26, Var_42);
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_18;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return Pieces_7;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_3_f_0(
  MR_Word InstVarSet_5,
  MR_Word TypeAssignSet_6,
  MR_Word Var_7)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_8;
    MR_Word TypePiecesLists0_9;
    MR_Word TypePiecesLists_10;
    MR_Word TypePieces_11;
    MR_Word Var_13;

    check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_49_95_95_91_50_93_95_48_4_p_0(InstVarSet_5, TypeAssignSet_6, Var_7, &TypePiecesLists0_9);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), TypePiecesLists0_9, &TypePiecesLists_10);
    succeeded = (TypePiecesLists_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypePieces_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypePiecesLists_10, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypePiecesLists_10, (MR_Integer) 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[54])), TypePieces_11);
    else
    {
      MR_Word Var_25;
      MR_Word Var_26;

      Var_26 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(TypePiecesLists_10, (MR_Word) ((MR_Unsigned) 0U));
      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[442])));
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[438])), Var_25);
    }
    return Pieces_8;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeAssign_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Result_11;
      MR_Word Results_12;
      MR_Word TypeStuff_13;
      MR_Word VarTypes_22;
      MR_Word Type_32;
      MR_Word TypeVarSet_34;
      MR_Word ExternalTypeParams_36;
      MR_Word Type0_41;
      MR_Word _TypeVarSet_42;
      MR_Word TypeBindings_43;
      MR_Word _ExternalTypeParams_44;
      MR_Word Type1_45;
      MR_Word Type0_23;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_8, &_ExternalTypeParams_44);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_8, &TypeBindings_43);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_8, &_TypeVarSet_42);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_8, &VarTypes_22);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_22, HeadVar__3_3, &Type0_23);
      if (succeeded)
        Type0_41 = Type0_23;
      else
        Type0_41 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_2[2]));
      {
        TypeStuff_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeStuff_13, 0) = ((MR_Box) (Type0_41));
        MR_hl_field(MR_mktag(0), TypeStuff_13, 1) = ((MR_Box) (_TypeVarSet_42));
        MR_hl_field(MR_mktag(0), TypeStuff_13, 2) = ((MR_Box) (TypeBindings_43));
        MR_hl_field(MR_mktag(0), TypeStuff_13, 3) = ((MR_Box) (_ExternalTypeParams_44));
      }
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_43, Type0_41, &Type1_45);
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_45, &Type_32);
      TypeVarSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_13, (MR_Integer) 1))));
      ExternalTypeParams_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeStuff_13, (MR_Integer) 3))));
      Result_11 = parse_tree__error_util__type_to_pieces_6_f_0((MR_Integer) 0, (MR_Integer) 1, TypeVarSet_34, Var_15, ExternalTypeParams_36, Type_32);
      check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_108_108_95_116_114_97_110_115_102_111_114_109_101_100_95_116_121_112_101_95_115_116_117_102_102_115_95_95_104_111_49_95_95_91_50_93_95_48_4_p_0(Var_15, TypeAssigns_9, HeadVar__3_3, &Results_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Result_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Results_12));
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
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_too_much_overloading\'/3"));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_8, 3) = ((MR_Box) (Msgs_9));
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
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_warning_too_much_overloading\'/3"));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_8, 3) = ((MR_Box) (Msgs_9));
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
    MR_Word conv0_HeadVar__2_113;

    conv0_HeadVar__2_113 = check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__640__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_113));
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

          InitPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[208])));
          {
            InitComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InitComponent_13, 0) = ((MR_Box) (InitPieces_12));
          }
          VerboseComponent_15 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[595]));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitPieces_101;

          InitPieces_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InClauseForPieces_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[214])));
          {
            InitComponent_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InitComponent_13, 0) = ((MR_Box) (InitPieces_101));
          }
          VerboseComponent_15 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_errors_scalar_common_1[596]));
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
      FirstMsg_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), FirstMsg_16, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(2), FirstMsg_16, 1) = ((MR_Box) (Var_63));
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), OverloadedSymbolMap_8, &OverloadedSymbols_17);
    OverloadedSymbolsSortedContexts_18 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[8]), OverloadedSymbols_17);
    if ((OverloadedSymbolsSortedContexts_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
        MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OverloadedSymbolsSortedContexts_18, (MR_Integer) 1))));
      MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OverloadedSymbolsSortedContexts_18, (MR_Integer) 0))));

      if ((Var_142 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Contexts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 1))));
        MR_Word SecondPieces_22;
        MR_Word SecondMsg_29;
        MR_Word ModuleInfo_30;
        MR_Word DetailMsgsList_31;
        MR_Word DetailMsgs_32;
        MR_Word Var_98;
        MR_Word Var_99;

        if ((Contexts_20 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.too_much_overloading_to_msgs\'/4", (MR_String) "no contexts");
        else
        {
          MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contexts_20, (MR_Integer) 1))));

          if ((Var_144 == (MR_Word) ((MR_Unsigned) 0U)))
            SecondPieces_22 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[220]));
          else
            SecondPieces_22 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[223]));
        }
        {
          SecondMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SecondMsg_29, 0) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), SecondMsg_29, 1) = ((MR_Box) (SecondPieces_22));
        }
        ModuleInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_6, (MR_Integer) 0))));
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_2));
          MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (ModuleInfo_30));
        }
        DetailMsgsList_31 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]), Var_98, OverloadedSymbolsSortedContexts_18);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), DetailMsgsList_31, &DetailMsgs_32);
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (SecondMsg_29));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (DetailMsgs_32));
        }
        {
          Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
          MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (Var_99));
        }
      }
      else
      {
        MR_Word SecondMsg_128;
        MR_Word ModuleInfo_129;
        MR_Word DetailMsgsList_130;
        MR_Word DetailMsgs_131;
        MR_Word Var_132;
        MR_Word Var_133;

        {
          SecondMsg_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SecondMsg_128, 0) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), SecondMsg_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[225])));
        }
        ModuleInfo_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_6, (MR_Integer) 0))));
        {
          Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (check_hlds__typecheck_errors__too_much_overloading_to_msgs_4_f_0_3));
          MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (ModuleInfo_129));
        }
        DetailMsgsList_130 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]), Var_132, OverloadedSymbolsSortedContexts_18);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), DetailMsgsList_130, &DetailMsgs_131);
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (SecondMsg_128));
          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (DetailMsgs_131));
        }
        {
          Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (FirstMsg_16));
          MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (Var_133));
        }
      }
    }
    return Msgs_10;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__maybe_report_no_clauses_stub_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Specs_8;
    MR_Word IntBadClauses_35;
    MR_Word ModuleName_36;
    MR_Word PredModuleName_37;
    MR_String PredName_38;
    MR_Integer Arity_39;
    MR_Word PredOrFunc_40;
    MR_Word PredMarkers_41;
    MR_Word SymName_42;
    MR_Word Id_43;

    hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(ModuleInfo_5, &IntBadClauses_35);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_36);
    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_7, &PredModuleName_37);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_38);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_7, &Arity_39);
    hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_40);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_41);
    {
      SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_42, 0) = ((MR_Box) (ModuleName_36));
      MR_hl_field(MR_mktag(1), SymName_42, 1) = ((MR_Box) (PredName_38));
    }
    {
      Id_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Id_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_40));
      MR_hl_field(MR_mktag(0), Id_43, 1) = ((MR_Box) (SymName_42));
      MR_hl_field(MR_mktag(0), Id_43, 2) = ((MR_Box) (Arity_39));
    }
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), IntBadClauses_35, ((MR_Box) (Id_43)));
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_41, (MR_Integer) 28);
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_36, PredModuleName_37);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Globals_10;
      MR_Word WarnStubs_11;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_10);
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 41, &WarnStubs_11);
      switch (WarnStubs_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredPieces_12;
            MR_Word Pieces_13;
            MR_Word Context_14;
            MR_Word Spec_15;
            MR_Word Var_18;

            PredPieces_12 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
            {
              Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[22])));
              MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (PredPieces_12));
            }
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_14);
            {
              Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.maybe_report_no_clauses_stub\'/3"));
              MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_13));
            }
            {
              Specs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Specs_8, 0) = ((MR_Box) (Spec_15));
              MR_hl_field(MR_mktag(1), Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
    }
    return Specs_8;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__maybe_report_no_clauses_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Specs_8;
    MR_Word IntBadClauses_32;
    MR_Word ModuleName_33;
    MR_Word PredModuleName_34;
    MR_String PredName_35;
    MR_Integer Arity_36;
    MR_Word PredOrFunc_37;
    MR_Word PredMarkers_38;
    MR_Word SymName_39;
    MR_Word Id_40;

    hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(ModuleInfo_5, &IntBadClauses_32);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_33);
    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_7, &PredModuleName_34);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_35);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_7, &Arity_36);
    hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_37);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_38);
    {
      SymName_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_39, 0) = ((MR_Box) (ModuleName_33));
      MR_hl_field(MR_mktag(1), SymName_39, 1) = ((MR_Box) (PredName_35));
    }
    {
      Id_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Id_40, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_37));
      MR_hl_field(MR_mktag(0), Id_40, 1) = ((MR_Box) (SymName_39));
      MR_hl_field(MR_mktag(0), Id_40, 2) = ((MR_Box) (Arity_36));
    }
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0), IntBadClauses_32, ((MR_Box) (Id_40)));
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_38, (MR_Integer) 28);
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_33, PredModuleName_34);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredPieces_10;
      MR_Word Pieces_11;
      MR_Word Context_12;
      MR_Word Spec_13;
      MR_Word Var_15;

      PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[21])));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (PredPieces_10));
      }
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_12);
      {
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.maybe_report_no_clauses\'/3"));
        MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_11));
      }
      {
        Specs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Specs_8, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return Specs_8;
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
    MR_Integer NumArgTypes_12;
    MR_Word Pieces_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Integer Arity_44;
    MR_Word Arities_48;
    MR_Word RightAritiesPieces_49;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_String Var_60;
    MR_Word Var_61;
    MR_Word Var_64;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), Args_9, &Arity_44);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_8, &NumArgTypes_12);
    {
      Arities_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Arities_48, 0) = ((MR_Box) (NumArgTypes_12));
      MR_hl_field(MR_mktag(1), Arities_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    RightAritiesPieces_49 = check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(Arities_48);
    Var_60 = mercury__string__int_to_string_1_f_0(Arity_44);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[529])));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (RightAritiesPieces_49));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[272])));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[528])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_55, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])));
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (EventName_7));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, Var_23);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[19])), Var_18);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_event_args_mismatch\'/4"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_13));
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
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (EventName_5));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_10));
    }
    {
      Spec_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_6, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unknown_event_call_error\'/2"));
      MR_hl_field(MR_mktag(1), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_6, 3) = ((MR_Box) (Context_4));
      MR_hl_field(MR_mktag(1), Spec_6, 4) = ((MR_Box) (Pieces_7));
    }
    return Spec_6;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_pred_call_error_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = hlds__hlds_error_util__project_pred_form_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_pred_call_error_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleNames_17;

    check_hlds__typecheck_errors__accumulate_matching_pf_module_names_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleNames_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleNames_17));
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_pred_call_error_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word SymNameArity_7)
{
  {
    MR_Word Spec_8;
    MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SymNameArity_7, (MR_Integer) 0))));
    MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SymNameArity_7, (MR_Integer) 1))));
    MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 0))));
    MR_Word PredicateTable_12;
    MR_Word PredMarkers_13;
    MR_Word IsFullyQualified_14;
    MR_Word OtherIds_15;
    MR_Word PFSymNameArity_16;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_12);
    PredMarkers_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 2))));
    IsFullyQualified_14 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(PredMarkers_13);
    hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_12, IsFullyQualified_14, (MR_Integer) 0, SymName_9, &OtherIds_15);
    {
      PFSymNameArity_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_16, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PFSymNameArity_16, 1) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), PFSymNameArity_16, 2) = ((MR_Box) (Arity_10));
    }
    if ((OtherIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UndefMsg_22;
      MR_Word MissingImportModules_23;
      MR_Word FuncOtherIds_24;
      MR_Word KindMsgs_28;
      MR_Word PossibleModuleQuals_29;
      MR_Word PossibleModuleQualsSet0_30;
      MR_Word PossibleModuleQualsSet_31;
      MR_Word QualMsgs_32;
      MR_Word Msgs_33;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word PredIds_87;
      MR_String Var_88;
      MR_Word Var_89;
      MR_Box conv1_PossibleModuleQuals_29;

      check_hlds__typecheck_errors__report_error_undef_pred_5_p_0(ClauseContext_5, Context_6, PFSymNameArity_16, &UndefMsg_22, &MissingImportModules_23);
      hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_12, (MR_Integer) 1, (MR_Integer) 1, SymName_9, &FuncOtherIds_24);
      if ((FuncOtherIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
        KindMsgs_28 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word KindMsg_27;

        {
          KindMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), KindMsg_27, 0) = ((MR_Box) (Context_6));
          MR_hl_field(MR_mktag(0), KindMsg_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[206])));
        }
        {
          KindMsgs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), KindMsgs_28, 0) = ((MR_Box) (KindMsg_27));
          MR_hl_field(MR_mktag(1), KindMsgs_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      Var_88 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
      hlds__pred_table__predicate_table_lookup_pf_raw_name_4_p_0(PredicateTable_12, (MR_Integer) 0, Var_88, &PredIds_87);
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_pred_call_error_3_f_0_1));
        MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (PredicateTable_12));
        MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (SymName_9));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_89, PredIds_87, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_PossibleModuleQuals_29);
      PossibleModuleQuals_29 = ((MR_Word) (conv1_PossibleModuleQuals_29));
      mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PossibleModuleQuals_29, &PossibleModuleQualsSet0_30);
      mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MissingImportModules_23, PossibleModuleQualsSet0_30, &PossibleModuleQualsSet_31);
      QualMsgs_32 = check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0(ClauseContext_5, Context_6, (MR_String) "predicate", PossibleModuleQualsSet_31);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (UndefMsg_22));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), KindMsgs_28, QualMsgs_32);
      Msgs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_41, Var_43);
      {
        Spec_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_pred_call_error\'/3"));
        MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), Spec_8, 3) = ((MR_Box) (Msgs_33));
      }
    }
    else
    {
      MR_Word Preds_19;
      MR_Word PredArities_20;
      MR_Word Arities_21;

      hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_12, &Preds_19);
      hlds__hlds_error_util__find_pred_arities_3_p_0(Preds_19, OtherIds_15, &PredArities_20);
      Arities_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[7]), PredArities_20);
      Spec_8 = check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0(ClauseContext_5, Context_6, PFSymNameArity_16, Arities_21);
    }
    return Spec_8;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_32;

    conv0_LambdaHeadVar__2_32 = check_hlds__typecheck_errors__IntroducedFrom__func__report_any_missing_module_qualifiers__2596__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_any_missing_module_qualifiers_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_String ItemName_8,
  MR_Word ModuleNamesSet0_9)
{
  {
    MR_Word Msgs_10;
    MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_6, (MR_Integer) 0))));
    MR_Word ModuleName_12;
    MR_Word ModuleNamesSet1_13;
    MR_Word ModuleNamesSet_14;
    MR_Word ModuleNames_15;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_11, &ModuleName_12);
    Var_28 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_12);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, ModuleNamesSet0_9, &ModuleNamesSet1_13);
    Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_29)), ModuleNamesSet1_13, &ModuleNamesSet_14);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNamesSet_14, &ModuleNames_15);
    if ((ModuleNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
      Msgs_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleNames_15, (MR_Integer) 0))));
      MR_Word TailModuleNames_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleNames_15, (MR_Integer) 1))));
      MR_Word MainPieces_18;
      MR_Word MainMsg_24;
      MR_Word VerboseMsg_26;
      MR_Word Var_110;

      if ((TailModuleNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_72;
        MR_Word Var_73;

        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (ItemName_8));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (HeadModuleName_16));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[473])));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[466])));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[164])));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
        }
        {
          MainPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[465])));
          MR_hl_field(MR_mktag(1), MainPieces_18, 1) = ((MR_Box) (Var_64));
        }
      }
      else
      {
        MR_Word ModuleNamePieces_21;
        MR_Word ModuleNamesPieces_23;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_46;

        ModuleNamePieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[6]), ModuleNames_15);
        ModuleNamesPieces_23 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ModuleNamePieces_21);
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (ItemName_8));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[476])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[465])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ModuleNamesPieces_23, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[482])));
        MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_46);
      }
      {
        MainMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MainMsg_24, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(0), MainMsg_24, 1) = ((MR_Box) (MainPieces_18));
      }
      {
        VerboseMsg_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), VerboseMsg_26, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(2), VerboseMsg_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[594])));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (VerboseMsg_26));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msgs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_10, 0) = ((MR_Box) (MainMsg_24));
        MR_hl_field(MR_mktag(1), Msgs_10, 1) = ((MR_Box) (Var_110));
      }
    }
    return Msgs_10;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_undef_pred_5_p_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word * Msg_9,
  MR_Word * MissingImportModules_10)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_8, (MR_Integer) 1))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PFSymNameArity_8, (MR_Integer) 2))));
    MR_Word InClauseForPieces_14;
    MR_Word InClauseForComponent_15;
    MR_Word Components_20;
    MR_Word Var_222;
    MR_String Var_33;

    InClauseForPieces_14 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_6);
    {
      InClauseForComponent_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InClauseForComponent_15, 0) = ((MR_Box) (InClauseForPieces_14));
    }
    switch (Arity_13) {
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
      succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
        succeeded = (strcmp(Var_33, (MR_String) "->") == 0);
      }
    }
    if (succeeded)
    {
      Components_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[585]));
      *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String Var_64;

      switch (Arity_13) {
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
        succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_64 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_64, (MR_String) "else") == 0);
        }
      }
      if (succeeded)
      {
        Components_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[119]));
        *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_String Var_79;

        switch (Arity_13) {
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
          succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_79 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
            succeeded = (strcmp(Var_79, (MR_String) "if") == 0);
          }
        }
        if (succeeded)
        {
          Components_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[586]));
          *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_String Var_105;

          switch (Arity_13) {
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
            succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_105 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
              succeeded = (strcmp(Var_105, (MR_String) "then") == 0);
            }
          }
          if (succeeded)
          {
            Components_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[589]));
            *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_String Var_154;
            MR_Integer Var_155;

            succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_154 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
              succeeded = (strcmp(Var_154, (MR_String) "apply") == 0);
              if (succeeded)
              {
                Var_155 = (MR_Integer) 1;
                succeeded = (Arity_13 >= Var_155);
              }
            }
            if (succeeded)
            {
              Components_20 = check_hlds__typecheck_errors__report_apply_instead_of_pred_0_f_0();
              *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_String PurityString_22;

              succeeded = (Arity_13 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
                if (succeeded)
                {
                  PurityString_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
                  if ((strcmp(PurityString_22, (MR_String) "impure") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(PurityString_22, (MR_String) "semipure") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
              }
              if (succeeded)
              {
                MR_Word Var_158;
                MR_Word Var_159;
                MR_Word MainPieces_227;
                MR_Word MainComponent_228;

                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_159, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_159, 1) = ((MR_Box) (PurityString_22));
                }
                {
                  Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
                  MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[140])));
                }
                {
                  MainPieces_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MainPieces_227, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[96])));
                  MR_hl_field(MR_mktag(1), MainPieces_227, 1) = ((MR_Box) (Var_158));
                }
                {
                  MainComponent_228 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MainComponent_228, 0) = ((MR_Box) (MainPieces_227));
                }
                {
                  Components_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Components_20, 0) = ((MR_Box) (MainComponent_228));
                  MR_hl_field(MR_mktag(1), Components_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[591])));
                }
                *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_String Var_174;

                succeeded = (Arity_13 == (MR_Integer) 2);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_174 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_174, (MR_String) "some") == 0);
                  }
                }
                if (succeeded)
                {
                  Components_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[592]));
                  *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word OrdinaryPieces_26;
                  MR_Word SpecialPieces_32;
                  MR_Word Var_193;
                  MR_Word Var_194;
                  MR_Word Var_219;
                  MR_Word Var_220;
                  MR_Word MainPieces_232;
                  MR_String PredName_28;
                  MR_String NewPredName_31;

                  {
                    Var_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_194, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(3), Var_194, 1) = ((MR_Box) (PFSymNameArity_8));
                  }
                  {
                    Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Var_194));
                    MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
                  }
                  {
                    MainPieces_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MainPieces_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[151])));
                    MR_hl_field(MR_mktag(1), MainPieces_232, 1) = ((MR_Box) (Var_193));
                  }
                  if (((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 1))
                  {
                    MR_Word ModuleQualifier_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_12, (MR_Integer) 0))));
                    MR_Word AddeddumPices_25;

                    check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0(ClauseContext_6, ModuleQualifier_23, &AddeddumPices_25, MissingImportModules_10);
                    OrdinaryPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_232, AddeddumPices_25);
                  }
                  else
                  {
                    OrdinaryPieces_26 = MainPieces_232;
                    *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  if (((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 1))
                  {
                    MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_12, (MR_Integer) 0))));
                    MR_String StdLibModuleName_30;

                    PredName_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_12, (MR_Integer) 1))));
                    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleName_29, &StdLibModuleName_30);
                    if (succeeded)
                    {
                      if ((strcmp(StdLibModuleName_30, (MR_String) "getopt") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(StdLibModuleName_30, (MR_String) "getopt_io") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                  }
                  else
                  {
                    PredName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredSymName_12, (MR_Integer) 0))));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    switch (Arity_13) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 4:
                        {
                          succeeded = (strcmp(PredName_28, (MR_String) "process_options_se") == 0);
                          if (succeeded)
                          {
                            NewPredName_31 = (MR_String) "process_options";
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          succeeded = (strcmp(PredName_28, (MR_String) "process_options_se") == 0);
                          if (succeeded)
                          {
                            NewPredName_31 = (MR_String) "process_options";
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          succeeded = (strcmp(PredName_28, (MR_String) "process_options_se") == 0);
                          if (succeeded)
                          {
                            NewPredName_31 = (MR_String) "process_options";
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        if ((strcmp(PredName_28, (MR_String) "process_options_se") == 0))
                        {
                          NewPredName_31 = (MR_String) "process_options";
                          succeeded = MR_TRUE;
                        }
                        else
                        if ((strcmp(PredName_28, (MR_String) "process_options_track_se") == 0))
                        {
                          NewPredName_31 = (MR_String) "process_options_track";
                          succeeded = MR_TRUE;
                        }
                        else
                          succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 9:
                        {
                          succeeded = (strcmp(PredName_28, (MR_String) "process_options_track_se") == 0);
                          if (succeeded)
                          {
                            NewPredName_31 = (MR_String) "process_options_track";
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                  if (succeeded)
                  {
                    MR_Word Var_203;
                    MR_Word Var_206;
                    MR_Word Var_207;
                    MR_Word Var_208;
                    MR_Word Var_211;
                    MR_Word Var_212;

                    {
                      Var_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_207, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_207, 1) = ((MR_Box) (PredName_28));
                    }
                    {
                      Var_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_212, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_212, 1) = ((MR_Box) (NewPredName_31));
                    }
                    {
                      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (Var_212));
                      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
                    }
                    {
                      Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[153])));
                      MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_211));
                    }
                    {
                      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Var_207));
                      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_208));
                    }
                    {
                      Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[152])));
                      MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_206));
                    }
                    {
                      SpecialPieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SpecialPieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[99])));
                      MR_hl_field(MR_mktag(1), SpecialPieces_32, 1) = ((MR_Box) (Var_203));
                    }
                  }
                  else
                    SpecialPieces_32 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_220 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OrdinaryPieces_26, SpecialPieces_32);
                  {
                    Var_219 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (Var_220));
                  }
                  {
                    Components_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Components_20, 0) = ((MR_Box) (Var_219));
                    MR_hl_field(MR_mktag(1), Components_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
        }
      }
    }
    {
      Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (InClauseForComponent_15));
      MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (Components_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Msg_9 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_222));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_37;

    conv2_LambdaHeadVar__2_37 = check_hlds__typecheck_errors__IntroducedFrom__func__maybe_report_missing_import_addendum__2515__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_37));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_3(
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

static MR_Box MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_1(
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

static void MR_CALL 
check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0(
  MR_Word ClauseContext_5,
  MR_Word ModuleQualifier_6,
  MR_Word * Pieces_7,
  MR_Word * MissingImportModules_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClauseContext_5, (MR_Integer) 0))));
    MR_Word VisibleModules_10;
    MR_Word MatchingVisibleModules_11;
    MR_Word Var_22;

    hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_9, &VisibleModules_10);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleQualifier_6));
    }
    mercury__set__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_22, VisibleModules_10, &MatchingVisibleModules_11);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingVisibleModules_11);
    if (succeeded)
    {
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (ModuleQualifier_6));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[458])));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[456])));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MissingImportModules_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleQualifier_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word UnimportedAncestorsSet_12;
      MR_Word UnimportedAncestors_13;
      MR_Word MatchingModuleNamesAncestorSets_51;
      MR_Word MatchingModuleNamesAncestors_52;

      MatchingModuleNamesAncestorSets_51 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[9]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[4]), MatchingVisibleModules_11);
      mercury__set__power_union_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingModuleNamesAncestorSets_51, &MatchingModuleNamesAncestors_52);
      mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingModuleNamesAncestors_52, VisibleModules_10, &UnimportedAncestorsSet_12);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnimportedAncestorsSet_12, &UnimportedAncestors_13);
      if ((UnimportedAncestors_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Pieces_7 = (MR_Word) ((MR_Unsigned) 0U);
        *MissingImportModules_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ModuleQualifierList_16;
        MR_Word AddAncestor_17;
        MR_Word Var_38;
        MR_Word UnimportedAncestorDescs_60;
        MR_Word AllUnimportedAncestors_61;
        MR_Word Var_64;

        UnimportedAncestorDescs_60 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[5]), UnimportedAncestors_13);
        AllUnimportedAncestors_61 = parse_tree__error_util__list_to_pieces_1_f_0(UnimportedAncestorDescs_60);
        succeeded = (AllUnimportedAncestors_61 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllUnimportedAncestors_61, (MR_Integer) 1))));
          succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word Var_69;

          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AllUnimportedAncestors_61, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[458])));
          *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[460])), Var_69);
        }
        else
        {
          MR_Word Var_80;

          Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AllUnimportedAncestors_61, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[464])));
          *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[462])), Var_80);
        }
        ModuleQualifierList_16 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleQualifier_6);
        {
          AddAncestor_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AddAncestor_17, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), AddAncestor_17, 1) = ((MR_Box) (check_hlds__typecheck_errors__maybe_report_missing_import_addendum_4_p_0_4));
          MR_hl_field(MR_mktag(0), AddAncestor_17, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), AddAncestor_17, 3) = ((MR_Box) (ModuleQualifierList_16));
        }
        Var_38 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AddAncestor_17, UnimportedAncestors_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MissingImportModules_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleQualifier_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_38));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_apply_instead_of_pred_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[582]));
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_pred_num_args_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word Arities_9)
{
  {
    MR_bool succeeded;
    MR_Word Spec_10;
    MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PFSymNameArity_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFSymNameArity_8, (MR_Integer) 1))));
    MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PFSymNameArity_8, (MR_Integer) 2))));
    MR_Word MainPieces_14;
    MR_Word SpecialPieces_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_73;
    MR_String PredName_15;
    MR_String StdLibModuleName_16;

    Var_19 = check_hlds__typecheck_errors__in_clause_for_pieces_1_f_0(ClauseContext_6);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (PredOrFunc_11));
    }
    Var_26 = check_hlds__typecheck_errors__error_num_args_to_pieces_3_f_0(Var_27, Arity_13, Arities_9);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (SymName_12));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[15])), Var_32);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, Var_28);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[97])), Var_25);
    MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, Var_20);
    if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_12, (MR_Integer) 0))));

      PredName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_12, (MR_Integer) 1))));
      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleName_17, &StdLibModuleName_16);
      if (succeeded)
        succeeded = (strcmp(StdLibModuleName_16, (MR_String) "getopt_io") == 0);
    }
    else
    {
      PredName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_12, (MR_Integer) 0))));
      StdLibModuleName_16 = (MR_String) "getopt_io";
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (Arity_13) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 6:
          succeeded = (strcmp(PredName_15, (MR_String) "process_options") == 0);
          break;
        case (MR_Integer) 7:
          succeeded = (strcmp(PredName_15, (MR_String) "process_options") == 0);
          break;
        case (MR_Integer) 9:
          succeeded = (strcmp(PredName_15, (MR_String) "process_options_track") == 0);
          break;
      }
    if (succeeded)
    {
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_String Var_62;

      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (StdLibModuleName_16));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (PredName_15));
      }
      Var_62 = mercury__string__f_43_43_2_f_0(PredName_15, (MR_String) "_io");
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[17])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[102])));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[101])));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[100])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        SpecialPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SpecialPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[99])));
        MR_hl_field(MR_mktag(1), SpecialPieces_18, 1) = ((MR_Box) (Var_47));
      }
    }
    else
      SpecialPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_14, SpecialPieces_18);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_pred_num_args\'/4"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Var_73));
    }
    return Spec_10;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__error_num_args_to_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_18;

    check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__2801__1_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_18);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__error_num_args_to_pieces_3_f_0(
  MR_Word MaybePredOrFunc_5,
  MR_Integer Arity0_6,
  MR_Word Arities0_7)
{
  {
    MR_bool succeeded = (MaybePredOrFunc_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Pieces_8;
    MR_Integer Arity_9;
    MR_Word Arities_13;
    MR_Word RightAritiesPieces_14;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_15;

    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_5, (MR_Integer) 0))));
      succeeded = (Var_15 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &Arity_9, Arity0_6);
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[3]), Arities0_7, &Arities_13);
    }
    else
    {
      Arity_9 = Arity0_6;
      Arities_13 = Arities0_7;
    }
    RightAritiesPieces_14 = check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_f_0(Arities_13);
    Var_25 = mercury__string__int_to_string_1_f_0(Arity_9);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[529])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (RightAritiesPieces_14));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[272])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[528])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_20, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[245])));
    return Pieces_8;
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
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[74])));
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
            MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[25])));
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
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_errors_scalar_common_1[527])));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (PredIdPieces_7));
    }
    Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_9, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_errors_scalar_common_1[453])));
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
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_spec_and_maybe_actual_expected_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_error_goal_context_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0);
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
