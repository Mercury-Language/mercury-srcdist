/*
** Automatically generated from `fact_table.m'
** by the Mercury compiler,
** version rotd-2023-02-09
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


// :- module ll_backend.fact_table.
// :- implementation.

/*
INIT mercury__ll_backend__fact_table__init
ENDINIT
*/

#include "ll_backend.fact_table.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "io.call_system.mih"
#include "io.file.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__list__pti_list_1__plain_ll_backend__fact_table__type_ctor_info_fact_arg_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_comparison_kind_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0[2];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_1[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_1;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_2[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_2;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_2[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_0[3];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_0[3];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_0[3];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0[3];

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0[1];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_1;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_2;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_arg_type_0[3];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_arg_type_0[3];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_type_0[3];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_result_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0[2];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_arg_check_result_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_arg_check_result_0_1[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_arg_check_result_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_arg_check_result_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_arg_check_result_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_arg_check_result_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_arg_check_result_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_gen_info_0_0[4];

static const MR_ConstString ll_backend__fact_table__ll_backend__fact_table__field_names_fact_table_gen_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_gen_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_gen_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_gen_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_gen_info_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_gen_info_0[1];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_table_mode_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_1;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_2;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_table_mode_class_0[3];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_class_0[3];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_class_0[3];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_var_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_proc_info_0_0[3];

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_table_proc_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_proc_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_proc_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_proc_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_proc_info_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_proc_info_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_var_0_0[4];

static const MR_ConstString ll_backend__fact_table__ll_backend__fact_table__field_names_fact_table_var_0_0[4];

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_table_var_0_0[4];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_var_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_var_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_var_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_var_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_var_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0[1];

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_inferred_determinism_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0;

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1;

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0[3];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0[3];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_create_fact_map_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_create_fact_map_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_create_fact_map_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_in_or_output_for_some_mode_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_in_or_output_for_some_mode_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_in_or_output_for_some_mode_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_input_for_some_mode_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_input_for_some_mode_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_input_for_some_mode_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_make_unique_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_make_unique_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_make_unique_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_maybe_primary_proc_0_1[1];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_primary_proc_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_primary_proc_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_maybe_primary_proc_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_maybe_primary_proc_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_primary_proc_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_primary_table_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_primary_table_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_primary_table_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_seen_input_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_seen_input_arg_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_seen_input_arg_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_type_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_maybe_test_keys_0_1[5];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_test_keys_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_test_keys_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_maybe_test_keys_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_maybe_test_keys_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_test_keys_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_write_data_table_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_write_data_table_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_write_data_table_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_write_hash_tables_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_write_hash_tables_0[2];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_write_hash_tables_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_mode_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0[4];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_0;

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0[1];

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0[1];

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__generate_argument_vars_code__3548__1_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__generate_argument_vars_code__3544__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__build_hash_table_loop__2066__1_1_f_0(
  MR_Word LambdaHeadVar__1_70);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__write_secondary_hash_tables__1786__1_1_f_0(
  MR_Word LambdaHeadVar__1_82);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__write_primary_hash_table__1713__1_1_f_0(
  MR_Word LambdaHeadVar__1_84);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__open_sort_files__1233__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__fact_table_check_proc_modes__425__1_1_f_0(
  MR_Word LambdaHeadVar__1_74);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__fact_table_generate_c_code_for_proc__2633__1_1_f_0(
  MR_Word LambdaHeadVar__1_44);

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__fact_table_generate_c_code_for_proc__2629__1_1_f_0(
  MR_Word LambdaHeadVar__1_41);

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_hash_tables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_hash_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_data_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_data_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_test_keys_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_test_keys_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_seen_input_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_seen_input_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_make_unique_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_make_unique_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_input_for_some_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_input_for_some_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_in_or_output_for_some_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_in_or_output_for_some_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_create_fact_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_create_fact_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__generate_semidet_in_out_code_6_p_0(
  MR_Integer FactTableSize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12);

static void MR_CALL 
ll_backend__fact_table__generate_semidet_all_in_code_6_p_0(
  MR_Integer FactTableSize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12);

static void MR_CALL 
ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_primary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_fact_test_code_5_p_0(
  MR_Integer FactTableSize_6,
  MR_String PredName_7,
  MR_Word Types_8,
  MR_Word FactTableVars_9,
  MR_String * FactTestCode_10);

static void MR_CALL 
ll_backend__fact_table__generate_hash_code_8_p_0(
  MR_Integer FactTableSize_1,
  MR_String PredName_2,
  MR_String LabelName_3,
  MR_Integer LabelNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_String * HeadVar__8_8);

static void MR_CALL 
ll_backend__fact_table__generate_hash_string_code_9_p_0(
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18);

static void MR_CALL 
ll_backend__fact_table__generate_hash_int_code_9_p_0(
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18);

static void MR_CALL 
ll_backend__fact_table__generate_hash_lookup_code_7_p_0(
  MR_String VarName_8,
  MR_String LabelName_9,
  MR_Integer LabelNum_10,
  MR_Word ComparisonKind_11,
  MR_Char KeyType_12,
  MR_Word TestKeys_13,
  MR_String * HashLookupCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_test_condition_code_7_p_0(
  MR_Integer FactTableSize_1,
  MR_String FactTableName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_String * HeadVar__7_7);

static void MR_CALL 
ll_backend__fact_table__generate_decl_code_3_p_0(
  MR_String Name_4,
  MR_Integer ProcId_5,
  MR_String * DeclCode_6);

static void MR_CALL 
ll_backend__fact_table__generate_cc_multi_code_loop_5_p_0(
  MR_String StructName_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_String STATE_VARIABLE_ProcCode_0_4,
  MR_String * STATE_VARIABLE_ProcCode_5);

static void MR_CALL 
ll_backend__fact_table__generate_multi_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static MR_Box MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FactArgTypes_11,
  MR_Word FactTableVars_12,
  MR_String * DeclCode_13,
  MR_String * InputCode_14,
  MR_String * OutputCode_15,
  MR_String * SaveRegsCode_16,
  MR_String * GetRegsCode_17,
  MR_Integer * NumInputArgs_18);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_loop_10_p_0(
  MR_Word Types_11,
  MR_Word FactTableVars_12,
  MR_Word ArgInfos_13,
  MR_String * DeclCode_14,
  MR_String * InputCode_15,
  MR_String * OutputCode_16,
  MR_String * SaveRegsCode_17,
  MR_String * GetRegsCode_18,
  MR_Integer STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * STATE_VARIABLE_NumInputArgs_43);

static void MR_CALL 
ll_backend__fact_table__generate_arg_input_code_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word ArgLoc_10,
  MR_Integer FrameVarNum_11,
  MR_String * InputCode_12,
  MR_String * SaveRegCode_13,
  MR_String * GetRegCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_fact_lookup_code_6_p_0(
  MR_Integer FactTableSize_1,
  MR_String PredName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_String * HeadVar__6_6);

static void MR_CALL 
ll_backend__fact_table__generate_nondet_proc_code_5_p_0(
  MR_String PredName_6,
  MR_Integer ProcId_7,
  MR_Word FactTableVars_8,
  MR_String * ExtraCodeLabel_9,
  MR_String * ProcCode_10);

static void MR_CALL 
ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__append_data_table_7_p_0(
  MR_Word ModuleInfo_8,
  MR_String OutputFileName_9,
  MR_String DataFileName_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
ll_backend__fact_table__compile_fact_table_in_file_16_p_0(
  MR_Word FileStream_17,
  MR_String FileName_18,
  MR_Word OutputStream_19,
  MR_Integer FactTableSize_20,
  MR_Word ModuleInfo_21,
  MR_Word PredSymName_22,
  MR_Word GenInfo_23,
  MR_String * HeaderCode_24,
  MR_Integer * PrimaryProcId_25,
  MR_Word * MaybeDataFileName_26,
  MR_Word STATE_VARIABLE_PredInfo_0_67,
  MR_Word * STATE_VARIABLE_PredInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
ll_backend__fact_table__add_error_pieces_3_p_0(
  MR_Word Pieces_4,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_numfacts_6_p_0(
  MR_Word OutputStream_7,
  MR_Word PredName_8,
  MR_Integer NumFacts_9,
  MR_String * HeaderCode_10);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_arrays_17_p_0(
  MR_Word OutputStream_18,
  MR_Integer FactTableSize_19,
  MR_Word ModuleInfo_20,
  MR_Word ProcFiles_21,
  MR_String DataFileName_22,
  MR_Word FactTableProcMap_23,
  MR_String StructName_24,
  MR_Integer NumFacts_25,
  MR_Word FactArgInfos_26,
  MR_Word WriteHashTables_27,
  MR_Word WriteDataTable_28,
  MR_String * HeaderCode_29,
  MR_Integer * PrimaryProcId_30,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static MR_Box MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_14_p_0(
  MR_Word OutputStream_1,
  MR_Integer FactTableSize_2,
  MR_Word ModuleInfo_3,
  MR_Word FactTableProcMap_4,
  MR_String StructName_5,
  MR_Word FactArgInfos_6,
  MR_Word FactMap_7,
  MR_Word HeadVar__8_8,
  MR_String STATE_VARIABLE_HeaderCode_0_9,
  MR_String * STATE_VARIABLE_HeaderCode_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static MR_Box MR_CALL 
ll_backend__fact_table__write_primary_hash_table_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__write_primary_hash_table_19_p_0(
  MR_Word OutputStream_20,
  MR_Integer FactTableSize_21,
  MR_Word ModuleInfo_22,
  MR_Word FactTableProcMap_23,
  MR_Integer ProcId_24,
  MR_String FileName_25,
  MR_String DataFileName_26,
  MR_String StructName_27,
  MR_Word FactArgInfos_28,
  MR_Word WriteDataTable_29,
  MR_Integer NumFacts_30,
  MR_Word CreateFactMap_31,
  MR_Word * FactMap_32,
  MR_Word * Result_33,
  MR_String * HeaderCode_34,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62);

static void MR_CALL 
ll_backend__fact_table__add_file_open_error_8_p_0(
  MR_Word MaybeContext_9,
  MR_String FileName_10,
  MR_String InOrOut_11,
  MR_Word Error_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
ll_backend__fact_table__delete_temporary_file_5_p_0(
  MR_String FileName_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableSize_9,
  MR_String StructName_10,
  MR_Integer NumFacts_11,
  MR_String * HeaderCode_12);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_loop_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableSize_9,
  MR_String StructName_10,
  MR_Integer CurFact_11,
  MR_Integer NumFacts_12);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_22_p_0(
  MR_Word InputStream_23,
  MR_String InputFileName_24,
  MR_Word OutputStream_25,
  MR_Word MaybeDataStream_26,
  MR_Integer FactTableSize_27,
  MR_Word ModuleInfo_28,
  MR_Word IsPrimaryTable_29,
  MR_String StructName_30,
  MR_Word Infos_31,
  MR_Word Modes_32,
  MR_Integer InputArgNum_33,
  MR_String HashTableName_34,
  MR_Integer TableNum_35,
  MR_Word FirstFact_36,
  MR_Integer FactNum_37,
  MR_Word CreateFactMap_38,
  MR_Word STATE_VARIABLE_FactMap_0_48,
  MR_Word * STATE_VARIABLE_FactMap_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static MR_Box MR_CALL 
ll_backend__fact_table__build_hash_table_loop_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_loop_24_p_0(
  MR_Word InputStream_25,
  MR_String InputFileName_26,
  MR_Word OutputStream_27,
  MR_Word MaybeDataStream_28,
  MR_Integer FactTableSize_29,
  MR_Word ModuleInfo_30,
  MR_Word IsPrimaryTable_31,
  MR_String StructName_32,
  MR_Word Infos_33,
  MR_Word Modes_34,
  MR_Integer InputArgNum_35,
  MR_String HashTableName_36,
  MR_Integer STATE_VARIABLE_TableNum_0_57,
  MR_Word FirstFact_38,
  MR_Integer FactNum_39,
  MR_Word CreateFactMap_40,
  MR_Word STATE_VARIABLE_FactMap_0_58,
  MR_Word * STATE_VARIABLE_FactMap_59,
  MR_Word STATE_VARIABLE_HashList_0_60,
  MR_Word * STATE_VARIABLE_HashList_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63);

static void MR_CALL 
ll_backend__fact_table__update_fact_map_4_p_0(
  MR_Integer FactNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactMap_0_3,
  MR_Word * STATE_VARIABLE_FactMap_4);

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_loop_12_p_0(
  MR_Word InputStream_13,
  MR_String InputFileName_14,
  MR_Word Infos_15,
  MR_Word Modes_16,
  MR_Word Fact_17,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_32,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_33,
  MR_Word * MaybeNextFact_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_loop_14_p_0(
  MR_Word OutputStream_1,
  MR_Word Globals_2,
  MR_Word IsPrimaryTable_3,
  MR_Word FactMap_4,
  MR_Integer InputArgNum_5,
  MR_String HashTableName_6,
  MR_Word HeadVar__7_7,
  MR_Integer FactNum_8,
  MR_Integer STATE_VARIABLE_TableNum_0_9,
  MR_Integer * STATE_VARIABLE_TableNum_10,
  MR_Word STATE_VARIABLE_HashList_0_11,
  MR_Word * STATE_VARIABLE_HashList_12);

static void MR_CALL 
ll_backend__fact_table__do_build_hash_table_14_p_0(
  MR_Word OutputStream_15,
  MR_Word Globals_16,
  MR_Word IsPrimaryTable_17,
  MR_Word FactMap_18,
  MR_Integer FactNum_19,
  MR_Integer InputArgNum_20,
  MR_String HashTableName_21,
  MR_Word Facts_22,
  MR_Integer STATE_VARIABLE_TableNum_0_42,
  MR_Integer * STATE_VARIABLE_TableNum_43,
  MR_Word STATE_VARIABLE_HashList_0_44,
  MR_Word * STATE_VARIABLE_HashList_45);

static void MR_CALL 
ll_backend__fact_table__write_hash_table_6_p_0(
  MR_Word OutputStream_7,
  MR_String BaseName_8,
  MR_Integer TableNum_9,
  MR_Word HashTable_10);

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_p_0(
  MR_Word HashTable_3,
  MR_Char * TableType_4);

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_loop_3_p_0(
  MR_Word Map_4,
  MR_Integer Index_5,
  MR_Char * TableType_6);

static void MR_CALL 
ll_backend__fact_table__write_hash_table_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word HashTable_8,
  MR_Integer CurIndex_9,
  MR_Integer MaxIndex_10);

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HashSize_2,
  MR_Word STATE_VARIABLE_HashTable_0_3,
  MR_Word * STATE_VARIABLE_HashTable_4);

static void MR_CALL 
ll_backend__fact_table__fact_table_hash_2_4_p_0(
  MR_Integer HashSize_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_HashVal_0_3,
  MR_Integer * STATE_VARIABLE_HashVal_4);

static void MR_CALL 
ll_backend__fact_table__hash_table_insert_open_address_loop_5_p_0(
  MR_Integer HashVal_6,
  MR_Word Key0_7,
  MR_Word Index0_8,
  MR_Word STATE_VARIABLE_HashTable_0_17,
  MR_Word * STATE_VARIABLE_HashTable_18);

static void MR_CALL 
ll_backend__fact_table__get_free_hash_slot_loop_4_p_0(
  MR_Word HashTable_5,
  MR_Integer Start_6,
  MR_Integer Max_7,
  MR_Integer * Free_8);

static void MR_CALL 
ll_backend__fact_table__hash_list_insert_many_7_p_0(
  MR_Word IsPrimaryTable_1,
  MR_Word FactMap_2,
  MR_Integer FactNum_3,
  MR_Integer InputArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HashList_0_6,
  MR_Word * STATE_VARIABLE_HashList_7);

static void MR_CALL 
ll_backend__fact_table__find_first_big_enough_prime_3_p_0(
  MR_Integer NumSlotsNeeded_1,
  MR_Word HeadVar__2_2,
  MR_Integer * Size_3);

static void MR_CALL 
ll_backend__fact_table__lower_level_collect_matching_facts_loop_6_p_0(
  MR_Integer InputArgNum_1,
  MR_Word MatchArg_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_data_8_p_0(
  MR_Word OutputStream_1,
  MR_Word MaybeProgressStream_2,
  MR_Integer FactTableSize_3,
  MR_String StructName_4,
  MR_Word HeadVar__5_5,
  MR_Integer FactNum_6);

static void MR_CALL 
ll_backend__fact_table__read_sort_file_line_9_p_0(
  MR_Word InputStream_10,
  MR_String InputFileName_11,
  MR_Word FactArgInfos_12,
  MR_Word Modes_13,
  MR_Word * MaybeSortFileLine_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
ll_backend__fact_table__get_output_args_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgStrings0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__get_input_args_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ArgStrings0_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__fact_table__remove_sort_file_escapes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevChars_0_2,
  MR_Word * STATE_VARIABLE_RevChars_3);

static void MR_CALL 
ll_backend__fact_table__split_key_to_arg_strings_2_p_0(
  MR_String Key0_3,
  MR_Word * ArgStrings_4);

static void MR_CALL 
ll_backend__fact_table__write_new_data_array_opening_brace_5_p_0(
  MR_Word OutputStream_6,
  MR_String StructName_7,
  MR_Integer FactNum_8);

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_2_9_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word GenInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
ll_backend__fact_table__add_call_system_error_6_p_0(
  MR_String Cmd_7,
  MR_Word ErrorCode_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
ll_backend__fact_table__close_sort_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__fact_table__open_sort_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__open_sort_files_7_p_0(
  MR_Word ProcMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
ll_backend__fact_table__create_fact_table_header_4_p_0(
  MR_Word PredSymName_5,
  MR_Word FactArgInfos_6,
  MR_String * HeaderCode_7,
  MR_String * StructName_8);

static void MR_CALL 
ll_backend__fact_table__create_fact_table_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_String * HeadVar__3_3);

static MR_String MR_CALL 
ll_backend__fact_table__fact_table_file_header_1_f_0(
  MR_String FileName_3);

static void MR_CALL 
ll_backend__fact_table__read_in_and_compile_facts_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableSize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Word ProcStreams_23,
  MR_Word MaybeOutput_24,
  MR_Integer STATE_VARIABLE_FactNum_0_38,
  MR_Integer * STATE_VARIABLE_FactNum_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
ll_backend__fact_table__check_fact_term_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableSize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Integer FactNum_23,
  MR_Word VarSet_24,
  MR_Word Term_25,
  MR_Word ProcStreams_26,
  MR_Word MaybeOutput_27,
  MR_Word * Specs_28);

static void MR_CALL 
ll_backend__fact_table__write_fact_data_8_p_0(
  MR_Word OutputStream_9,
  MR_Word MaybeProgressStream_10,
  MR_Integer FactTableSize_11,
  MR_String StructName_12,
  MR_Word Args_13,
  MR_Integer FactNum_14);

static void MR_CALL 
ll_backend__fact_table__write_fact_args_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__write_sort_file_lines_6_p_0(
  MR_String FactNumStr_1,
  MR_Word FactArgs_2,
  MR_Word IsPrimary_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ll_backend__fact_table__make_fact_data_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__make_sort_file_key_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__key_from_chars_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * STATE_VARIABLE_EscapedCharsCord_3);

static void MR_CALL 
ll_backend__fact_table__check_fact_type_and_mode_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
ll_backend__fact_table__report_arg_error_10_p_0(
  MR_Word PredOrFunc_11,
  MR_Word VarSet_12,
  MR_Integer ArgNum_13,
  MR_Word ArgTerm_14,
  MR_Word RemainingArgTerms_15,
  MR_String TypeOrMode_16,
  MR_String Expected_17,
  MR_Word * DummyFactArg_18,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
ll_backend__fact_table__infer_procs_determinism_pass_1_8_p_0(
  MR_Word GenInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4,
  MR_Word STATE_VARIABLE_WriteHashTables_0_5,
  MR_Word * STATE_VARIABLE_WriteHashTables_6,
  MR_Word STATE_VARIABLE_WriteDataTable_0_7,
  MR_Word * STATE_VARIABLE_WriteDataTable_8);

static void MR_CALL 
ll_backend__fact_table__init_fact_arg_infos_5_p_0(
  MR_Word PredInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_Box MR_CALL 
ll_backend__fact_table__fact_table_check_proc_modes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table__fact_table_check_proc_modes_14_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word ProcTable_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_FactArgInfos_0_5,
  MR_Word * STATE_VARIABLE_FactArgInfos_6,
  MR_Word STATE_VARIABLE_FactTableProcMap_0_7,
  MR_Word * STATE_VARIABLE_FactTableProcMap_8,
  MR_Word STATE_VARIABLE_RevAllInProcIds_0_9,
  MR_Word * STATE_VARIABLE_RevAllInProcIds_10,
  MR_Word STATE_VARIABLE_RevInOutProcIds_0_11,
  MR_Word * STATE_VARIABLE_RevInOutProcIds_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
ll_backend__fact_table__fill_in_fact_arg_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__check_proc_arg_modes_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredProcId_2,
  MR_Word ProcInfo_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_arg_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_arg_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_create_fact_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_create_fact_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_input_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_input_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_make_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_make_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_seen_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_seen_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_test_keys_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_test_keys_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_data_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_data_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_hash_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_hash_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__fact_table_scalar_common_1[138][2];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_2[12][3];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_3[5][1];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_4[7][5];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_5[1][4];




static /* final */ const MR_Box ll_backend__fact_table_scalar_common_1[138][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for a predicate without arguments."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for a predicate with no declared modes."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in which all arguments are input."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with more than one mode"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for a predicate"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: type"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "string"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "float"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The only types allowed in fact tables are"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not allowed in fact tables."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration requires all the arguments of"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be either fully input or fully output,"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is neither."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Could not create temporary file:"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: clause is not for"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: term is not a fact."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: fact has wrong number of arguments."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "return value of function:"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury_imp.h\"\n\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_String) "*/\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_String) "** Do not edit.\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 110)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "during fact table determinism inference."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "program"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cut"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or the"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sort"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[87])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in ether the"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an error occurred"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "fact table output files."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "An error occurred while concatenating"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading file"))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Integer) 2147483647)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Integer) 1073741827)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Integer) 536870923)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Integer) 268435459)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Integer) 134217757)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Integer) 67108879)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Integer) 33555799)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Integer) 16777903)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 8388949)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Integer) 4194493)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 2097257)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Integer) 1048627)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 524309)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Integer) 262147)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 131101)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Integer) 65537)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 32771)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Integer) 16411)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Integer) 8209)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Integer) 4099)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Integer) 2053)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Integer) 1031)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Integer) 521)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Integer) 257)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Integer) 131)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) " = {\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error deleting file"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error executing system command"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error opening file"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cat"))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table__fact_table_check_proc_modes_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table__open_sort_files_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[1])),
    ((MR_Box) (ll_backend__fact_table__hash_table_from_list_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[2])),
    ((MR_Box) (ll_backend__fact_table__build_hash_table_loop_24_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table__write_primary_hash_table_19_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table__write_secondary_hash_tables_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[3])),
    ((MR_Box) (ll_backend__fact_table__generate_argument_vars_code_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[4])),
    ((MR_Box) (ll_backend__fact_table__generate_argument_vars_code_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[5])),
    ((MR_Box) (ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[6])),
    ((MR_Box) (ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_3[5][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "dummy"))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_4[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0)),
    ((MR_Box) (&ll_backend__fact_table__list__pti_list_1__plain_ll_backend__fact_table__type_ctor_info_fact_arg_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_5[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.append_data_table\'/7")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 68U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[98])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__list__pti_list_1__plain_ll_backend__fact_table__type_ctor_info_fact_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0 = {
  (MR_String) "plain_equals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1 = {
  (MR_String) "string_equals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_comparison_kind_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_comparison_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____comparison_kind_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____comparison_kind_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "comparison_kind",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_comparison_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_0 = {
  (MR_String) "fact_arg_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_1 = {
  (MR_String) "fact_arg_float",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_2 = {
  (MR_String) "fact_arg_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_1
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_2[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_2
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_0_2
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_input_for_some_mode_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_in_or_output_for_some_mode_0)
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 2
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
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0 = {
  (MR_String) "fact_arg_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0,
  NULL,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg_info",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_0 = {
  (MR_String) "fact_arg_type_int",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_1 = {
  (MR_String) "fact_arg_type_float",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_2 = {
  (MR_String) "fact_arg_type_string",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_arg_type_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_arg_type_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_arg_type_0_2
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_type_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_type_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg_type",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_arg_type_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_arg_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_type_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0 = {
  (MR_String) "ok",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1 = {
  (MR_String) "error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_result_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_result_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_result_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_result",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_arg_check_result_0_0[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_gen_info_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_0 = {
  (MR_String) "fact_table_args_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_arg_check_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_arg_check_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_1 = {
  (MR_String) "fact_table_args_not_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_arg_check_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_arg_check_result_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_arg_check_result_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_1
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_arg_check_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_arg_check_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_arg_check_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_arg_check_result_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_arg_check_result_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_arg_check_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_arg_check_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_arg_check_result_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_arg_check_result_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_arg_check_result",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_arg_check_result_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_arg_check_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_arg_check_result_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_gen_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString ll_backend__fact_table__ll_backend__fact_table__field_names_fact_table_gen_info_0_0[4] = {
  (MR_String) "fgti_arg_infos",
  (MR_String) "ftgi_proc_info_map",
  (MR_String) "ftgi_all_in_proc_id",
  (MR_String) "ftgi_in_out_proc_ids"
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_gen_info_0_0 = {
  (MR_String) "fact_table_gen_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_gen_info_0_0,
  ll_backend__fact_table__ll_backend__fact_table__field_names_fact_table_gen_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_gen_info_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_gen_info_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_gen_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_gen_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_gen_info_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_gen_info_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_gen_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_gen_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_gen_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_gen_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_gen_info",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_gen_info_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_gen_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_gen_info_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_0 = {
  (MR_String) "fully_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_1 = {
  (MR_String) "fully_out",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_table_mode_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_mode_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_mode_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_mode",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_table_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_0 = {
  (MR_String) "all_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_1 = {
  (MR_String) "in_out",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_2 = {
  (MR_String) "all_out",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_table_mode_class_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_class_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_2,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_class_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_class_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_mode_class_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_mode_class_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_mode_class",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_class_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_fact_table_mode_class_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_class_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_var_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_class_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_table_proc_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_proc_info_0_0 = {
  (MR_String) "fact_table_proc_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_proc_info_0_0,
  NULL,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_table_proc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_proc_info_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_proc_info_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_proc_info_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_proc_info_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_proc_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_proc_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_proc_info",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_proc_info_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_proc_info_0,

};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_proc_map_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_proc_map_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_var_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_make_unique_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0)
};

static const MR_ConstString ll_backend__fact_table__ll_backend__fact_table__field_names_fact_table_var_0_0[4] = {
  (MR_String) "ftv_name",
  (MR_String) "ftv_mode",
  (MR_String) "ftv_make_unique",
  (MR_String) "ftv_pragma_var"
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_table_var_0_0[4] = {
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

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_var_0_0 = {
  (MR_String) "fact_table_var",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_table_var_0_0,
  ll_backend__fact_table__ll_backend__fact_table__field_names_fact_table_var_0_0,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_table_var_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_var_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_var_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_var_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_table_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_var_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_table_var_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_var_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_var_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_var",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_table_var_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_table_var_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_var_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0 = {
  (MR_String) "hash_entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_entry_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_entry_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_entry",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0 = {
  (MR_String) "fact",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1 = {
  (MR_String) "hash_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_index_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_index_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_index",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0 = {
  (MR_String) "hash_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_table",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_inferred_determinism_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0 = {
  (MR_String) "inferred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0,
  NULL,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_inferred_determinism_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1 = {
  (MR_String) "not_yet",
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

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2 = {
  (MR_String) "error",
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

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0[3] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_inferred_determinism_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____inferred_determinism_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____inferred_determinism_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "inferred_determinism",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_0 = {
  (MR_String) "do_not_create_fact_map",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_1 = {
  (MR_String) "create_fact_map",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_create_fact_map_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_create_fact_map_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_create_fact_map_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_create_fact_map_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_create_fact_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_create_fact_map_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_create_fact_map_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_create_fact_map",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_create_fact_map_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_create_fact_map_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_create_fact_map_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0 = {
  (MR_String) "is_not_in_or_output_for_any_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1 = {
  (MR_String) "is_in_or_output_for_some_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_in_or_output_for_some_mode_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_in_or_output_for_some_mode_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_in_or_output_for_some_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_in_or_output_for_some_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_in_or_output_for_some_mode_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_in_or_output_for_some_mode_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_in_or_output_for_some_mode",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_in_or_output_for_some_mode_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_in_or_output_for_some_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_in_or_output_for_some_mode_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_0 = {
  (MR_String) "is_not_input_for_any_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_1 = {
  (MR_String) "is_input_for_some_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_input_for_some_mode_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_input_for_some_mode_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_input_for_some_mode_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_input_for_some_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_input_for_some_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_input_for_some_mode_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_input_for_some_mode_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_input_for_some_mode",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_input_for_some_mode_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_input_for_some_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_input_for_some_mode_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_0 = {
  (MR_String) "do_not_make_unique",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_1 = {
  (MR_String) "make_unique",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_make_unique_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_make_unique_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_make_unique_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_make_unique_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_make_unique_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_make_unique_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_make_unique_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_make_unique",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_make_unique_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_make_unique_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_make_unique_0,

};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_0 = {
  (MR_String) "is_not_primary_proc",
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

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_maybe_primary_proc_0_1[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_info_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_1 = {
  (MR_String) "is_primary_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table__ll_backend__fact_table__field_types_maybe_primary_proc_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_primary_proc_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_primary_proc_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_1
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_maybe_primary_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_primary_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_primary_proc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_maybe_primary_proc_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_primary_proc_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_primary_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_primary_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_primary_proc_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_primary_proc_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_primary_proc",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_maybe_primary_proc_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_maybe_primary_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_primary_proc_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_0 = {
  (MR_String) "not_primary_table",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_1 = {
  (MR_String) "primary_table",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_primary_table_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_primary_table_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_primary_table_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_primary_table_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_primary_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_primary_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_primary_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_primary_table",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_primary_table_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_primary_table_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_primary_table_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_0 = {
  (MR_String) "have_seen_input_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_1 = {
  (MR_String) "have_not_seen_input_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_seen_input_arg_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_seen_input_arg_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_1,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_seen_input_arg_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_seen_input_arg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_seen_input_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_seen_input_arg_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_seen_input_arg_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_seen_input_arg",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_seen_input_arg_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_seen_input_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_seen_input_arg_0,

};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_0 = {
  (MR_String) "do_not_test_keys",
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

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_maybe_test_keys_0_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_var_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_1 = {
  (MR_String) "test_keys",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table__ll_backend__fact_table__field_types_maybe_test_keys_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_test_keys_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_test_keys_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_1
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_maybe_test_keys_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_test_keys_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_maybe_test_keys_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_maybe_test_keys_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_maybe_test_keys_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_test_keys_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_test_keys_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_test_keys_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_test_keys_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_test_keys",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_maybe_test_keys_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_maybe_test_keys_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_test_keys_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_0 = {
  (MR_String) "do_not_write_data_table",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_1 = {
  (MR_String) "write_data_table",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_write_data_table_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_write_data_table_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_data_table_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_write_data_table_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_write_data_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_write_data_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_write_data_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_write_data_table",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_write_data_table_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_write_data_table_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_write_data_table_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_0 = {
  (MR_String) "do_not_write_hash_tables",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_1 = {
  (MR_String) "write_hash_tables",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_write_hash_tables_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_write_hash_tables_0[2] = {
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_0,
  &ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_maybe_write_hash_tables_0_1
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_write_hash_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_write_hash_tables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____maybe_write_hash_tables_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____maybe_write_hash_tables_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "maybe_write_hash_tables",
  { ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_maybe_write_hash_tables_0 },
  { ll_backend__fact_table__ll_backend__fact_table__enum_ordinal_ordered_maybe_write_hash_tables_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_maybe_write_hash_tables_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_table_mode_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0 = {
  (MR_String) "proc_stream",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_proc_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____proc_stream_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____proc_stream_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "proc_stream",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table__list__ti_list_1ll_backend__fact_table__type_ctor_info_fact_arg_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0 = {
  (MR_String) "sort_file_line",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0
};

static const MR_Integer ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____sort_file_line_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____sort_file_line_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "sort_file_line",
  { ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0 },
  { ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0,

};

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__generate_argument_vars_code__3548__1_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  MR_Word LambdaHeadVar__2_34;
  MR_Word FactTableMode_42 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_33, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

  switch (FactTableMode_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LambdaHeadVar__2_34 = parse_tree__prog_mode__in_mode_0_f_0();
      break;
    case (MR_Integer) 1:
      LambdaHeadVar__2_34 = parse_tree__prog_mode__out_mode_0_f_0();
      break;
  }
  return LambdaHeadVar__2_34;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__generate_argument_vars_code__3544__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31;

  switch (LambdaHeadVar__1_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      LambdaHeadVar__2_31 = parse_tree__builtin_lib_types__float_type_0_f_0();
      break;
    case (MR_Integer) 0:
      LambdaHeadVar__2_31 = parse_tree__builtin_lib_types__int_type_0_f_0();
      break;
    case (MR_Integer) 2:
      LambdaHeadVar__2_31 = parse_tree__builtin_lib_types__string_type_0_f_0();
      break;
  }
  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__build_hash_table_loop__2066__1_1_f_0(
  MR_Word LambdaHeadVar__1_70)
{
  MR_Word LambdaHeadVar__2_71 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_70, (MR_Integer) 2))));

  return LambdaHeadVar__2_71;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__write_secondary_hash_tables__1786__1_1_f_0(
  MR_Word LambdaHeadVar__1_82)
{
  MR_Word LambdaHeadVar__2_83 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_82, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_83;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__write_primary_hash_table__1713__1_1_f_0(
  MR_Word LambdaHeadVar__1_84)
{
  MR_Word LambdaHeadVar__2_85 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_84, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_85;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__open_sort_files__1233__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  MR_Word LambdaHeadVar__2_44 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_43, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_44;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__fact_table_check_proc_modes__425__1_1_f_0(
  MR_Word LambdaHeadVar__1_74)
{
  MR_Word LambdaHeadVar__2_75 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_74, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_75;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__fact_table_generate_c_code_for_proc__2633__1_1_f_0(
  MR_Word LambdaHeadVar__1_44)
{
  MR_Word LambdaHeadVar__2_45 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_44, (MR_Integer) 2))));

  return LambdaHeadVar__2_45;
}

static MR_Word MR_CALL 
ll_backend__fact_table__IntroducedFrom__func__fact_table_generate_c_code_for_proc__2629__1_1_f_0(
  MR_Word LambdaHeadVar__1_41)
{
  MR_Word LambdaHeadVar__2_42 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_41, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

  return LambdaHeadVar__2_42;
}

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[9]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__io____Compare____output_stream_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[9]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
          succeeded = mercury__io____Unify____output_stream_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_hash_tables_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_hash_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_data_table_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_data_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_test_keys_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
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
    MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_String Var_38 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgY1_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgY2_18 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgY4_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgY5_27 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_16;

      succeeded = (Var_39 < ArgY1_15);
      if (succeeded)
      {
        SubResult1_16 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_39 > ArgY1_15);
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
        *HeadVar__1_1 = SubResult1_16;
      else
      {
        MR_Word SubResult2_19;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_19, Var_38, ArgY2_18);
        succeeded = (SubResult2_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_19;
        else
        {
          MR_Word SubResult3_22;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[8]), &SubResult3_22, ((MR_Box) (Var_37)), ((MR_Box) (ArgY3_21)));
          succeeded = (SubResult3_22 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_22;
          else
          {
            MR_Word SubResult4_25;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[6]), &SubResult4_25, ((MR_Box) (Var_36)), ((MR_Box) (ArgY4_24)));
            succeeded = (SubResult4_25 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_25;
            else
            {
              succeeded = (Var_35 < ArgY5_27);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_35 > ArgY5_27);
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
ll_backend__fact_table____Unify____maybe_test_keys_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_12;
    MR_Integer ArgX5_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_14;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      ArgY5_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
            if (succeeded)
              succeeded = (ArgX5_13 == ArgY5_14);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_seen_input_arg_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_seen_input_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_table_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_proc_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_make_unique_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_make_unique_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_input_for_some_mode_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_input_for_some_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_in_or_output_for_some_mode_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_in_or_output_for_some_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_create_fact_map_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_create_fact_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

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
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Integer Var_14 = (MR_Integer) (Var_13);
                MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_14 < Var_15);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_14 > Var_15);
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0(
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
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0(
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
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    ll_backend__fact_table____Compare____fact_arg_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ll_backend__fact_table____Compare____hash_index_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_22 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_22 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_String Var_23 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgY1_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgY2_16 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      succeeded = (Var_24 < ArgY1_13);
      if (succeeded)
      {
        SubResult1_14 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_24 > ArgY1_13);
        if (succeeded)
        {
          SubResult1_14 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_14 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_23, ArgY2_16);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0(
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
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer CastX_17 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_18 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ArgX1_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 0))));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 0))));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float ArgX1_13 = MR_unbox_float((MR_hl_field(1, ArgX1_3, (MR_Integer) 0)));
            MR_Float ArgY1_14;

            succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_14 = MR_unbox_float((MR_hl_field(1, ArgY1_4, (MR_Integer) 0)));
              succeeded = (ArgX1_13 == ArgY1_14);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(2, ArgX1_3, (MR_Integer) 0))));
            MR_String ArgY1_16;

            succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_String) ((MR_hl_field(2, ArgY1_4, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            }
          }
          break;
      }
    if (succeeded)
    {
      succeeded = ll_backend__fact_table____Unify____hash_index_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
        succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_var_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
          parse_tree__prog_data_foreign____Compare____pragma_var_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_var_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = parse_tree__prog_data_foreign____Unify____pragma_var_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_info_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_class_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table____Compare____fact_table_arg_check_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_11)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      ll_backend__fact_table____Compare____fact_table_gen_info_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

void MR_CALL 
ll_backend__fact_table____Compare____fact_table_gen_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_arg_check_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ll_backend__fact_table____Unify____fact_table_gen_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_gen_info_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ll_backend__fact_table_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_type_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0(
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
          MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_28 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_28 > ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
          MR_Float Var_27 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Float ArgY1_13 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

                mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_27, ArgY1_13);
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
          MR_String Var_29 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_29, ArgY1_21);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0(
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
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float ArgX1_5 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
          MR_Float ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0(
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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_45;

  conv2_LambdaHeadVar__2_45 = ll_backend__fact_table__IntroducedFrom__func__fact_table_generate_c_code_for_proc__2633__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_45));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_42;

  conv0_LambdaHeadVar__2_42 = ll_backend__fact_table__IntroducedFrom__func__fact_table_generate_c_code_for_proc__2629__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_42));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredName_12,
  MR_Integer ProcId_13,
  MR_Integer PrimaryProcId_14,
  MR_Word ProcInfo_15,
  MR_Word GenInfo_16,
  MR_Word * VarSet_17,
  MR_Word * PragmaVars_18,
  MR_String * ProcCode_19,
  MR_String * ExtraCode_20)
{
  MR_bool succeeded;
  MR_Word Globals_21;
  MR_Integer FactTableSize_22;
  MR_Word Determinism_23;
  MR_String PredNameIdent_24;
  MR_Word FactArgInfos_25;
  MR_Word FactTableProcMap_26;
  MR_Word Types_29;
  MR_Word FactTableProcInfo_33;
  MR_Word FactTableVars_34;
  MR_Word ModeClass_35;
  MR_Box conv1_FactTableProcInfo_33;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_21);
  libs__globals__lookup_int_option_3_p_0(Globals_21, (MR_Integer) 362, &FactTableSize_22);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_15, &Determinism_23);
  PredNameIdent_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredName_12);
  FactArgInfos_25 = ((MR_Word) ((MR_hl_field(0, GenInfo_16, (MR_Integer) 0))));
  FactTableProcMap_26 = ((MR_Word) ((MR_hl_field(0, GenInfo_16, (MR_Integer) 1))));
  Types_29 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[10]), FactArgInfos_25);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_26, ((MR_Box) (ProcId_13)), &conv1_FactTableProcInfo_33);
  FactTableProcInfo_33 = ((MR_Word) (conv1_FactTableProcInfo_33));
  FactTableVars_34 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_33, (MR_Integer) 0))));
  ModeClass_35 = ((MR_Unsigned) ((MR_hl_field(0, FactTableProcInfo_33, (MR_Integer) 1))) & (MR_Integer) 3);
  *VarSet_17 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_33, (MR_Integer) 2))));
  *PragmaVars_18 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[11]), FactTableVars_34);
  switch (ModeClass_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Determinism_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_String NamesString_66;
            MR_String Var_72;

            ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(FactTableVars_34, &NamesString_66);
            Var_72 = mercury__string__f_43_43_2_f_0(NamesString_66, (MR_String) " */");
            *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_72);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            ll_backend__fact_table__generate_semidet_all_in_code_6_p_0(FactTableSize_22, PredNameIdent_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (Determinism_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          {
            MR_String StructName_74;
            MR_String Var_82;

            Var_82 = mercury__string__f_43_43_2_f_0(PredNameIdent_24, (MR_String) "_fact_table");
            StructName_74 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_82);
            ll_backend__fact_table__generate_cc_multi_code_loop_5_p_0(StructName_74, FactTableVars_34, (MR_Integer) 1, (MR_String) "", ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 3:
        case (MR_Integer) 1:
          {
            MR_String NamesString_84;
            MR_String Var_90;

            ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(FactTableVars_34, &NamesString_84);
            Var_90 = mercury__string__f_43_43_2_f_0(NamesString_84, (MR_String) " */");
            *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_90);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 2:
          ll_backend__fact_table__generate_multi_code_8_p_0(ModuleInfo_11, FactTableSize_22, PredNameIdent_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19, ExtraCode_20);
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Determinism_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 2:
          {
            MR_String NamesString_92;
            MR_String Var_98;

            ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(FactTableVars_34, &NamesString_92);
            Var_98 = mercury__string__f_43_43_2_f_0(NamesString_92, (MR_String) " */");
            *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_98);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 1:
          {
            ll_backend__fact_table__generate_semidet_in_out_code_6_p_0(FactTableSize_22, PredNameIdent_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 3:
          {
            succeeded = (ProcId_13 == PrimaryProcId_14);
            if (succeeded)
              ll_backend__fact_table__generate_primary_nondet_code_8_p_0(ModuleInfo_11, FactTableSize_22, PredNameIdent_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19, ExtraCode_20);
            else
              ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(ModuleInfo_11, FactTableSize_22, PredNameIdent_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19, ExtraCode_20);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_semidet_in_out_code_6_p_0(
  MR_Integer FactTableSize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12)
{
  MR_String DeclCode_13;
  MR_Integer ProcIdInt_14;
  MR_String LabelName_15;
  MR_String HashCode_16;
  MR_String SuccessCode_18;
  MR_String FactLookupCode_19;
  MR_String FailCode_21;
  MR_String Var_42;
  MR_String Var_43;
  MR_String Var_44;
  MR_String Var_45;
  MR_String Var_46;
  MR_String Var_48;
  MR_String Var_56;
  MR_String Var_58;
  MR_String Var_61;
  MR_String Var_63;
  MR_String Var_64;
  MR_String Var_66;
  MR_String Var_67;
  MR_Integer ProcIdInt_70;
  MR_String Var_77;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_87;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_70);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_70, &Var_77);
  Var_84 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) "_0;\n\n    ");
  Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_84);
  Var_87 = mercury__string__f_43_43_2_f_0(PredName_8, Var_86);
  DeclCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            // Initialise current_table to the top level hash table\n            // for this ProcId.\n            current_table =\n                &me" "rcury__", Var_87);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_14, &Var_48);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_48);
  LabelName_15 = mercury__string__f_43_43_2_f_0(PredName_8, Var_56);
  ll_backend__fact_table__generate_hash_code_8_p_0(FactTableSize_7, PredName_8, LabelName_15, (MR_Integer) 0, Types_10, FactTableVars_11, (MR_Integer) 1, &HashCode_16);
  Var_58 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n    ");
  SuccessCode_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", Var_58);
  ll_backend__fact_table__generate_fact_lookup_code_6_p_0(FactTableSize_7, PredName_8, Types_10, FactTableVars_11, (MR_Integer) 1, &FactLookupCode_19);
  Var_61 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ":\n            ;\n    ");
  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", Var_61);
  Var_64 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_63);
  Var_66 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", Var_64);
  Var_67 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_66);
  FailCode_21 = mercury__string__f_43_43_2_f_0((MR_String) "\n            goto skip_", Var_67);
  Var_46 = mercury__string__f_43_43_2_f_0(FailCode_21, (MR_String) "\t}\n");
  Var_45 = mercury__string__f_43_43_2_f_0(FactLookupCode_19, Var_46);
  Var_44 = mercury__string__f_43_43_2_f_0(SuccessCode_18, Var_45);
  Var_43 = mercury__string__f_43_43_2_f_0(HashCode_16, Var_44);
  Var_42 = mercury__string__f_43_43_2_f_0(DeclCode_13, Var_43);
  *ProcCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", Var_42);
}

static void MR_CALL 
ll_backend__fact_table__generate_semidet_all_in_code_6_p_0(
  MR_Integer FactTableSize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12)
{
  MR_String DeclCode_13;
  MR_Integer ProcIdInt_14;
  MR_String LabelName_15;
  MR_String HashCode_16;
  MR_String SuccessCode_18;
  MR_String Var_37;
  MR_String Var_38;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_54;
  MR_String Var_56;
  MR_String Var_57;
  MR_String Var_59;
  MR_String Var_60;
  MR_Integer ProcIdInt_63;
  MR_String Var_70;
  MR_String Var_77;
  MR_String Var_79;
  MR_String Var_80;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_63);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_63, &Var_70);
  Var_77 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) "_0;\n\n    ");
  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_77);
  Var_80 = mercury__string__f_43_43_2_f_0(PredName_8, Var_79);
  DeclCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            // Initialise current_table to the top level hash table\n            // for this ProcId.\n            current_table =\n                &me" "rcury__", Var_80);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_14, &Var_41);
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_41);
  LabelName_15 = mercury__string__f_43_43_2_f_0(PredName_8, Var_49);
  ll_backend__fact_table__generate_hash_code_8_p_0(FactTableSize_7, PredName_8, LabelName_15, (MR_Integer) 0, Types_10, FactTableVars_11, (MR_Integer) 1, &HashCode_16);
  Var_51 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ":\n            ;\n    ");
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", Var_51);
  Var_54 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_53);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", Var_54);
  Var_57 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_56);
  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n            goto skip_", Var_57);
  Var_60 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_59);
  SuccessCode_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", Var_60);
  Var_39 = mercury__string__f_43_43_2_f_0(SuccessCode_18, (MR_String) "\t}\n");
  Var_38 = mercury__string__f_43_43_2_f_0(HashCode_16, Var_39);
  Var_37 = mercury__string__f_43_43_2_f_0(DeclCode_13, Var_38);
  *ProcCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", Var_37);
}

static void MR_CALL 
ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  MR_String ExtraCodeLabel_17;
  MR_String ArgDeclCode_19;
  MR_String InputCode_20;
  MR_String OutputCode_21;
  MR_String DeclCode_25;
  MR_Integer ProcIdInt_26;
  MR_String LabelName_27;
  MR_String LabelName2_28;
  MR_String HashCode_29;
  MR_String StringHashLookupCode_33;
  MR_String IntHashLookupCode_34;
  MR_String FloatHashLookupCode_35;
  MR_String FactLookupCode_36;
  MR_Integer Arity_37;
  MR_String Var_124;
  MR_String Var_132;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_145;
  MR_String Var_146;
  MR_String Var_148;
  MR_String Var_149;
  MR_String Var_151;
  MR_String Var_152;
  MR_String Var_154;
  MR_String Var_155;
  MR_String Var_157;
  MR_String Var_158;
  MR_String Var_160;
  MR_String Var_161;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_170;
  MR_String Var_172;
  MR_String Var_173;
  MR_String Var_175;
  MR_String Var_176;
  MR_String Var_178;
  MR_String Var_179;
  MR_String Var_181;
  MR_String Var_182;
  MR_String Var_184;
  MR_String Var_185;
  MR_String Var_187;
  MR_String Var_188;
  MR_String Var_190;
  MR_String Var_191;
  MR_String Var_193;
  MR_String Var_194;
  MR_String Var_196;
  MR_String Var_197;
  MR_String Var_199;
  MR_String Var_200;
  MR_String Var_202;
  MR_String Var_203;
  MR_String Var_210;
  MR_String Var_212;
  MR_String Var_213;
  MR_String Var_215;
  MR_String Var_216;
  MR_String Var_218;
  MR_String Var_219;
  MR_String Var_221;
  MR_String Var_222;
  MR_String Var_224;
  MR_String Var_225;
  MR_String Var_227;
  MR_String Var_228;
  MR_String Var_230;
  MR_String Var_231;
  MR_String _SaveRegsCode_22;
  MR_String _GetRegsCode_23;
  MR_Integer _NumFrameVars_24;

  ll_backend__fact_table__generate_nondet_proc_code_5_p_0(PredName_11, ProcId_12, FactTableVars_14, &ExtraCodeLabel_17, ProcCode_15);
  ll_backend__fact_table__generate_argument_vars_code_9_p_0(ModuleInfo_9, Types_13, FactTableVars_14, &ArgDeclCode_19, &InputCode_20, &OutputCode_21, &_SaveRegsCode_22, &_GetRegsCode_23, &_NumFrameVars_24);
  ll_backend__fact_table__generate_decl_code_3_p_0(PredName_11, ProcId_12, &DeclCode_25);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ProcIdInt_26);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_26, &Var_124);
  Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_124);
  LabelName_27 = mercury__string__f_43_43_2_f_0(PredName_11, Var_132);
  mercury__string__append_3_p_2(LabelName_27, (MR_String) "_2", &LabelName2_28);
  ll_backend__fact_table__generate_hash_code_8_p_0(FactTableSize_10, PredName_11, LabelName_27, (MR_Integer) 0, Types_13, FactTableVars_14, (MR_Integer) 1, &HashCode_29);
  ll_backend__fact_table__generate_hash_lookup_code_7_p_0((MR_String) "(char *) MR_framevar(4)", LabelName2_28, (MR_Integer) 0, (MR_Integer) 1, (MR_Char) 115, (MR_Word) ((MR_Unsigned) 0U), &StringHashLookupCode_33);
  ll_backend__fact_table__generate_hash_lookup_code_7_p_0((MR_String) "MR_framevar(4)", LabelName2_28, (MR_Integer) 1, (MR_Integer) 0, (MR_Char) 105, (MR_Word) ((MR_Unsigned) 0U), &IntHashLookupCode_34);
  ll_backend__fact_table__generate_hash_lookup_code_7_p_0((MR_String) "MR_word_to_float(MR_framevar(4))", LabelName2_28, (MR_Integer) 2, (MR_Integer) 0, (MR_Char) 102, (MR_Word) ((MR_Unsigned) 0U), &FloatHashLookupCode_35);
  ll_backend__fact_table__generate_fact_lookup_code_6_p_0(FactTableSize_10, PredName_11, Types_13, FactTableVars_14, (MR_Integer) 1, &FactLookupCode_36);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), FactTableVars_14, &Arity_37);
  Var_134 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_134);
  Var_137 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_136);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_137);
  Var_140 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_140);
  Var_143 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_142);
  Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_143);
  Var_146 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_145);
  Var_148 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_146);
  Var_149 = mercury__string__f_43_43_2_f_0(LabelName2_28, Var_148);
  Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_succeed();\n    failure_code_", Var_149);
  Var_152 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_151);
  Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_152);
  Var_155 = mercury__string__f_43_43_2_f_0(FactLookupCode_36, Var_154);
  Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        // lookup fact table\n", Var_155);
  Var_158 = mercury__string__f_43_43_2_f_0(LabelName2_28, Var_157);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            default:\n                MR_fatal_error(\n                    \"fact table hash lookup: nondet stack corrupted\?\");\n        }\n " "   success_code_", Var_158);
  Var_161 = mercury__string__f_43_43_2_f_0(FloatHashLookupCode_35, Var_160);
  Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'f\':\n", Var_161);
  Var_164 = mercury__string__f_43_43_2_f_0(IntHashLookupCode_34, Var_163);
  Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'i\':\n", Var_164);
  Var_167 = mercury__string__f_43_43_2_f_0(StringHashLookupCode_33, Var_166);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Integer  hashval = MR_framevar(1);\n        MR_Word     ind;\n        void        *current_table = (void *) MR_framevar(2);\n        char        keytyp" "e = (char) MR_framevar(3);\n\n        // lookup hash table\n        switch(keytype)\n        {\n            case \'s\':\n", Var_167);
  Var_170 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_169);
  Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    {\n        // create argument vars\n", Var_170);
  Var_173 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_172);
  Var_175 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", Var_173);
  Var_176 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_175);
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_framevar(2) = (MR_Word) current_table;\n        MR_framevar(3) = (" "MR_Word) keytype;\n        MR_framevar(4) = current_key;\n        MR_succeed();\n    failure_code_", Var_176);
  Var_179 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_178);
  Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_179);
  Var_182 = mercury__string__f_43_43_2_f_0(FactLookupCode_36, Var_181);
  Var_184 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        // lookup fact table\n", Var_182);
  Var_185 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_184);
  Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", Var_185);
  Var_188 = mercury__string__f_43_43_2_f_0(HashCode_29, Var_187);
  Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // lookup hash table\n", Var_188);
  Var_191 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_190);
  Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to input arg vars\n", Var_191);
  Var_194 = mercury__string__f_43_43_2_f_0(DeclCode_25, Var_193);
  Var_196 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // declare local variables\n", Var_194);
  Var_197 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_196);
  Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        // create argument vars\n", Var_197);
  Var_200 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_199);
  Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\", 4, MR_LABEL(", Var_200);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_37, &Var_203);
  Var_210 = mercury__string__f_43_43_2_f_0(Var_203, Var_202);
  Var_212 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_210);
  Var_213 = mercury__string__f_43_43_2_f_0(PredName_11, Var_212);
  Var_215 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_213);
  Var_216 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_215);
  Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_216);
  Var_219 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_218);
  Var_221 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_219);
  Var_222 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_221);
  Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_222);
  Var_225 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_224);
  Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_225);
  Var_228 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_227);
  Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_228);
  Var_231 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_230);
  *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_231);
}

static void MR_CALL 
ll_backend__fact_table__generate_primary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  MR_String ExtraCodeLabel_17;
  MR_String ArgDeclCode_19;
  MR_String InputCode_20;
  MR_String OutputCode_21;
  MR_String SaveRegsCode_22;
  MR_String GetRegsCode_23;
  MR_Integer NumFrameVars_24;
  MR_String DeclCode_25;
  MR_Integer ProcIdInt_26;
  MR_String LabelName_27;
  MR_String HashCode_28;
  MR_String FactLookupCode_29;
  MR_String FactTestCode_30;
  MR_String NumFactsVar_31;
  MR_Integer Arity_32;
  MR_String Var_112;
  MR_String Var_120;
  MR_String Var_122;
  MR_String Var_125;
  MR_String Var_127;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_131;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_145;
  MR_String Var_146;
  MR_String Var_148;
  MR_String Var_149;
  MR_String Var_151;
  MR_String Var_152;
  MR_String Var_154;
  MR_String Var_155;
  MR_String Var_157;
  MR_String Var_158;
  MR_String Var_160;
  MR_String Var_161;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_170;
  MR_String Var_172;
  MR_String Var_173;
  MR_String Var_175;
  MR_String Var_176;
  MR_String Var_178;
  MR_String Var_179;
  MR_String Var_181;
  MR_String Var_182;
  MR_String Var_184;
  MR_String Var_185;
  MR_String Var_187;
  MR_String Var_188;
  MR_String Var_190;
  MR_String Var_191;
  MR_String Var_193;
  MR_String Var_194;
  MR_String Var_201;
  MR_String Var_203;
  MR_String Var_204;
  MR_String Var_211;
  MR_String Var_213;
  MR_String Var_214;
  MR_String Var_216;
  MR_String Var_217;
  MR_String Var_219;
  MR_String Var_220;
  MR_String Var_222;
  MR_String Var_223;
  MR_String Var_225;
  MR_String Var_226;
  MR_String Var_228;
  MR_String Var_229;
  MR_String Var_231;
  MR_String Var_232;

  ll_backend__fact_table__generate_nondet_proc_code_5_p_0(PredName_11, ProcId_12, FactTableVars_14, &ExtraCodeLabel_17, ProcCode_15);
  ll_backend__fact_table__generate_argument_vars_code_9_p_0(ModuleInfo_9, Types_13, FactTableVars_14, &ArgDeclCode_19, &InputCode_20, &OutputCode_21, &SaveRegsCode_22, &GetRegsCode_23, &NumFrameVars_24);
  ll_backend__fact_table__generate_decl_code_3_p_0(PredName_11, ProcId_12, &DeclCode_25);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ProcIdInt_26);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_26, &Var_112);
  Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_112);
  LabelName_27 = mercury__string__f_43_43_2_f_0(PredName_11, Var_120);
  ll_backend__fact_table__generate_hash_code_8_p_0(FactTableSize_10, PredName_11, LabelName_27, (MR_Integer) 0, Types_13, FactTableVars_14, (MR_Integer) 1, &HashCode_28);
  ll_backend__fact_table__generate_fact_lookup_code_6_p_0(FactTableSize_10, PredName_11, Types_13, FactTableVars_14, (MR_Integer) 1, &FactLookupCode_29);
  ll_backend__fact_table__generate_fact_test_code_5_p_0(FactTableSize_10, PredName_11, Types_13, FactTableVars_14, &FactTestCode_30);
  Var_122 = mercury__string__f_43_43_2_f_0(PredName_11, (MR_String) "_fact_table_num_facts");
  NumFactsVar_31 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_122);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), FactTableVars_14, &Arity_32);
  Var_125 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
  Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_127);
  Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_130);
  Var_133 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_131);
  Var_134 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_133);
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_134);
  Var_137 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_136);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_137);
  Var_140 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_140);
  Var_143 = mercury__string__f_43_43_2_f_0(FactLookupCode_29, Var_142);
  Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // lookup fact table\n", Var_143);
  Var_146 = mercury__string__f_43_43_2_f_0(FactTestCode_30, Var_145);
  Var_148 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // test fact table entry\n", Var_146);
  Var_149 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_148);
  Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to input arg vars\n", Var_149);
  Var_152 = mercury__string__f_43_43_2_f_0(GetRegsCode_23, Var_151);
  Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "\n        int ind = MR_framevar(1);\n        // copy framevars to registers\n", Var_152);
  Var_155 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_154);
  Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ")\n        MR_fail();\n    {\n        // create argument vars\n", Var_155);
  Var_158 = mercury__string__f_43_43_2_f_0(NumFactsVar_31, Var_157);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", Var_158);
  Var_161 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_160);
  Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", Var_161);
  Var_164 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_163);
  Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_framevar(1) = ind + 1;\n        MR_succeed();\n    failure_code_", Var_164);
  Var_167 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_166);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_167);
  Var_170 = mercury__string__f_43_43_2_f_0(FactLookupCode_29, Var_169);
  Var_172 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        // lookup fact table\n", Var_170);
  Var_173 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_172);
  Var_175 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", Var_173);
  Var_176 = mercury__string__f_43_43_2_f_0(HashCode_28, Var_175);
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // lookup hash table\n", Var_176);
  Var_179 = mercury__string__f_43_43_2_f_0(SaveRegsCode_22, Var_178);
  Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to framevars\n", Var_179);
  Var_182 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_181);
  Var_184 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to input arg vars\n", Var_182);
  Var_185 = mercury__string__f_43_43_2_f_0(DeclCode_25, Var_184);
  Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // declare local variables\n", Var_185);
  Var_188 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_187);
  Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        // create argument vars\n", Var_188);
  Var_191 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_190);
  Var_193 = mercury__string__f_43_43_2_f_0((MR_String) ", MR_LABEL(", Var_191);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), NumFrameVars_24, &Var_194);
  Var_201 = mercury__string__f_43_43_2_f_0(Var_194, Var_193);
  Var_203 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_201);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_32, &Var_204);
  Var_211 = mercury__string__f_43_43_2_f_0(Var_204, Var_203);
  Var_213 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_211);
  Var_214 = mercury__string__f_43_43_2_f_0(PredName_11, Var_213);
  Var_216 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_214);
  Var_217 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_216);
  Var_219 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_217);
  Var_220 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_219);
  Var_222 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_220);
  Var_223 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_222);
  Var_225 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_223);
  Var_226 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_225);
  Var_228 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_226);
  Var_229 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_228);
  Var_231 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_229);
  Var_232 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_231);
  *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_232);
}

static void MR_CALL 
ll_backend__fact_table__generate_fact_test_code_5_p_0(
  MR_Integer FactTableSize_6,
  MR_String PredName_7,
  MR_Word Types_8,
  MR_Word FactTableVars_9,
  MR_String * FactTestCode_10)
{
  MR_String FactTableName_11;
  MR_String CondCode_12;
  MR_String Var_14;
  MR_String Var_19;

  Var_14 = mercury__string__f_43_43_2_f_0(PredName_7, (MR_String) "_fact_table");
  FactTableName_11 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_14);
  ll_backend__fact_table__generate_test_condition_code_7_p_0(FactTableSize_6, FactTableName_11, Types_8, FactTableVars_9, (MR_Integer) 1, (MR_Integer) 1, &CondCode_12);
  Var_19 = mercury__string__f_43_43_2_f_0(CondCode_12, (MR_String) "\t\t) MR_fail();\n");
  *FactTestCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif(", Var_19);
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_code_8_p_0(
  MR_Integer FactTableSize_1,
  MR_String PredName_2,
  MR_String LabelName_3,
  MR_Integer LabelNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_String * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__8_8 = (MR_String) "";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/8", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/8", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word FactTableVar_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
        MR_Word FactTableVars_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
        MR_String VarName_44 = ((MR_String) ((MR_hl_field(0, FactTableVar_40, (MR_Integer) 0))));
        MR_Word Mode_45 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_40, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer NextArgNum_48 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);

        switch (Mode_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgCode_49;
              MR_String ArgsCode_50;
              MR_Integer Var_52;

              switch (Var_55) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TestKeys_56;
                    MR_String HashLookupCode_57;
                    MR_String Var_69;
                    MR_String Var_71;
                    MR_String Var_72;
                    MR_String Var_74;
                    MR_String Var_75;

                    {
                      TestKeys_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, TestKeys_56, 0) = ((MR_Box) (FactTableSize_1));
                      MR_hl_field(1, TestKeys_56, 1) = ((MR_Box) (PredName_2));
                      MR_hl_field(1, TestKeys_56, 2) = ((MR_Box) (Var_54));
                      MR_hl_field(1, TestKeys_56, 3) = ((MR_Box) (FactTableVars_41));
                      MR_hl_field(1, TestKeys_56, 4) = ((MR_Box) (NextArgNum_48));
                    }
                    ll_backend__fact_table__generate_hash_lookup_code_7_p_0(VarName_44, LabelName_3, LabelNum_4, (MR_Integer) 0, (MR_Char) 102, TestKeys_56, &HashLookupCode_57);
                    Var_69 = mercury__string__f_43_43_2_f_0(HashLookupCode_57, (MR_String) "\n\n    ");
                    Var_71 = mercury__string__f_43_43_2_f_0((MR_String) ");\n\n        // lookup the hash table\n        ", Var_69);
                    Var_72 = mercury__string__f_43_43_2_f_0(VarName_44, Var_71);
                    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        hashval = (hashval >= 0 \? hashval : -hashval) % hashsize;\n\n        current_key = MR_float_to_word(", Var_72);
                    Var_75 = mercury__string__f_43_43_2_f_0(VarName_44, Var_74);
                    ArgCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        // calculate hash value for a float\n        hashsize = ((struct MR_fact_table_hash_table_f *) current_table)\n            ->size;\n        hashval = MR_" "hash_float(", Var_75);
                  }
                  break;
                case (MR_Integer) 0:
                  ll_backend__fact_table__generate_hash_int_code_9_p_0(FactTableSize_1, PredName_2, VarName_44, LabelName_3, LabelNum_4, Var_54, FactTableVars_41, NextArgNum_48, &ArgCode_49);
                  break;
                case (MR_Integer) 2:
                  ll_backend__fact_table__generate_hash_string_code_9_p_0(FactTableSize_1, PredName_2, VarName_44, LabelName_3, LabelNum_4, Var_54, FactTableVars_41, NextArgNum_48, &ArgCode_49);
                  break;
              }
              Var_52 = (MR_Integer) ((MR_Unsigned) LabelNum_4 + (MR_Unsigned) 1);
              ll_backend__fact_table__generate_hash_code_8_p_0(FactTableSize_1, PredName_2, LabelName_3, Var_52, Var_54, FactTableVars_41, NextArgNum_48, &ArgsCode_50);
              *HeadVar__8_8 = mercury__string__f_43_43_2_f_0(ArgCode_49, ArgsCode_50);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__5_5 = Var_54;
              MR_Word next_value_of_HeadVar__6_6 = FactTableVars_41;
              MR_Integer next_value_of_ArgNum_7 = NextArgNum_48;

              // direct tailcall eliminated
              ;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              ArgNum_7 = next_value_of_ArgNum_7;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_string_code_9_p_0(
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18)
{
  MR_Word TestKeys_19;
  MR_String HashLookupCode_20;
  MR_String Var_32;
  MR_String Var_34;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_38;

  {
    TestKeys_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TestKeys_19, 0) = ((MR_Box) (FactTableSize_10));
    MR_hl_field(1, TestKeys_19, 1) = ((MR_Box) (PredName_11));
    MR_hl_field(1, TestKeys_19, 2) = ((MR_Box) (Types_15));
    MR_hl_field(1, TestKeys_19, 3) = ((MR_Box) (FactTableVars_16));
    MR_hl_field(1, TestKeys_19, 4) = ((MR_Box) (ArgNum_17));
  }
  ll_backend__fact_table__generate_hash_lookup_code_7_p_0(VarName_12, LabelName_13, LabelNum_14, (MR_Integer) 1, (MR_Char) 115, TestKeys_19, &HashLookupCode_20);
  Var_32 = mercury__string__f_43_43_2_f_0(HashLookupCode_20, (MR_String) "\n\n    ");
  Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        // lookup the hash table\n        ", Var_32);
  Var_35 = mercury__string__f_43_43_2_f_0(VarName_12, Var_34);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ; *p != \'\\0\' ; p++) {\n                hashval = (*p + 31 * hashval) % hashsize;\n            }\n        }\n\n        current_key = (MR_Word) ", Var_35);
  Var_38 = mercury__string__f_43_43_2_f_0(VarName_12, Var_37);
  *Code_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        hashsize = ((struct MR_fact_table_hash_table_s *) current_table)->size;\n\n        // calculate hash value for a string\n        {\n            char *p;\n " "           hashval = 0;\n            for (p = ", Var_38);
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_int_code_9_p_0(
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18)
{
  MR_Word TestKeys_19;
  MR_String HashLookupCode_20;
  MR_String Var_36;
  MR_String Var_38;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_42;
  MR_String Var_44;
  MR_String Var_45;
  MR_String Var_47;
  MR_String Var_48;

  {
    TestKeys_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TestKeys_19, 0) = ((MR_Box) (FactTableSize_10));
    MR_hl_field(1, TestKeys_19, 1) = ((MR_Box) (PredName_11));
    MR_hl_field(1, TestKeys_19, 2) = ((MR_Box) (Types_15));
    MR_hl_field(1, TestKeys_19, 3) = ((MR_Box) (FactTableVars_16));
    MR_hl_field(1, TestKeys_19, 4) = ((MR_Box) (ArgNum_17));
  }
  ll_backend__fact_table__generate_hash_lookup_code_7_p_0(VarName_12, LabelName_13, LabelNum_14, (MR_Integer) 0, (MR_Char) 105, TestKeys_19, &HashLookupCode_20);
  Var_36 = mercury__string__f_43_43_2_f_0(HashLookupCode_20, (MR_String) "\n\n    ");
  Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        // lookup the hash table\n        ", Var_36);
  Var_39 = mercury__string__f_43_43_2_f_0(VarName_12, Var_38);
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ") % hashsize;\n\n        current_key = ", Var_39);
  Var_42 = mercury__string__f_43_43_2_f_0(VarName_12, Var_41);
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) " : -", Var_42);
  Var_45 = mercury__string__f_43_43_2_f_0(VarName_12, Var_44);
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " >= 0 \? ", Var_45);
  Var_48 = mercury__string__f_43_43_2_f_0(VarName_12, Var_47);
  *Code_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        // calculate hash value for an integer\n        hashsize = ((struct MR_fact_table_hash_table_i *) current_table)\n            ->size;\n        hashval = " "(", Var_48);
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_lookup_code_7_p_0(
  MR_String VarName_8,
  MR_String LabelName_9,
  MR_Integer LabelNum_10,
  MR_Word ComparisonKind_11,
  MR_Char KeyType_12,
  MR_Word TestKeys_13,
  MR_String * HashLookupCode_14)
{
  MR_bool succeeded;
  MR_String HashTableEntry_15;
  MR_String HashTableKey_16;
  MR_String CompareString_17;
  MR_String TestCode_26;
  MR_String Var_86;
  MR_String Var_93;
  MR_String Var_110;
  MR_String Var_112;
  MR_String Var_113;
  MR_String Var_115;
  MR_String Var_116;
  MR_String Var_123;
  MR_String Var_125;
  MR_String Var_126;
  MR_String Var_128;
  MR_String Var_129;
  MR_String Var_131;
  MR_String Var_132;
  MR_String Var_139;
  MR_String Var_141;
  MR_String Var_142;
  MR_String Var_144;
  MR_String Var_145;
  MR_String Var_147;
  MR_String Var_148;
  MR_String Var_150;
  MR_String Var_151;
  MR_String Var_158;
  MR_String Var_160;
  MR_String Var_161;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_170;

  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), KeyType_12, &Var_86);
  Var_93 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) " *) current_table)->table[hashval]");
  HashTableEntry_15 = mercury__string__f_43_43_2_f_0((MR_String) "((struct MR_fact_table_hash_table_", Var_93);
  HashTableKey_16 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, (MR_String) ".key");
  switch (ComparisonKind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_102;

        Var_102 = mercury__string__f_43_43_2_f_0((MR_String) " == ", VarName_8);
        CompareString_17 = mercury__string__f_43_43_2_f_0(HashTableKey_16, Var_102);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_96;
        MR_String Var_98;
        MR_String Var_99;

        Var_96 = mercury__string__f_43_43_2_f_0(VarName_8, (MR_String) ") == 0");
        Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_96);
        Var_99 = mercury__string__f_43_43_2_f_0(HashTableKey_16, Var_98);
        CompareString_17 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", Var_99);
      }
      break;
  }
  if ((TestKeys_13 == (MR_Word) ((MR_Unsigned) 0U)))
    TestCode_26 = (MR_String) "";
  else
  {
    MR_Integer FactTableSize_19 = ((MR_Integer) ((MR_hl_field(1, TestKeys_13, (MR_Integer) 0))));
    MR_String PredName_20 = ((MR_String) ((MR_hl_field(1, TestKeys_13, (MR_Integer) 1))));
    MR_Word Types_21 = ((MR_Word) ((MR_hl_field(1, TestKeys_13, (MR_Integer) 2))));
    MR_Word FactTableVars_22 = ((MR_Word) ((MR_hl_field(1, TestKeys_13, (MR_Integer) 3))));
    MR_Integer ArgNum_23 = ((MR_Integer) ((MR_hl_field(1, TestKeys_13, (MR_Integer) 4))));
    MR_String FactTableName_24;
    MR_String CondCode_25;
    MR_String Var_48;

    Var_48 = mercury__string__f_43_43_2_f_0(PredName_20, (MR_String) "_fact_table");
    FactTableName_24 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_48);
    ll_backend__fact_table__generate_test_condition_code_7_p_0(FactTableSize_19, FactTableName_24, Types_21, FactTableVars_22, ArgNum_23, (MR_Integer) 1, &CondCode_25);
    succeeded = (strcmp(CondCode_25, (MR_String) "") == 0);
    if (succeeded)
      TestCode_26 = (MR_String) "";
    else
    {
      MR_String Var_104;
      MR_String Var_106;
      MR_String Var_107;

      Var_104 = mercury__string__f_43_43_2_f_0(LabelName_9, (MR_String) ";\n");
      Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t) goto failure_code_", Var_104);
      Var_107 = mercury__string__f_43_43_2_f_0(CondCode_25, Var_106);
      TestCode_26 = mercury__string__f_43_43_2_f_0((MR_String) "if (", Var_107);
    }
  }
  Var_110 = mercury__string__f_43_43_2_f_0(LabelName_9, (MR_String) ";\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ");
  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) ".next;\n            goto success_code_", Var_110);
  Var_113 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_112);
  Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "\';\n            hashval = ", Var_113);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), KeyType_12, &Var_116);
  Var_123 = mercury__string__f_43_43_2_f_0(Var_116, Var_115);
  Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "\n            keytype = \'", Var_123);
  Var_126 = mercury__string__f_43_43_2_f_0(TestCode_26, Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ") == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            // check that any remaining input arguments match\n            ", Var_126);
  Var_129 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ":\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", Var_129);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), LabelNum_10, &Var_132);
  Var_139 = mercury__string__f_43_43_2_f_0(Var_132, Var_131);
  Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0(LabelName_9, Var_141);
  Var_144 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n    found_", Var_142);
  Var_145 = mercury__string__f_43_43_2_f_0(LabelName_9, Var_144);
  Var_147 = mercury__string__f_43_43_2_f_0((MR_String) ".next) != -1);\n\n        // key not found\n        goto failure_code_", Var_145);
  Var_148 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_147);
  Var_150 = mercury__string__f_43_43_2_f_0((MR_String) ";\n            }\n        } while ((hashval = ", Var_148);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), LabelNum_10, &Var_151);
  Var_158 = mercury__string__f_43_43_2_f_0(Var_151, Var_150);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_158);
  Var_161 = mercury__string__f_43_43_2_f_0(LabelName_9, Var_160);
  Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ".index;\n                goto found_", Var_161);
  Var_164 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_163);
  Var_166 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n                ind = (MR_Word) ", Var_164);
  Var_167 = mercury__string__f_43_43_2_f_0(CompareString_17, Var_166);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) ") != 0 && ", Var_167);
  Var_170 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_169);
  *HashLookupCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", Var_170);
}

static void MR_CALL 
ll_backend__fact_table__generate_test_condition_code_7_p_0(
  MR_Integer FactTableSize_1,
  MR_String FactTableName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_String * HeadVar__7_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_String) "";
    else
    {
      *HeadVar__7_7 = (MR_String) "";
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_test_condition_code\'/7", (MR_String) "too many ArgTypes");
        return;
      }
    }
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_String) "";
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_test_condition_code\'/7", (MR_String) "too many PragmaVars");
        return;
      }
    }
    else
    {
      MR_Word FactTableVar_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word FactTableVars_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_String Name_37 = ((MR_String) ((MR_hl_field(0, FactTableVar_32, (MR_Integer) 0))));
      MR_Word Mode_38 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_32, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_String ArgCondCode_43;
      MR_String ArgsCondCode_44;
      MR_Word STATE_VARIABLE_IsFirstInputArg_69_69;
      MR_Integer Var_70;

      switch (Mode_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgCondCode0_42;

            switch (Var_74) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_String Var_112;
                  MR_String Var_114;
                  MR_String Var_115;
                  MR_String Var_122;
                  MR_String Var_124;
                  MR_String Var_125;
                  MR_String Var_132;
                  MR_String Var_134;
                  MR_String Var_135;
                  MR_String Var_142;
                  MR_String Var_144;

                  Var_112 = mercury__string__f_43_43_2_f_0(Name_37, (MR_String) "\n");
                  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " != ", Var_112);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_115);
                  Var_122 = mercury__string__f_43_43_2_f_0(Var_115, Var_114);
                  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_122);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_1, &Var_125);
                  Var_132 = mercury__string__f_43_43_2_f_0(Var_125, Var_124);
                  Var_134 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_132);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_1, &Var_135);
                  Var_142 = mercury__string__f_43_43_2_f_0(Var_135, Var_134);
                  Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", Var_142);
                  ArgCondCode0_42 = mercury__string__f_43_43_2_f_0(FactTableName_2, Var_144);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_76;
                  MR_String Var_78;
                  MR_String Var_79;
                  MR_String Var_86;
                  MR_String Var_88;
                  MR_String Var_89;
                  MR_String Var_96;
                  MR_String Var_98;
                  MR_String Var_99;
                  MR_String Var_106;
                  MR_String Var_108;
                  MR_String Var_109;

                  Var_76 = mercury__string__f_43_43_2_f_0(Name_37, (MR_String) ") != 0\n");
                  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_76);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_79);
                  Var_86 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
                  Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_86);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_1, &Var_89);
                  Var_96 = mercury__string__f_43_43_2_f_0(Var_89, Var_88);
                  Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_96);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_1, &Var_99);
                  Var_106 = mercury__string__f_43_43_2_f_0(Var_99, Var_98);
                  Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", Var_106);
                  Var_109 = mercury__string__f_43_43_2_f_0(FactTableName_2, Var_108);
                  ArgCondCode0_42 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", Var_109);
                }
                break;
            }
            switch (STATE_VARIABLE_IsFirstInputArg_0_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ArgCondCode_43 = ArgCondCode0_42;
                break;
              case (MR_Integer) 0:
                ArgCondCode_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t|| ", ArgCondCode0_42);
                break;
            }
            STATE_VARIABLE_IsFirstInputArg_69_69 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            ArgCondCode_43 = (MR_String) "";
            STATE_VARIABLE_IsFirstInputArg_69_69 = STATE_VARIABLE_IsFirstInputArg_0_6;
          }
          break;
      }
      Var_70 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      ll_backend__fact_table__generate_test_condition_code_7_p_0(FactTableSize_1, FactTableName_2, Var_73, FactTableVars_33, Var_70, STATE_VARIABLE_IsFirstInputArg_69_69, &ArgsCondCode_44);
      *HeadVar__7_7 = mercury__string__f_43_43_2_f_0(ArgCondCode_43, ArgsCondCode_44);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_decl_code_3_p_0(
  MR_String Name_4,
  MR_Integer ProcId_5,
  MR_String * DeclCode_6)
{
  MR_Integer ProcIdInt_8;
  MR_String Var_15;
  MR_String Var_22;
  MR_String Var_24;
  MR_String Var_25;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_5, &ProcIdInt_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_8, &Var_15);
  Var_22 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "_0;\n\n    ");
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_22);
  Var_25 = mercury__string__f_43_43_2_f_0(Name_4, Var_24);
  *DeclCode_6 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            // Initialise current_table to the top level hash table\n            // for this ProcId.\n            current_table =\n                &me" "rcury__", Var_25);
}

static void MR_CALL 
ll_backend__fact_table__generate_cc_multi_code_loop_5_p_0(
  MR_String StructName_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_String STATE_VARIABLE_ProcCode_0_4,
  MR_String * STATE_VARIABLE_ProcCode_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcCode_5 = STATE_VARIABLE_ProcCode_0_4;
    else
    {
      MR_Word FactTableVar_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FactTableVars_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String VarName_16 = ((MR_String) ((MR_hl_field(0, FactTableVar_12, (MR_Integer) 0))));
      MR_String ArgAssignCode_20;
      MR_String STATE_VARIABLE_ProcCode_31_31;
      MR_Integer Var_32;
      MR_String Var_36;
      MR_String Var_43;
      MR_String Var_45;
      MR_String Var_46;
      MR_String Var_48;
      MR_String Var_49;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_ArgNum_3;
      MR_String next_value_of_STATE_VARIABLE_ProcCode_0_4;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_3, &Var_36);
      Var_43 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) ";\n");
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "[0][0].V_", Var_43);
      Var_46 = mercury__string__f_43_43_2_f_0(StructName_1, Var_45);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_46);
      Var_49 = mercury__string__f_43_43_2_f_0(VarName_16, Var_48);
      ArgAssignCode_20 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_49);
      STATE_VARIABLE_ProcCode_31_31 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_ProcCode_0_4, ArgAssignCode_20);
      Var_32 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = FactTableVars_13;
      next_value_of_ArgNum_3 = Var_32;
      next_value_of_STATE_VARIABLE_ProcCode_0_4 = STATE_VARIABLE_ProcCode_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      ArgNum_3 = next_value_of_ArgNum_3;
      STATE_VARIABLE_ProcCode_0_4 = next_value_of_STATE_VARIABLE_ProcCode_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_multi_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableSize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  MR_String ExtraCodeLabel_17;
  MR_String NumFactsVar_19;
  MR_Integer Arity_20;
  MR_String ArgDeclCode_21;
  MR_String OutputCode_23;
  MR_String FactLookupCode_27;
  MR_String Var_76;
  MR_String Var_79;
  MR_String Var_81;
  MR_String Var_82;
  MR_String Var_84;
  MR_String Var_85;
  MR_String Var_87;
  MR_String Var_88;
  MR_String Var_90;
  MR_String Var_91;
  MR_String Var_93;
  MR_String Var_94;
  MR_String Var_96;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_100;
  MR_String Var_102;
  MR_String Var_103;
  MR_String Var_105;
  MR_String Var_106;
  MR_String Var_108;
  MR_String Var_109;
  MR_String Var_111;
  MR_String Var_112;
  MR_String Var_114;
  MR_String Var_115;
  MR_String Var_122;
  MR_String Var_124;
  MR_String Var_125;
  MR_String Var_127;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_131;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String _InputCode_22;
  MR_String Var_24;
  MR_String Var_25;
  MR_Integer Var_26;

  ll_backend__fact_table__generate_nondet_proc_code_5_p_0(PredName_11, ProcId_12, FactTableVars_14, &ExtraCodeLabel_17, ProcCode_15);
  Var_76 = mercury__string__f_43_43_2_f_0(PredName_11, (MR_String) "_fact_table_num_facts");
  NumFactsVar_19 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_76);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), FactTableVars_14, &Arity_20);
  ll_backend__fact_table__generate_argument_vars_code_9_p_0(ModuleInfo_9, Types_13, FactTableVars_14, &ArgDeclCode_21, &_InputCode_22, &OutputCode_23, &Var_24, &Var_25, &Var_26);
  ll_backend__fact_table__generate_fact_lookup_code_6_p_0(FactTableSize_10, PredName_11, Types_13, FactTableVars_14, (MR_Integer) 1, &FactLookupCode_27);
  Var_79 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
  Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_79);
  Var_82 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_81);
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_82);
  Var_85 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_84);
  Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_85);
  Var_88 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_87);
  Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_88);
  Var_91 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_90);
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_91);
  Var_94 = mercury__string__f_43_43_2_f_0(OutputCode_23, Var_93);
  Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_94);
  Var_97 = mercury__string__f_43_43_2_f_0(FactLookupCode_27, Var_96);
  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Word ind = MR_framevar(1), tmp;\n        // lookup fact table\n", Var_97);
  Var_100 = mercury__string__f_43_43_2_f_0(ArgDeclCode_21, Var_99);
  Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ") MR_fail();\n    {\n        // declare argument vars\n", Var_100);
  Var_103 = mercury__string__f_43_43_2_f_0(NumFactsVar_19, Var_102);
  Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", Var_103);
  Var_106 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_105);
  Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\nMR_define_label(", Var_106);
  Var_109 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_108);
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    MR_framevar(1) = (MR_Integer) 0;\n    MR_GOTO(MR_LABEL(", Var_109);
  Var_112 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_111);
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "\", 1, MR_LABEL(", Var_112);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_20, &Var_115);
  Var_122 = mercury__string__f_43_43_2_f_0(Var_115, Var_114);
  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_122);
  Var_125 = mercury__string__f_43_43_2_f_0(PredName_11, Var_124);
  Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_127);
  Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_130);
  Var_133 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_131);
  Var_134 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_133);
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_134);
  Var_137 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_136);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_137);
  Var_140 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_140);
  Var_143 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_142);
  *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_143);
}

static MR_Box MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_34;

  conv1_LambdaHeadVar__2_34 = ll_backend__fact_table__IntroducedFrom__func__generate_argument_vars_code__3548__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = ll_backend__fact_table__IntroducedFrom__func__generate_argument_vars_code__3544__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FactArgTypes_11,
  MR_Word FactTableVars_12,
  MR_String * DeclCode_13,
  MR_String * InputCode_14,
  MR_String * OutputCode_15,
  MR_String * SaveRegsCode_16,
  MR_String * GetRegsCode_17,
  MR_Integer * NumInputArgs_18)
{
  MR_Word Types_19;
  MR_Word Modes_22;
  MR_Word ArgInfos_28;

  Types_19 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[8]), FactArgTypes_11);
  Modes_22 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[9]), FactTableVars_12);
  hlds__arg_info__make_standard_arg_infos_5_p_0(ModuleInfo_10, (MR_Integer) 2, Types_19, Modes_22, &ArgInfos_28);
  ll_backend__fact_table__generate_argument_vars_code_loop_10_p_0(FactArgTypes_11, FactTableVars_12, ArgInfos_28, DeclCode_13, InputCode_14, OutputCode_15, SaveRegsCode_16, GetRegsCode_17, (MR_Integer) 1, NumInputArgs_18);
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_loop_10_p_0(
  MR_Word Types_11,
  MR_Word FactTableVars_12,
  MR_Word ArgInfos_13,
  MR_String * DeclCode_14,
  MR_String * InputCode_15,
  MR_String * OutputCode_16,
  MR_String * SaveRegsCode_17,
  MR_String * GetRegsCode_18,
  MR_Integer STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * STATE_VARIABLE_NumInputArgs_43)
{
  MR_bool succeeded = (Types_11 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (FactTableVars_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ArgInfos_13 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *DeclCode_14 = (MR_String) "";
    *InputCode_15 = (MR_String) "";
    *OutputCode_16 = (MR_String) "";
    *SaveRegsCode_17 = (MR_String) "";
    *GetRegsCode_18 = (MR_String) "";
    *STATE_VARIABLE_NumInputArgs_43 = STATE_VARIABLE_NumInputArgs_0_42;
  }
  else
  {
    MR_Word Type_20;
    MR_Word TailTypes_21;
    MR_Word FactTableVar_22;
    MR_Word TailFactTableVars_23;
    MR_Word ArgInfo_24;
    MR_Word TailArgInfos_25;

    succeeded = (Types_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Type_20 = ((MR_Word) ((MR_hl_field(1, Types_11, (MR_Integer) 0))));
      TailTypes_21 = ((MR_Word) ((MR_hl_field(1, Types_11, (MR_Integer) 1))));
      succeeded = (FactTableVars_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FactTableVar_22 = ((MR_Word) ((MR_hl_field(1, FactTableVars_12, (MR_Integer) 0))));
        TailFactTableVars_23 = ((MR_Word) ((MR_hl_field(1, FactTableVars_12, (MR_Integer) 1))));
        succeeded = (ArgInfos_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgInfo_24 = ((MR_Word) ((MR_hl_field(1, ArgInfos_13, (MR_Integer) 0))));
          TailArgInfos_25 = ((MR_Word) ((MR_hl_field(1, ArgInfos_13, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_String VarName_26 = ((MR_String) ((MR_hl_field(0, FactTableVar_22, (MR_Integer) 0))));
      MR_Word Mode_27 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_22, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word Loc_30 = ((MR_Word) ((MR_hl_field(0, ArgInfo_24, (MR_Integer) 0))));
      MR_String ArgDeclCode_32;
      MR_String ArgInputCode_33;
      MR_String ArgSaveRegsCode_34;
      MR_String ArgGetRegsCode_35;
      MR_String ArgOutputCode_36;
      MR_String ArgsDeclCode_37;
      MR_String ArgsInputCode_38;
      MR_String ArgsOutputCode_39;
      MR_String ArgsSaveRegsCode_40;
      MR_String ArgsGetRegsCode_41;
      MR_Integer STATE_VARIABLE_NumInputArgs_44_44;
      MR_String CType_49;
      MR_String Var_57;
      MR_String Var_59;
      MR_String Var_60;

      switch (Type_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          CType_49 = (MR_String) "MR_Float";
          break;
        case (MR_Integer) 0:
          CType_49 = (MR_String) "MR_Integer";
          break;
        case (MR_Integer) 2:
          CType_49 = (MR_String) "MR_String";
          break;
      }
      Var_57 = mercury__string__f_43_43_2_f_0(VarName_26, (MR_String) ";\n");
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_57);
      Var_60 = mercury__string__f_43_43_2_f_0(CType_49, Var_59);
      ArgDeclCode_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_60);
      switch (Mode_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_NumInputArgs_44_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumInputArgs_0_42 + (MR_Unsigned) 1);
            ll_backend__fact_table__generate_arg_input_code_7_p_0(VarName_26, Type_20, Loc_30, STATE_VARIABLE_NumInputArgs_44_44, &ArgInputCode_33, &ArgSaveRegsCode_34, &ArgGetRegsCode_35);
            ArgOutputCode_36 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RegType_62 = ((MR_Unsigned) ((MR_hl_field(0, Loc_30, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer RegNum_63 = ((MR_Integer) ((MR_hl_field(0, Loc_30, (MR_Integer) 1))));
            MR_String RegName_64;
            MR_String ConvertedName_65;
            MR_String Var_73;
            MR_String Var_75;
            MR_String Var_76;

            RegName_64 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_62, RegNum_63);
            switch (Type_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_87 = ((MR_Unsigned) ((MR_hl_field(0, Loc_30, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_87) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      ConvertedName_65 = VarName_26;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_82;

                        Var_82 = mercury__string__f_43_43_2_f_0(VarName_26, (MR_String) ")");
                        ConvertedName_65 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", Var_82);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 0:
                ConvertedName_65 = VarName_26;
                break;
              case (MR_Integer) 2:
                ConvertedName_65 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", VarName_26);
                break;
            }
            Var_73 = mercury__string__f_43_43_2_f_0(ConvertedName_65, (MR_String) ";\n");
            Var_75 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_73);
            Var_76 = mercury__string__f_43_43_2_f_0(RegName_64, Var_75);
            ArgOutputCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_76);
            ArgInputCode_33 = (MR_String) "";
            ArgSaveRegsCode_34 = (MR_String) "";
            ArgGetRegsCode_35 = (MR_String) "";
            STATE_VARIABLE_NumInputArgs_44_44 = STATE_VARIABLE_NumInputArgs_0_42;
          }
          break;
      }
      ll_backend__fact_table__generate_argument_vars_code_loop_10_p_0(TailTypes_21, TailFactTableVars_23, TailArgInfos_25, &ArgsDeclCode_37, &ArgsInputCode_38, &ArgsOutputCode_39, &ArgsSaveRegsCode_40, &ArgsGetRegsCode_41, STATE_VARIABLE_NumInputArgs_44_44, STATE_VARIABLE_NumInputArgs_43);
      *DeclCode_14 = mercury__string__f_43_43_2_f_0(ArgDeclCode_32, ArgsDeclCode_37);
      *InputCode_15 = mercury__string__f_43_43_2_f_0(ArgInputCode_33, ArgsInputCode_38);
      *OutputCode_16 = mercury__string__f_43_43_2_f_0(ArgOutputCode_36, ArgsOutputCode_39);
      *SaveRegsCode_17 = mercury__string__f_43_43_2_f_0(ArgSaveRegsCode_34, ArgsSaveRegsCode_40);
      *GetRegsCode_18 = mercury__string__f_43_43_2_f_0(ArgGetRegsCode_35, ArgsGetRegsCode_41);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_argument_vars_code_loop\'/10", (MR_String) "list length mismatch");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_arg_input_code_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word ArgLoc_10,
  MR_Integer FrameVarNum_11,
  MR_String * InputCode_12,
  MR_String * SaveRegCode_13,
  MR_String * GetRegCode_14)
{
  MR_Word RegType_15 = ((MR_Unsigned) ((MR_hl_field(0, ArgLoc_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Integer RegNum_16 = ((MR_Integer) ((MR_hl_field(0, ArgLoc_10, (MR_Integer) 1))));
  MR_String ConvertToFrameVar_17;
  MR_String ConvertFromFrameVar_18;
  MR_String RegNameStr_19;
  MR_String ConvertedRegNameStr_20;
  MR_String Var_44;
  MR_String Var_46;
  MR_String Var_47;
  MR_String Var_50;
  MR_String Var_52;
  MR_String Var_53;
  MR_String Var_55;
  MR_String Var_56;
  MR_String Var_63;
  MR_String Var_66;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_76;
  MR_String Var_78;
  MR_String Var_79;

  switch (RegType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        ConvertToFrameVar_17 = (MR_String) "MR_float_to_word";
        ConvertFromFrameVar_18 = (MR_String) "MR_word_to_float";
      }
      break;
    case (MR_Integer) 0:
      {
        ConvertToFrameVar_17 = (MR_String) "";
        ConvertFromFrameVar_18 = (MR_String) "";
      }
      break;
  }
  RegNameStr_19 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_15, RegNum_16);
  switch (Type_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_90 = ((MR_Unsigned) ((MR_hl_field(0, ArgLoc_10, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_90) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ConvertedRegNameStr_20 = RegNameStr_19;
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_85;

              Var_85 = mercury__string__f_43_43_2_f_0(RegNameStr_19, (MR_String) ")");
              ConvertedRegNameStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", Var_85);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      ConvertedRegNameStr_20 = RegNameStr_19;
      break;
    case (MR_Integer) 2:
      ConvertedRegNameStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", RegNameStr_19);
      break;
  }
  Var_44 = mercury__string__f_43_43_2_f_0(ConvertedRegNameStr_20, (MR_String) ";\n");
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_44);
  Var_47 = mercury__string__f_43_43_2_f_0(Name_8, Var_46);
  *InputCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_47);
  Var_50 = mercury__string__f_43_43_2_f_0(RegNameStr_19, (MR_String) ");\n");
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
  Var_53 = mercury__string__f_43_43_2_f_0(ConvertToFrameVar_17, Var_52);
  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", Var_53);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FrameVarNum_11, &Var_56);
  Var_63 = mercury__string__f_43_43_2_f_0(Var_56, Var_55);
  *SaveRegCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_framevar(", Var_63);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FrameVarNum_11, &Var_66);
  Var_73 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) "));\n");
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_framevar(", Var_73);
  Var_76 = mercury__string__f_43_43_2_f_0(ConvertFromFrameVar_18, Var_75);
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_76);
  Var_79 = mercury__string__f_43_43_2_f_0(RegNameStr_19, Var_78);
  *GetRegCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_79);
}

static void MR_CALL 
ll_backend__fact_table__generate_fact_lookup_code_6_p_0(
  MR_Integer FactTableSize_1,
  MR_String PredName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_String * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__6_6 = (MR_String) "";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_fact_lookup_code\'/6", (MR_String) "too many types");
          return;
        }
    else
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.generate_fact_lookup_code\'/6", (MR_String) "too many pragma vars");
          return;
        }
      else
      {
        MR_Word FactTableVar_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word FactTableVars_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_String VarName_34 = ((MR_String) ((MR_hl_field(0, FactTableVar_30, (MR_Integer) 0))));
        MR_Word Mode_35 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_30, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Word MakeUnique_36 = ((MR_Unsigned) ((MR_hl_field(0, FactTableVar_30, (MR_Integer) 1))) & (MR_Integer) 1);

        switch (Mode_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_75 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
              MR_Word next_value_of_HeadVar__3_3 = Var_79;
              MR_Word next_value_of_HeadVar__4_4 = FactTableVars_31;
              MR_Integer next_value_of_ArgNum_5 = Var_75;

              // direct tailcall eliminated
              ;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              ArgNum_5 = next_value_of_ArgNum_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TableEntry_39;
              MR_String ArgCode_41;
              MR_String ArgsCode_42;
              MR_Integer Var_73;
              MR_String Var_81;
              MR_String Var_89;
              MR_String Var_90;
              MR_String Var_97;
              MR_String Var_99;
              MR_String Var_100;
              MR_String Var_107;
              MR_String Var_109;
              MR_String Var_110;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_81);
              Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_81);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_1, &Var_90);
              Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
              Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_97);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactTableSize_1, &Var_100);
              Var_107 = mercury__string__f_43_43_2_f_0(Var_100, Var_99);
              Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table[ind/", Var_107);
              Var_110 = mercury__string__f_43_43_2_f_0(PredName_2, Var_109);
              TableEntry_39 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_110);
              switch (Var_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    MR_String Var_131;
                    MR_String Var_133;
                    MR_String Var_134;

                    Var_131 = mercury__string__f_43_43_2_f_0(TableEntry_39, (MR_String) ";\n");
                    Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_131);
                    Var_134 = mercury__string__f_43_43_2_f_0(VarName_34, Var_133);
                    ArgCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_134);
                  }
                  break;
                case (MR_Integer) 2:
                  switch (MakeUnique_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String Var_125;
                        MR_String Var_127;
                        MR_String Var_128;

                        Var_125 = mercury__string__f_43_43_2_f_0(TableEntry_39, (MR_String) ");\n");
                        Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ", (MR_String) (MR_Word) ", Var_125);
                        Var_128 = mercury__string__f_43_43_2_f_0(VarName_34, Var_127);
                        ArgCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_make_aligned_string(", Var_128);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String Var_113;
                        MR_String Var_115;
                        MR_String Var_116;
                        MR_String Var_118;
                        MR_String Var_119;
                        MR_String Var_121;
                        MR_String Var_122;

                        Var_113 = mercury__string__f_43_43_2_f_0(TableEntry_39, (MR_String) ");\n                    ");
                        Var_115 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
                        Var_116 = mercury__string__f_43_43_2_f_0(VarName_34, Var_115);
                        Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " = (MR_String) tmp;\n                            strcpy(", Var_116);
                        Var_119 = mercury__string__f_43_43_2_f_0(VarName_34, Var_118);
                        Var_121 = mercury__string__f_43_43_2_f_0((MR_String) ") + sizeof(MR_Word))\n                                    / sizeof(MR_Word));\n                            ", Var_119);
                        Var_122 = mercury__string__f_43_43_2_f_0(TableEntry_39, Var_121);
                        ArgCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "       MR_incr_hp_atomic(tmp,\n                                (strlen(", Var_122);
                      }
                      break;
                  }
                  break;
              }
              Var_73 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
              ll_backend__fact_table__generate_fact_lookup_code_6_p_0(FactTableSize_1, PredName_2, Var_79, FactTableVars_31, Var_73, &ArgsCode_42);
              *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(ArgCode_41, ArgsCode_42);
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_nondet_proc_code_5_p_0(
  MR_String PredName_6,
  MR_Integer ProcId_7,
  MR_Word FactTableVars_8,
  MR_String * ExtraCodeLabel_9,
  MR_String * ProcCode_10)
{
  MR_Integer Arity_12;
  MR_Integer ProcIdInt_13;
  MR_String NamesString_14;
  MR_String Var_32;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_42;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_52;
  MR_String Var_55;
  MR_String Var_57;
  MR_String Var_58;
  MR_String Var_60;
  MR_String Var_61;

  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), FactTableVars_8, &Arity_12);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_13);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_13, &Var_32);
  Var_39 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) "_xx");
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_39);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Arity_12, &Var_42);
  Var_49 = mercury__string__f_43_43_2_f_0(Var_42, Var_41);
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_49);
  Var_52 = mercury__string__f_43_43_2_f_0(PredName_6, Var_51);
  *ExtraCodeLabel_9 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_52);
  ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(FactTableVars_8, &NamesString_14);
  Var_55 = mercury__string__f_43_43_2_f_0(*ExtraCodeLabel_9, (MR_String) "));\n    }\n    ");
  Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        MR_GOTO(MR_ENTRY(", Var_55);
  Var_58 = mercury__string__f_43_43_2_f_0(*ExtraCodeLabel_9, Var_57);
  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " to stop the compiler giving a warning.\n    //\n    // Pop off the nondet stack frame that the pragma c_code generates\n    // then jump to the code where the wor" "k is actually done.\n\n    MR_maxfr_word = MR_prevfr_slot_word(MR_curfr);\n    MR_curfr_word = MR_succfr_slot_word(MR_curfr);\n    {\n        MR_declare_entry(", Var_58);
  Var_61 = mercury__string__f_43_43_2_f_0(NamesString_14, Var_60);
  *ProcCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n    // Mention arguments ", Var_61);
}

static void MR_CALL 
ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Word FactTableVar_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word FactTableVars_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String NamesStringTail_6;
    MR_String Name_7;
    MR_String Var_11;

    ll_backend__fact_table__fact_table_vars_to_names_string_2_p_0(FactTableVars_4, &NamesStringTail_6);
    Name_7 = ((MR_String) ((MR_hl_field(0, FactTableVar_3, (MR_Integer) 0))));
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) ", ", NamesStringTail_6);
    *HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Name_7, Var_11);
  }
}

void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_12_p_0(
  MR_Word ModuleInfo_13,
  MR_String FileName_14,
  MR_Word Context_15,
  MR_Word GenInfo_16,
  MR_String * HeaderCode_17,
  MR_Integer * PrimaryProcId_18,
  MR_Word STATE_VARIABLE_PredInfo_0_35,
  MR_Word * STATE_VARIABLE_PredInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_Word Globals_22;
  MR_Word FileResult_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_22);
  mercury__io__open_input_4_p_0(FileName_14, &FileResult_23);
  if (((MR_tag((MR_Word) FileResult_23)) == (MR_Integer) 1))
  {
    MR_Word Var_59;
    MR_Word Error_63 = ((MR_Word) ((MR_hl_field(1, FileResult_23, (MR_Integer) 0))));

    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Context_15));
    }
    ll_backend__fact_table__add_file_open_error_8_p_0(Var_59, FileName_14, (MR_String) "input", Error_63, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
    *HeaderCode_17 = (MR_String) "";
    *PrimaryProcId_18 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    *STATE_VARIABLE_PredInfo_36 = STATE_VARIABLE_PredInfo_0_35;
  }
  else
  {
    MR_Word FileStream_24 = ((MR_Word) ((MR_hl_field(0, FileResult_23, (MR_Integer) 0))));
    MR_String OutputFileName_25;
    MR_Word OpenResult_26;

    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_22, (MR_String) "predicate \140ll_backend.fact_table.fact_table_compile_facts\'/12", (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) ".c"))), FileName_14, &OutputFileName_25);
    mercury__io__open_output_4_p_0(OutputFileName_25, &OpenResult_26);
    if (((MR_tag((MR_Word) OpenResult_26)) == (MR_Integer) 1))
    {
      MR_Word Error_34 = ((MR_Word) ((MR_hl_field(1, OpenResult_26, (MR_Integer) 0))));
      MR_Word Var_54;

      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Context_15));
      }
      ll_backend__fact_table__add_file_open_error_8_p_0(Var_54, FileName_14, (MR_String) "output", Error_34, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
      *HeaderCode_17 = (MR_String) "";
      *PrimaryProcId_18 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      *STATE_VARIABLE_PredInfo_36 = STATE_VARIABLE_PredInfo_0_35;
    }
    else
    {
      MR_Word OutputStream_27 = ((MR_Word) ((MR_hl_field(0, OpenResult_26, (MR_Integer) 0))));
      MR_Word ModuleName_28;
      MR_String PredName_29;
      MR_Word PredSymName_30;
      MR_Integer FactTableSize_31;
      MR_Word MaybeDataFileName_32;
      MR_Word STATE_VARIABLE_Specs_49_49;

      hlds__hlds_pred__pred_info_get_module_name_2_p_0(STATE_VARIABLE_PredInfo_0_35, &ModuleName_28);
      hlds__hlds_pred__pred_info_get_name_2_p_0(STATE_VARIABLE_PredInfo_0_35, &PredName_29);
      {
        PredSymName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_30, 0) = ((MR_Box) (ModuleName_28));
        MR_hl_field(1, PredSymName_30, 1) = ((MR_Box) (PredName_29));
      }
      libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 362, &FactTableSize_31);
      ll_backend__fact_table__compile_fact_table_in_file_16_p_0(FileStream_24, FileName_14, OutputStream_27, FactTableSize_31, ModuleInfo_13, PredSymName_30, GenInfo_16, HeaderCode_17, PrimaryProcId_18, &MaybeDataFileName_32, STATE_VARIABLE_PredInfo_0_35, STATE_VARIABLE_PredInfo_36, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_49_49);
      mercury__io__close_output_3_p_0(OutputStream_27);
      if ((MaybeDataFileName_32 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_49_49;
      else
      {
        MR_String DataFileName_33 = ((MR_String) ((MR_hl_field(1, MaybeDataFileName_32, (MR_Integer) 0))));

        ll_backend__fact_table__append_data_table_7_p_0(ModuleInfo_13, OutputFileName_25, DataFileName_33, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_38);
      }
    }
    mercury__io__close_input_3_p_0(FileStream_24);
  }
}

static void MR_CALL 
ll_backend__fact_table__append_data_table_7_p_0(
  MR_Word ModuleInfo_8,
  MR_String OutputFileName_9,
  MR_String DataFileName_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_String Command_13;
  MR_Word Result_15;
  MR_String Var_25;
  MR_Word STATE_VARIABLE_Specs_54_54;
  MR_String Var_59;
  MR_String Var_60;
  MR_Word Globals_66;
  MR_Word VeryVerbose_67;

  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " >>", OutputFileName_9);
  Var_60 = mercury__string__f_43_43_2_f_0(DataFileName_10, Var_59);
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", Var_60);
  parse_tree__module_cmds__make_command_string_3_p_0(Var_25, (MR_Integer) 0, &Command_13);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_66);
  libs__globals__lookup_bool_option_3_p_0(Globals_66, (MR_Integer) 73, &VeryVerbose_67);
  switch (VeryVerbose_67) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__call_system__call_system_4_p_0(Command_13, &Result_15);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProgressStream_16;

        hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_8, &ProgressStream_16);
        mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "% Invoking system command \140");
        mercury__io__write_string_4_p_0(ProgressStream_16, Command_13);
        mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "\' ...");
        mercury__io__call_system__call_system_4_p_0(Command_13, &Result_15);
        mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "done.\n");
      }
      break;
  }
  if (((MR_tag((MR_Word) Result_15)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_20 = ((MR_Word) ((MR_hl_field(1, Result_15, (MR_Integer) 0))));
    MR_String ProgName_70;
    MR_String ErrorMsg_71;
    MR_Word Pieces_72;
    MR_Word Spec_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_100;
    MR_Word Var_101;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_70);
    mercury__io__error_message_2_p_0(ErrorCode_20, &ErrorMsg_71);
    {
      Var_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_75, 0) = ((MR_Box) (ProgName_70));
    }
    Var_77 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66]));
    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) (ErrorMsg_71));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[137])));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[134])));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
    }
    {
      Pieces_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_72, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, Pieces_72, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_101, 0) = ((MR_Box) (Pieces_72));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_96, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_96, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(3, Var_96, 3) = ((MR_Box) (Var_100));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_call_system_error\'/6"));
      MR_hl_field(0, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_73, 3) = ((MR_Box) (Var_95));
    }
    {
      STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (Spec_73));
      MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
    }
  }
  else
  {
    MR_Integer ExitStatus_17 = ((MR_Integer) ((MR_hl_field(0, Result_15, (MR_Integer) 0))));

    succeeded = (ExitStatus_17 == (MR_Integer) 0);
    if (succeeded)
      STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_21;
    else
      {
        STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (MR_mkword(2, &ll_backend__fact_table_scalar_common_5[0])));
        MR_hl_field(1, STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
      }
  }
  ll_backend__fact_table__delete_temporary_file_5_p_0(DataFileName_10, STATE_VARIABLE_Specs_54_54, STATE_VARIABLE_Specs_22);
}

static void MR_CALL 
ll_backend__fact_table__compile_fact_table_in_file_16_p_0(
  MR_Word FileStream_17,
  MR_String FileName_18,
  MR_Word OutputStream_19,
  MR_Integer FactTableSize_20,
  MR_Word ModuleInfo_21,
  MR_Word PredSymName_22,
  MR_Word GenInfo_23,
  MR_String * HeaderCode_24,
  MR_Integer * PrimaryProcId_25,
  MR_Word * MaybeDataFileName_26,
  MR_Word STATE_VARIABLE_PredInfo_0_67,
  MR_Word * STATE_VARIABLE_PredInfo_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  MR_Word WriteHashTables_30;
  MR_Word WriteDataTable_31;
  MR_Word FactArgInfos_32;
  MR_String HeaderCode0_33;
  MR_String StructName_34;
  MR_Word FactTableProcMap_35;
  MR_Word MaybeAllInProcId_36;
  MR_Word InOutProcIds_37;
  MR_Word CheckProcs_39;
  MR_Word ProcStreams_40;
  MR_Word OpenSpecs_41;
  MR_Word MaybeOutput_42;
  MR_Word WriteDataAfterSorting_43;
  MR_Word MaybeProgressStream_46;
  MR_Integer NumFactArgInfos_47;
  MR_Word CompileSpecs_51;
  MR_Integer NumFacts_52;
  MR_String HeaderCode2_54;
  MR_Word ProcFiles_55;
  MR_Word OpenCompileSpecs_56;
  MR_Word STATE_VARIABLE_PredInfo_73_73;
  MR_String Var_76;
  MR_Word ProcTable0_109;
  MR_Word ProcIds_110;
  MR_Word ProcTable_111;
  MR_Word Globals_114;
  MR_Word VeryVerbose_115;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_67, &ProcTable0_109);
  ProcIds_110 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_0_67);
  ll_backend__fact_table__infer_procs_determinism_pass_1_8_p_0(GenInfo_23, ProcIds_110, ProcTable0_109, &ProcTable_111, (MR_Integer) 0, &WriteHashTables_30, (MR_Integer) 0, &WriteDataTable_31);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_111, STATE_VARIABLE_PredInfo_0_67, &STATE_VARIABLE_PredInfo_73_73);
  FactArgInfos_32 = ((MR_Word) ((MR_hl_field(0, GenInfo_23, (MR_Integer) 0))));
  FactTableProcMap_35 = ((MR_Word) ((MR_hl_field(0, GenInfo_23, (MR_Integer) 1))));
  MaybeAllInProcId_36 = ((MR_Word) ((MR_hl_field(0, GenInfo_23, (MR_Integer) 2))));
  InOutProcIds_37 = ((MR_Word) ((MR_hl_field(0, GenInfo_23, (MR_Integer) 3))));
  ll_backend__fact_table__create_fact_table_header_4_p_0(PredSymName_22, FactArgInfos_32, &HeaderCode0_33, &StructName_34);
  if ((MaybeAllInProcId_36 == (MR_Word) ((MR_Unsigned) 0U)))
    CheckProcs_39 = InOutProcIds_37;
  else
  {
    MR_Integer AllInProcId_38 = ((MR_Integer) ((MR_hl_field(1, MaybeAllInProcId_36, (MR_Integer) 0))));
    MR_Word Var_74;

    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (AllInProcId_38));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    CheckProcs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), InOutProcIds_37, Var_74);
  }
  Var_76 = ll_backend__fact_table__fact_table_file_header_1_f_0(FileName_18);
  mercury__io__write_string_4_p_0(OutputStream_19, Var_76);
  mercury__io__write_string_4_p_0(OutputStream_19, HeaderCode0_33);
  ll_backend__fact_table__open_sort_files_7_p_0(FactTableProcMap_35, CheckProcs_39, &ProcStreams_40, (MR_Word) ((MR_Unsigned) 0U), &OpenSpecs_41);
  switch (WriteDataTable_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeOutput_42 = (MR_Word) ((MR_Unsigned) 0U);
        WriteDataAfterSorting_43 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      if ((CheckProcs_39 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_81;

        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (OutputStream_19));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (StructName_34));
        }
        {
          MaybeOutput_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOutput_42, 0) = ((MR_Box) (Var_81));
        }
        ll_backend__fact_table__write_new_data_array_opening_brace_5_p_0(OutputStream_19, StructName_34, (MR_Integer) 0);
        WriteDataAfterSorting_43 = (MR_Integer) 0;
      }
      else
      {
        MaybeOutput_42 = (MR_Word) ((MR_Unsigned) 0U);
        WriteDataAfterSorting_43 = (MR_Integer) 1;
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_114);
  libs__globals__lookup_bool_option_3_p_0(Globals_114, (MR_Integer) 73, &VeryVerbose_115);
  switch (VeryVerbose_115) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeProgressStream_46 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProgressStream_116;

        hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_21, &ProgressStream_116);
        {
          MaybeProgressStream_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeProgressStream_46, 0) = ((MR_Box) (ProgressStream_116));
        }
      }
      break;
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0), FactArgInfos_32, &NumFactArgInfos_47);
  ll_backend__fact_table__read_in_and_compile_facts_15_p_0(FileStream_17, FileName_18, MaybeProgressStream_46, FactTableSize_20, STATE_VARIABLE_PredInfo_73_73, NumFactArgInfos_47, FactArgInfos_32, ProcStreams_40, MaybeOutput_42, (MR_Integer) 0, &NumFacts_52, (MR_Word) ((MR_Unsigned) 0U), &CompileSpecs_51);
  if ((MaybeOutput_42 == (MR_Word) ((MR_Unsigned) 0U)))
    HeaderCode2_54 = (MR_String) "";
  else
  {
    mercury__io__write_string_4_p_0(OutputStream_19, (MR_String) "};\n\n");
    ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(OutputStream_19, FactTableSize_20, StructName_34, NumFacts_52, &HeaderCode2_54);
  }
  ll_backend__fact_table__close_sort_files_4_p_0(ProcStreams_40, &ProcFiles_55);
  OpenCompileSpecs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OpenSpecs_41, CompileSpecs_51);
  if ((OpenCompileSpecs_56 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcTable0_57;
    MR_Word ProcTable_58;
    MR_Word DataFileNameResult_59;
    MR_Word STATE_VARIABLE_Specs_89_89;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_73_73, &ProcTable0_57);
    ll_backend__fact_table__infer_determinism_pass_2_9_p_0(MaybeProgressStream_46, GenInfo_23, ProcFiles_55, ProcTable0_57, &ProcTable_58, STATE_VARIABLE_Specs_0_69, &STATE_VARIABLE_Specs_89_89);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_58, STATE_VARIABLE_PredInfo_73_73, STATE_VARIABLE_PredInfo_68);
    mercury__io__file__make_temp_file_3_p_0(&DataFileNameResult_59);
    if (((MR_tag((MR_Word) DataFileNameResult_59)) == (MR_Integer) 1))
    {
      MR_Word Error_63 = ((MR_Word) ((MR_hl_field(1, DataFileNameResult_59, (MR_Integer) 0))));
      MR_Word TmpPieces_64;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_String Var_102;

      Var_102 = mercury__io__error_message_1_f_0(Error_63);
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_101, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])));
      }
      {
        TmpPieces_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TmpPieces_64, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[55])));
        MR_hl_field(1, TmpPieces_64, 1) = ((MR_Box) (Var_100));
      }
      ll_backend__fact_table__add_error_pieces_3_p_0(TmpPieces_64, STATE_VARIABLE_Specs_89_89, STATE_VARIABLE_Specs_70);
      *HeaderCode_24 = HeaderCode0_33;
      *PrimaryProcId_25 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      *MaybeDataFileName_26 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String DataFileName_60 = ((MR_String) ((MR_hl_field(0, DataFileNameResult_59, (MR_Integer) 0))));
      MR_String HeaderCode1_61;
      MR_String HeaderCode3_62;
      MR_String Var_96;
      MR_String Var_97;

      ll_backend__fact_table__write_fact_table_arrays_17_p_0(OutputStream_19, FactTableSize_20, ModuleInfo_21, ProcFiles_55, DataFileName_60, FactTableProcMap_35, StructName_34, NumFacts_52, FactArgInfos_32, WriteHashTables_30, WriteDataAfterSorting_43, &HeaderCode1_61, PrimaryProcId_25, STATE_VARIABLE_Specs_89_89, STATE_VARIABLE_Specs_70);
      ll_backend__fact_table__write_fact_table_numfacts_6_p_0(OutputStream_19, PredSymName_22, NumFacts_52, &HeaderCode3_62);
      Var_97 = mercury__string__f_43_43_2_f_0(HeaderCode2_54, HeaderCode3_62);
      Var_96 = mercury__string__f_43_43_2_f_0(HeaderCode1_61, Var_97);
      *HeaderCode_24 = mercury__string__f_43_43_2_f_0(HeaderCode0_33, Var_96);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDataFileName_26 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DataFileName_60));
      }
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OpenCompileSpecs_56, STATE_VARIABLE_Specs_0_69);
    *HeaderCode_24 = HeaderCode0_33;
    *PrimaryProcId_25 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    *MaybeDataFileName_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PredInfo_68 = STATE_VARIABLE_PredInfo_73_73;
  }
}

static void MR_CALL 
ll_backend__fact_table__add_error_pieces_3_p_0(
  MR_Word Pieces_4,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  MR_Word Spec_6;

  {
    Spec_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_6, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_pieces\'/3"));
    MR_hl_field(2, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(2, Spec_6, 3) = ((MR_Box) (Pieces_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_6));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_numfacts_6_p_0(
  MR_Word OutputStream_7,
  MR_Word PredName_8,
  MR_Integer NumFacts_9,
  MR_String * HeaderCode_10)
{
  MR_String Identifier_12;
  MR_String Var_32;
  MR_String Var_41;

  Identifier_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredName_8);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "const MR_Integer mercury__");
  mercury__io__write_string_4_p_0(OutputStream_7, Identifier_12);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "_fact_table_num_facts = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), NumFacts_9, &Var_32);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_32);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ";\n\n");
  Var_41 = mercury__string__f_43_43_2_f_0(Identifier_12, (MR_String) "_fact_table_num_facts;\n");
  *HeaderCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "extern const MR_Integer mercury__", Var_41);
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_arrays_17_p_0(
  MR_Word OutputStream_18,
  MR_Integer FactTableSize_19,
  MR_Word ModuleInfo_20,
  MR_Word ProcFiles_21,
  MR_String DataFileName_22,
  MR_Word FactTableProcMap_23,
  MR_String StructName_24,
  MR_Integer NumFacts_25,
  MR_Word FactArgInfos_26,
  MR_Word WriteHashTables_27,
  MR_Word WriteDataTable_28,
  MR_String * HeaderCode_29,
  MR_Integer * PrimaryProcId_30,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  if ((ProcFiles_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeaderCode_29 = (MR_String) "";
    *PrimaryProcId_30 = hlds__hlds_pred__initial_proc_id_0_f_0();
    *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
  }
  else
  {
    MR_String FileName_33;
    MR_Word TailProcFiles_34 = ((MR_Word) ((MR_hl_field(1, ProcFiles_21, (MR_Integer) 1))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, ProcFiles_21, (MR_Integer) 0))));

    *PrimaryProcId_30 = ((MR_Integer) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
    FileName_33 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
    switch (WriteHashTables_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeaderCode_29 = (MR_String) "";
          *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CreateFactMap_35;
          MR_Word FactMap_38;
          MR_Word PrimaryResult_39;
          MR_String PrimaryHeaderCode_40;
          MR_Word STATE_VARIABLE_Specs_47_47;

          if ((TailProcFiles_34 == (MR_Word) ((MR_Unsigned) 0U)))
            CreateFactMap_35 = (MR_Integer) 0;
          else
            CreateFactMap_35 = (MR_Integer) 1;
          ll_backend__fact_table__write_primary_hash_table_19_p_0(OutputStream_18, FactTableSize_19, ModuleInfo_20, FactTableProcMap_23, *PrimaryProcId_30, FileName_33, DataFileName_22, StructName_24, FactArgInfos_26, WriteDataTable_28, NumFacts_25, CreateFactMap_35, &FactMap_38, &PrimaryResult_39, &PrimaryHeaderCode_40, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_47_47);
          switch (PrimaryResult_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *HeaderCode_29 = PrimaryHeaderCode_40;
                *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_47_47;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_String SecondaryHeadCode_41;

                ll_backend__fact_table__write_secondary_hash_tables_14_p_0(OutputStream_18, FactTableSize_19, ModuleInfo_20, FactTableProcMap_23, StructName_24, FactArgInfos_26, FactMap_38, TailProcFiles_34, (MR_String) "", &SecondaryHeadCode_41, STATE_VARIABLE_Specs_47_47, STATE_VARIABLE_Specs_43);
                *HeaderCode_29 = mercury__string__f_43_43_2_f_0(PrimaryHeaderCode_40, SecondaryHeadCode_41);
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_83;

  conv1_LambdaHeadVar__2_83 = ll_backend__fact_table__IntroducedFrom__func__write_secondary_hash_tables__1786__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_83));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_14_p_0(
  MR_Word OutputStream_1,
  MR_Integer FactTableSize_2,
  MR_Word ModuleInfo_3,
  MR_Word FactTableProcMap_4,
  MR_String StructName_5,
  MR_Word FactArgInfos_6,
  MR_Word FactMap_7,
  MR_Word HeadVar__8_8,
  MR_String STATE_VARIABLE_HeaderCode_0_9,
  MR_String * STATE_VARIABLE_HeaderCode_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_HeaderCode_10 = STATE_VARIABLE_HeaderCode_0_9;
    }
    else
    {
      MR_Integer ProcId_38;
      MR_String FileName_39;
      MR_Word ProcFiles_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 1))));
      MR_Word FileResult_44;
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 0))));

      ProcId_38 = ((MR_Integer) ((MR_hl_field(0, Var_68, (MR_Integer) 0))));
      FileName_39 = ((MR_String) ((MR_hl_field(0, Var_68, (MR_Integer) 1))));
      mercury__io__open_input_4_p_0(FileName_39, &FileResult_44);
      if (((MR_tag((MR_Word) FileResult_44)) == (MR_Integer) 1))
      {
        MR_Word Error_61 = ((MR_Word) ((MR_hl_field(1, FileResult_44, (MR_Integer) 0))));

        ll_backend__fact_table__add_file_open_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_39, (MR_String) "input", Error_61, STATE_VARIABLE_Specs_0_11, STATE_VARIABLE_Specs_12);
        *STATE_VARIABLE_HeaderCode_10 = STATE_VARIABLE_HeaderCode_0_9;
      }
      else
      {
        MR_Word FileStream_45 = ((MR_Word) ((MR_hl_field(0, FileResult_44, (MR_Integer) 0))));
        MR_Integer ProcIdInt_46;
        MR_String HashTableName_47;
        MR_String StructDeclCode_48;
        MR_Word FactTableProcInfo_49;
        MR_Word FactTableVars_50;
        MR_Word FactTableModes_53;
        MR_Word MaybeFirstFact_58;
        MR_String STATE_VARIABLE_HeaderCode_80_80;
        MR_Word STATE_VARIABLE_Specs_84_84;
        MR_String Var_115;
        MR_String Var_122;
        MR_String Var_124;
        MR_String Var_126;
        MR_Box conv0_FactTableProcInfo_49;

        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_38, &ProcIdInt_46);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_46, &Var_115);
        Var_122 = mercury__string__f_43_43_2_f_0(Var_115, (MR_String) "_");
        Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", Var_122);
        HashTableName_47 = mercury__string__f_43_43_2_f_0(StructName_5, Var_124);
        Var_126 = mercury__string__f_43_43_2_f_0(HashTableName_47, (MR_String) "0;\n");
        StructDeclCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", Var_126);
        STATE_VARIABLE_HeaderCode_80_80 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_HeaderCode_0_9, StructDeclCode_48);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_4, ((MR_Box) (ProcId_38)), &conv0_FactTableProcInfo_49);
        FactTableProcInfo_49 = ((MR_Word) (conv0_FactTableProcInfo_49));
        FactTableVars_50 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_49, (MR_Integer) 0))));
        FactTableModes_53 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[7]), FactTableVars_50);
        ll_backend__fact_table__read_sort_file_line_9_p_0(FileStream_45, FileName_39, FactArgInfos_6, FactTableModes_53, &MaybeFirstFact_58, STATE_VARIABLE_Specs_0_11, &STATE_VARIABLE_Specs_84_84);
        if ((MaybeFirstFact_58 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__close_input_3_p_0(FileStream_45);
          *STATE_VARIABLE_HeaderCode_10 = STATE_VARIABLE_HeaderCode_80_80;
          *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_84_84;
        }
        else
        {
          MR_Word FirstFact_59 = ((MR_Word) ((MR_hl_field(1, MaybeFirstFact_58, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Specs_92_92;
          MR_Word STATE_VARIABLE_Specs_95_95;
          MR_Word Var_60;
          MR_Word next_value_of_HeadVar__8_8;
          MR_String next_value_of_STATE_VARIABLE_HeaderCode_0_9;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

          ll_backend__fact_table__build_hash_table_22_p_0(FileStream_45, FileName_39, OutputStream_1, (MR_Word) ((MR_Unsigned) 0U), FactTableSize_2, ModuleInfo_3, (MR_Integer) 0, StructName_5, FactArgInfos_6, FactTableModes_53, (MR_Integer) 0, HashTableName_47, (MR_Integer) 0, FirstFact_59, (MR_Integer) 0, (MR_Integer) 0, FactMap_7, &Var_60, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_92_92);
          mercury__io__close_input_3_p_0(FileStream_45);
          ll_backend__fact_table__delete_temporary_file_5_p_0(FileName_39, STATE_VARIABLE_Specs_92_92, &STATE_VARIABLE_Specs_95_95);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__8_8 = ProcFiles_40;
          next_value_of_STATE_VARIABLE_HeaderCode_0_9 = STATE_VARIABLE_HeaderCode_80_80;
          next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_95_95;
          HeadVar__8_8 = next_value_of_HeadVar__8_8;
          STATE_VARIABLE_HeaderCode_0_9 = next_value_of_STATE_VARIABLE_HeaderCode_0_9;
          STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table__write_primary_hash_table_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_85;

  conv1_LambdaHeadVar__2_85 = ll_backend__fact_table__IntroducedFrom__func__write_primary_hash_table__1713__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_85));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table__write_primary_hash_table_19_p_0(
  MR_Word OutputStream_20,
  MR_Integer FactTableSize_21,
  MR_Word ModuleInfo_22,
  MR_Word FactTableProcMap_23,
  MR_Integer ProcId_24,
  MR_String FileName_25,
  MR_String DataFileName_26,
  MR_String StructName_27,
  MR_Word FactArgInfos_28,
  MR_Word WriteDataTable_29,
  MR_Integer NumFacts_30,
  MR_Word CreateFactMap_31,
  MR_Word * FactMap_32,
  MR_Word * Result_33,
  MR_String * HeaderCode_34,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
{
  MR_Word FactMap0_37;
  MR_Word FileResult_38;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &FactMap0_37);
  mercury__io__open_input_4_p_0(FileName_25, &FileResult_38);
  if (((MR_tag((MR_Word) FileResult_38)) == (MR_Integer) 1))
  {
    MR_Word Error_111 = ((MR_Word) ((MR_hl_field(1, FileResult_38, (MR_Integer) 0))));

    ll_backend__fact_table__add_file_open_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_25, (MR_String) "input", Error_111, STATE_VARIABLE_Specs_0_61, STATE_VARIABLE_Specs_62);
    *Result_33 = (MR_Integer) 1;
    *FactMap_32 = FactMap0_37;
    *HeaderCode_34 = (MR_String) "";
  }
  else
  {
    MR_Word FileStream_39 = ((MR_Word) ((MR_hl_field(0, FileResult_38, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Specs_92_92;

    switch (WriteDataTable_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_33 = (MR_Integer) 1;
          *FactMap_32 = FactMap0_37;
          *HeaderCode_34 = (MR_String) "";
          STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_0_61;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpenResult_40;
          MR_Word MaybeDataStream_136;
          MR_String HeaderCode0_137;

          mercury__io__open_output_4_p_0(DataFileName_26, &OpenResult_40);
          if (((MR_tag((MR_Word) OpenResult_40)) == (MR_Integer) 1))
          {
            MR_Word Error_43 = ((MR_Word) ((MR_hl_field(1, OpenResult_40, (MR_Integer) 0))));

            ll_backend__fact_table__add_file_open_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), DataFileName_26, (MR_String) "output", Error_43, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_92_92);
            MaybeDataStream_136 = (MR_Word) ((MR_Unsigned) 0U);
            *Result_33 = (MR_Integer) 1;
            *FactMap_32 = FactMap0_37;
            HeaderCode0_137 = (MR_String) "";
          }
          else
          {
            MR_Word DataStream_41 = ((MR_Word) ((MR_hl_field(0, OpenResult_40, (MR_Integer) 0))));
            MR_Integer ProcIdInt_45;
            MR_String HashTableName_46;
            MR_Word FactTableProcInfo_48;
            MR_Word FactTableVars_49;
            MR_Word FactTableModes_52;
            MR_Word MaybeFirstFact_57;
            MR_Word STATE_VARIABLE_Specs_86_86;
            MR_String Var_118;
            MR_String Var_125;
            MR_String Var_127;
            MR_String Var_129;
            MR_Box conv0_FactTableProcInfo_48;

            {
              MaybeDataStream_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeDataStream_136, 0) = ((MR_Box) (DataStream_41));
            }
            ll_backend__fact_table__write_new_data_array_opening_brace_5_p_0(DataStream_41, StructName_27, (MR_Integer) 0);
            hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_24, &ProcIdInt_45);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ProcIdInt_45, &Var_118);
            Var_125 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) "_");
            Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", Var_125);
            HashTableName_46 = mercury__string__f_43_43_2_f_0(StructName_27, Var_127);
            Var_129 = mercury__string__f_43_43_2_f_0(HashTableName_46, (MR_String) "0;\n");
            HeaderCode0_137 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", Var_129);
            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_23, ((MR_Box) (ProcId_24)), &conv0_FactTableProcInfo_48);
            FactTableProcInfo_48 = ((MR_Word) (conv0_FactTableProcInfo_48));
            FactTableVars_49 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_48, (MR_Integer) 0))));
            FactTableModes_52 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[6]), FactTableVars_49);
            ll_backend__fact_table__read_sort_file_line_9_p_0(FileStream_39, FileName_25, FactArgInfos_28, FactTableModes_52, &MaybeFirstFact_57, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_86_86);
            if ((MaybeFirstFact_57 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Result_33 = (MR_Integer) 1;
              *FactMap_32 = FactMap0_37;
              STATE_VARIABLE_Specs_92_92 = STATE_VARIABLE_Specs_86_86;
            }
            else
            {
              MR_Word FirstFact_58 = ((MR_Word) ((MR_hl_field(1, MaybeFirstFact_57, (MR_Integer) 0))));

              ll_backend__fact_table__build_hash_table_22_p_0(FileStream_39, FileName_25, OutputStream_20, MaybeDataStream_136, FactTableSize_21, ModuleInfo_22, (MR_Integer) 1, StructName_27, FactArgInfos_28, FactTableModes_52, (MR_Integer) 0, HashTableName_46, (MR_Integer) 0, FirstFact_58, (MR_Integer) 0, CreateFactMap_31, FactMap0_37, FactMap_32, STATE_VARIABLE_Specs_86_86, &STATE_VARIABLE_Specs_92_92);
              *Result_33 = (MR_Integer) 0;
            }
          }
          if ((MaybeDataStream_136 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeaderCode_34 = HeaderCode0_137;
          else
          {
            MR_Word DataStream1_59 = ((MR_Word) ((MR_hl_field(1, MaybeDataStream_136, (MR_Integer) 0))));
            MR_String HeaderCode1_60;

            mercury__io__write_string_4_p_0(DataStream1_59, (MR_String) "};\n\n");
            ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(DataStream1_59, FactTableSize_21, StructName_27, NumFacts_30, &HeaderCode1_60);
            mercury__io__close_output_3_p_0(DataStream1_59);
            *HeaderCode_34 = mercury__string__f_43_43_2_f_0(HeaderCode0_137, HeaderCode1_60);
          }
        }
        break;
    }
    mercury__io__close_input_3_p_0(FileStream_39);
    ll_backend__fact_table__delete_temporary_file_5_p_0(FileName_25, STATE_VARIABLE_Specs_92_92, STATE_VARIABLE_Specs_62);
  }
}

static void MR_CALL 
ll_backend__fact_table__add_file_open_error_8_p_0(
  MR_Word MaybeContext_9,
  MR_String FileName_10,
  MR_String InOrOut_11,
  MR_Word Error_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_String ProgName_15;
  MR_String ErrorMsg_16;
  MR_Word Pieces_17;
  MR_Word Spec_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_15);
  mercury__io__error_message_2_p_0(Error_12, &ErrorMsg_16);
  {
    Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_25, 0) = ((MR_Box) (ProgName_15));
  }
  Var_27 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66]));
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (FileName_10));
  }
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (InOrOut_11));
  }
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (ErrorMsg_16));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[136])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[135])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Pieces_17));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) (MaybeContext_9));
    MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_53, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_53, 3) = ((MR_Box) (Var_56));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_file_open_error\'/8"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_52));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
  }
}

static void MR_CALL 
ll_backend__fact_table__delete_temporary_file_5_p_0(
  MR_String FileName_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word Result_9;

  mercury__io__file__remove_file_4_p_0(FileName_6, &Result_9);
  if ((Result_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
  else
  {
    MR_Word ErrorCode_10 = ((MR_Word) ((MR_hl_field(1, Result_9, (MR_Integer) 0))));
    MR_String ErrorMsg_11;
    MR_String ProgName_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word Var_53;

    mercury__io__error_message_2_p_0(ErrorCode_10, &ErrorMsg_11);
    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_12);
    {
      Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_22, 0) = ((MR_Box) (ProgName_12));
    }
    Var_24 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66]));
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_30, 1) = ((MR_Box) (FileName_6));
    }
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (ErrorMsg_11));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[133])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_48, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(3, Var_48, 3) = ((MR_Box) (Var_52));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.delete_temporary_file\'/5"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableSize_9,
  MR_String StructName_10,
  MR_Integer NumFacts_11,
  MR_String * HeaderCode_12)
{
  MR_String PointerArrayName_14;
  MR_String Var_24;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_38;

  Var_35 = mercury__string__f_43_43_2_f_0(StructName_10, (MR_String) "[]");
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_struct *", Var_35);
  Var_38 = mercury__string__f_43_43_2_f_0(StructName_10, Var_37);
  PointerArrayName_14 = mercury__string__f_43_43_2_f_0((MR_String) "const struct ", Var_38);
  Var_24 = mercury__string__f_43_43_2_f_0(PointerArrayName_14, (MR_String) ";\n");
  *HeaderCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "extern ", Var_24);
  mercury__io__write_string_4_p_0(OutputStream_8, PointerArrayName_14);
  mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " = {\n");
  ll_backend__fact_table__write_fact_table_pointer_array_loop_7_p_0(OutputStream_8, FactTableSize_9, StructName_10, (MR_Integer) 0, NumFacts_11);
  mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_loop_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableSize_9,
  MR_String StructName_10,
  MR_Integer CurFact_11,
  MR_Integer NumFacts_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurFact_11 >= NumFacts_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer NextFact_14;
      MR_String Var_28;
      MR_Integer next_value_of_CurFact_11;

      mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "\t");
      mercury__io__write_string_4_p_0(OutputStream_8, StructName_10);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), CurFact_11, &Var_28);
      mercury__io__write_string_4_p_0(OutputStream_8, Var_28);
      mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) ",\n");
      NextFact_14 = (MR_Integer) ((MR_Unsigned) CurFact_11 + (MR_Unsigned) FactTableSize_9);
      // direct tailcall eliminated
      ;
      next_value_of_CurFact_11 = NextFact_14;
      CurFact_11 = next_value_of_CurFact_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_22_p_0(
  MR_Word InputStream_23,
  MR_String InputFileName_24,
  MR_Word OutputStream_25,
  MR_Word MaybeDataStream_26,
  MR_Integer FactTableSize_27,
  MR_Word ModuleInfo_28,
  MR_Word IsPrimaryTable_29,
  MR_String StructName_30,
  MR_Word Infos_31,
  MR_Word Modes_32,
  MR_Integer InputArgNum_33,
  MR_String HashTableName_34,
  MR_Integer TableNum_35,
  MR_Word FirstFact_36,
  MR_Integer FactNum_37,
  MR_Word CreateFactMap_38,
  MR_Word STATE_VARIABLE_FactMap_0_48,
  MR_Word * STATE_VARIABLE_FactMap_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  MR_bool succeeded;
  MR_Word HashList_42;
  MR_Integer Len_43;
  MR_Word Globals_44;
  MR_Integer HashSize_45;
  MR_Word HashTable0_46;
  MR_Word HashTable_47;
  MR_Integer PercentFull_59;
  MR_Word Primes_60;
  MR_Integer N_61;
  MR_Integer Var_63;
  MR_Word Map_65;
  MR_Integer Prime_73;
  MR_Word Primes_74;

  ll_backend__fact_table__build_hash_table_loop_24_p_0(InputStream_23, InputFileName_24, OutputStream_25, MaybeDataStream_26, FactTableSize_27, ModuleInfo_28, IsPrimaryTable_29, StructName_30, Infos_31, Modes_32, InputArgNum_33, HashTableName_34, TableNum_35, FirstFact_36, FactNum_37, CreateFactMap_38, STATE_VARIABLE_FactMap_0_48, STATE_VARIABLE_FactMap_49, (MR_Word) ((MR_Unsigned) 0U), &HashList_42, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashList_42, &Len_43);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_28, &Globals_44);
  libs__globals__lookup_int_option_3_p_0(Globals_44, (MR_Integer) 363, &PercentFull_59);
  Primes_60 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[131]));
  Var_63 = (MR_Integer) ((MR_Unsigned) Len_43 * (MR_Unsigned) 100);
  N_61 = mercury__int__f_47_47_2_f_0(Var_63, PercentFull_59);
  Prime_73 = ((MR_Integer) ((MR_hl_field(1, Primes_60, (MR_Integer) 0))));
  Primes_74 = ((MR_Word) ((MR_hl_field(1, Primes_60, (MR_Integer) 1))));
  succeeded = (Prime_73 > N_61);
  if (succeeded)
    HashSize_45 = Prime_73;
  else
  {
    MR_Integer Prime_81 = ((MR_Integer) ((MR_hl_field(1, Primes_74, (MR_Integer) 0))));
    MR_Word Primes_82 = ((MR_Word) ((MR_hl_field(1, Primes_74, (MR_Integer) 1))));

    succeeded = (Prime_81 > N_61);
    if (succeeded)
      HashSize_45 = Prime_81;
    else
    {
      MR_Integer Prime_89 = ((MR_Integer) ((MR_hl_field(1, Primes_82, (MR_Integer) 0))));
      MR_Word Primes_90 = ((MR_Word) ((MR_hl_field(1, Primes_82, (MR_Integer) 1))));

      succeeded = (Prime_89 > N_61);
      if (succeeded)
        HashSize_45 = Prime_89;
      else
      {
        MR_Integer Prime_97 = ((MR_Integer) ((MR_hl_field(1, Primes_90, (MR_Integer) 0))));
        MR_Word Primes_98 = ((MR_Word) ((MR_hl_field(1, Primes_90, (MR_Integer) 1))));

        succeeded = (Prime_97 > N_61);
        if (succeeded)
          HashSize_45 = Prime_97;
        else
        {
          MR_Integer Prime_105 = ((MR_Integer) ((MR_hl_field(1, Primes_98, (MR_Integer) 0))));
          MR_Word Primes_106 = ((MR_Word) ((MR_hl_field(1, Primes_98, (MR_Integer) 1))));

          succeeded = (Prime_105 > N_61);
          if (succeeded)
            HashSize_45 = Prime_105;
          else
          {
            MR_Integer Prime_113 = ((MR_Integer) ((MR_hl_field(1, Primes_106, (MR_Integer) 0))));
            MR_Word Primes_114 = ((MR_Word) ((MR_hl_field(1, Primes_106, (MR_Integer) 1))));

            succeeded = (Prime_113 > N_61);
            if (succeeded)
              HashSize_45 = Prime_113;
            else
            {
              MR_Integer Prime_121 = ((MR_Integer) ((MR_hl_field(1, Primes_114, (MR_Integer) 0))));
              MR_Word Primes_122 = ((MR_Word) ((MR_hl_field(1, Primes_114, (MR_Integer) 1))));

              succeeded = (Prime_121 > N_61);
              if (succeeded)
                HashSize_45 = Prime_121;
              else
              {
                MR_Integer Prime_129 = ((MR_Integer) ((MR_hl_field(1, Primes_122, (MR_Integer) 0))));
                MR_Word Primes_130 = ((MR_Word) ((MR_hl_field(1, Primes_122, (MR_Integer) 1))));

                succeeded = (Prime_129 > N_61);
                if (succeeded)
                  HashSize_45 = Prime_129;
                else
                {
                  MR_Integer Prime_137 = ((MR_Integer) ((MR_hl_field(1, Primes_130, (MR_Integer) 0))));
                  MR_Word Primes_138 = ((MR_Word) ((MR_hl_field(1, Primes_130, (MR_Integer) 1))));

                  succeeded = (Prime_137 > N_61);
                  if (succeeded)
                    HashSize_45 = Prime_137;
                  else
                  {
                    MR_Integer Prime_145 = ((MR_Integer) ((MR_hl_field(1, Primes_138, (MR_Integer) 0))));
                    MR_Word Primes_146 = ((MR_Word) ((MR_hl_field(1, Primes_138, (MR_Integer) 1))));

                    succeeded = (Prime_145 > N_61);
                    if (succeeded)
                      HashSize_45 = Prime_145;
                    else
                    {
                      MR_Integer Prime_153 = ((MR_Integer) ((MR_hl_field(1, Primes_146, (MR_Integer) 0))));
                      MR_Word Primes_154 = ((MR_Word) ((MR_hl_field(1, Primes_146, (MR_Integer) 1))));

                      succeeded = (Prime_153 > N_61);
                      if (succeeded)
                        HashSize_45 = Prime_153;
                      else
                      {
                        MR_Integer Prime_161 = ((MR_Integer) ((MR_hl_field(1, Primes_154, (MR_Integer) 0))));
                        MR_Word Primes_162 = ((MR_Word) ((MR_hl_field(1, Primes_154, (MR_Integer) 1))));

                        succeeded = (Prime_161 > N_61);
                        if (succeeded)
                          HashSize_45 = Prime_161;
                        else
                        {
                          MR_Integer Prime_169 = ((MR_Integer) ((MR_hl_field(1, Primes_162, (MR_Integer) 0))));
                          MR_Word Primes_170 = ((MR_Word) ((MR_hl_field(1, Primes_162, (MR_Integer) 1))));

                          succeeded = (Prime_169 > N_61);
                          if (succeeded)
                            HashSize_45 = Prime_169;
                          else
                          {
                            MR_Integer Prime_177 = ((MR_Integer) ((MR_hl_field(1, Primes_170, (MR_Integer) 0))));
                            MR_Word Primes_178 = ((MR_Word) ((MR_hl_field(1, Primes_170, (MR_Integer) 1))));

                            succeeded = (Prime_177 > N_61);
                            if (succeeded)
                              HashSize_45 = Prime_177;
                            else
                            {
                              MR_Integer Prime_185 = ((MR_Integer) ((MR_hl_field(1, Primes_178, (MR_Integer) 0))));
                              MR_Word Primes_186 = ((MR_Word) ((MR_hl_field(1, Primes_178, (MR_Integer) 1))));

                              succeeded = (Prime_185 > N_61);
                              if (succeeded)
                                HashSize_45 = Prime_185;
                              else
                              {
                                MR_Integer Prime_193 = ((MR_Integer) ((MR_hl_field(1, Primes_186, (MR_Integer) 0))));
                                MR_Word Primes_194 = ((MR_Word) ((MR_hl_field(1, Primes_186, (MR_Integer) 1))));

                                succeeded = (Prime_193 > N_61);
                                if (succeeded)
                                  HashSize_45 = Prime_193;
                                else
                                {
                                  MR_Integer Prime_201 = ((MR_Integer) ((MR_hl_field(1, Primes_194, (MR_Integer) 0))));
                                  MR_Word Primes_202 = ((MR_Word) ((MR_hl_field(1, Primes_194, (MR_Integer) 1))));

                                  succeeded = (Prime_201 > N_61);
                                  if (succeeded)
                                    HashSize_45 = Prime_201;
                                  else
                                  {
                                    MR_Integer Prime_209 = ((MR_Integer) ((MR_hl_field(1, Primes_202, (MR_Integer) 0))));
                                    MR_Word Primes_210 = ((MR_Word) ((MR_hl_field(1, Primes_202, (MR_Integer) 1))));

                                    succeeded = (Prime_209 > N_61);
                                    if (succeeded)
                                      HashSize_45 = Prime_209;
                                    else
                                    {
                                      MR_Integer Prime_217 = ((MR_Integer) ((MR_hl_field(1, Primes_210, (MR_Integer) 0))));
                                      MR_Word Primes_218 = ((MR_Word) ((MR_hl_field(1, Primes_210, (MR_Integer) 1))));

                                      succeeded = (Prime_217 > N_61);
                                      if (succeeded)
                                        HashSize_45 = Prime_217;
                                      else
                                      {
                                        MR_Integer Prime_225 = ((MR_Integer) ((MR_hl_field(1, Primes_218, (MR_Integer) 0))));
                                        MR_Word Primes_226 = ((MR_Word) ((MR_hl_field(1, Primes_218, (MR_Integer) 1))));

                                        succeeded = (Prime_225 > N_61);
                                        if (succeeded)
                                          HashSize_45 = Prime_225;
                                        else
                                          ll_backend__fact_table__find_first_big_enough_prime_3_p_0(N_61, Primes_226, &HashSize_45);
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
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), &Map_65);
  {
    HashTable0_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HashTable0_46, 0) = ((MR_Box) (HashSize_45));
    MR_hl_field(0, HashTable0_46, 1) = ((MR_Box) (Map_65));
  }
  ll_backend__fact_table__hash_table_from_list_4_p_0(HashList_42, HashSize_45, HashTable0_46, &HashTable_47);
  ll_backend__fact_table__write_hash_table_6_p_0(OutputStream_25, HashTableName_34, TableNum_35, HashTable_47);
}

static MR_Box MR_CALL 
ll_backend__fact_table__build_hash_table_loop_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_71;

  conv0_LambdaHeadVar__2_71 = ll_backend__fact_table__IntroducedFrom__func__build_hash_table_loop__2066__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_71));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_loop_24_p_0(
  MR_Word InputStream_25,
  MR_String InputFileName_26,
  MR_Word OutputStream_27,
  MR_Word MaybeDataStream_28,
  MR_Integer FactTableSize_29,
  MR_Word ModuleInfo_30,
  MR_Word IsPrimaryTable_31,
  MR_String StructName_32,
  MR_Word Infos_33,
  MR_Word Modes_34,
  MR_Integer InputArgNum_35,
  MR_String HashTableName_36,
  MR_Integer STATE_VARIABLE_TableNum_0_57,
  MR_Word FirstFact_38,
  MR_Integer FactNum_39,
  MR_Word CreateFactMap_40,
  MR_Word STATE_VARIABLE_FactMap_0_58,
  MR_Word * STATE_VARIABLE_FactMap_59,
  MR_Word STATE_VARIABLE_HashList_0_60,
  MR_Word * STATE_VARIABLE_HashList_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
  while (MR_TRUE)
  {
    MR_Word MatchingFacts_45;
    MR_Word MaybeNextFact_46;
    MR_Word Globals_53;
    MR_Word STATE_VARIABLE_Specs_66_66;
    MR_Word STATE_VARIABLE_FactMap_68_68;
    MR_Integer STATE_VARIABLE_TableNum_74_74;
    MR_Word STATE_VARIABLE_HashList_75_75;
    MR_Word RevMatchingFacts_89;
    MR_Word MatchingFactsTail_90;

    // setup for model_det tailcalls optimized into a loop
    ;
    ll_backend__fact_table__top_level_collect_matching_facts_loop_12_p_0(InputStream_25, InputFileName_26, Infos_33, Modes_34, FirstFact_38, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingFacts_89, &MaybeNextFact_46, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_66_66);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), RevMatchingFacts_89, &MatchingFactsTail_90);
    {
      MatchingFacts_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MatchingFacts_45, 0) = ((MR_Box) (FirstFact_38));
      MR_hl_field(1, MatchingFacts_45, 1) = ((MR_Box) (MatchingFactsTail_90));
    }
    switch (CreateFactMap_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Index_104 = ((MR_Integer) ((MR_hl_field(0, FirstFact_38, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_FactMap_18_108;
          MR_Integer Var_109;

          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Index_104, ((MR_Box) (FactNum_39)), STATE_VARIABLE_FactMap_0_58, &STATE_VARIABLE_FactMap_18_108);
          Var_109 = (MR_Integer) ((MR_Unsigned) FactNum_39 + (MR_Unsigned) 1);
          ll_backend__fact_table__update_fact_map_4_p_0(Var_109, MatchingFactsTail_90, STATE_VARIABLE_FactMap_18_108, &STATE_VARIABLE_FactMap_68_68);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_FactMap_68_68 = STATE_VARIABLE_FactMap_0_58;
        break;
    }
    if (!((MaybeDataStream_28 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DataStream_47 = ((MR_Word) ((MR_hl_field(1, MaybeDataStream_28, (MR_Integer) 0))));
      MR_Word OutputData_48;
      MR_Word MaybeProgressStream_52;
      MR_Word Globals_93;
      MR_Word VeryVerbose_94;

      OutputData_48 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), (MR_Word) (&ll_backend__fact_table_scalar_common_1[1]), (MR_Word) (&ll_backend__fact_table_scalar_common_2[5]), MatchingFacts_45);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_30, &Globals_93);
      libs__globals__lookup_bool_option_3_p_0(Globals_93, (MR_Integer) 73, &VeryVerbose_94);
      switch (VeryVerbose_94) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeProgressStream_52 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressStream_95;

            hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_30, &ProgressStream_95);
            {
              MaybeProgressStream_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeProgressStream_52, 0) = ((MR_Box) (ProgressStream_95));
            }
          }
          break;
      }
      ll_backend__fact_table__write_fact_table_data_8_p_0(DataStream_47, MaybeProgressStream_52, FactTableSize_29, StructName_32, OutputData_48, FactNum_39);
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_30, &Globals_53);
    ll_backend__fact_table__do_build_hash_table_14_p_0(OutputStream_27, Globals_53, IsPrimaryTable_31, STATE_VARIABLE_FactMap_68_68, FactNum_39, InputArgNum_35, HashTableName_36, MatchingFacts_45, STATE_VARIABLE_TableNum_0_57, &STATE_VARIABLE_TableNum_74_74, STATE_VARIABLE_HashList_0_60, &STATE_VARIABLE_HashList_75_75);
    if ((MaybeNextFact_46 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FactMap_59 = STATE_VARIABLE_FactMap_68_68;
      *STATE_VARIABLE_HashList_61 = STATE_VARIABLE_HashList_75_75;
      *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_66_66;
    }
    else
    {
      MR_Word NextFact_54 = ((MR_Word) ((MR_hl_field(1, MaybeNextFact_46, (MR_Integer) 0))));
      MR_Integer Len_55;
      MR_Integer NextFactNum_56;
      MR_Integer next_value_of_STATE_VARIABLE_TableNum_0_57;
      MR_Word next_value_of_FirstFact_38;
      MR_Integer next_value_of_FactNum_39;
      MR_Word next_value_of_STATE_VARIABLE_FactMap_0_58;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_60;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_62;

      mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), MatchingFacts_45, &Len_55);
      NextFactNum_56 = (MR_Integer) ((MR_Unsigned) FactNum_39 + (MR_Unsigned) Len_55);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_TableNum_0_57 = STATE_VARIABLE_TableNum_74_74;
      next_value_of_FirstFact_38 = NextFact_54;
      next_value_of_FactNum_39 = NextFactNum_56;
      next_value_of_STATE_VARIABLE_FactMap_0_58 = STATE_VARIABLE_FactMap_68_68;
      next_value_of_STATE_VARIABLE_HashList_0_60 = STATE_VARIABLE_HashList_75_75;
      next_value_of_STATE_VARIABLE_Specs_0_62 = STATE_VARIABLE_Specs_66_66;
      STATE_VARIABLE_TableNum_0_57 = next_value_of_STATE_VARIABLE_TableNum_0_57;
      FirstFact_38 = next_value_of_FirstFact_38;
      FactNum_39 = next_value_of_FactNum_39;
      STATE_VARIABLE_FactMap_0_58 = next_value_of_STATE_VARIABLE_FactMap_0_58;
      STATE_VARIABLE_HashList_0_60 = next_value_of_STATE_VARIABLE_HashList_0_60;
      STATE_VARIABLE_Specs_0_62 = next_value_of_STATE_VARIABLE_Specs_0_62;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__update_fact_map_4_p_0(
  MR_Integer FactNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactMap_0_3,
  MR_Word * STATE_VARIABLE_FactMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FactMap_4 = STATE_VARIABLE_FactMap_0_3;
    else
    {
      MR_Word Fact_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Facts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Index_14 = ((MR_Integer) ((MR_hl_field(0, Fact_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FactMap_18_18;
      MR_Integer Var_19;
      MR_Integer next_value_of_FactNum_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactMap_0_3;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Index_14, ((MR_Box) (FactNum_1)), STATE_VARIABLE_FactMap_0_3, &STATE_VARIABLE_FactMap_18_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) FactNum_1 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_FactNum_1 = Var_19;
      next_value_of_HeadVar__2_2 = Facts_11;
      next_value_of_STATE_VARIABLE_FactMap_0_3 = STATE_VARIABLE_FactMap_18_18;
      FactNum_1 = next_value_of_FactNum_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FactMap_0_3 = next_value_of_STATE_VARIABLE_FactMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_loop_12_p_0(
  MR_Word InputStream_13,
  MR_String InputFileName_14,
  MR_Word Infos_15,
  MR_Word Modes_16,
  MR_Word Fact_17,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_32,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_33,
  MR_Word * MaybeNextFact_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeSortFileLine_22;
    MR_Word STATE_VARIABLE_Specs_38_38;

    // setup for model_det tailcalls optimized into a loop
    ;
    ll_backend__fact_table__read_sort_file_line_9_p_0(InputStream_13, InputFileName_14, Infos_15, Modes_16, &MaybeSortFileLine_22, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_38_38);
    if ((MaybeSortFileLine_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeNextFact_19 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevMatchingFacts_33 = STATE_VARIABLE_RevMatchingFacts_0_32;
      *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_38_38;
    }
    else
    {
      MR_Word Fact1_23 = ((MR_Word) ((MR_hl_field(1, MaybeSortFileLine_22, (MR_Integer) 0))));
      MR_Word Arg1_24;
      MR_Word Arg_28;
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Fact1_23, (MR_Integer) 0))));
      MR_Word Var_41;

      succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg1_24 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, Fact_17, (MR_Integer) 0))));
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Arg_28 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Integer CastX_54 = (MR_Integer) (Arg_28);
        MR_Integer CastY_55 = (MR_Integer) (Arg1_24);

        succeeded = (CastX_54 == CastY_55);
        if (succeeded)
          succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) Arg_28)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_48 = ((MR_Integer) ((MR_hl_field(0, Arg_28, (MR_Integer) 0))));
                MR_Integer ArgY1_49;

                succeeded = ((MR_tag((MR_Word) Arg1_24)) == (MR_Integer) 0);
                if (succeeded)
                {
                  ArgY1_49 = ((MR_Integer) ((MR_hl_field(0, Arg1_24, (MR_Integer) 0))));
                  succeeded = (ArgX1_48 == ArgY1_49);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Float ArgX1_50 = MR_unbox_float((MR_hl_field(1, Arg_28, (MR_Integer) 0)));
                MR_Float ArgY1_51;

                succeeded = ((MR_tag((MR_Word) Arg1_24)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_51 = MR_unbox_float((MR_hl_field(1, Arg1_24, (MR_Integer) 0)));
                  succeeded = (ArgX1_50 == ArgY1_51);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_52 = ((MR_String) ((MR_hl_field(2, Arg_28, (MR_Integer) 0))));
                MR_String ArgY1_53;

                succeeded = ((MR_tag((MR_Word) Arg1_24)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_53 = ((MR_String) ((MR_hl_field(2, Arg1_24, (MR_Integer) 0))));
                  succeeded = (strcmp(ArgX1_52, ArgY1_53) == 0);
                }
              }
              break;
          }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_RevMatchingFacts_42_42;
          MR_Word next_value_of_STATE_VARIABLE_RevMatchingFacts_0_32;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_34;

          {
            STATE_VARIABLE_RevMatchingFacts_42_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_42_42, 0) = ((MR_Box) (Fact1_23));
            MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_42_42, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingFacts_0_32));
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_RevMatchingFacts_0_32 = STATE_VARIABLE_RevMatchingFacts_42_42;
          next_value_of_STATE_VARIABLE_Specs_0_34 = STATE_VARIABLE_Specs_38_38;
          STATE_VARIABLE_RevMatchingFacts_0_32 = next_value_of_STATE_VARIABLE_RevMatchingFacts_0_32;
          STATE_VARIABLE_Specs_0_34 = next_value_of_STATE_VARIABLE_Specs_0_34;
          continue;
        }
        else
        {
          *MaybeNextFact_19 = MaybeSortFileLine_22;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_38_38;
          *STATE_VARIABLE_RevMatchingFacts_33 = STATE_VARIABLE_RevMatchingFacts_0_32;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.top_level_collect_matching_facts_loop\'/12", (MR_String) "no input args");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_loop_14_p_0(
  MR_Word OutputStream_1,
  MR_Word Globals_2,
  MR_Word IsPrimaryTable_3,
  MR_Word FactMap_4,
  MR_Integer InputArgNum_5,
  MR_String HashTableName_6,
  MR_Word HeadVar__7_7,
  MR_Integer FactNum_8,
  MR_Integer STATE_VARIABLE_TableNum_0_9,
  MR_Integer * STATE_VARIABLE_TableNum_10,
  MR_Word STATE_VARIABLE_HashList_0_11,
  MR_Word * STATE_VARIABLE_HashList_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HashList_12 = STATE_VARIABLE_HashList_0_11;
      *STATE_VARIABLE_TableNum_10 = STATE_VARIABLE_TableNum_0_9;
    }
    else
    {
      MR_Word Fact_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Facts0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word MatchingFacts_43;
      MR_Word RemainingFacts_44;
      MR_Integer Len_45;
      MR_Integer NextFactNum_46;
      MR_Integer STATE_VARIABLE_TableNum_53_53;
      MR_Word STATE_VARIABLE_HashList_54_54;
      MR_Word InputArgs_57 = ((MR_Word) ((MR_hl_field(0, Fact_37, (MR_Integer) 0))));
      MR_Word MatchArg_60;
      MR_Word RevMatchingFacts_61;
      MR_Word TailMatchingFacts_62;
      MR_Box conv0_MatchArg_60;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Integer next_value_of_FactNum_8;
      MR_Integer next_value_of_STATE_VARIABLE_TableNum_0_9;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_11;

      mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0), InputArgs_57, InputArgNum_5, &conv0_MatchArg_60);
      MatchArg_60 = ((MR_Word) (conv0_MatchArg_60));
      ll_backend__fact_table__lower_level_collect_matching_facts_loop_6_p_0(InputArgNum_5, MatchArg_60, Facts0_38, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingFacts_61, &RemainingFacts_44);
      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), RevMatchingFacts_61, &TailMatchingFacts_62);
      {
        MatchingFacts_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MatchingFacts_43, 0) = ((MR_Box) (Fact_37));
        MR_hl_field(1, MatchingFacts_43, 1) = ((MR_Box) (TailMatchingFacts_62));
      }
      ll_backend__fact_table__do_build_hash_table_14_p_0(OutputStream_1, Globals_2, IsPrimaryTable_3, FactMap_4, FactNum_8, InputArgNum_5, HashTableName_6, MatchingFacts_43, STATE_VARIABLE_TableNum_0_9, &STATE_VARIABLE_TableNum_53_53, STATE_VARIABLE_HashList_0_11, &STATE_VARIABLE_HashList_54_54);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0), MatchingFacts_43, &Len_45);
      NextFactNum_46 = (MR_Integer) ((MR_Unsigned) FactNum_8 + (MR_Unsigned) Len_45);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = RemainingFacts_44;
      next_value_of_FactNum_8 = NextFactNum_46;
      next_value_of_STATE_VARIABLE_TableNum_0_9 = STATE_VARIABLE_TableNum_53_53;
      next_value_of_STATE_VARIABLE_HashList_0_11 = STATE_VARIABLE_HashList_54_54;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      FactNum_8 = next_value_of_FactNum_8;
      STATE_VARIABLE_TableNum_0_9 = next_value_of_STATE_VARIABLE_TableNum_0_9;
      STATE_VARIABLE_HashList_0_11 = next_value_of_STATE_VARIABLE_HashList_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__do_build_hash_table_14_p_0(
  MR_Word OutputStream_15,
  MR_Word Globals_16,
  MR_Word IsPrimaryTable_17,
  MR_Word FactMap_18,
  MR_Integer FactNum_19,
  MR_Integer InputArgNum_20,
  MR_String HashTableName_21,
  MR_Word Facts_22,
  MR_Integer STATE_VARIABLE_TableNum_0_42,
  MR_Integer * STATE_VARIABLE_TableNum_43,
  MR_Word STATE_VARIABLE_HashList_0_44,
  MR_Word * STATE_VARIABLE_HashList_45)
{
  MR_bool succeeded;

  if ((Facts_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.do_build_hash_table\'/14", (MR_String) "no facts");
      return;
    }
  else
  {
    MR_Word Fact_26 = ((MR_Word) ((MR_hl_field(1, Facts_22, (MR_Integer) 0))));
    MR_Word TailFacts_27 = ((MR_Word) ((MR_hl_field(1, Facts_22, (MR_Integer) 1))));
    MR_Word Arg_28;
    MR_Integer Index_29 = ((MR_Integer) ((MR_hl_field(0, Fact_26, (MR_Integer) 1))));
    MR_Integer HashIndex_30;
    MR_Word InputArgs_67 = ((MR_Word) ((MR_hl_field(0, Fact_26, (MR_Integer) 0))));
    MR_Box conv0_Arg_28;

    mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0), InputArgs_67, InputArgNum_20, &conv0_Arg_28);
    Arg_28 = ((MR_Word) (conv0_Arg_28));
    switch (IsPrimaryTable_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv1_HashIndex_30;

          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FactMap_18, Index_29, &conv1_HashIndex_30);
          HashIndex_30 = ((MR_Integer) (conv1_HashIndex_30));
        }
        break;
      case (MR_Integer) 1:
        HashIndex_30 = FactNum_19;
        break;
    }
    if ((TailFacts_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_51;
      MR_Word Var_52;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (HashIndex_30));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (Arg_28));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (Var_52));
        MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_HashList_45 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_44));
      }
      *STATE_VARIABLE_TableNum_43 = STATE_VARIABLE_TableNum_0_42;
    }
    else
    {
      MR_Integer NextInputArgNum_33 = (MR_Integer) ((MR_Unsigned) InputArgNum_20 + (MR_Unsigned) 1);
      MR_Word InputArgs_34 = ((MR_Word) ((MR_hl_field(0, Fact_26, (MR_Integer) 0))));
      MR_Integer N_37 = (MR_Integer) ((MR_Unsigned) NextInputArgNum_33 + (MR_Unsigned) 1);
      MR_Word Var_38;

      succeeded = mercury__list__drop_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0), N_37, InputArgs_34, &Var_38);
      if (succeeded)
      {
        MR_Integer ThisTableNum_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TableNum_0_42 + (MR_Unsigned) 1);
        MR_Word EntryIndex_40;
        MR_Word Var_61;
        MR_Word HashList_70;
        MR_Integer Len_71;
        MR_Integer HashSize_72;
        MR_Word HashTable0_73;
        MR_Word HashTable_74;
        MR_Integer PercentFull_78;
        MR_Word Primes_79;
        MR_Integer N_80;
        MR_Integer Var_82;
        MR_Word Map_84;
        MR_Integer Prime_92;
        MR_Word Primes_93;

        ll_backend__fact_table__build_hash_table_lower_levels_loop_14_p_0(OutputStream_15, Globals_16, IsPrimaryTable_17, FactMap_18, NextInputArgNum_33, HashTableName_21, Facts_22, FactNum_19, ThisTableNum_39, STATE_VARIABLE_TableNum_43, (MR_Word) ((MR_Unsigned) 0U), &HashList_70);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashList_70, &Len_71);
        libs__globals__lookup_int_option_3_p_0(Globals_16, (MR_Integer) 363, &PercentFull_78);
        Primes_79 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[131]));
        Var_82 = (MR_Integer) ((MR_Unsigned) Len_71 * (MR_Unsigned) 100);
        N_80 = mercury__int__f_47_47_2_f_0(Var_82, PercentFull_78);
        Prime_92 = ((MR_Integer) ((MR_hl_field(1, Primes_79, (MR_Integer) 0))));
        Primes_93 = ((MR_Word) ((MR_hl_field(1, Primes_79, (MR_Integer) 1))));
        succeeded = (Prime_92 > N_80);
        if (succeeded)
          HashSize_72 = Prime_92;
        else
        {
          MR_Integer Prime_100 = ((MR_Integer) ((MR_hl_field(1, Primes_93, (MR_Integer) 0))));
          MR_Word Primes_101 = ((MR_Word) ((MR_hl_field(1, Primes_93, (MR_Integer) 1))));

          succeeded = (Prime_100 > N_80);
          if (succeeded)
            HashSize_72 = Prime_100;
          else
          {
            MR_Integer Prime_108 = ((MR_Integer) ((MR_hl_field(1, Primes_101, (MR_Integer) 0))));
            MR_Word Primes_109 = ((MR_Word) ((MR_hl_field(1, Primes_101, (MR_Integer) 1))));

            succeeded = (Prime_108 > N_80);
            if (succeeded)
              HashSize_72 = Prime_108;
            else
            {
              MR_Integer Prime_116 = ((MR_Integer) ((MR_hl_field(1, Primes_109, (MR_Integer) 0))));
              MR_Word Primes_117 = ((MR_Word) ((MR_hl_field(1, Primes_109, (MR_Integer) 1))));

              succeeded = (Prime_116 > N_80);
              if (succeeded)
                HashSize_72 = Prime_116;
              else
              {
                MR_Integer Prime_124 = ((MR_Integer) ((MR_hl_field(1, Primes_117, (MR_Integer) 0))));
                MR_Word Primes_125 = ((MR_Word) ((MR_hl_field(1, Primes_117, (MR_Integer) 1))));

                succeeded = (Prime_124 > N_80);
                if (succeeded)
                  HashSize_72 = Prime_124;
                else
                {
                  MR_Integer Prime_132 = ((MR_Integer) ((MR_hl_field(1, Primes_125, (MR_Integer) 0))));
                  MR_Word Primes_133 = ((MR_Word) ((MR_hl_field(1, Primes_125, (MR_Integer) 1))));

                  succeeded = (Prime_132 > N_80);
                  if (succeeded)
                    HashSize_72 = Prime_132;
                  else
                  {
                    MR_Integer Prime_140 = ((MR_Integer) ((MR_hl_field(1, Primes_133, (MR_Integer) 0))));
                    MR_Word Primes_141 = ((MR_Word) ((MR_hl_field(1, Primes_133, (MR_Integer) 1))));

                    succeeded = (Prime_140 > N_80);
                    if (succeeded)
                      HashSize_72 = Prime_140;
                    else
                    {
                      MR_Integer Prime_148 = ((MR_Integer) ((MR_hl_field(1, Primes_141, (MR_Integer) 0))));
                      MR_Word Primes_149 = ((MR_Word) ((MR_hl_field(1, Primes_141, (MR_Integer) 1))));

                      succeeded = (Prime_148 > N_80);
                      if (succeeded)
                        HashSize_72 = Prime_148;
                      else
                      {
                        MR_Integer Prime_156 = ((MR_Integer) ((MR_hl_field(1, Primes_149, (MR_Integer) 0))));
                        MR_Word Primes_157 = ((MR_Word) ((MR_hl_field(1, Primes_149, (MR_Integer) 1))));

                        succeeded = (Prime_156 > N_80);
                        if (succeeded)
                          HashSize_72 = Prime_156;
                        else
                        {
                          MR_Integer Prime_164 = ((MR_Integer) ((MR_hl_field(1, Primes_157, (MR_Integer) 0))));
                          MR_Word Primes_165 = ((MR_Word) ((MR_hl_field(1, Primes_157, (MR_Integer) 1))));

                          succeeded = (Prime_164 > N_80);
                          if (succeeded)
                            HashSize_72 = Prime_164;
                          else
                          {
                            MR_Integer Prime_172 = ((MR_Integer) ((MR_hl_field(1, Primes_165, (MR_Integer) 0))));
                            MR_Word Primes_173 = ((MR_Word) ((MR_hl_field(1, Primes_165, (MR_Integer) 1))));

                            succeeded = (Prime_172 > N_80);
                            if (succeeded)
                              HashSize_72 = Prime_172;
                            else
                            {
                              MR_Integer Prime_180 = ((MR_Integer) ((MR_hl_field(1, Primes_173, (MR_Integer) 0))));
                              MR_Word Primes_181 = ((MR_Word) ((MR_hl_field(1, Primes_173, (MR_Integer) 1))));

                              succeeded = (Prime_180 > N_80);
                              if (succeeded)
                                HashSize_72 = Prime_180;
                              else
                              {
                                MR_Integer Prime_188 = ((MR_Integer) ((MR_hl_field(1, Primes_181, (MR_Integer) 0))));
                                MR_Word Primes_189 = ((MR_Word) ((MR_hl_field(1, Primes_181, (MR_Integer) 1))));

                                succeeded = (Prime_188 > N_80);
                                if (succeeded)
                                  HashSize_72 = Prime_188;
                                else
                                {
                                  MR_Integer Prime_196 = ((MR_Integer) ((MR_hl_field(1, Primes_189, (MR_Integer) 0))));
                                  MR_Word Primes_197 = ((MR_Word) ((MR_hl_field(1, Primes_189, (MR_Integer) 1))));

                                  succeeded = (Prime_196 > N_80);
                                  if (succeeded)
                                    HashSize_72 = Prime_196;
                                  else
                                  {
                                    MR_Integer Prime_204 = ((MR_Integer) ((MR_hl_field(1, Primes_197, (MR_Integer) 0))));
                                    MR_Word Primes_205 = ((MR_Word) ((MR_hl_field(1, Primes_197, (MR_Integer) 1))));

                                    succeeded = (Prime_204 > N_80);
                                    if (succeeded)
                                      HashSize_72 = Prime_204;
                                    else
                                    {
                                      MR_Integer Prime_212 = ((MR_Integer) ((MR_hl_field(1, Primes_205, (MR_Integer) 0))));
                                      MR_Word Primes_213 = ((MR_Word) ((MR_hl_field(1, Primes_205, (MR_Integer) 1))));

                                      succeeded = (Prime_212 > N_80);
                                      if (succeeded)
                                        HashSize_72 = Prime_212;
                                      else
                                      {
                                        MR_Integer Prime_220 = ((MR_Integer) ((MR_hl_field(1, Primes_213, (MR_Integer) 0))));
                                        MR_Word Primes_221 = ((MR_Word) ((MR_hl_field(1, Primes_213, (MR_Integer) 1))));

                                        succeeded = (Prime_220 > N_80);
                                        if (succeeded)
                                          HashSize_72 = Prime_220;
                                        else
                                          ll_backend__fact_table__find_first_big_enough_prime_3_p_0(N_80, Primes_221, &HashSize_72);
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
        mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), &Map_84);
        {
          HashTable0_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HashTable0_73, 0) = ((MR_Box) (HashSize_72));
          MR_hl_field(0, HashTable0_73, 1) = ((MR_Box) (Map_84));
        }
        ll_backend__fact_table__hash_table_from_list_4_p_0(HashList_70, HashSize_72, HashTable0_73, &HashTable_74);
        ll_backend__fact_table__write_hash_table_6_p_0(OutputStream_15, HashTableName_21, ThisTableNum_39, HashTable_74);
        {
          EntryIndex_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, EntryIndex_40, 0) = ((MR_Box) (ThisTableNum_39));
          MR_hl_field(1, EntryIndex_40, 1) = ((MR_Box) (HashTableName_21));
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (Arg_28));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (EntryIndex_40));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_HashList_45 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_44));
        }
      }
      else
      {
        switch (IsPrimaryTable_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__fact_table__hash_list_insert_many_7_p_0(IsPrimaryTable_17, FactMap_18, FactNum_19, InputArgNum_20, Facts_22, STATE_VARIABLE_HashList_0_44, STATE_VARIABLE_HashList_45);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Entry_41;
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (HashIndex_30));
              }
              {
                Entry_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Entry_41, 0) = ((MR_Box) (Arg_28));
                MR_hl_field(0, Entry_41, 1) = ((MR_Box) (Var_63));
                MR_hl_field(0, Entry_41, 2) = ((MR_Box) ((MR_Integer) -1));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_HashList_45 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Entry_41));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_44));
              }
            }
            break;
        }
        *STATE_VARIABLE_TableNum_43 = STATE_VARIABLE_TableNum_0_42;
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_hash_table_6_p_0(
  MR_Word OutputStream_7,
  MR_String BaseName_8,
  MR_Integer TableNum_9,
  MR_Word HashTable_10)
{
  MR_Char TableType_12;
  MR_String HashTableDataName_13;
  MR_Integer Size_14;
  MR_Integer MaxIndex_16;
  MR_Word Var_28;
  MR_String Var_53;
  MR_String Var_60;
  MR_String Var_61;
  MR_String Var_63;
  MR_String Var_64;
  MR_String Var_71;
  MR_String Var_76;
  MR_String Var_87;
  MR_String Var_97;
  MR_String Var_108;

  ll_backend__fact_table__get_hash_table_type_2_p_0(HashTable_10, &TableType_12);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableNum_9, &Var_53);
  Var_60 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) "_data[]");
  Var_61 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_60);
  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_61);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableType_12, &Var_64);
  Var_71 = mercury__string__f_43_43_2_f_0(Var_64, Var_63);
  HashTableDataName_13 = mercury__string__f_43_43_2_f_0((MR_String) "struct MR_fact_table_hash_entry_", Var_71);
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (HashTableDataName_13));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[132])));
  }
  mercury__io__write_strings_4_p_0(OutputStream_7, Var_28);
  Size_14 = ((MR_Integer) ((MR_hl_field(0, HashTable_10, (MR_Integer) 0))));
  MaxIndex_16 = (MR_Integer) ((MR_Unsigned) Size_14 - (MR_Unsigned) 1);
  ll_backend__fact_table__write_hash_table_loop_6_p_0(OutputStream_7, HashTable_10, (MR_Integer) 0, MaxIndex_16);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "};\n\n");
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n\nstruct MR_fact_table_hash_table_");
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableType_12, &Var_76);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_76);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(OutputStream_7, BaseName_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableNum_9, &Var_87);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_87);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " = {\n    ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), Size_14, &Var_97);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_97);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ",\n    ");
  mercury__io__write_string_4_p_0(OutputStream_7, BaseName_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), TableNum_9, &Var_108);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_108);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "_data\n};\n");
}

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_p_0(
  MR_Word HashTable_3,
  MR_Char * TableType_4)
{
  MR_bool succeeded;
  MR_Word Map_6 = ((MR_Word) ((MR_hl_field(0, HashTable_3, (MR_Integer) 1))));

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_6);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_hash_table_type\'/2", (MR_String) "empty hash table");
      return;
    }
  else
    ll_backend__fact_table__get_hash_table_type_loop_3_p_0(Map_6, (MR_Integer) 0, TableType_4);
}

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_loop_3_p_0(
  MR_Word Map_4,
  MR_Integer Index_5,
  MR_Char * TableType_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Entry_7;
    MR_Box conv0_Entry_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_4, Index_5, &conv0_Entry_7);
    if (succeeded)
    {
      Entry_7 = ((MR_Word) (conv0_Entry_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Key_8 = ((MR_Word) ((MR_hl_field(0, Entry_7, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Key_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *TableType_6 = (MR_Char) 105;
          break;
        case (MR_Integer) 1:
          *TableType_6 = (MR_Char) 102;
          break;
        case (MR_Integer) 2:
          *TableType_6 = (MR_Char) 115;
          break;
      }
    }
    else
    {
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Index_5 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Index_5 = Var_14;

      // direct tailcall eliminated
      ;
      Index_5 = next_value_of_Index_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_hash_table_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word HashTable_8,
  MR_Integer CurIndex_9,
  MR_Integer MaxIndex_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_9 > MaxIndex_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_45;
      MR_Word HashEntry_12;
      MR_Word Map_73;
      MR_Box conv0_HashEntry_12;
      MR_Integer next_value_of_CurIndex_9;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t{ ");
      Map_73 = ((MR_Word) ((MR_hl_field(0, HashTable_8, (MR_Integer) 1))));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_73, CurIndex_9, &conv0_HashEntry_12);
      if (succeeded)
      {
        HashEntry_12 = ((MR_Word) (conv0_HashEntry_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Key_13 = ((MR_Word) ((MR_hl_field(0, HashEntry_12, (MR_Integer) 0))));
        MR_Word Index_14 = ((MR_Word) ((MR_hl_field(0, HashEntry_12, (MR_Integer) 1))));
        MR_Integer Next_15 = ((MR_Integer) ((MR_hl_field(0, HashEntry_12, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) Key_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(0, Key_13, (MR_Integer) 0))));

              mercury__io__write_int_4_p_0(Stream_7, Int_17);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float Float_18 = MR_unbox_float((MR_hl_field(1, Key_13, (MR_Integer) 0)));

              mercury__io__write_float_4_p_0(Stream_7, Float_18);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String String_16 = ((MR_String) ((MR_hl_field(2, Key_13, (MR_Integer) 0))));

              backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_7, String_16);
            }
            break;
        }
        if (((MR_tag((MR_Word) Index_14)) == (MR_Integer) 0))
        {
          MR_Integer I_19 = ((MR_Integer) ((MR_hl_field(0, Index_14, (MR_Integer) 0))));
          MR_String Var_64;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_INDEX(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), I_19, &Var_64);
          mercury__io__write_string_4_p_0(Stream_7, Var_64);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", 1), ");
        }
        else
        {
          MR_String H_20 = ((MR_String) ((MR_hl_field(1, Index_14, (MR_Integer) 1))));
          MR_Integer I_48 = ((MR_Integer) ((MR_hl_field(1, Index_14, (MR_Integer) 0))));
          MR_String Var_53;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_POINTER(&");
          mercury__io__write_string_4_p_0(Stream_7, H_20);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), I_48, &Var_53);
          mercury__io__write_string_4_p_0(Stream_7, Var_53);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", 2), ");
        }
        mercury__io__write_int_4_p_0(Stream_7, Next_15);
      }
      else
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "0, MR_FACT_TABLE_MAKE_TAGGED_POINTER(NULL, 0), -1 ");
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n");
      Var_45 = (MR_Integer) ((MR_Unsigned) CurIndex_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_9 = Var_45;
      CurIndex_9 = next_value_of_CurIndex_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HashSize_2,
  MR_Word STATE_VARIABLE_HashTable_0_3,
  MR_Word * STATE_VARIABLE_HashTable_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashTable_4 = STATE_VARIABLE_HashTable_0_3;
    else
    {
      MR_Word Entry_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Entrys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HashTable_15_15;
      MR_Word Key_16 = ((MR_Word) ((MR_hl_field(0, Entry_9, (MR_Integer) 0))));
      MR_Word Index_17 = ((MR_Word) ((MR_hl_field(0, Entry_9, (MR_Integer) 1))));
      MR_Integer HashVal_19;
      MR_Word Map_38;
      MR_Box conv1_Var_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HashTable_0_3;

      switch (MR_tag((MR_Word) Key_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Int_26 = ((MR_Integer) ((MR_hl_field(0, Key_16, (MR_Integer) 0))));
            MR_Integer N_74;
            MR_Integer Var_79;

            mercury__int__abs_2_p_0(Int_26, &N_74);
            Var_79 = (MR_Integer) ((MR_Unsigned) N_74 + (MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) 0)));
            HashVal_19 = mercury__int__mod_2_f_0(Var_79, HashSize_2);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float Float_28 = MR_unbox_float((MR_hl_field(1, Key_16, (MR_Integer) 0)));
            MR_Integer Var_31;
            MR_Integer N_50;
            MR_Integer Var_55;

            Var_31 = mercury__float__hash_1_f_0(Float_28);
            mercury__int__abs_2_p_0(Var_31, &N_50);
            Var_55 = (MR_Integer) ((MR_Unsigned) N_50 + (MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) 0)));
            HashVal_19 = mercury__int__mod_2_f_0(Var_55, HashSize_2);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_23 = ((MR_String) ((MR_hl_field(2, Key_16, (MR_Integer) 0))));
            MR_Word Cs_24;
            MR_Word Ns_96;

            mercury__string__to_char_list_2_p_0(String_23, &Cs_24);
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[4]), Cs_24, &Ns_96);
            ll_backend__fact_table__fact_table_hash_2_4_p_0(HashSize_2, Ns_96, (MR_Integer) 0, &HashVal_19);
          }
          break;
      }
      Map_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_3, (MR_Integer) 1))));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_38, HashVal_19, &conv1_Var_20);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        ll_backend__fact_table__hash_table_insert_open_address_loop_5_p_0(HashVal_19, Key_16, Index_17, STATE_VARIABLE_HashTable_0_3, &STATE_VARIABLE_HashTable_15_15);
      else
      {
        MR_Word Var_21;
        MR_Integer Size_41;
        MR_Word Map0_42;
        MR_Word Map_43;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (Key_16));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (Index_17));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Size_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_3, (MR_Integer) 0))));
        Map0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_3, (MR_Integer) 1))));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashVal_19, ((MR_Box) (Var_21)), Map0_42, &Map_43);
        {
          STATE_VARIABLE_HashTable_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_HashTable_15_15, 0) = ((MR_Box) (Size_41));
          MR_hl_field(0, STATE_VARIABLE_HashTable_15_15, 1) = ((MR_Box) (Map_43));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Entrys_10;
      next_value_of_STATE_VARIABLE_HashTable_0_3 = STATE_VARIABLE_HashTable_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HashTable_0_3 = next_value_of_STATE_VARIABLE_HashTable_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_hash_2_4_p_0(
  MR_Integer HashSize_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_HashVal_0_3,
  MR_Integer * STATE_VARIABLE_HashVal_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashVal_4 = STATE_VARIABLE_HashVal_0_3;
    else
    {
      MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_HashVal_15_15;
      MR_Integer Var_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) STATE_VARIABLE_HashVal_0_3);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_3;

      Var_16 = (MR_Integer) ((MR_Unsigned) N_10 + (MR_Unsigned) Var_17);
      STATE_VARIABLE_HashVal_15_15 = mercury__int__mod_2_f_0(Var_16, HashSize_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ns_11;
      next_value_of_STATE_VARIABLE_HashVal_0_3 = STATE_VARIABLE_HashVal_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_HashVal_0_3 = next_value_of_STATE_VARIABLE_HashVal_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_insert_open_address_loop_5_p_0(
  MR_Integer HashVal_6,
  MR_Word Key0_7,
  MR_Word Index0_8,
  MR_Word STATE_VARIABLE_HashTable_0_17,
  MR_Word * STATE_VARIABLE_HashTable_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word OldEntry1_10;
    MR_Word Map_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, (MR_Integer) 1))));
    MR_Box conv0_OldEntry1_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_26, HashVal_6, &conv0_OldEntry1_10);
    if (succeeded)
    {
      OldEntry1_10 = ((MR_Word) (conv0_OldEntry1_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Key1_11 = ((MR_Word) ((MR_hl_field(0, OldEntry1_10, (MR_Integer) 0))));
      MR_Word Index1_12 = ((MR_Word) ((MR_hl_field(0, OldEntry1_10, (MR_Integer) 1))));
      MR_Integer Next_13 = ((MR_Integer) ((MR_hl_field(0, OldEntry1_10, (MR_Integer) 2))));

      succeeded = (Next_13 == (MR_Integer) -1);
      if (succeeded)
      {
        MR_Integer FreeVal_14;
        MR_Word NewEntry_15;
        MR_Word OldEntry_16;
        MR_Integer Size_29 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, (MR_Integer) 0))));
        MR_Integer Max_31 = (MR_Integer) ((MR_Unsigned) Size_29 - (MR_Unsigned) 1);
        MR_Word Map0_34;
        MR_Integer Size_38;
        MR_Word Map0_39;
        MR_Word Map_40;

        ll_backend__fact_table__get_free_hash_slot_loop_4_p_0(STATE_VARIABLE_HashTable_0_17, HashVal_6, Max_31, &FreeVal_14);
        {
          NewEntry_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewEntry_15, 0) = ((MR_Box) (Key0_7));
          MR_hl_field(0, NewEntry_15, 1) = ((MR_Box) (Index0_8));
          MR_hl_field(0, NewEntry_15, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Size_38 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, (MR_Integer) 0))));
        Map0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, (MR_Integer) 1))));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), FreeVal_14, ((MR_Box) (NewEntry_15)), Map0_34, &Map0_39);
        {
          OldEntry_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OldEntry_16, 0) = ((MR_Box) (Key1_11));
          MR_hl_field(0, OldEntry_16, 1) = ((MR_Box) (Index1_12));
          MR_hl_field(0, OldEntry_16, 2) = ((MR_Box) (FreeVal_14));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), HashVal_6, ((MR_Box) (OldEntry_16)), Map0_39, &Map_40);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HashTable_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Size_38));
          MR_hl_field(0, base, 1) = ((MR_Box) (Map_40));
        }
      }
      else
      {
        MR_Integer next_value_of_HashVal_6 = Next_13;

        // direct tailcall eliminated
        ;
        HashVal_6 = next_value_of_HashVal_6;
        continue;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.hash_table_insert_open_address_loop\'/5", (MR_String) "hash table entry empty");
        return;
      }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__get_free_hash_slot_loop_4_p_0(
  MR_Word HashTable_5,
  MR_Integer Start_6,
  MR_Integer Max_7,
  MR_Integer * Free_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_9;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Start_6 + (MR_Unsigned) 1);
    MR_Word Map_14;
    MR_Box conv0_Var_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    Next_9 = mercury__int__mod_2_f_0(Var_11, Max_7);
    Map_14 = ((MR_Word) ((MR_hl_field(0, HashTable_5, (MR_Integer) 1))));
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0), Map_14, Next_9, &conv0_Var_10);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Integer next_value_of_Start_6 = Next_9;

      // direct tailcall eliminated
      ;
      Start_6 = next_value_of_Start_6;
      continue;
    }
    else
      *Free_8 = Next_9;
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_list_insert_many_7_p_0(
  MR_Word IsPrimaryTable_1,
  MR_Word FactMap_2,
  MR_Integer FactNum_3,
  MR_Integer InputArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HashList_0_6,
  MR_Word * STATE_VARIABLE_HashList_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashList_7 = STATE_VARIABLE_HashList_0_6;
    else
    {
      MR_Word Fact_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Facts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Arg_22;
      MR_Integer Index_23 = ((MR_Integer) ((MR_hl_field(0, Fact_19, (MR_Integer) 1))));
      MR_Integer HashIndex_24;
      MR_Word STATE_VARIABLE_HashList_27_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word InputArgs_32 = ((MR_Word) ((MR_hl_field(0, Fact_19, (MR_Integer) 0))));
      MR_Box conv0_Arg_22;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_6;

      mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0), InputArgs_32, InputArgNum_4, &conv0_Arg_22);
      Arg_22 = ((MR_Word) (conv0_Arg_22));
      switch (IsPrimaryTable_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv1_HashIndex_24;

            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FactMap_2, Index_23, &conv1_HashIndex_24);
            HashIndex_24 = ((MR_Integer) (conv1_HashIndex_24));
          }
          break;
        case (MR_Integer) 1:
          HashIndex_24 = FactNum_3;
          break;
      }
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (HashIndex_24));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (Arg_22));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (Var_29));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        STATE_VARIABLE_HashList_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_HashList_27_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, STATE_VARIABLE_HashList_27_27, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Facts_20;
      next_value_of_STATE_VARIABLE_HashList_0_6 = STATE_VARIABLE_HashList_27_27;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HashList_0_6 = next_value_of_STATE_VARIABLE_HashList_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__find_first_big_enough_prime_3_p_0(
  MR_Integer NumSlotsNeeded_1,
  MR_Word HeadVar__2_2,
  MR_Integer * Size_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.find_first_big_enough_prime\'/3", (MR_String) "hash table too large (max size 2147483647)");
        return;
      }
    else
    {
      MR_Integer Prime_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Primes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (Prime_9 > NumSlotsNeeded_1);
      if (succeeded)
        *Size_3 = Prime_9;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Primes_10;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__lower_level_collect_matching_facts_loop_6_p_0(
  MR_Integer InputArgNum_1,
  MR_Word MatchArg_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevMatchingFacts_5 = STATE_VARIABLE_RevMatchingFacts_0_4;
    }
    else
    {
      MR_Word Fact_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Facts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word InputArgs_18 = ((MR_Word) ((MR_hl_field(0, Fact_14, (MR_Integer) 0))));
      MR_Word Arg_21;
      MR_Box conv0_Arg_21;
      MR_Integer CastX_32;
      MR_Integer CastY_33;

      mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0), InputArgs_18, InputArgNum_1, &conv0_Arg_21);
      Arg_21 = ((MR_Word) (conv0_Arg_21));
      CastX_32 = (MR_Integer) (MatchArg_2);
      CastY_33 = (MR_Integer) (Arg_21);
      succeeded = (CastX_32 == CastY_33);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) MatchArg_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_26 = ((MR_Integer) ((MR_hl_field(0, MatchArg_2, (MR_Integer) 0))));
              MR_Integer ArgY1_27;

              succeeded = ((MR_tag((MR_Word) Arg_21)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_27 = ((MR_Integer) ((MR_hl_field(0, Arg_21, (MR_Integer) 0))));
                succeeded = (ArgX1_26 == ArgY1_27);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float ArgX1_28 = MR_unbox_float((MR_hl_field(1, MatchArg_2, (MR_Integer) 0)));
              MR_Float ArgY1_29;

              succeeded = ((MR_tag((MR_Word) Arg_21)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_29 = MR_unbox_float((MR_hl_field(1, Arg_21, (MR_Integer) 0)));
                succeeded = (ArgX1_28 == ArgY1_29);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_30 = ((MR_String) ((MR_hl_field(2, MatchArg_2, (MR_Integer) 0))));
              MR_String ArgY1_31;

              succeeded = ((MR_tag((MR_Word) Arg_21)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_31 = ((MR_String) ((MR_hl_field(2, Arg_21, (MR_Integer) 0))));
                succeeded = (strcmp(ArgX1_30, ArgY1_31) == 0);
              }
            }
            break;
        }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevMatchingFacts_24_24;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevMatchingFacts_0_4;

        {
          STATE_VARIABLE_RevMatchingFacts_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_24_24, 0) = ((MR_Box) (Fact_14));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingFacts_0_4));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Facts_15;
        next_value_of_STATE_VARIABLE_RevMatchingFacts_0_4 = STATE_VARIABLE_RevMatchingFacts_24_24;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevMatchingFacts_0_4 = next_value_of_STATE_VARIABLE_RevMatchingFacts_0_4;
        continue;
      }
      else
      {
        *HeadVar__6_6 = HeadVar__3_3;
        *STATE_VARIABLE_RevMatchingFacts_5 = STATE_VARIABLE_RevMatchingFacts_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_data_8_p_0(
  MR_Word OutputStream_1,
  MR_Word MaybeProgressStream_2,
  MR_Integer FactTableSize_3,
  MR_String StructName_4,
  MR_Word HeadVar__5_5,
  MR_Integer FactNum_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Fact_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Facts_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer Var_28;
      MR_Integer Var_44;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Integer next_value_of_FactNum_6;

      Var_44 = mercury__int__mod_2_f_0(FactNum_6, FactTableSize_3);
      succeeded = ((MR_Integer) 0 == Var_44);
      if (succeeded)
      {
        succeeded = (FactNum_6 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_String Var_72;

          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "};\n\n");
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "const struct ");
          mercury__io__write_string_4_p_0(OutputStream_1, StructName_4);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "_struct ");
          mercury__io__write_string_4_p_0(OutputStream_1, StructName_4);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_6, &Var_72);
          mercury__io__write_string_4_p_0(OutputStream_1, Var_72);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "[] = {\n");
        }
        if (!((MaybeProgressStream_2 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ProgressStream_31 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_2, (MR_Integer) 0))));
          MR_String Var_48;

          mercury__io__write_string_4_p_0(ProgressStream_31, (MR_String) "% Writing fact ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_6, &Var_48);
          mercury__io__write_string_4_p_0(ProgressStream_31, Var_48);
          mercury__io__write_string_4_p_0(ProgressStream_31, (MR_String) "\n");
        }
      }
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\t{");
      ll_backend__fact_table__write_fact_args_4_p_0(OutputStream_1, Fact_21);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " },\n");
      Var_28 = (MR_Integer) ((MR_Unsigned) FactNum_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Facts_22;
      next_value_of_FactNum_6 = Var_28;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      FactNum_6 = next_value_of_FactNum_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__read_sort_file_line_9_p_0(
  MR_Word InputStream_10,
  MR_String InputFileName_11,
  MR_Word FactArgInfos_12,
  MR_Word Modes_13,
  MR_Word * MaybeSortFileLine_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word Result_17;

  mercury__io__read_line_4_p_0(InputStream_10, &Result_17);
  switch (MR_tag((MR_Word) Result_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MaybeSortFileLine_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LineChars_18 = ((MR_Word) ((MR_hl_field(1, Result_17, (MR_Integer) 0))));
        MR_String LineString_19;
        MR_Word SortFileLine_20;
        MR_String InputArgsString_48;
        MR_String OutputArgsString_57;
        MR_Integer Index0_58;
        MR_Integer Pos0_47;
        MR_String Line1_49;
        MR_String Line2_51;
        MR_Integer Pos1_52;
        MR_String IndexString_53;
        MR_String Line3_54;
        MR_String Line4_56;
        MR_String Var_66;
        MR_String Var_67;
        MR_Char Var_50;
        MR_Char Var_55;

        mercury__string__from_char_list_2_p_0(LineChars_18, &LineString_19);
        succeeded = mercury__string__sub_string_search_3_p_0(LineString_19, (MR_String) "~", &Pos0_47);
        if (succeeded)
        {
          mercury__string__split_4_p_0(LineString_19, Pos0_47, &InputArgsString_48, &Line1_49);
          succeeded = mercury__string__first_char_3_p_3(Line1_49, &Var_50, &Line2_51);
          if (succeeded)
          {
            Var_66 = (MR_String) "~";
            succeeded = mercury__string__sub_string_search_3_p_0(Line2_51, Var_66, &Pos1_52);
            if (succeeded)
            {
              mercury__string__split_4_p_0(Line2_51, Pos1_52, &IndexString_53, &Line3_54);
              succeeded = mercury__string__first_char_3_p_3(Line3_54, &Var_55, &Line4_56);
              if (succeeded)
              {
                Var_67 = (MR_String) "\n";
                succeeded = mercury__string__remove_suffix_3_p_0(Line4_56, Var_67, &OutputArgsString_57);
                if (succeeded)
                  succeeded = mercury__string__to_int_2_p_0(IndexString_53, &Index0_58);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word InputArgStrings_59;
          MR_Word InputArgs_60;
          MR_Word OutputArgStrings_61;
          MR_Word OutputArgs_64;

          ll_backend__fact_table__split_key_to_arg_strings_2_p_0(InputArgsString_48, &InputArgStrings_59);
          ll_backend__fact_table__get_input_args_list_4_p_0(FactArgInfos_12, Modes_13, InputArgStrings_59, &InputArgs_60);
          ll_backend__fact_table__split_key_to_arg_strings_2_p_0(OutputArgsString_57, &OutputArgStrings_61);
          if ((OutputArgStrings_61 == (MR_Word) ((MR_Unsigned) 0U)))
            OutputArgs_64 = (MR_Word) ((MR_Unsigned) 0U);
          else
            ll_backend__fact_table__get_output_args_list_3_p_0(FactArgInfos_12, OutputArgStrings_61, &OutputArgs_64);
          {
            SortFileLine_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SortFileLine_20, 0) = ((MR_Box) (InputArgs_60));
            MR_hl_field(0, SortFileLine_20, 1) = ((MR_Box) (Index0_58));
            MR_hl_field(0, SortFileLine_20, 2) = ((MR_Box) (OutputArgs_64));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.split_sort_file_line\'/4", (MR_String) "sort file format incorrect");
            return;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSortFileLine_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SortFileLine_20));
        }
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ErrorCode_21 = ((MR_Word) ((MR_hl_field(2, Result_17, (MR_Integer) 0))));
        MR_String ErrorMessage_22;
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_40;

        mercury__io__error_message_2_p_0(ErrorCode_21, &ErrorMessage_22);
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (InputFileName_11));
        }
        {
          Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_40, 1) = ((MR_Box) (ErrorMessage_22));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[10])));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_23, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[99])));
          MR_hl_field(1, Pieces_23, 1) = ((MR_Box) (Var_32));
        }
        {
          Spec_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.read_sort_file_line\'/9"));
          MR_hl_field(2, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 68U));
          MR_hl_field(2, Spec_24, 3) = ((MR_Box) (Pieces_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
        }
        *MaybeSortFileLine_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__fact_table__get_output_args_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgStrings0_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Info_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Infos_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_9 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
      MR_Word IsOutput_11 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 0))) & (MR_Integer) 1);

      switch (IsOutput_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          if ((ArgStrings0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_output_args_list\'/3", (MR_String) "not enough ArgStrings");
              return;
            }
          else
          {
            MR_String ArgString_12 = ((MR_String) ((MR_hl_field(1, ArgStrings0_2, (MR_Integer) 0))));
            MR_Word ArgStrings_13 = ((MR_Word) ((MR_hl_field(1, ArgStrings0_2, (MR_Integer) 1))));
            MR_Word Arg_14;
            MR_Word Args0_15;

            switch (Type_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Float F_19;

                  succeeded = mercury__string__to_float_2_p_0(ArgString_12, &F_19);
                  if (succeeded)
                    {
                      Arg_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Arg_14, 0) = MR_box_float(F_19);
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                      return;
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Integer Int_18;

                  succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ArgString_12, &Int_18);
                  if (succeeded)
                    {
                      Arg_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Arg_14, 0) = ((MR_Box) (Int_18));
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                      return;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Chars0_20;
                  MR_Word RevChars_21;
                  MR_Word Chars_22;
                  MR_String S_23;

                  mercury__string__to_char_list_2_p_0(ArgString_12, &Chars0_20);
                  ll_backend__fact_table__remove_sort_file_escapes_3_p_0(Chars0_20, (MR_Word) ((MR_Unsigned) 0U), &RevChars_21);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars_21, &Chars_22);
                  mercury__string__from_char_list_2_p_0(Chars_22, &S_23);
                  {
                    Arg_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Arg_14, 0) = ((MR_Box) (S_23));
                  }
                }
                break;
            }
            ll_backend__fact_table__get_output_args_list_3_p_0(Infos_6, ArgStrings_13, &Args0_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Arg_14));
              MR_hl_field(1, base, 1) = ((MR_Box) (Args0_15));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Infos_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__get_input_args_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ArgStrings0_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/4", (MR_String) "too many argmodes");
          return;
        }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/4", (MR_String) "too many fact_arg_infos");
          return;
        }
      else
      {
        MR_Word Mode_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Modes_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

        switch (Mode_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((ArgStrings0_3 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/4", (MR_String) "not enough ArgStrings");
                return;
              }
            else
            {
              MR_String ArgString_24 = ((MR_String) ((MR_hl_field(1, ArgStrings0_3, (MR_Integer) 0))));
              MR_Word ArgStrings_25 = ((MR_Word) ((MR_hl_field(1, ArgStrings0_3, (MR_Integer) 1))));
              MR_Word Type_26 = ((((MR_Unsigned) ((MR_hl_field(0, Var_34, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
              MR_Word Arg_29;
              MR_Word ArgsTail_30;

              switch (Type_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Float F_36;

                    succeeded = mercury__string__to_float_2_p_0(ArgString_24, &F_36);
                    if (succeeded)
                      {
                        Arg_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Arg_29, 0) = MR_box_float(F_36);
                      }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                        return;
                      }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_35;

                    succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ArgString_24, &Int_35);
                    if (succeeded)
                      {
                        Arg_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Arg_29, 0) = ((MR_Box) (Int_35));
                      }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                        return;
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Chars0_37;
                    MR_Word RevChars_38;
                    MR_Word Chars_39;
                    MR_String S_40;

                    mercury__string__to_char_list_2_p_0(ArgString_24, &Chars0_37);
                    ll_backend__fact_table__remove_sort_file_escapes_3_p_0(Chars0_37, (MR_Word) ((MR_Unsigned) 0U), &RevChars_38);
                    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars_38, &Chars_39);
                    mercury__string__from_char_list_2_p_0(Chars_39, &S_40);
                    {
                      Arg_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Arg_29, 0) = ((MR_Box) (S_40));
                    }
                  }
                  break;
              }
              ll_backend__fact_table__get_input_args_list_4_p_0(Var_33, Modes_21, ArgStrings_25, &ArgsTail_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Arg_29));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArgsTail_30));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_33;
              MR_Word next_value_of_HeadVar__2_2 = Modes_21;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__remove_sort_file_escapes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevChars_0_2,
  MR_Word * STATE_VARIABLE_RevChars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevChars_3 = STATE_VARIABLE_RevChars_0_2;
    else
    {
      MR_Char C0_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cs0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (C0_7 == (MR_Char) 92);
      if (succeeded)
        if ((Cs0_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
            return;
          }
        else
        {
          MR_Char C1_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, Cs0_8, (MR_Integer) 0)));
          MR_Word Cs1_11 = ((MR_Word) ((MR_hl_field(1, Cs0_8, (MR_Integer) 1))));
          MR_Char C_12;
          MR_Word STATE_VARIABLE_RevChars_17_17;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_RevChars_0_2;

          succeeded = (C1_10 == (MR_Char) 92);
          if (succeeded)
            C_12 = (MR_Char) 92;
          else
          {
            succeeded = (C1_10 == (MR_Char) 99);
            if (succeeded)
              C_12 = (MR_Char) 58;
            else
            {
              succeeded = (C1_10 == (MR_Char) 116);
              if (succeeded)
                C_12 = (MR_Char) 126;
              else
              {
                succeeded = (C1_10 == (MR_Char) 110);
                if (succeeded)
                  C_12 = (MR_Char) 10;
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
                    return;
                  }
              }
            }
          }
          {
            STATE_VARIABLE_RevChars_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevChars_17_17, 0) = ((MR_Box) (MR_Word) (C_12));
            MR_hl_field(1, STATE_VARIABLE_RevChars_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_2));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Cs1_11;
          next_value_of_STATE_VARIABLE_RevChars_0_2 = STATE_VARIABLE_RevChars_17_17;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_RevChars_0_2 = next_value_of_STATE_VARIABLE_RevChars_0_2;
          continue;
        }
      else
      {
        MR_Word STATE_VARIABLE_RevChars_21_21;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevChars_0_2;

        {
          STATE_VARIABLE_RevChars_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevChars_21_21, 0) = ((MR_Box) (MR_Word) (C0_7));
          MR_hl_field(1, STATE_VARIABLE_RevChars_21_21, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Cs0_8;
        next_value_of_STATE_VARIABLE_RevChars_0_2 = STATE_VARIABLE_RevChars_21_21;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_RevChars_0_2 = next_value_of_STATE_VARIABLE_RevChars_0_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__split_key_to_arg_strings_2_p_0(
  MR_String Key0_3,
  MR_Word * ArgStrings_4)
{
  MR_bool succeeded = (strcmp(Key0_3, (MR_String) "") == 0);

  if (succeeded)
    *ArgStrings_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String ArgString_6;
    MR_String Key2_9;
    MR_Integer Pos_5;
    MR_String Key1_7;
    MR_Char Var_8;

    succeeded = mercury__string__sub_string_search_3_p_0(Key0_3, (MR_String) ":", &Pos_5);
    if (succeeded)
    {
      mercury__string__split_4_p_0(Key0_3, Pos_5, &ArgString_6, &Key1_7);
      succeeded = mercury__string__first_char_3_p_3(Key1_7, &Var_8, &Key2_9);
    }
    if (succeeded)
    {
      MR_Word ArgStrings0_10;

      ll_backend__fact_table__split_key_to_arg_strings_2_p_0(Key2_9, &ArgStrings0_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgStrings_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgString_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgStrings0_10));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.split_key_to_arg_strings\'/2", (MR_String) "sort file key format is incorrect");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_new_data_array_opening_brace_5_p_0(
  MR_Word OutputStream_6,
  MR_String StructName_7,
  MR_Integer FactNum_8)
{
  MR_String Var_28;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "const struct ");
  mercury__io__write_string_4_p_0(OutputStream_6, StructName_7);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "_struct ");
  mercury__io__write_string_4_p_0(OutputStream_6, StructName_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_8, &Var_28);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_28);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[] = {\n");
}

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_2_9_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word GenInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    }
    else
    {
      MR_Integer ProcId_23;
      MR_String FileName_24;
      MR_Word ProcFiles_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ProcInfo0_29;
      MR_String Command0_30;
      MR_String Command_31;
      MR_Word Result_32;
      MR_Word Determinism_40;
      MR_Word ProcInfo_46;
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_110_110;
      MR_Word STATE_VARIABLE_ProcTable_114_114;
      MR_String Var_119;
      MR_String Var_121;
      MR_String Var_122;
      MR_String Var_124;
      MR_String Var_125;
      MR_Box conv0_ProcInfo0_29;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      ProcId_23 = ((MR_Integer) ((MR_hl_field(0, Var_53, (MR_Integer) 0))));
      FileName_24 = ((MR_String) ((MR_hl_field(0, Var_53, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_23)), &conv0_ProcInfo0_29);
      ProcInfo0_29 = ((MR_Word) (conv0_ProcInfo0_29));
      Var_119 = mercury__string__f_43_43_2_f_0(FileName_24, (MR_String) " | LC_ALL=C sort -cu >/dev/null 2>&1");
      Var_121 = mercury__string__f_43_43_2_f_0((MR_String) " && cut -d\'~\' -f1 ", Var_119);
      Var_122 = mercury__string__f_43_43_2_f_0(FileName_24, Var_121);
      Var_124 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_122);
      Var_125 = mercury__string__f_43_43_2_f_0(FileName_24, Var_124);
      Command0_30 = mercury__string__f_43_43_2_f_0((MR_String) "LC_ALL=C sort -o ", Var_125);
      parse_tree__module_cmds__make_command_string_3_p_0(Command0_30, (MR_Integer) 1, &Command_31);
      if ((MaybeProgressStream_1 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__call_system__call_system_4_p_0(Command_31, &Result_32);
      else
      {
        MR_Word ProgressStream_33 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_1, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "% Invoking system command \140");
        mercury__io__write_string_4_p_0(ProgressStream_33, Command_31);
        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "\' ...");
        mercury__io__call_system__call_system_4_p_0(Command_31, &Result_32);
        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "done.\n");
      }
      if (((MR_tag((MR_Word) Result_32)) == (MR_Integer) 1))
      {
        MR_Word ErrorCode_45 = ((MR_Word) ((MR_hl_field(1, Result_32, (MR_Integer) 0))));

        ll_backend__fact_table__add_call_system_error_6_p_0((MR_String) "sort", ErrorCode_45, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_110_110);
        Determinism_40 = (MR_Integer) 6;
      }
      else
      {
        MR_Integer ExitStatus_34 = ((MR_Integer) ((MR_hl_field(0, Result_32, (MR_Integer) 0))));

        succeeded = (ExitStatus_34 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Word MaybeAllInProcId_37;

          succeeded = (ProcFiles_25 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeAllInProcId_37 = ((MR_Word) ((MR_hl_field(0, GenInfo_2, (MR_Integer) 2))));
            succeeded = (MaybeAllInProcId_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          Determinism_40 = (MR_Integer) 1;
          STATE_VARIABLE_Specs_110_110 = STATE_VARIABLE_Specs_0_6;
        }
        else
        {
          succeeded = (ExitStatus_34 >= (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word MaybeDet_41;
            MR_Word Var_117;

            hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_29, &MaybeDet_41);
            succeeded = (MaybeDet_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_117 = ((MR_Word) ((MR_hl_field(1, MaybeDet_41, (MR_Integer) 0))));
              switch (Var_117) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
              Determinism_40 = (MR_Integer) 5;
            else
              Determinism_40 = (MR_Integer) 3;
            STATE_VARIABLE_Specs_110_110 = STATE_VARIABLE_Specs_0_6;
          }
          else
          {
            MR_String ProgName_42;
            MR_Word Pieces_43;
            MR_Word Spec_44;
            MR_Word Var_79;

            mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_42);
            {
              Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_79, 0) = ((MR_Box) (ProgName_42));
            }
            {
              Pieces_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_43, 0) = ((MR_Box) (Var_79));
              MR_hl_field(1, Pieces_43, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[94])));
            }
            {
              Spec_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.infer_determinism_pass_2\'/9"));
              MR_hl_field(2, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 68U));
              MR_hl_field(2, Spec_44, 3) = ((MR_Box) (Pieces_43));
            }
            {
              STATE_VARIABLE_Specs_110_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_110_110, 0) = ((MR_Box) (Spec_44));
              MR_hl_field(1, STATE_VARIABLE_Specs_110_110, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
            }
            Determinism_40 = (MR_Integer) 6;
          }
        }
      }
      hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Determinism_40, ProcInfo0_29, &ProcInfo_46);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_46)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_114_114);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcFiles_25;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_114_114;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_110_110;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__add_call_system_error_6_p_0(
  MR_String Cmd_7,
  MR_Word ErrorCode_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_String ProgName_11;
  MR_String ErrorMsg_12;
  MR_Word Pieces_13;
  MR_Word Spec_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_11);
  mercury__io__error_message_2_p_0(ErrorCode_8, &ErrorMsg_12);
  {
    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_21, 0) = ((MR_Box) (ProgName_11));
  }
  Var_23 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66]));
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (Cmd_7));
  }
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ErrorMsg_12));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[134])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  {
    Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Pieces_13));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_47, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_47, 3) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_call_system_error\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_46));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

static void MR_CALL 
ll_backend__fact_table__close_sort_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcStream_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ProcStreams_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, ProcStream_8, (MR_Integer) 0))));
    MR_String FileName_11 = ((MR_String) ((MR_hl_field(0, ProcStream_8, (MR_Integer) 2))));
    MR_Word ProcFiles_12;
    MR_Word Stream_15 = ((MR_Word) ((MR_hl_field(0, ProcStream_8, (MR_Integer) 3))));
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (ProcId_10));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (FileName_11));
    }
    mercury__io__close_output_3_p_0(Stream_15);
    ll_backend__fact_table__close_sort_files_4_p_0(ProcStreams_9, &ProcFiles_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcFiles_12));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table__open_sort_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_44;

  conv1_LambdaHeadVar__2_44 = ll_backend__fact_table__IntroducedFrom__func__open_sort_files__1233__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_44));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table__open_sort_files_7_p_0(
  MR_Word ProcMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
  }
  else
  {
    MR_Integer HeadProcId_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailProcIds_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SortFileNameResult_21;

    libs__file_util__open_temp_output_3_p_0(&SortFileNameResult_21);
    if (((MR_tag((MR_Word) SortFileNameResult_21)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_35 = ((MR_String) ((MR_hl_field(1, SortFileNameResult_21, (MR_Integer) 0))));
      MR_Word Var_47;
      MR_Word Var_49;
      MR_Word Spec_60;

      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (ErrorMessage_35));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (*HeadVar__3_3));
      }
      {
        Spec_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_pieces\'/3"));
        MR_hl_field(2, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(2, Spec_60, 3) = ((MR_Box) (Var_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_60));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
      }
    }
    else
    {
      MR_String SortFileName_22;
      MR_Word Stream_23;
      MR_Word ProcEntry_24;
      MR_Word FactTableVars_25;
      MR_Word Modes_28;
      MR_Word HeadProcStream_33;
      MR_Word TailProcStreams_34;
      MR_Tuple Var_41 = ((MR_Tuple) ((MR_hl_field(0, SortFileNameResult_21, (MR_Integer) 0))));
      MR_Box conv0_ProcEntry_24;

      SortFileName_22 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
      Stream_23 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), ProcMap_1, ((MR_Box) (HeadProcId_16)), &conv0_ProcEntry_24);
      ProcEntry_24 = ((MR_Word) (conv0_ProcEntry_24));
      FactTableVars_25 = ((MR_Word) ((MR_hl_field(0, ProcEntry_24, (MR_Integer) 0))));
      Modes_28 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[3]), FactTableVars_25);
      {
        HeadProcStream_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadProcStream_33, 0) = ((MR_Box) (HeadProcId_16));
        MR_hl_field(0, HeadProcStream_33, 1) = ((MR_Box) (Modes_28));
        MR_hl_field(0, HeadProcStream_33, 2) = ((MR_Box) (SortFileName_22));
        MR_hl_field(0, HeadProcStream_33, 3) = ((MR_Box) (Stream_23));
      }
      ll_backend__fact_table__open_sort_files_7_p_0(ProcMap_1, TailProcIds_17, &TailProcStreams_34, STATE_VARIABLE_Specs_0_4, STATE_VARIABLE_Specs_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadProcStream_33));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailProcStreams_34));
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__create_fact_table_header_4_p_0(
  MR_Word PredSymName_5,
  MR_Word FactArgInfos_6,
  MR_String * HeaderCode_7,
  MR_String * StructName_8)
{
  MR_bool succeeded;
  MR_String Identifier_9;
  MR_String StructContents_10;
  MR_String StructDef_11;
  MR_String Var_14;

  Identifier_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredSymName_5);
  Var_14 = mercury__string__f_43_43_2_f_0(Identifier_9, (MR_String) "_fact_table");
  *StructName_8 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_14);
  ll_backend__fact_table__create_fact_table_struct_3_p_0(FactArgInfos_6, (MR_Integer) 1, &StructContents_10);
  succeeded = (strcmp(StructContents_10, (MR_String) "") == 0);
  if (succeeded)
    StructDef_11 = (MR_String) "";
  else
  {
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_21;

    Var_21 = mercury__string__f_43_43_2_f_0(StructContents_10, (MR_String) "};\n\n");
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_struct {\n", Var_21);
    Var_18 = mercury__string__f_43_43_2_f_0(*StructName_8, Var_19);
    StructDef_11 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_18);
  }
  *HeaderCode_7 = mercury__string__f_43_43_2_f_0(StructDef_11, (MR_String) "\n#ifndef MERCURY_FACT_TABLE_HASH_TABLES\n#define MERCURY_FACT_TABLE_HASH_TABLES\n\nstruct MR_fact_table_hash_table_s {\n    MR_Integer size;                        " "    // size of the hash table\n    struct MR_fact_table_hash_entry_s *table;   // the actual table\n};\n\nstruct MR_fact_table_hash_table_f {\n    MR_Integer size;  " "                          // size of the hash table\n    struct MR_fact_table_hash_entry_f *table;   // the actual table\n};\n\nstruct MR_fact_table_hash_table_i {\n" "    MR_Integer size;                            // size of the hash table\n    struct MR_fact_table_hash_entry_i *table;   // the actual table\n};\n\n// hash table " "for string keys\nstruct MR_fact_table_hash_entry_s {\n    MR_ConstString  key;        // lookup key\n    const MR_Word   *index;     // index into fact table data " "array or\n                                // pointer to hash table for next argument\n#if TAGBITS < 2\n    short type;                 // 0 if entry empty,\n       " "                         // 1 if entry is a pointer to the data table\n                                // 2 if entry is a pointer to another\n                    " "            //   hash table\n#endif\n    int next;                   // location of next entry with the same hash\n                                // value\n};\n\n// " "hash table for float keys\nstruct MR_fact_table_hash_entry_f {\n    MR_Float        key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#en" "dif\n    int             next;\n};\n\n// hash table for int keys\nstruct MR_fact_table_hash_entry_i {\n    MR_Integer      key;\n    const MR_Word   *index;\n#if TAGBIT" "S < 2\n    short           type;\n#endif\n    int             next;\n};\n\n#if TAGBITS >= 2\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           MR_mkword(MR_m" "ktag(t), MR_mkbody(i))\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         MR_mkword(MR_mktag(t), p)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       " "         MR_tag((MR_Word)((p).index))\n    #define MR_FACT_TABLE_HASH_INDEX(w)                     MR_unmkbody(w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)      " "             MR_body(w, MR_tag(w))\n#else\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           ((const MR_Word *) i), (t)\n    #define MR_FACT_TABLE_MAKE_T" "AGGED_POINTER(p, t)         ((const MR_Word *) p), (t)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       ((p).type)\n    #define MR_FACT_TABLE_HASH_INDEX(w)    " "        (w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)          (w)\n#endif\n\n#endif // not MERCURY_FACT_TABLE_HASH_TABLES\n");
}

static void MR_CALL 
ll_backend__fact_table__create_fact_table_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Infos_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String StructContentsTail_9;
    MR_Word Type_10;
    MR_Word IsOutput_12;
    MR_String TypeStr_13;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);

    ll_backend__fact_table__create_fact_table_struct_3_p_0(Infos_6, Var_15, &StructContentsTail_9);
    Type_10 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    IsOutput_12 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Type_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        TypeStr_13 = (MR_String) "MR_Float";
        break;
      case (MR_Integer) 0:
        TypeStr_13 = (MR_String) "MR_Integer";
        break;
      case (MR_Integer) 2:
        TypeStr_13 = (MR_String) "MR_ConstString";
        break;
    }
    switch (IsOutput_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String StructField_14;
          MR_String Var_24;
          MR_String Var_31;
          MR_String Var_33;
          MR_String Var_34;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_2, &Var_24);
          Var_31 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ";\n");
          Var_33 = mercury__string__f_43_43_2_f_0((MR_String) " V_", Var_31);
          Var_34 = mercury__string__f_43_43_2_f_0(TypeStr_13, Var_33);
          StructField_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_34);
          mercury__string__append_3_p_2(StructField_14, StructContentsTail_9, HeadVar__3_3);
        }
        break;
      case (MR_Integer) 0:
        *HeadVar__3_3 = StructContentsTail_9;
        break;
    }
  }
}

static MR_String MR_CALL 
ll_backend__fact_table__fact_table_file_header_1_f_0(
  MR_String FileName_3)
{
  MR_String FileHeader_4;
  MR_String Version_5;
  MR_String Fullarch_6;
  MR_Word Var_7;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_21;

  mercury__library__version_2_p_0(&Version_5, &Fullarch_6);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Fullarch_6));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[71])));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) ((MR_String) "** configured for "));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) ((MR_String) ",\n"));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Version_5));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler, version "));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_String) "\'\n"));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (FileName_3));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) ((MR_String) "/*\n"));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_9));
  }
  mercury__string__append_list_2_p_0(Var_7, &FileHeader_4);
  return FileHeader_4;
}

static void MR_CALL 
ll_backend__fact_table__read_in_and_compile_facts_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableSize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Word ProcStreams_23,
  MR_Word MaybeOutput_24,
  MR_Integer STATE_VARIABLE_FactNum_0_38,
  MR_Integer * STATE_VARIABLE_FactNum_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result0_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FileStream_16, &Result0_28);
    switch (MR_tag((MR_Word) Result0_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_FactNum_39 = STATE_VARIABLE_FactNum_0_38;
          *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Message_29 = ((MR_String) ((MR_hl_field(1, Result0_28, (MR_Integer) 0))));
          MR_Integer LineNum_30 = ((MR_Integer) ((MR_hl_field(1, Result0_28, (MR_Integer) 1))));
          MR_Word Context_31;
          MR_Word Var_45;
          MR_Word Var_47;
          MR_Word Spec_73;

          {
            Context_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_31, 0) = ((MR_Box) (FileName_17));
            MR_hl_field(0, Context_31, 1) = ((MR_Box) (LineNum_30));
          }
          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (Message_29));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
            MR_hl_field(1, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(1, Spec_73, 3) = ((MR_Box) (Context_31));
            MR_hl_field(1, Spec_73, 4) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_41 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_73));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
          }
          *STATE_VARIABLE_FactNum_39 = STATE_VARIABLE_FactNum_0_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_32 = ((MR_Word) ((MR_hl_field(2, Result0_28, (MR_Integer) 0))));
          MR_Word Term_33 = ((MR_Word) ((MR_hl_field(2, Result0_28, (MR_Integer) 1))));
          MR_Word CheckSpecs_35;
          MR_Integer STATE_VARIABLE_FactNum_56_56;
          MR_Word STATE_VARIABLE_Specs_58_58;
          MR_Integer Var_61;
          MR_Integer next_value_of_STATE_VARIABLE_FactNum_0_38;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_40;

          Var_61 = mercury__int__mod_2_f_0(STATE_VARIABLE_FactNum_0_38, FactTableSize_19);
          succeeded = ((MR_Integer) 0 == Var_61);
          if (succeeded)
            if (!((MaybeProgressStream_18 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_34 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_18, (MR_Integer) 0))));
              MR_String Var_65;

              mercury__io__write_string_4_p_0(ProgressStream_34, (MR_String) "% Read fact ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), STATE_VARIABLE_FactNum_0_38, &Var_65);
              mercury__io__write_string_4_p_0(ProgressStream_34, Var_65);
              mercury__io__write_string_4_p_0(ProgressStream_34, (MR_String) "\n");
            }
          ll_backend__fact_table__check_fact_term_15_p_0(FileStream_16, FileName_17, MaybeProgressStream_18, FactTableSize_19, PredInfo_20, NumFactArgInfos_21, FactArgInfos_22, STATE_VARIABLE_FactNum_0_38, VarSet_32, Term_33, ProcStreams_23, MaybeOutput_24, &CheckSpecs_35);
          if ((CheckSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_FactNum_56_56 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FactNum_0_38 + (MR_Unsigned) 1);
            STATE_VARIABLE_Specs_58_58 = STATE_VARIABLE_Specs_0_40;
          }
          else
          {
            STATE_VARIABLE_Specs_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_35, STATE_VARIABLE_Specs_0_40);
            STATE_VARIABLE_FactNum_56_56 = STATE_VARIABLE_FactNum_0_38;
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_FactNum_0_38 = STATE_VARIABLE_FactNum_56_56;
          next_value_of_STATE_VARIABLE_Specs_0_40 = STATE_VARIABLE_Specs_58_58;
          STATE_VARIABLE_FactNum_0_38 = next_value_of_STATE_VARIABLE_FactNum_0_38;
          STATE_VARIABLE_Specs_0_40 = next_value_of_STATE_VARIABLE_Specs_0_40;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_term_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableSize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Integer FactNum_23,
  MR_Word VarSet_24,
  MR_Word Term_25,
  MR_Word ProcStreams_26,
  MR_Word MaybeOutput_27,
  MR_Word * Specs_28)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_25)) == (MR_Integer) 0))
  {
    MR_Word Functor_35 = ((MR_Word) ((MR_hl_field(0, Term_25, (MR_Integer) 0))));
    MR_Word ArgTerms0_36 = ((MR_Word) ((MR_hl_field(0, Term_25, (MR_Integer) 1))));
    MR_Word Context_83 = ((MR_Word) ((MR_hl_field(0, Term_25, (MR_Integer) 2))));
    MR_String FunctorAtom_37;

    succeeded = ((MR_tag((MR_Word) Functor_35)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorAtom_37 = ((MR_String) ((MR_hl_field(0, Functor_35, (MR_Integer) 0))));
      {
        MR_Word PredOrFunc_38;
        MR_String PredName_39;
        MR_Word ArgTerms_40;

        PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_20, &PredName_39);
        switch (PredOrFunc_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_84_84;
              MR_Word BeforeEqualTerm_41;
              MR_Word BeforeEqualTerms_43;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_String Var_86;

              succeeded = (strcmp(FunctorAtom_37, (MR_String) "=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms0_36 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BeforeEqualTerm_41 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_36, (MR_Integer) 0))));
                  Var_55 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_36, (MR_Integer) 1))));
                  succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
                    succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) BeforeEqualTerm_41)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_57 = ((MR_Word) ((MR_hl_field(0, BeforeEqualTerm_41, (MR_Integer) 0))));
                        BeforeEqualTerms_43 = ((MR_Word) ((MR_hl_field(0, BeforeEqualTerm_41, (MR_Integer) 1))));
                        succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_86 = ((MR_String) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
                          succeeded = (strcmp(PredName_39, Var_86) == 0);
                          if (succeeded)
                          {
                            TypeInfo_84_84 = (MR_Word) (&ll_backend__fact_table_scalar_common_1[0]);
                            ArgTerms_40 = mercury__list__f_43_43_2_f_0(TypeInfo_84_84, BeforeEqualTerms_43, Var_55);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 0:
            {
              succeeded = (strcmp(FunctorAtom_37, PredName_39) == 0);
              if (succeeded)
              {
                ArgTerms_40 = ArgTerms0_36;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        if (succeeded)
        {
          MR_Integer NumArgTerms_87;

          mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_1[0]), ArgTerms_40, &NumArgTerms_87);
          succeeded = (NumFactArgInfos_21 == NumArgTerms_87);
          if (succeeded)
          {
            MR_Word PredOrFunc_88;
            MR_Word FactArgs_89;
            MR_String FactNumStr_90;
            MR_Word Var_96;
            MR_Word OutputStream_91;
            MR_String StructName_92;
            MR_Word Var_98;

            PredOrFunc_88 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
            ll_backend__fact_table__check_fact_type_and_mode_8_p_0(PredOrFunc_88, VarSet_24, FactArgInfos_22, ArgTerms_40, (MR_Integer) 1, &FactArgs_89, (MR_Word) ((MR_Unsigned) 0U), Specs_28);
            mercury__string__int_to_string_2_p_0(FactNum_23, &FactNumStr_90);
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (FactArgInfos_22));
            }
            ll_backend__fact_table__write_sort_file_lines_6_p_0(FactNumStr_90, FactArgs_89, Var_96, ProcStreams_26);
            succeeded = (*Specs_28 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (MaybeOutput_27 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_98 = ((MR_Word) ((MR_hl_field(1, MaybeOutput_27, (MR_Integer) 0))));
                OutputStream_91 = ((MR_Word) ((MR_hl_field(0, Var_98, (MR_Integer) 0))));
                StructName_92 = ((MR_String) ((MR_hl_field(0, Var_98, (MR_Integer) 1))));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              ll_backend__fact_table__write_fact_data_8_p_0(OutputStream_91, MaybeProgressStream_18, FactTableSize_19, StructName_92, FactArgs_89, FactNum_23);
          }
          else
          {
            MR_Word Pieces_93;
            MR_Word Var_101;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_109;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Spec_117;

            {
              Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_105, 1) = ((MR_Box) (NumFactArgInfos_21));
            }
            {
              Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_113, 1) = ((MR_Box) (NumArgTerms_87));
            }
            {
              Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
              MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])));
            }
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[62])));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
            }
            {
              Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[61])));
              MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
            }
            {
              Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
              MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
            }
            {
              Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[60])));
              MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_104));
            }
            {
              Pieces_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_93, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[59])));
              MR_hl_field(1, Pieces_93, 1) = ((MR_Box) (Var_101));
            }
            {
              Spec_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_117, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
              MR_hl_field(1, Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_117, 2) = ((MR_Box) ((MR_Unsigned) 68U));
              MR_hl_field(1, Spec_117, 3) = ((MR_Box) (Context_83));
              MR_hl_field(1, Spec_117, 4) = ((MR_Box) (Pieces_93));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Specs_28 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_117));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        else
        {
          MR_Word PredPieces_45;
          MR_Word Var_62;
          MR_Word Pieces_78;
          MR_Word Spec_121;

          PredPieces_45 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_20);
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[56])));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (PredPieces_45));
          }
          Pieces_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])));
          {
            Spec_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_121, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
            MR_hl_field(1, Spec_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_121, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(1, Spec_121, 3) = ((MR_Box) (Context_83));
            MR_hl_field(1, Spec_121, 4) = ((MR_Box) (Pieces_78));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Specs_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_121));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    else
    {
      MR_Word Spec_125;

      {
        Spec_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_125, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
        MR_hl_field(1, Spec_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_125, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(1, Spec_125, 3) = ((MR_Box) (Context_83));
        MR_hl_field(1, Spec_125, 4) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[58])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_28 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_125));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
  {
    MR_Integer LineNum_32;
    MR_Word Context_33;
    MR_Word Spec_129;

    mercury__io__get_line_number_4_p_0(FileStream_16, &LineNum_32);
    {
      Context_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Context_33, 0) = ((MR_Box) (FileName_17));
      MR_hl_field(0, Context_33, 1) = ((MR_Box) (LineNum_32));
    }
    {
      Spec_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_129, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
      MR_hl_field(1, Spec_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_129, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(1, Spec_129, 3) = ((MR_Box) (Context_33));
      MR_hl_field(1, Spec_129, 4) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[58])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_129));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_data_8_p_0(
  MR_Word OutputStream_9,
  MR_Word MaybeProgressStream_10,
  MR_Integer FactTableSize_11,
  MR_String StructName_12,
  MR_Word Args_13,
  MR_Integer FactNum_14)
{
  MR_bool succeeded;
  MR_Integer Var_31;

  Var_31 = mercury__int__mod_2_f_0(FactNum_14, FactTableSize_11);
  succeeded = ((MR_Integer) 0 == Var_31);
  if (succeeded)
  {
    succeeded = (FactNum_14 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_59;

      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "};\n\n");
      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "const struct ");
      mercury__io__write_string_4_p_0(OutputStream_9, StructName_12);
      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "_struct ");
      mercury__io__write_string_4_p_0(OutputStream_9, StructName_12);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_14, &Var_59);
      mercury__io__write_string_4_p_0(OutputStream_9, Var_59);
      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "[] = {\n");
    }
    if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProgressStream_16 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, (MR_Integer) 0))));
      MR_String Var_35;

      mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "% Writing fact ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), FactNum_14, &Var_35);
      mercury__io__write_string_4_p_0(ProgressStream_16, Var_35);
      mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "\n");
    }
  }
  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "\t{");
  ll_backend__fact_table__write_fact_args_4_p_0(OutputStream_9, Args_13);
  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " },\n");
}

static void MR_CALL 
ll_backend__fact_table__write_fact_args_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FactArg_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FactArgs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) FactArg_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Int_14 = ((MR_Integer) ((MR_hl_field(0, FactArg_10, (MR_Integer) 0))));

            mercury__io__write_int_4_p_0(OutputStream_1, Int_14);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float Float_15 = MR_unbox_float((MR_hl_field(1, FactArg_10, (MR_Integer) 0)));

            mercury__io__write_float_4_p_0(OutputStream_1, Float_15);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_13 = ((MR_String) ((MR_hl_field(2, FactArg_10, (MR_Integer) 0))));

            backend_libs__c_util__output_quoted_string_c_4_p_0(OutputStream_1, String_13);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = FactArgs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__write_sort_file_lines_6_p_0(
  MR_String FactNumStr_1,
  MR_Word FactArgs_2,
  MR_Word IsPrimary_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProcStream_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcStreams_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, ProcStream_16, (MR_Integer) 1))));
      MR_Word Stream_22 = ((MR_Word) ((MR_hl_field(0, ProcStream_16, (MR_Integer) 3))));
      MR_String Key_23;
      MR_String DataString_25;
      MR_Word next_value_of_HeadVar__4_4;

      ll_backend__fact_table__make_sort_file_key_3_p_0(Modes_20, FactArgs_2, &Key_23);
      if ((IsPrimary_3 == (MR_Word) ((MR_Unsigned) 0U)))
        DataString_25 = (MR_String) "";
      else
      {
        MR_Word FactArgInfos_24 = ((MR_Word) ((MR_hl_field(1, IsPrimary_3, (MR_Integer) 0))));

        ll_backend__fact_table__make_fact_data_string_3_p_0(FactArgInfos_24, FactArgs_2, &DataString_25);
      }
      mercury__io__write_string_4_p_0(Stream_22, Key_23);
      mercury__io__write_string_4_p_0(Stream_22, (MR_String) "~");
      mercury__io__write_string_4_p_0(Stream_22, FactNumStr_1);
      mercury__io__write_string_4_p_0(Stream_22, (MR_String) "~");
      mercury__io__write_string_4_p_0(Stream_22, DataString_25);
      mercury__io__write_string_4_p_0(Stream_22, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcStreams_17;
      IsPrimary_3 = (MR_Word) ((MR_Unsigned) 0U);
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__make_fact_data_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_String) "";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.make_fact_data_string\'/3", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.make_fact_data_string\'/3", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String TailString_19;
      MR_Word HeadIsOutput_22;

      ll_backend__fact_table__make_fact_data_string_3_p_0(Var_26, TailArgs_17, &TailString_19);
      HeadIsOutput_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_27, (MR_Integer) 0))) & (MR_Integer) 1);
      switch (HeadIsOutput_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String HeadString_23;
            MR_String Var_24;

            switch (MR_tag((MR_Word) HeadArg_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_28 = ((MR_Integer) ((MR_hl_field(0, HeadArg_16, (MR_Integer) 0))));

                  HeadString_23 = mercury__string__int_to_base_string_2_f_0(Int_28, (MR_Integer) 36);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Float F_29 = MR_unbox_float((MR_hl_field(1, HeadArg_16, (MR_Integer) 0)));

                  HeadString_23 = mercury__string__float_to_string_1_f_0(F_29);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Str_30 = ((MR_String) ((MR_hl_field(2, HeadArg_16, (MR_Integer) 0))));
                  MR_Word Chars_31;
                  MR_Word EscapedChars_32;
                  MR_Word EscapedCharsCord_34;
                  MR_Word Var_35;

                  mercury__string__to_char_list_2_p_0(Str_30, &Chars_31);
                  Var_35 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
                  ll_backend__fact_table__key_from_chars_loop_3_p_0(Chars_31, Var_35, &EscapedCharsCord_34);
                  EscapedChars_32 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapedCharsCord_34);
                  mercury__string__from_char_list_2_p_0(EscapedChars_32, &HeadString_23);
                }
                break;
            }
            Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", TailString_19);
            *HeadVar__3_3 = mercury__string__f_43_43_2_f_0(HeadString_23, Var_24);
          }
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = TailString_19;
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__make_sort_file_key_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_String) "";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.make_sort_file_key\'/3", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.make_sort_file_key\'/3", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String TailKey_19;

      ll_backend__fact_table__make_sort_file_key_3_p_0(Var_23, TailArgs_17, &TailKey_19);
      switch (Var_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String HeadKey_20;
            MR_String Var_21;

            switch (MR_tag((MR_Word) HeadArg_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_25 = ((MR_Integer) ((MR_hl_field(0, HeadArg_16, (MR_Integer) 0))));

                  HeadKey_20 = mercury__string__int_to_base_string_2_f_0(Int_25, (MR_Integer) 36);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Float F_26 = MR_unbox_float((MR_hl_field(1, HeadArg_16, (MR_Integer) 0)));

                  HeadKey_20 = mercury__string__float_to_string_1_f_0(F_26);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Str_27 = ((MR_String) ((MR_hl_field(2, HeadArg_16, (MR_Integer) 0))));
                  MR_Word Chars_28;
                  MR_Word EscapedChars_29;
                  MR_Word EscapedCharsCord_31;
                  MR_Word Var_32;

                  mercury__string__to_char_list_2_p_0(Str_27, &Chars_28);
                  Var_32 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
                  ll_backend__fact_table__key_from_chars_loop_3_p_0(Chars_28, Var_32, &EscapedCharsCord_31);
                  EscapedChars_29 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapedCharsCord_31);
                  mercury__string__from_char_list_2_p_0(EscapedChars_29, &HeadKey_20);
                }
                break;
            }
            Var_21 = mercury__string__f_43_43_2_f_0((MR_String) ":", TailKey_19);
            *HeadVar__3_3 = mercury__string__f_43_43_2_f_0(HeadKey_20, Var_21);
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = TailKey_19;
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__key_from_chars_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * STATE_VARIABLE_EscapedCharsCord_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_EscapedCharsCord_3 = STATE_VARIABLE_EscapedCharsCord_0_2;
    else
    {
      MR_Char Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_EscapedCharsCord_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;

      succeeded = (Char_7 == (MR_Char) 92);
      if (succeeded)
      {
        MR_Word Var_13;

        Var_13 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[73])));
        STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_13);
      }
      else
      {
        succeeded = (Char_7 == (MR_Char) 10);
        if (succeeded)
        {
          MR_Word Var_20;

          Var_20 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[75])));
          STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_20);
        }
        else
        {
          succeeded = (Char_7 == (MR_Char) 58);
          if (succeeded)
          {
            MR_Word Var_27;

            Var_27 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[77])));
            STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_27);
          }
          else
          {
            succeeded = (Char_7 == (MR_Char) 126);
            if (succeeded)
            {
              MR_Word Var_34;

              Var_34 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[79])));
              STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), STATE_VARIABLE_EscapedCharsCord_0_2, Var_34);
            }
            else
              mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_7)), STATE_VARIABLE_EscapedCharsCord_0_2, &STATE_VARIABLE_EscapedCharsCord_12_12);
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Chars_8;
      next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2 = STATE_VARIABLE_EscapedCharsCord_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_EscapedCharsCord_0_2 = next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_type_and_mode_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.check_fact_type_and_mode\'/8", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.check_fact_type_and_mode\'/8", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word ArgTerm_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgTerms_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word FactArg_44;
      MR_Word FactArgs_45;
      MR_Word STATE_VARIABLE_Specs_64_64;
      MR_Integer Var_79;

      if (((MR_tag((MR_Word) ArgTerm_41)) == (MR_Integer) 0))
      {
        MR_Word Functor_49 = ((MR_Word) ((MR_hl_field(0, ArgTerm_41, (MR_Integer) 0))));
        MR_Word ArgType_52 = ((((MR_Unsigned) ((MR_hl_field(0, Var_83, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

        switch (ArgType_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Float Float_58;

              succeeded = ((((MR_tag((MR_Word) Functor_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_49, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Float_58 = MR_unbox_float((MR_hl_field(3, Functor_49, (MR_Integer) 1)));
                {
                  FactArg_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, FactArg_44, 0) = MR_box_float(Float_58);
                }
                STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_7;
              }
              else
                ll_backend__fact_table__report_arg_error_10_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "a float", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_64_64);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Base_55;
              MR_Word Integer_56;
              MR_Word Var_65;
              MR_Word Var_66;

              succeeded = ((MR_tag((MR_Word) Functor_49)) == (MR_Integer) 1);
              if (succeeded)
              {
                Base_55 = ((MR_Unsigned) ((MR_hl_field(1, Functor_49, (MR_Integer) 0))) & (MR_Integer) 3);
                Integer_56 = ((MR_Word) ((MR_hl_field(1, Functor_49, (MR_Integer) 1))));
                Var_65 = ((((MR_Unsigned) ((MR_hl_field(1, Functor_49, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                Var_66 = ((MR_Unsigned) ((MR_hl_field(1, Functor_49, (MR_Integer) 2))) & (MR_Integer) 7);
                succeeded = (Var_65 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (Var_66 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Integer Int_57;

                succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Base_55, Integer_56, &Int_57);
                if (succeeded)
                {
                  {
                    FactArg_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FactArg_44, 0) = ((MR_Box) (Int_57));
                  }
                  STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_7;
                }
                else
                  ll_backend__fact_table__report_arg_error_10_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "an int that fits in a word", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_64_64);
              }
              else
                ll_backend__fact_table__report_arg_error_10_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "an int", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_64_64);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Str_59;

              succeeded = ((MR_tag((MR_Word) Functor_49)) == (MR_Integer) 2);
              if (succeeded)
              {
                Str_59 = ((MR_String) ((MR_hl_field(2, Functor_49, (MR_Integer) 0))));
                {
                  FactArg_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, FactArg_44, 0) = ((MR_Box) (Str_59));
                }
                STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_7;
              }
              else
                ll_backend__fact_table__report_arg_error_10_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "a string", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_64_64);
            }
            break;
        }
      }
      else
        ll_backend__fact_table__report_arg_error_10_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Mode", (MR_String) "a ground term", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_64_64);
      Var_79 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      ll_backend__fact_table__check_fact_type_and_mode_8_p_0(PredOrFunc_1, VarSet_2, Var_82, ArgTerms_42, Var_79, &FactArgs_45, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FactArg_44));
        MR_hl_field(1, base, 1) = ((MR_Box) (FactArgs_45));
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__report_arg_error_10_p_0(
  MR_Word PredOrFunc_11,
  MR_Word VarSet_12,
  MR_Integer ArgNum_13,
  MR_Word ArgTerm_14,
  MR_Word RemainingArgTerms_15,
  MR_String TypeOrMode_16,
  MR_String Expected_17,
  MR_Word * DummyFactArg_18,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_String ArgStr_20;
  MR_Word ExpectedGotPieces_21;
  MR_Word Pieces_22;
  MR_Word Context_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Spec_66;

  ArgStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, ArgTerm_14);
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (Expected_17));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (ArgStr_20));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[31])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[62])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[36])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
  }
  {
    ExpectedGotPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExpectedGotPieces_21, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[63])));
    MR_hl_field(1, ExpectedGotPieces_21, 1) = ((MR_Box) (Var_28));
  }
  succeeded = (PredOrFunc_11 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (RemainingArgTerms_15 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;

    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (TypeOrMode_16));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[65])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (ExpectedGotPieces_21));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[64])));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Pieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_22, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Pieces_22, 1) = ((MR_Box) (Var_45));
    }
  }
  else
  {
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (TypeOrMode_16));
    }
    {
      Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_59, 1) = ((MR_Box) (ArgNum_13));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[66])));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (ExpectedGotPieces_21));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[53])));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[64])));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      Pieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_22, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Pieces_22, 1) = ((MR_Box) (Var_52));
    }
  }
  Context_23 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm_14);
  {
    Spec_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
    MR_hl_field(1, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(1, Spec_66, 3) = ((MR_Box) (Context_23));
    MR_hl_field(1, Spec_66, 4) = ((MR_Box) (Pieces_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_25 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_66));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
  }
  *DummyFactArg_18 = (MR_Word) (MR_mkword(2, &ll_backend__fact_table_scalar_common_3[4]));
}

static void MR_CALL 
ll_backend__fact_table__infer_procs_determinism_pass_1_8_p_0(
  MR_Word GenInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4,
  MR_Word STATE_VARIABLE_WriteHashTables_0_5,
  MR_Word * STATE_VARIABLE_WriteHashTables_6,
  MR_Word STATE_VARIABLE_WriteDataTable_0_7,
  MR_Word * STATE_VARIABLE_WriteDataTable_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WriteDataTable_8 = STATE_VARIABLE_WriteDataTable_0_7;
      *STATE_VARIABLE_WriteHashTables_6 = STATE_VARIABLE_WriteHashTables_0_5;
      *STATE_VARIABLE_ProcTable_4 = STATE_VARIABLE_ProcTable_0_3;
    }
    else
    {
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ProcInfo0_25;
      MR_Word FactTableProcMap_27;
      MR_Word FactTableProcInfo_30;
      MR_Word ModeClass_32;
      MR_Word InferredDetism_34;
      MR_Word STATE_VARIABLE_WriteHashTables_46_46;
      MR_Word STATE_VARIABLE_WriteDataTable_49_49;
      MR_Word STATE_VARIABLE_ProcTable_52_52;
      MR_Box conv0_ProcInfo0_25;
      MR_Box conv1_FactTableProcInfo_30;
      MR_Word Determinism_37;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_WriteHashTables_0_5;
      MR_Word next_value_of_STATE_VARIABLE_WriteDataTable_0_7;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (ProcId_20)), &conv0_ProcInfo0_25);
      ProcInfo0_25 = ((MR_Word) (conv0_ProcInfo0_25));
      FactTableProcMap_27 = ((MR_Word) ((MR_hl_field(0, GenInfo_1, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_27, ((MR_Box) (ProcId_20)), &conv1_FactTableProcInfo_30);
      FactTableProcInfo_30 = ((MR_Word) (conv1_FactTableProcInfo_30));
      ModeClass_32 = ((MR_Unsigned) ((MR_hl_field(0, FactTableProcInfo_30, (MR_Integer) 1))) & (MR_Integer) 3);
      switch (ModeClass_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            InferredDetism_34 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_3[1]));
            STATE_VARIABLE_WriteHashTables_46_46 = (MR_Integer) 1;
            STATE_VARIABLE_WriteDataTable_49_49 = STATE_VARIABLE_WriteDataTable_0_7;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeDetism_35;
            MR_Word Detism_36;

            hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_25, &MaybeDetism_35);
            succeeded = (MaybeDetism_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Detism_36 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_35, (MR_Integer) 0))));
              switch (Detism_36) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
              InferredDetism_34 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_3[2]));
            else
              InferredDetism_34 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_scalar_common_3[3]));
            STATE_VARIABLE_WriteDataTable_49_49 = (MR_Integer) 1;
            STATE_VARIABLE_WriteHashTables_46_46 = STATE_VARIABLE_WriteHashTables_0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            InferredDetism_34 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_WriteHashTables_46_46 = (MR_Integer) 1;
            STATE_VARIABLE_WriteDataTable_49_49 = (MR_Integer) 1;
          }
          break;
      }
      succeeded = ((MR_tag((MR_Word) InferredDetism_34)) == (MR_Integer) 1);
      if (succeeded)
      {
        Determinism_37 = ((MR_Unsigned) ((MR_hl_field(1, InferredDetism_34, (MR_Integer) 0))) & (MR_Integer) 7);
        {
          MR_Word ProcInfo_38;

          hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(Determinism_37, ProcInfo0_25, &ProcInfo_38);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_20)), ((MR_Box) (ProcInfo_38)), STATE_VARIABLE_ProcTable_0_3, &STATE_VARIABLE_ProcTable_52_52);
        }
      }
      else
        STATE_VARIABLE_ProcTable_52_52 = STATE_VARIABLE_ProcTable_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_21;
      next_value_of_STATE_VARIABLE_ProcTable_0_3 = STATE_VARIABLE_ProcTable_52_52;
      next_value_of_STATE_VARIABLE_WriteHashTables_0_5 = STATE_VARIABLE_WriteHashTables_46_46;
      next_value_of_STATE_VARIABLE_WriteDataTable_0_7 = STATE_VARIABLE_WriteDataTable_49_49;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ProcTable_0_3 = next_value_of_STATE_VARIABLE_ProcTable_0_3;
      STATE_VARIABLE_WriteHashTables_0_5 = next_value_of_STATE_VARIABLE_WriteHashTables_0_5;
      STATE_VARIABLE_WriteDataTable_0_7 = next_value_of_STATE_VARIABLE_WriteDataTable_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__fact_table__fact_table_check_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PragmaContext_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word * Result_10)
{
  MR_Word Types_11;

  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &Types_11);
  if ((Types_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_13;
    MR_Word Var_57;

    {
      Spec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.fact_table_check_args\'/5"));
      MR_hl_field(1, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(1, Spec_13, 3) = ((MR_Box) (PragmaContext_7));
      MR_hl_field(1, Spec_13, 4) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[16])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
    }
  }
  else
  {
    MR_Word FactArgInfos0_16;
    MR_Word TypeSpecs_17;
    MR_Word ProcIds_18;
    MR_Word ModeSpecs_21;
    MR_Word FactArgInfos_22;
    MR_Word FactTableProcMap_23;
    MR_Word MaybeAllInProcId_24;
    MR_Word InOutProcIds_25;
    MR_Word Specs_39;

    ll_backend__fact_table__init_fact_arg_infos_5_p_0(PredInfo_9, Types_11, &FactArgInfos0_16, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs_17);
    ProcIds_18 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_9);
    if ((ProcIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModeSpec_20;

      {
        ModeSpec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModeSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.fact_table_check_args\'/5"));
        MR_hl_field(1, ModeSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, ModeSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(1, ModeSpec_20, 3) = ((MR_Box) (PragmaContext_7));
        MR_hl_field(1, ModeSpec_20, 4) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[20])));
      }
      {
        ModeSpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModeSpecs_21, 0) = ((MR_Box) (ModeSpec_20));
        MR_hl_field(1, ModeSpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      FactArgInfos_22 = FactArgInfos0_16;
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), &FactTableProcMap_23);
      MaybeAllInProcId_24 = (MR_Word) ((MR_Unsigned) 0U);
      InOutProcIds_25 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ProcTable_28;
      MR_Word RevAllInProcIds_29;
      MR_Word RevInOutProcIds_30;
      MR_Word ModeSpecs0_31;
      MR_Word AllInProcIds_32;
      MR_Word Var_75;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_9, &ProcTable_28);
      Var_75 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0));
      ll_backend__fact_table__fact_table_check_proc_modes_14_p_0(ModuleInfo_6, PredId_8, ProcTable_28, ProcIds_18, FactArgInfos0_16, &FactArgInfos_22, Var_75, &FactTableProcMap_23, (MR_Word) ((MR_Unsigned) 0U), &RevAllInProcIds_29, (MR_Word) ((MR_Unsigned) 0U), &RevInOutProcIds_30, (MR_Word) ((MR_Unsigned) 0U), &ModeSpecs0_31);
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), RevAllInProcIds_29, &AllInProcIds_32);
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), RevInOutProcIds_30, &InOutProcIds_25);
      if ((AllInProcIds_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeAllInProcId_24 = (MR_Word) ((MR_Unsigned) 0U);
        ModeSpecs_21 = ModeSpecs0_31;
      }
      else
      {
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, AllInProcIds_32, (MR_Integer) 1))));
        MR_Integer Var_107 = ((MR_Integer) ((MR_hl_field(1, AllInProcIds_32, (MR_Integer) 0))));

        if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MaybeAllInProcId_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeAllInProcId_24, 0) = ((MR_Box) (Var_107));
          }
          ModeSpecs_21 = ModeSpecs0_31;
        }
        else
        {
          MR_Word AllInSpec_38;

          {
            AllInSpec_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, AllInSpec_38, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.fact_table_check_args\'/5"));
            MR_hl_field(1, AllInSpec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, AllInSpec_38, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(1, AllInSpec_38, 3) = ((MR_Box) (PragmaContext_7));
            MR_hl_field(1, AllInSpec_38, 4) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[28])));
          }
          {
            ModeSpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ModeSpecs_21, 0) = ((MR_Box) (AllInSpec_38));
            MR_hl_field(1, ModeSpecs_21, 1) = ((MR_Box) (ModeSpecs0_31));
          }
          MaybeAllInProcId_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
    }
    Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TypeSpecs_17, ModeSpecs_21);
    if ((Specs_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word GenInfo_40;

      {
        GenInfo_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GenInfo_40, 0) = ((MR_Box) (FactArgInfos_22));
        MR_hl_field(0, GenInfo_40, 1) = ((MR_Box) (FactTableProcMap_23));
        MR_hl_field(0, GenInfo_40, 2) = ((MR_Box) (MaybeAllInProcId_24));
        MR_hl_field(0, GenInfo_40, 3) = ((MR_Box) (InOutProcIds_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GenInfo_40));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Specs_39));
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__init_fact_arg_infos_5_p_0(
  MR_Word PredInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
  }
  else
  {
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Info_13;
    MR_Word Infos_14;
    MR_Word FactArgType_18;
    MR_Word STATE_VARIABLE_Specs_61_61;
    MR_Word FactArgTypePrime_17;
    MR_Word BuiltinType_16;

    succeeded = ((MR_tag((MR_Word) Type_11)) == (MR_Integer) 2);
    if (succeeded)
    {
      BuiltinType_16 = ((MR_Word) ((MR_hl_field(2, Type_11, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) BuiltinType_16)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(BuiltinType_16)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                FactArgTypePrime_17 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                FactArgTypePrime_17 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_16, (MR_Integer) 0))) & (MR_Integer) 15);

            succeeded = (Var_25 == (MR_Integer) 0);
            if (succeeded)
            {
              FactArgTypePrime_17 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    if (succeeded)
    {
      FactArgType_18 = FactArgTypePrime_17;
      STATE_VARIABLE_Specs_61_61 = STATE_VARIABLE_Specs_0_4;
    }
    else
    {
      MR_Word TVarSet_19;
      MR_String TypeStr_20;
      MR_Word Context_21;
      MR_Word Pieces_22;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Spec_64;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_1, &TVarSet_19);
      TypeStr_20 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_19, (MR_Integer) 0, Type_11);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_1, &Context_21);
      {
        Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_30, 1) = ((MR_Box) (TypeStr_20));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[46])));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_22, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[29])));
        MR_hl_field(1, Pieces_22, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.add_error_context_and_pieces\'/4"));
        MR_hl_field(1, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(1, Spec_64, 3) = ((MR_Box) (Context_21));
        MR_hl_field(1, Spec_64, 4) = ((MR_Box) (Pieces_22));
      }
      {
        STATE_VARIABLE_Specs_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
      }
      FactArgType_18 = (MR_Integer) 0;
    }
    {
      Info_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_13, 0) = (MR_Box) (((((MR_Unsigned) (FactArgType_18) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
    ll_backend__fact_table__init_fact_arg_infos_5_p_0(PredInfo_1, Types_12, &Infos_14, STATE_VARIABLE_Specs_61_61, STATE_VARIABLE_Specs_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Info_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Infos_14));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table__fact_table_check_proc_modes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_75;

  conv1_LambdaHeadVar__2_75 = ll_backend__fact_table__IntroducedFrom__func__fact_table_check_proc_modes__425__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_75));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table__fact_table_check_proc_modes_14_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word ProcTable_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_FactArgInfos_0_5,
  MR_Word * STATE_VARIABLE_FactArgInfos_6,
  MR_Word STATE_VARIABLE_FactTableProcMap_0_7,
  MR_Word * STATE_VARIABLE_FactTableProcMap_8,
  MR_Word STATE_VARIABLE_RevAllInProcIds_0_9,
  MR_Word * STATE_VARIABLE_RevAllInProcIds_10,
  MR_Word STATE_VARIABLE_RevInOutProcIds_0_11,
  MR_Word * STATE_VARIABLE_RevInOutProcIds_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_RevInOutProcIds_12 = STATE_VARIABLE_RevInOutProcIds_0_11;
      *STATE_VARIABLE_RevAllInProcIds_10 = STATE_VARIABLE_RevAllInProcIds_0_9;
      *STATE_VARIABLE_FactTableProcMap_8 = STATE_VARIABLE_FactTableProcMap_0_7;
      *STATE_VARIABLE_FactArgInfos_6 = STATE_VARIABLE_FactArgInfos_0_5;
    }
    else
    {
      MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ProcInfo_43;
      MR_Word ArgModes_44;
      MR_Word PredProcId_45;
      MR_Word VarSet0_46;
      MR_Word FactTableVars_47;
      MR_Word VarSet_48;
      MR_Word ArgModeSpecs_49;
      MR_Word STATE_VARIABLE_Specs_72_72;
      MR_Word STATE_VARIABLE_FactArgInfos_76_76;
      MR_Word STATE_VARIABLE_RevAllInProcIds_79_79;
      MR_Word STATE_VARIABLE_RevInOutProcIds_84_84;
      MR_Word STATE_VARIABLE_FactTableProcMap_89_89;
      MR_Box conv0_ProcInfo_43;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_FactArgInfos_0_5;
      MR_Word next_value_of_STATE_VARIABLE_FactTableProcMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevAllInProcIds_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevInOutProcIds_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_3, ((MR_Box) (ProcId_36)), &conv0_ProcInfo_43);
      ProcInfo_43 = ((MR_Word) (conv0_ProcInfo_43));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_43, &ArgModes_44);
      {
        PredProcId_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_45, 0) = ((MR_Box) (PredId_2));
        MR_hl_field(0, PredProcId_45, 1) = ((MR_Box) (ProcId_36));
      }
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_46);
      ll_backend__fact_table__check_proc_arg_modes_10_p_0(ModuleInfo_1, PredProcId_45, ProcInfo_43, ArgModes_44, (MR_Integer) 1, &FactTableVars_47, VarSet0_46, &VarSet_48, (MR_Word) ((MR_Unsigned) 0U), &ArgModeSpecs_49);
      if ((ArgModeSpecs_49 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word FactTableModes_52;
        MR_Word PresentModes_57;
        MR_Word ModeClass_58;
        MR_Word FactTableProcInfo_59;
        MR_Word Var_77;
        MR_Word Var_78;

        FactTableModes_52 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_scalar_common_2[2]), FactTableVars_47);
        ll_backend__fact_table__fill_in_fact_arg_infos_3_p_0(FactTableModes_52, STATE_VARIABLE_FactArgInfos_0_5, &STATE_VARIABLE_FactArgInfos_76_76);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0), FactTableModes_52, &PresentModes_57);
        succeeded = (PresentModes_57 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_77 = ((MR_Word) ((MR_hl_field(1, PresentModes_57, (MR_Integer) 0))));
          Var_78 = ((MR_Word) ((MR_hl_field(1, PresentModes_57, (MR_Integer) 1))));
          succeeded = (Var_77 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          ModeClass_58 = (MR_Integer) 0;
          {
            STATE_VARIABLE_RevAllInProcIds_79_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevAllInProcIds_79_79, 0) = ((MR_Box) (ProcId_36));
            MR_hl_field(1, STATE_VARIABLE_RevAllInProcIds_79_79, 1) = ((MR_Box) (STATE_VARIABLE_RevAllInProcIds_0_9));
          }
          STATE_VARIABLE_RevInOutProcIds_84_84 = STATE_VARIABLE_RevInOutProcIds_0_11;
        }
        else
        {
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;

          succeeded = (PresentModes_57 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_80 = ((MR_Word) ((MR_hl_field(1, PresentModes_57, (MR_Integer) 0))));
            Var_81 = ((MR_Word) ((MR_hl_field(1, PresentModes_57, (MR_Integer) 1))));
            succeeded = (Var_80 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_81 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_82 = ((MR_Word) ((MR_hl_field(1, Var_81, (MR_Integer) 0))));
                Var_83 = ((MR_Word) ((MR_hl_field(1, Var_81, (MR_Integer) 1))));
                succeeded = (Var_82 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            ModeClass_58 = (MR_Integer) 1;
            {
              STATE_VARIABLE_RevInOutProcIds_84_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevInOutProcIds_84_84, 0) = ((MR_Box) (ProcId_36));
              MR_hl_field(1, STATE_VARIABLE_RevInOutProcIds_84_84, 1) = ((MR_Box) (STATE_VARIABLE_RevInOutProcIds_0_11));
            }
          }
          else
          {
            MR_Word Var_85;
            MR_Word Var_86;

            succeeded = (PresentModes_57 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_85 = ((MR_Word) ((MR_hl_field(1, PresentModes_57, (MR_Integer) 0))));
              Var_86 = ((MR_Word) ((MR_hl_field(1, PresentModes_57, (MR_Integer) 1))));
              succeeded = (Var_85 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              ModeClass_58 = (MR_Integer) 2;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fact_table_check_proc_modes\'/14", (MR_String) "impossible mode class");
                return;
              }
            STATE_VARIABLE_RevInOutProcIds_84_84 = STATE_VARIABLE_RevInOutProcIds_0_11;
          }
          STATE_VARIABLE_RevAllInProcIds_79_79 = STATE_VARIABLE_RevAllInProcIds_0_9;
        }
        {
          FactTableProcInfo_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactTableProcInfo_59, 0) = ((MR_Box) (FactTableVars_47));
          MR_hl_field(0, FactTableProcInfo_59, 1) = (MR_Box) ((MR_Unsigned) (ModeClass_58));
          MR_hl_field(0, FactTableProcInfo_59, 2) = ((MR_Box) (VarSet_48));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0), ((MR_Box) (ProcId_36)), ((MR_Box) (FactTableProcInfo_59)), STATE_VARIABLE_FactTableProcMap_0_7, &STATE_VARIABLE_FactTableProcMap_89_89);
        STATE_VARIABLE_Specs_72_72 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_72_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgModeSpecs_49, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_FactArgInfos_76_76 = STATE_VARIABLE_FactArgInfos_0_5;
        STATE_VARIABLE_FactTableProcMap_89_89 = STATE_VARIABLE_FactTableProcMap_0_7;
        STATE_VARIABLE_RevAllInProcIds_79_79 = STATE_VARIABLE_RevAllInProcIds_0_9;
        STATE_VARIABLE_RevInOutProcIds_84_84 = STATE_VARIABLE_RevInOutProcIds_0_11;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_37;
      next_value_of_STATE_VARIABLE_FactArgInfos_0_5 = STATE_VARIABLE_FactArgInfos_76_76;
      next_value_of_STATE_VARIABLE_FactTableProcMap_0_7 = STATE_VARIABLE_FactTableProcMap_89_89;
      next_value_of_STATE_VARIABLE_RevAllInProcIds_0_9 = STATE_VARIABLE_RevAllInProcIds_79_79;
      next_value_of_STATE_VARIABLE_RevInOutProcIds_0_11 = STATE_VARIABLE_RevInOutProcIds_84_84;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_72_72;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_FactArgInfos_0_5 = next_value_of_STATE_VARIABLE_FactArgInfos_0_5;
      STATE_VARIABLE_FactTableProcMap_0_7 = next_value_of_STATE_VARIABLE_FactTableProcMap_0_7;
      STATE_VARIABLE_RevAllInProcIds_0_9 = next_value_of_STATE_VARIABLE_RevAllInProcIds_0_9;
      STATE_VARIABLE_RevInOutProcIds_0_11 = next_value_of_STATE_VARIABLE_RevInOutProcIds_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table__fill_in_fact_arg_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fill_in_fact_arg_infos\'/3", (MR_String) "too many fact_arg_infos");
        return;
      }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.fill_in_fact_arg_infos\'/3", (MR_String) "too many argmodes");
        return;
      }
    else
    {
      MR_Word Info0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Infos0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Info_18;
      MR_Word Infos_19;
      MR_Word Type_20 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_16, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_16, (MR_Integer) 0)));

      switch (Var_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Info_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Info_18, 0) = (MR_Box) (((((MR_Unsigned) (Type_20) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          }
          break;
        case (MR_Integer) 1:
          {
            Info_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Info_18, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
          }
          break;
      }
      ll_backend__fact_table__fill_in_fact_arg_infos_3_p_0(Var_26, Infos0_17, &Infos_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Info_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Infos_19));
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__check_proc_arg_modes_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredProcId_2,
  MR_Word ProcInfo_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarSet_0_7,
  MR_Word * STATE_VARIABLE_VarSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_VarSet_8 = STATE_VARIABLE_VarSet_0_7;
  }
  else
  {
    MR_Word Mode_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Modes_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word FactTableVar_27;
    MR_Word FactTableVars_28;
    MR_Word FactTableMode_33;
    MR_Word MakeUnique_38;
    MR_String VarName_39;
    MR_Word Var_40;
    MR_Word PragmaVar_41;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word STATE_VARIABLE_VarSet_86_86;
    MR_Integer Var_88;
    MR_String Var_96;
    MR_Word FinalInst_32;
    MR_Word Var_31;

    succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_24, &Var_31, &FinalInst_32);
    if (succeeded)
    {
      succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_1, Mode_24);
      if (succeeded)
      {
        FactTableMode_33 = (MR_Integer) 0;
        STATE_VARIABLE_Specs_76_76 = STATE_VARIABLE_Specs_0_9;
      }
      else
      {
        succeeded = check_hlds__mode_test__mode_is_fully_output_2_p_0(ModuleInfo_1, Mode_24);
        if (succeeded)
        {
          FactTableMode_33 = (MR_Integer) 1;
          STATE_VARIABLE_Specs_76_76 = STATE_VARIABLE_Specs_0_9;
        }
        else
        {
          MR_Word ProcPieces_34;
          MR_Word Context_35;
          MR_Word Pieces_36;
          MR_Word Spec_37;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_53;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_63;

          ProcPieces_34 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_1, (MR_Integer) 1, PredProcId_2);
          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_3, &Context_35);
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[48])));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (ProcPieces_34));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[13])));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[47])));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_63, 1) = ((MR_Box) (ArgNum_5));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_scalar_common_1[54])));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[50])));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_scalar_common_1[49])));
            MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
          }
          Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_56);
          {
            Spec_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.check_proc_arg_modes\'/10"));
            MR_hl_field(1, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(1, Spec_37, 3) = ((MR_Box) (Context_35));
            MR_hl_field(1, Spec_37, 4) = ((MR_Box) (Pieces_36));
          }
          {
            STATE_VARIABLE_Specs_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_76_76, 0) = ((MR_Box) (Spec_37));
            MR_hl_field(1, STATE_VARIABLE_Specs_76_76, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
          }
          FactTableMode_33 = (MR_Integer) 0;
        }
      }
      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, FinalInst_32);
      if (succeeded)
        MakeUnique_38 = (MR_Integer) 0;
      else
        MakeUnique_38 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Context_92;
      MR_Word Spec_93;

      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_3, &Context_92);
      {
        Spec_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table.check_proc_arg_modes\'/10"));
        MR_hl_field(1, Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(1, Spec_93, 3) = ((MR_Box) (Context_92));
        MR_hl_field(1, Spec_93, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        STATE_VARIABLE_Specs_76_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_76_76, 0) = ((MR_Box) (Spec_93));
        MR_hl_field(1, STATE_VARIABLE_Specs_76_76, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
      }
      FactTableMode_33 = (MR_Integer) 0;
      MakeUnique_38 = (MR_Integer) 0;
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_scalar_common_3[0]), ArgNum_5, &Var_96);
    VarName_39 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_96);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_39, &Var_40, STATE_VARIABLE_VarSet_0_7, &STATE_VARIABLE_VarSet_86_86);
    {
      PragmaVar_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PragmaVar_41, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, PragmaVar_41, 1) = ((MR_Box) (VarName_39));
      MR_hl_field(0, PragmaVar_41, 2) = ((MR_Box) (Mode_24));
      MR_hl_field(0, PragmaVar_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      FactTableVar_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FactTableVar_27, 0) = ((MR_Box) (VarName_39));
      MR_hl_field(0, FactTableVar_27, 1) = (MR_Box) (((((MR_Unsigned) (FactTableMode_33) << 1)) | (MR_Unsigned) (MakeUnique_38)));
      MR_hl_field(0, FactTableVar_27, 2) = ((MR_Box) (PragmaVar_41));
    }
    Var_88 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
    ll_backend__fact_table__check_proc_arg_modes_10_p_0(ModuleInfo_1, PredProcId_2, ProcInfo_3, Modes_25, Var_88, &FactTableVars_28, STATE_VARIABLE_VarSet_86_86, STATE_VARIABLE_VarSet_8, STATE_VARIABLE_Specs_76_76, STATE_VARIABLE_Specs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FactTableVar_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (FactTableVars_28));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____comparison_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____comparison_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_arg_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_arg_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_arg_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_arg_check_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_arg_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_arg_check_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_gen_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_mode_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_mode_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____fact_table_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____fact_table_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____hash_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____hash_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____hash_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____hash_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____hash_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____hash_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____inferred_determinism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____inferred_determinism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_create_fact_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_create_fact_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_create_fact_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_create_fact_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_in_or_output_for_some_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_in_or_output_for_some_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_input_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_input_for_some_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_input_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_input_for_some_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_make_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_make_unique_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_make_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_make_unique_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_primary_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_primary_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_primary_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_primary_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_primary_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_primary_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_seen_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_seen_input_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_seen_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_seen_input_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_test_keys_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_test_keys_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_test_keys_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_test_keys_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_data_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_write_data_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_data_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_write_data_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____maybe_write_hash_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____maybe_write_hash_tables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____maybe_write_hash_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____maybe_write_hash_tables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____proc_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____proc_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table____Unify____sort_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table____Compare____sort_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__fact_table__init(void)
{
}

void mercury__ll_backend__fact_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_comparison_kind_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_type_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_result_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_arg_check_result_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_gen_info_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_mode_class_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_info_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_proc_map_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_table_var_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_table_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_inferred_determinism_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_create_fact_map_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_in_or_output_for_some_mode_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_input_for_some_mode_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_make_unique_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_primary_proc_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_primary_table_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_seen_input_arg_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_test_keys_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_write_data_table_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_maybe_write_hash_tables_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_proc_stream_0);
	MR_register_type_ctor_info(&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0);
}

void mercury__ll_backend__fact_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__fact_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.fact_table.
