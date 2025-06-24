/*
** Automatically generated from `stack_layout.m'
** by the Mercury compiler,
** version rotd-2025-06-24
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


// :- module ll_backend.stack_layout.
// :- implementation.

/*
INIT mercury__ll_backend__stack_layout__init
ENDINIT
*/

#include "ll_backend.stack_layout.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.ll_pseudo_type_info.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0__plain_ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__continuation_info__type_ctor_info_user_attribute_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_table_io_entry_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_exec_traces_info_0_0[11];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_exec_traces_info_0_0[11];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_exec_traces_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_exec_traces_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_exec_traces_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_exec_traces_info_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_exec_traces_info_0[1];

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_internal_label_info_0_0[5];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_internal_label_info_0_0[5];

static const MR_DuArgLocn ll_backend__stack_layout__ll_backend__stack_layout__field_locns_internal_label_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_internal_label_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_internal_label_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_internal_label_info_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_internal_label_info_0[1];

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_is_label_return_0_0[1];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_0;

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_1;

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_2;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_0[2];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_1[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_is_label_return_0[2];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_is_label_return_0[3];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_is_label_return_0[3];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__cord__ti_cord_1ll_backend__layout__type_ctor_info_user_event_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__cord__ti_cord_1maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_no_vars_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_short_vars_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_long_vars_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_label_layouts_info_0_0[20];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_label_layouts_info_0_0[20];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_label_layouts_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_label_layouts_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_label_layouts_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_label_layouts_info_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_label_layouts_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_liveval_array_slot_0_0[3];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_liveval_array_slot_0_0[3];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_liveval_array_slot_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_liveval_array_slot_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_liveval_array_slot_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_liveval_array_slot_0[1];

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_0;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_1;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_2;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_3;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_4;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_5;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_6;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_7;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_8;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_9;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_10;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_11;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_12;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_13;

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_14;

static const MR_EnumFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__enum_ordinal_ordered_locn_type_0[15];

static const MR_EnumFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__enum_name_ordered_locn_type_0[15];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_locn_type_0[15];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_1[1];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_1;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_2[1];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_2;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_2[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_maybe_var_info_0[3];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_maybe_var_info_0[3];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_maybe_var_info_0[3];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_layouts_info_0_0[7];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_layouts_info_0_0[7];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_layouts_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_layouts_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_layouts_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_layouts_info_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_layouts_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_statics_info_0_0[6];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_statics_info_0_0[6];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_statics_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_statics_info_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_statics_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_statics_info_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_statics_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_stack_layout_params_0_0[12];

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_stack_layout_params_0_0[12];

static const MR_DuArgLocn ll_backend__stack_layout__ll_backend__stack_layout__field_locns_stack_layout_params_0_0[12];

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0;

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_stack_layout_params_0_0[1];

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_stack_layout_params_0[1];

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_stack_layout_params_0[1];

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_stack_layout_params_0[1];

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__2618__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1780__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer HeadVar__2_85);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1778__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer NumHLDSVarNums_30);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1647__1_3_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1640__1_1_p_0(
  MR_Word LambdaHeadVar__1_31);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1431__1_3_p_0(
  MR_Word HeadVar__1_366,
  MR_Word HeadVar__2_367,
  MR_Word * HeadVar__3_368);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1429__1_3_p_0(
  MR_Word HeadVar__1_360,
  MR_Word HeadVar__2_361,
  MR_Word * HeadVar__3_362);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_exec_trace_layout__971__1_2_p_0(
  MR_Word MaybeTableSlotName_28,
  MR_Word HeadVar__2_124);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__format_label_table__387__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17);

static void MR_CALL 
ll_backend__stack_layout____Compare____stack_layout_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____stack_layout_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_layouts_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_statics_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_layouts_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_statics_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____maybe_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____maybe_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____locn_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____locn_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____liveval_array_slot_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____liveval_array_slot_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____line_no_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____line_no_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____label_tables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____label_layouts_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_layouts_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____is_label_return_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____is_label_return_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____internal_label_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____internal_label_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____file_label_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____file_label_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____exec_traces_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____exec_traces_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout__add_var_to_var_number_map_6_p_0(
  MR_Word VarTable_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_15,
  MR_Word * STATE_VARIABLE_VarNumMap_16,
  MR_Word STATE_VARIABLE_Counter_0_17,
  MR_Word * STATE_VARIABLE_Counter_18);

static void MR_CALL 
ll_backend__stack_layout__user_attribute_var_num_map_6_p_0(
  MR_Word VarTable_7,
  MR_Word MaybeAttribute_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_14,
  MR_Word * STATE_VARIABLE_VarNumMap_15,
  MR_Word STATE_VARIABLE_Counter_0_16,
  MR_Word * STATE_VARIABLE_Counter_17);

static void MR_CALL 
ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarNumMap_0_12,
  MR_Word * STATE_VARIABLE_VarNumMap_13,
  MR_Word STATE_VARIABLE_Counter_0_14,
  MR_Word * STATE_VARIABLE_Counter_15);

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0(
  MR_Word VarTable_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarNumMap_0_29,
  MR_Word * STATE_VARIABLE_VarNumMap_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32);

static void MR_CALL 
ll_backend__stack_layout__construct_closure_arg_rval_4_p_0(
  MR_Word ClosureArg_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * STATE_VARIABLE_StaticCellInfo_14);

static MR_Integer MR_CALL 
ll_backend__stack_layout__project_array_slot_locn_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Integer MR_CALL 
ll_backend__stack_layout__project_array_slot_hlds_var_num_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__stack_layout__project_array_slot_pti_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__stack_layout__select_trace_return_1_p_0(
  MR_Word LocnInfo_2);

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0(
  MR_Word Params_13,
  MR_Word ProcLabel_14,
  MR_Word ProcLayoutName_15,
  MR_Word VarNumMap_16,
  MR_Word HeadVar__5_5,
  MR_Word * LabelLayout_19,
  MR_Word STATE_VARIABLE_StringTable_0_101,
  MR_Word * STATE_VARIABLE_StringTable_102,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_103,
  MR_Word * STATE_VARIABLE_StaticCellInfo_104,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_105,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_106);

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_5(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0(
  MR_Word Params_10,
  MR_Word VarInfoSet_11,
  MR_Word VarNumMap_12,
  MR_Word TVarLocnMap_13,
  MR_Word * MaybeVarInfo_14,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_66,
  MR_Word * STATE_VARIABLE_StaticCellInfo_67,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_68,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_69);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_108_108_95_98_97_99_107_101_110_100_46_108_108_100_115_46_114_118_97_108_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_108_108_95_98_97_99_107_101_110_100_46_108_108_100_115_46_114_118_97_108_93_95_48_95_49_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Integer MR_CALL 
ll_backend__stack_layout__short_count_bits_0_f_0(void);

static void MR_CALL 
ll_backend__stack_layout__construct_tvar_vector_4_p_0(
  MR_Word TVarLocnMap_5,
  MR_Word * TypeParamRval_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_10,
  MR_Word * STATE_VARIABLE_StaticCellInfo_11);

static void MR_CALL 
ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word VarNumMap_3,
  MR_Integer BytesSoFar_4,
  MR_Integer BytesLimit_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0(
  MR_Word LayoutLocn_3,
  MR_Integer * Byte_4);

static void MR_CALL 
ll_backend__stack_layout__represent_live_value_type_and_var_num_6_p_0(
  MR_Word VarNumMap_7,
  MR_Word LiveValueType_8,
  MR_Word * TypeRval_9,
  MR_Integer * VarNum_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_19,
  MR_Word * STATE_VARIABLE_StaticCellInfo_20);

static void MR_CALL 
ll_backend__stack_layout__represent_special_live_value_type_2_p_0(
  MR_String SpecialTypeName_3,
  MR_Word * Rval_4);

static void MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0(
  MR_Word OrigInfos_3,
  MR_Word * FinalInfos_4);

static void MR_CALL 
ll_backend__stack_layout__construct_user_data_array_7_p_0(
  MR_Word Params_1,
  MR_Word VarNumMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(
  MR_Word Params_7,
  MR_Word LvalOrConst_8,
  MR_Word * Rval_9,
  MR_Word * Type_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_32,
  MR_Word * STATE_VARIABLE_StaticCellInfo_33);

static void MR_CALL 
ll_backend__stack_layout__convert_var_to_int_3_p_0(
  MR_Word VarNumMap_4,
  MR_Word Var_5,
  MR_Integer * VarNum_6);

static void MR_CALL 
ll_backend__stack_layout__add_long_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_18,
  MR_Word * STATE_VARIABLE_LLI_19);

static void MR_CALL 
ll_backend__stack_layout__add_short_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_18,
  MR_Word * STATE_VARIABLE_LLI_19);

static void MR_CALL 
ll_backend__stack_layout__add_no_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_17,
  MR_Word * STATE_VARIABLE_LLI_18);

static MR_bool MR_CALL 
ll_backend__stack_layout__var_has_name_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__stack_layout__construct_table_arg_pti_rval_4_p_0(
  MR_Word ClosureArg_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_15,
  MR_Word * STATE_VARIABLE_StaticCellInfo_16);

static void MR_CALL 
ll_backend__stack_layout__convert_slot_to_locn_map_2_p_0(
  MR_Word SlotLocn_3,
  MR_Word * LvalLocns_4);

static void MR_CALL 
ll_backend__stack_layout__update_label_table_3_p_0(
  MR_Word InternalLabelInfo_4,
  MR_Word STATE_VARIABLE_LabelTables_0_26,
  MR_Word * STATE_VARIABLE_LabelTables_27);

static MR_bool MR_CALL 
ll_backend__stack_layout__find_valid_return_context_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ValidTarget_7,
  MR_Word * ValidContext_8,
  MR_Word * ValidGoalPath_9);

static void MR_CALL 
ll_backend__stack_layout__update_label_table_2_6_p_0(
  MR_Word LabelVars_7,
  MR_Integer Slot_8,
  MR_Word Context_9,
  MR_Word IsReturn_10,
  MR_Word STATE_VARIABLE_LabelTables_0_19,
  MR_Word * STATE_VARIABLE_LabelTables_20);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0(
  MR_Word Params_15,
  MR_Word PLI_16,
  MR_Word STATE_VARIABLE_LabelTables_0_55,
  MR_Word * STATE_VARIABLE_LabelTables_56,
  MR_Word STATE_VARIABLE_StringTable_0_57,
  MR_Word * STATE_VARIABLE_StringTable_58,
  MR_Word STATE_VARIABLE_TypeTable_0_59,
  MR_Word * STATE_VARIABLE_TypeTable_60,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_61,
  MR_Word * STATE_VARIABLE_StaticCellInfo_62,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_63,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_64,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_65,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_66);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_layout_15_p_0(
  MR_Word Params_16,
  MR_Word PLI_17,
  MR_Word ProcLayoutName_18,
  MR_Word Kind_19,
  MR_Word InternalLabelInfos_20,
  MR_Word VarNumMap_21,
  MR_Word LabelLayoutInfo_22,
  MR_Word STATE_VARIABLE_StringTable_0_102,
  MR_Word * STATE_VARIABLE_StringTable_103,
  MR_Word STATE_VARIABLE_TypeTable_0_104,
  MR_Word * STATE_VARIABLE_TypeTable_105,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_106,
  MR_Word * STATE_VARIABLE_StaticCellInfo_107,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_108,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_109);

static void MR_CALL 
ll_backend__stack_layout__construct_exec_trace_table_data_8_p_0(
  MR_Word PredProcId_9,
  MR_Word ProcLayoutName_10,
  MR_Word TableInfo_11,
  MR_Word * MaybeTableSlotName_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_32,
  MR_Word * STATE_VARIABLE_StaticCellInfo_33,
  MR_Word STATE_VARIABLE_ExecTraceInfo_0_34,
  MR_Word * STATE_VARIABLE_ExecTraceInfo_35);

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_exec_trace_layout_22_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_layout__construct_exec_trace_layout_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__construct_exec_trace_layout_22_p_0(
  MR_Word Params_23,
  MR_Word RttiProcLabel_24,
  MR_Word EvalMethod_25,
  MR_Word EffTraceLevel_26,
  MR_Word MaybeCallLabel_27,
  MR_Word MaybeTableSlotName_28,
  MR_Integer MaxTraceRegR_29,
  MR_Integer MaxTraceRegF_30,
  MR_Word HeadVars_31,
  MR_Word ArgModes_32,
  MR_Word TraceSlotInfo_33,
  MR_Word VarTable_34,
  MR_Word MaybeTableInfo_35,
  MR_Word NeedsAllNames_36,
  MR_Word VarNumMap_37,
  MR_Word InternalLabelInfos_38,
  MR_Word * ExecTraceName_39,
  MR_Word LabelLayoutInfo_40,
  MR_Word STATE_VARIABLE_StringTable_0_109,
  MR_Word * STATE_VARIABLE_StringTable_110,
  MR_Word STATE_VARIABLE_ExecTraceInfo_0_111,
  MR_Word * STATE_VARIABLE_ExecTraceInfo_112);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_var_name_vector_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_layout__construct_var_name_vector_6_p_0(
  MR_Word VarNumMap_7,
  MR_Word NeedsAllNames_8,
  MR_Integer * MaxVarNum_9,
  MR_Word * Offsets_10,
  MR_Word STATE_VARIABLE_StringTable_0_19,
  MR_Word * STATE_VARIABLE_StringTable_20);

static void MR_CALL 
ll_backend__stack_layout__construct_var_name_rvals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_StringTable_0_6,
  MR_Word * STATE_VARIABLE_StringTable_7);

static void MR_CALL 
ll_backend__stack_layout__encode_exec_trace_flags_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word HeadVars_8,
  MR_Word ArgModes_9,
  MR_Integer * STATE_VARIABLE_Flags_13);

static MR_bool MR_CALL 
ll_backend__stack_layout__some_var_is_higher_order_2_p_0(
  MR_Word VarTable_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout__collect_event_data_addrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevInterfaces_0_2,
  MR_Word * STATE_VARIABLE_RevInterfaces_3,
  MR_Word STATE_VARIABLE_RevInternals_0_4,
  MR_Word * STATE_VARIABLE_RevInternals_5);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_static_layout_4_p_0(
  MR_Word DeepProfInfo_5,
  MR_Word * ProcStaticSlotName_6,
  MR_Word STATE_VARIABLE_ProcStaticInfo_0_42,
  MR_Word * STATE_VARIABLE_ProcStaticInfo_43);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_traversal_6_p_0(
  MR_Word Params_7,
  MR_Word EntryLabel_8,
  MR_Word Detism_9,
  MR_Integer NumStackSlots_10,
  MR_Word MaybeSuccipLoc_11,
  MR_Word * Traversal_12);

static void MR_CALL 
ll_backend__stack_layout__add_line_no_4_p_0(
  MR_Integer LineNo_5,
  MR_Word LineInfo_6,
  MR_Word RevList0_7,
  MR_Word * RevList_8);

static void MR_CALL 
ll_backend__stack_layout__format_label_table_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__format_label_table_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * FileLayoutData_5);

static void MR_CALL 
ll_backend__stack_layout__flatten_label_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_layout__flatten_label_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3);

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_4_p_0(
  MR_Word Attr_5,
  MR_Word * TypeRvalAndType_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * STATE_VARIABLE_StaticCellInfo_14);

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0(
  MR_Word EventSpec_6,
  MR_Word STATE_VARIABLE_EventArgTypeInfoMap_0_14,
  MR_Word * STATE_VARIABLE_EventArgTypeInfoMap_15,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_16,
  MR_Word * STATE_VARIABLE_StaticCellInfo_17);

static MR_bool MR_CALL 
ll_backend__stack_layout__valid_proc_layout_1_p_0(
  MR_Word ProcLayoutInfo_2);

static void MR_CALL 
ll_backend__stack_layout__compute_var_number_map_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__stack_layout__compute_var_number_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__stack_layout__construct_closure_layout_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurSlot_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_int_2_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Word_2);

static void MR_CALL 
ll_backend__stack_layout__make_tagged_word_3_p_0(
  MR_Word Locn_4,
  MR_Integer Value_5,
  MR_Integer * TaggedValue_6);

static void MR_CALL 
ll_backend__stack_layout__locn_type_code_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
ll_backend__stack_layout__generate_llds_layout_data_26_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__stack_layout__generate_llds_layout_data_26_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13);

static MR_Word MR_CALL 
ll_backend__stack_layout__init_stack_layout_params_1_f_0(
  MR_Word ModuleInfo_3);

static MR_Word MR_CALL 
ll_backend__stack_layout__init_label_layouts_info_0_f_0(void);

static MR_Word MR_CALL 
ll_backend__stack_layout__init_proc_layouts_info_0_f_0(void);

static void MR_CALL 
ll_backend__stack_layout__format_label_tables_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__format_label_tables_2_p_0(
  MR_Word LabelTableMap_3,
  MR_Word * SourceFileLayouts_4);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____exec_traces_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____exec_traces_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____file_label_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____file_label_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____internal_label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____internal_label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____is_label_return_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____is_label_return_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_layouts_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____label_layouts_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____label_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____line_no_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____line_no_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____liveval_array_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____liveval_array_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____locn_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____locn_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____maybe_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____maybe_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_layouts_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_layouts_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_statics_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_statics_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____stack_layout_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout____Compare____stack_layout_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_1[45][3];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_2[46][2];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_3[14][1];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_4[8][5];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_5[1][17];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_6[2][8];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_8[4][7];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_9[3][9];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_10[2][4];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_11[4][6];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_12[1][15];


struct ll_backend__stack_layout__vector_common_type_7_0_s {
  const MR_Integer ll_backend__stack_layout__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct ll_backend__stack_layout__vector_common_type_7_0_s ll_backend__stack_layout_vector_common_7[15];



static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_1[45][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[4])),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[0]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[4])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[0])),
    ((MR_Box) (ll_backend__stack_layout__format_label_tables_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[0])),
    ((MR_Box) (ll_backend__stack_layout__generate_llds_layout_data_26_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[0])),
    ((MR_Box) (ll_backend__stack_layout__convert_table_arg_info_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[2])),
    ((MR_Box) (ll_backend__stack_layout__convert_table_arg_info_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[1])),
    ((MR_Box) (ll_backend__stack_layout__construct_closure_layout_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[2])),
    ((MR_Box) (ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[3])),
    ((MR_Box) (ll_backend__stack_layout__format_label_table_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_10[0])),
    ((MR_Box) (ll_backend__stack_layout__construct_var_name_vector_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[1])),
    ((MR_Box) (ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_10[1])),
    ((MR_Box) (ll_backend__stack_layout__sort_livevals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[2])),
    ((MR_Box) (ll_backend__stack_layout__sort_livevals_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "curfr")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  26 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "hp")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  27 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "maxfr")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  28 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "redofr")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  29 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "redoip")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  30 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "unwanted")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  31 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "succip")),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  32 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[5])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[6])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[6])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[6])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_10[1])),
    ((MR_Box) (ll_backend__stack_layout__construct_internal_layout_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[3])),
    ((MR_Box) (ll_backend__stack_layout__construct_internal_layout_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[3])),
    ((MR_Box) (ll_backend__stack_layout__construct_internal_layout_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[7])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[1])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[7])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[1])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[7])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[1])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_2[46][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[8]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[1]))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__stack_layout_scalar_common_3[5])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[3])))
  },
  /* row  25 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[25])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[7]))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[26])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[8]))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[27])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[9]))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[28])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[10]))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[29])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[11]))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[30])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[12]))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[31])),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[13]))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[44])))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_3[14][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 5)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   7 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[25])) },
  /* row   8 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[28])) },
  /* row   9 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[31])) },
  /* row  10 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[34])) },
  /* row  11 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[37])) },
  /* row  12 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[40])) },
  /* row  13 */
  { ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[43])) },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_4[8][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_5[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_stack_layout_params_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_8[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0__plain_ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_9[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__continuation_info__type_ctor_info_user_attribute_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_10[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_11[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_12[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_stack_layout_params_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0))
  },
};


static /* final */ const struct ll_backend__stack_layout__vector_common_type_7_0_s ll_backend__stack_layout_vector_common_7[15] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 5 },
  /* row   4 */   { (MR_Integer) 6 },
  /* row   5 */   { (MR_Integer) 7 },
  /* row   6 */   { (MR_Integer) 9 },
  /* row   7 */   { (MR_Integer) 10 },
  /* row   8 */   { (MR_Integer) 11 },
  /* row   9 */   { (MR_Integer) 15 },
  /* row  10 */   { (MR_Integer) 11 },
  /* row  11 */   { (MR_Integer) 3 },
  /* row  12 */   { (MR_Integer) 13 },
  /* row  13 */   { (MR_Integer) 13 },
  /* row  14 */   { (MR_Integer) 14 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0),
    (MR_TypeInfo) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__stack_layout__list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0__plain_ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0),
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_table_io_entry_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_exec_traces_info_0_0[11] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_slot_name_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_table_io_entry_data_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_exec_traces_info_0_0[11] = {
  (MR_String) "eti_next_proc_head_var_num",
  (MR_String) "eti_next_proc_var_name",
  (MR_String) "eti_next_proc_event_layout",
  (MR_String) "eti_next_table_io_entry_data",
  (MR_String) "eti_next_exec_trace",
  (MR_String) "eti_rev_proc_head_var_nums",
  (MR_String) "eti_rev_proc_var_names",
  (MR_String) "eti_rev_proc_event_layouts",
  (MR_String) "eti_rev_table_io_entry_datas",
  (MR_String) "eti_rev_exec_traces",
  (MR_String) "eti_table_io_entry_map"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_exec_traces_info_0_0 = {
  (MR_String) "exec_traces_info",
  INT16_C(11),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_exec_traces_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_exec_traces_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_exec_traces_info_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_exec_traces_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_exec_traces_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_exec_traces_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_exec_traces_info_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_exec_traces_info_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_exec_traces_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_exec_traces_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____exec_traces_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____exec_traces_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "exec_traces_info",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_exec_traces_info_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_exec_traces_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_exec_traces_info_0,

};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_file_label_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__stack_layout____Unify____file_label_table_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____file_label_table_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "file_label_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_internal_label_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_internal_label_info_0_0[5] = {
  (MR_String) "containing_proc",
  (MR_String) "label_num_in_proc",
  (MR_String) "maybe_has_var_info",
  (MR_String) "slot_in_array",
  (MR_String) "internal_layout_info"
};

static const MR_DuArgLocn ll_backend__stack_layout__ll_backend__stack_layout__field_locns_internal_label_info_0_0[5] = {
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
    (MR_Integer) 2
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

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0 = {
  (MR_String) "internal_label_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_internal_label_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_internal_label_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_locns_internal_label_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_internal_label_info_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_internal_label_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_internal_label_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_internal_label_info_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_internal_label_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____internal_label_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____internal_label_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "internal_label_info",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_internal_label_info_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_internal_label_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_internal_label_info_0,

};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_is_label_return_0_0[1] = { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0) };

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_0 = {
  (MR_String) "known_callee",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_is_label_return_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_1 = {
  (MR_String) "unknown_callee",
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

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_2 = {
  (MR_String) "not_a_return",
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

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_0[2] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_1,
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_2
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_1[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_is_label_return_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_is_label_return_0[3] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_0,
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_2,
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_1
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_is_label_return_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____is_label_return_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____is_label_return_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "is_label_return",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_is_label_return_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_is_label_return_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_is_label_return_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__cord__ti_cord_1ll_backend__layout__type_ctor_info_user_event_data_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__cord__ti_cord_1maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_no_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_short_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_long_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_label_layouts_info_0_0[20] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__cord__ti_cord_1ll_backend__layout__type_ctor_info_user_event_data_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__cord__ti_cord_1maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_no_vars_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_short_vars_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_long_vars_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_label_layouts_info_0_0[20] = {
  (MR_String) "lli_next_pti",
  (MR_String) "lli_next_long_locn",
  (MR_String) "lli_next_short_locn",
  (MR_String) "lli_next_hlds_var_num",
  (MR_String) "lli_rev_ptis",
  (MR_String) "lli_rev_long_locns",
  (MR_String) "lli_rev_short_locns",
  (MR_String) "lli_rev_hlds_var_nums",
  (MR_String) "lli_next_user_event",
  (MR_String) "lli_next_user_event_var_num",
  (MR_String) "lli_user_events",
  (MR_String) "lli_user_event_var_nums",
  (MR_String) "lli_next_no_var_label_layout",
  (MR_String) "lli_next_svar_label_layout",
  (MR_String) "lli_next_lvar_label_layout",
  (MR_String) "lli_rev_no_var_label_layouts",
  (MR_String) "lli_rev_svar_label_layouts",
  (MR_String) "lli_rev_lvar_label_layouts",
  (MR_String) "lli_label_counter",
  (MR_String) "lli_i_label_to_layout_map"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_label_layouts_info_0_0 = {
  (MR_String) "label_layouts_info",
  INT16_C(20),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_label_layouts_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_label_layouts_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_label_layouts_info_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_label_layouts_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_label_layouts_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_label_layouts_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_label_layouts_info_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_label_layouts_info_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_label_layouts_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____label_layouts_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____label_layouts_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "label_layouts_info",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_label_layouts_info_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_label_layouts_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_label_layouts_info_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_tables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__stack_layout____Unify____label_tables_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____label_tables_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "label_tables",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_line_no_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__stack_layout____Unify____line_no_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____line_no_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "line_no_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_liveval_array_slot_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_liveval_array_slot_0_0[3] = {
  (MR_String) "lai_type",
  (MR_String) "lai_hlds_var_num",
  (MR_String) "lai_locn_desc"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0 = {
  (MR_String) "liveval_array_slot",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_liveval_array_slot_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_liveval_array_slot_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_liveval_array_slot_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_liveval_array_slot_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_liveval_array_slot_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_liveval_array_slot_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_liveval_array_slot_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____liveval_array_slot_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____liveval_array_slot_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "liveval_array_slot",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_liveval_array_slot_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_liveval_array_slot_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_liveval_array_slot_0,

};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_0 = {
  (MR_String) "lval_r_reg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_1 = {
  (MR_String) "lval_f_reg",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_2 = {
  (MR_String) "lval_stackvar",
  INT32_C(2)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_3 = {
  (MR_String) "lval_framevar",
  INT32_C(3)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_4 = {
  (MR_String) "lval_succip",
  INT32_C(4)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_5 = {
  (MR_String) "lval_maxfr",
  INT32_C(5)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_6 = {
  (MR_String) "lval_curfr",
  INT32_C(6)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_7 = {
  (MR_String) "lval_hp",
  INT32_C(7)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_8 = {
  (MR_String) "lval_sp",
  INT32_C(8)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_9 = {
  (MR_String) "lval_indirect",
  INT32_C(9)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_10 = {
  (MR_String) "lval_parent_sp",
  INT32_C(10)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_11 = {
  (MR_String) "lval_parent_stackvar",
  INT32_C(11)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_12 = {
  (MR_String) "lval_double_stackvar",
  INT32_C(12)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_13 = {
  (MR_String) "lval_double_parent_stackvar",
  INT32_C(13)
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_14 = {
  (MR_String) "lval_double_framevar",
  INT32_C(14)
};

static const MR_EnumFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__enum_ordinal_ordered_locn_type_0[15] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_0,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_1,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_2,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_3,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_4,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_5,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_6,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_7,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_8,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_9,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_10,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_11,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_12,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_13,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_14
};

static const MR_EnumFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__enum_name_ordered_locn_type_0[15] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_6,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_14,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_13,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_12,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_1,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_3,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_7,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_9,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_5,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_10,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_11,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_0,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_8,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_2,
  &ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_4
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_locn_type_0[15] = {
  (MR_Integer) 11,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_locn_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__stack_layout____Unify____locn_type_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____locn_type_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "locn_type",
  { ll_backend__stack_layout__ll_backend__stack_layout__enum_name_ordered_locn_type_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__enum_ordinal_ordered_locn_type_0 },
  (MR_Integer) 15,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_locn_type_0,

};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_0 = {
  (MR_String) "no_var_info",
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

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_1[1] = { (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0) };

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_1 = {
  (MR_String) "short_var_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_2[1] = { (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0) };

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_2 = {
  (MR_String) "long_var_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_0 };

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_1[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_1 };

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_2[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_2 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_maybe_var_info_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_maybe_var_info_0[3] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_2,
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_0,
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_1
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_maybe_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_maybe_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____maybe_var_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____maybe_var_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "maybe_var_info",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_maybe_var_info_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_maybe_var_info_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_maybe_var_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_layouts_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_statics_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_exec_traces_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_data_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_layouts_info_0_0[7] = {
  (MR_String) "pli_proc_statics",
  (MR_String) "pli_exec_traces",
  (MR_String) "pli_next_proc_byte",
  (MR_String) "pli_rev_proc_bytes",
  (MR_String) "pli_rev_proc_layouts",
  (MR_String) "pli_rev_proc_layout_names",
  (MR_String) "pli_p_label_to_layout_map"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_layouts_info_0_0 = {
  (MR_String) "proc_layouts_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_layouts_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_layouts_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_layouts_info_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_layouts_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_layouts_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_layouts_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_layouts_info_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_layouts_info_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_layouts_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____proc_layouts_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____proc_layouts_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "proc_layouts_info",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_layouts_info_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_layouts_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_layouts_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_statics_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_statics_info_0_0[6] = {
  (MR_String) "psi_next_call_site",
  (MR_String) "psi_next_coverage_point",
  (MR_String) "psi_next_proc_static",
  (MR_String) "psi_rev_call_sites",
  (MR_String) "psi_rev_coverage_points",
  (MR_String) "psi_rev_proc_statics"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_statics_info_0_0 = {
  (MR_String) "proc_statics_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_statics_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_statics_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_statics_info_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_statics_info_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_statics_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_statics_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_statics_info_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_statics_info_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_statics_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_statics_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____proc_statics_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____proc_statics_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "proc_statics_info",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_statics_info_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_statics_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_statics_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0) }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_stack_layout_params_0_0[12] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0),
  (MR_PseudoTypeInfo) (&ll_backend__stack_layout__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_use_static_code_addresses_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_stack_layout_params_0_0[12] = {
  (MR_String) "slp_module_info",
  (MR_String) "slp_compress_arrays",
  (MR_String) "slp_trace_level",
  (MR_String) "slp_trace_suppress",
  (MR_String) "slp_deep_profiling",
  (MR_String) "slp_agc_stack_layout",
  (MR_String) "slp_trace_stack_layout",
  (MR_String) "slp_procid_stack_layout",
  (MR_String) "slp_static_code_addresses",
  (MR_String) "slp_unboxed_floats",
  (MR_String) "slp_unboxed_int64s",
  (MR_String) "slp_rtti_line_numbers"
};

static const MR_DuArgLocn ll_backend__stack_layout__ll_backend__stack_layout__field_locns_stack_layout_params_0_0[12] = {
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
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0 = {
  (MR_String) "stack_layout_params",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_stack_layout_params_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_stack_layout_params_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_locns_stack_layout_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_stack_layout_params_0_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0 };

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_stack_layout_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_stack_layout_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_stack_layout_params_0[1] = { &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0 };

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_stack_layout_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_stack_layout_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____stack_layout_params_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____stack_layout_params_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "stack_layout_params",
  { ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_stack_layout_params_0 },
  { ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_stack_layout_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_stack_layout_params_0,

};

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__2618__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27)
{
  MR_bool succeeded;
  MR_Word LiveValueType_17 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_26, 1))));
  MR_Word Var_32;
  MR_String Name_33;

  succeeded = ((MR_tag((MR_Word) LiveValueType_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(1, LiveValueType_17, 0))));
    Name_33 = ((MR_String) ((MR_hl_field(1, LiveValueType_17, 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 1) = ((MR_Box) (Name_33));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1780__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer HeadVar__2_85)
{
  MR_bool succeeded = (NumPTIs_29 == HeadVar__2_85);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1778__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer NumHLDSVarNums_30)
{
  MR_bool succeeded = (NumPTIs_29 == NumHLDSVarNums_30);

  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1647__1_3_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34)
{
  MR_bool succeeded;
  MR_Word Lval1_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_32, 0))));
  MR_Word LiveType1_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_32, 1))));
  MR_Word Lval2_23 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_33, 0))));
  MR_Word LiveType2_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_33, 1))));
  MR_String Name1_26;
  MR_String Name2_27;
  MR_Word NameResult_28;
  MR_String NamePrime_43;
  MR_String NamePrime_47;

  succeeded = ((MR_tag((MR_Word) LiveType1_21)) == (MR_Integer) 1);
  if (succeeded)
  {
    NamePrime_43 = ((MR_String) ((MR_hl_field(1, LiveType1_21, 1))));
    Name1_26 = NamePrime_43;
  }
  else
    Name1_26 = (MR_String) "";
  succeeded = ((MR_tag((MR_Word) LiveType2_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    NamePrime_47 = ((MR_String) ((MR_hl_field(1, LiveType2_24, 1))));
    Name2_27 = NamePrime_47;
  }
  else
    Name2_27 = (MR_String) "";
  mercury__private_builtin__builtin_compare_string_3_p_0(&NameResult_28, Name1_26, Name2_27);
  switch (NameResult_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *LambdaHeadVar__3_34 = NameResult_28;
      break;
    case (MR_Integer) 0:
      ll_backend__llds____Compare____layout_locn_0_0(LambdaHeadVar__3_34, Lval1_20, Lval2_23);
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1640__1_1_p_0(
  MR_Word LambdaHeadVar__1_31)
{
  MR_bool succeeded;
  MR_Word LvalType_8 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_31, 1))));
  MR_String Name_11;

  succeeded = ((MR_tag((MR_Word) LvalType_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_11 = ((MR_String) ((MR_hl_field(1, LvalType_8, 1))));
    succeeded = (strcmp(Name_11, (MR_String) "") == 0);
    succeeded = !(succeeded);
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1431__1_3_p_0(
  MR_Word HeadVar__1_366,
  MR_Word HeadVar__2_367,
  MR_Word * HeadVar__3_368)
{
  mercury__set__intersect_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), HeadVar__1_366, HeadVar__2_367, HeadVar__3_368);
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1429__1_3_p_0(
  MR_Word HeadVar__1_360,
  MR_Word HeadVar__2_361,
  MR_Word * HeadVar__3_362)
{
  mercury__set__intersect_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), HeadVar__1_360, HeadVar__2_361, HeadVar__3_362);
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_exec_trace_layout__971__1_2_p_0(
  MR_Word MaybeTableSlotName_28,
  MR_Word HeadVar__2_124)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[6]), ((MR_Box) (MaybeTableSlotName_28)), ((MR_Box) (HeadVar__2_124)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__format_label_table__387__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17)
{
  MR_Integer LineNo_11 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_16, 0))));
  MR_Word Label_12;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_16, 1))));

  Label_12 = ((MR_Word) ((MR_hl_field(0, Var_18, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LineNo_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Label_12));
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____stack_layout_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        libs__trace_params____Compare____trace_level_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_53 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_54 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_53 < Var_54);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_53 > Var_54);
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
              MR_Integer Var_55 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_56 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_55 < Var_56);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_55 > Var_56);
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
                MR_Integer Var_57 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_58 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_57 < Var_58);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_57 > Var_58);
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
                  MR_Integer Var_59 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_60 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_59 < Var_60);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_59 > Var_60);
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
                    MR_Integer Var_61 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_62 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_61 < Var_62);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_61 > Var_62);
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
                      MR_Integer Var_63 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_64 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_63 < Var_64);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_63 > Var_64);
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
                        MR_Integer Var_65 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_66 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_65 < Var_66);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_65 > Var_66);
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
                          MR_Integer Var_67 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_68 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_67 < Var_68);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_67 > Var_68);
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

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____stack_layout_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_30_30;
    MR_Word TypeCtorInfo_32_32;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_30_30 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeCtorInfo_32_32 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_32_32, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
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
                          succeeded = (ArgX12_25 == ArgY12_26);
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
ll_backend__stack_layout____Compare____proc_layouts_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    ll_backend__stack_layout____Compare____proc_statics_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ll_backend__stack_layout____Compare____exec_traces_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[18]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[19]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_statics_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
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

        mercury__counter____Compare____counter_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[20]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[21]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[22]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_layouts_info_0_0(
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
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = ll_backend__stack_layout____Unify____proc_statics_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ll_backend__stack_layout____Unify____exec_traces_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[18]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[19]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&ll_backend__stack_layout_scalar_common_1[13]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
ll_backend__stack_layout____Unify____proc_statics_info_0_0(
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
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[20]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[21]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[22]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____maybe_var_info_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              ll_backend__layout____Compare____label_short_var_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
              MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

              ll_backend__layout____Compare____label_long_var_info_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____maybe_var_info_0_0(
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
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 2));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
            succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____locn_type_0_0(
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
ll_backend__stack_layout____Unify____locn_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____liveval_array_slot_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____rval_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____liveval_array_slot_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = ll_backend__llds____Unify____rval_0_0(ArgX1_3, ArgY1_4);
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
ll_backend__stack_layout____Compare____line_no_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____line_no_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_tables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_layouts_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_63 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_64 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_63 == CastY_64);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 16))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 17))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 18))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 19))));
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[12]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__counter____Compare____counter_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
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

                        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[13]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[14]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__counter____Compare____counter_0_0(&SubResult13_42, ArgX13_40, ArgY13_41);
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__counter____Compare____counter_0_0(&SubResult14_45, ArgX14_43, ArgY14_44);
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__counter____Compare____counter_0_0(&SubResult15_48, ArgX15_46, ArgY15_47);
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[15]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[16]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[17]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__counter____Compare____counter_0_0(&SubResult19_60, ArgX19_58, ArgY19_59);
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
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

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_layouts_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_43 == CastY_44);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_50_50;
    MR_Word TypeInfo_51_51;
    MR_Word TypeInfo_55_55;
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_57_57;
    MR_Word TypeInfo_59_59;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 17))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 18))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 19))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 19))));

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
            TypeInfo_45_45 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[12]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_46_46 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_47_47 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_48_48 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    succeeded = mercury__counter____Unify____counter_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        TypeInfo_50_50 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[13]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_51_51 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[14]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            succeeded = mercury__counter____Unify____counter_0_0(ArgX13_27, ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = mercury__counter____Unify____counter_0_0(ArgX14_29, ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = mercury__counter____Unify____counter_0_0(ArgX15_31, ArgY15_32);
                                if (succeeded)
                                {
                                  TypeInfo_55_55 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[15]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_56_56 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[16]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_57_57 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[17]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        succeeded = mercury__counter____Unify____counter_0_0(ArgX19_39, ArgY19_40);
                                        if (succeeded)
                                        {
                                          TypeInfo_59_59 = (MR_Word) (&ll_backend__stack_layout_scalar_common_1[12]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
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
ll_backend__stack_layout____Compare____is_label_return_0_0(
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              ll_backend__llds____Compare____label_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____is_label_return_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____internal_label_info_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 3);
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
            ll_backend__continuation_info____Compare____internal_layout_info_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____internal_label_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX1_3, ArgY1_4);
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
            succeeded = ll_backend__continuation_info____Unify____internal_layout_info_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____file_label_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____file_label_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____exec_traces_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_36 == CastY_37);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[9]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[10]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[11]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
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
ll_backend__stack_layout____Unify____exec_traces_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__counter____Unify____counter_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_31_31 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[9]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[10]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_33_33 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_34_34 = (MR_Word) (&ll_backend__stack_layout_scalar_common_1[11]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
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
ll_backend__stack_layout__add_var_to_var_number_map_6_p_0(
  MR_Word VarTable_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_15,
  MR_Word * STATE_VARIABLE_VarNumMap_16,
  MR_Word STATE_VARIABLE_Counter_0_17,
  MR_Word * STATE_VARIABLE_Counter_18)
{
  MR_Word VarEntry_11;
  MR_String VarName_12;
  MR_Word Var_19;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_7, Var_8, &VarEntry_11);
  VarName_12 = ((MR_String) ((MR_hl_field(0, VarEntry_11, 0))));
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (VarName_12));
  }
  ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(Var_19, STATE_VARIABLE_VarNumMap_0_15, STATE_VARIABLE_VarNumMap_16, STATE_VARIABLE_Counter_0_17, STATE_VARIABLE_Counter_18);
}

static void MR_CALL 
ll_backend__stack_layout__user_attribute_var_num_map_6_p_0(
  MR_Word VarTable_7,
  MR_Word MaybeAttribute_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_14,
  MR_Word * STATE_VARIABLE_VarNumMap_15,
  MR_Word STATE_VARIABLE_Counter_0_16,
  MR_Word * STATE_VARIABLE_Counter_17)
{
  if ((MaybeAttribute_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_VarNumMap_15 = STATE_VARIABLE_VarNumMap_0_14;
    *STATE_VARIABLE_Counter_17 = STATE_VARIABLE_Counter_0_16;
  }
  else
  {
    MR_Word Attribute_11 = ((MR_Word) ((MR_hl_field(1, MaybeAttribute_8, 0))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Attribute_11, 1))));
    MR_Word VarEntry_18;
    MR_String VarName_19;
    MR_Word Var_22;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_7, Var_13, &VarEntry_18);
    VarName_19 = ((MR_String) ((MR_hl_field(0, VarEntry_18, 0))));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (Var_13));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (VarName_19));
    }
    ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(Var_22, STATE_VARIABLE_VarNumMap_0_14, STATE_VARIABLE_VarNumMap_15, STATE_VARIABLE_Counter_0_16, STATE_VARIABLE_Counter_17);
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarNumMap_0_12,
  MR_Word * STATE_VARIABLE_VarNumMap_13,
  MR_Word STATE_VARIABLE_Counter_0_14,
  MR_Word * STATE_VARIABLE_Counter_15)
{
  MR_bool succeeded;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_String Name_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Box conv0_Var_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]), STATE_VARIABLE_VarNumMap_0_12, ((MR_Box) (Var_6)), &conv0_Var_10);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    *STATE_VARIABLE_Counter_15 = STATE_VARIABLE_Counter_0_14;
    *STATE_VARIABLE_VarNumMap_13 = STATE_VARIABLE_VarNumMap_0_12;
  }
  else
  {
    MR_Integer VarNum_11;
    MR_Word Var_17;

    mercury__counter__allocate_3_p_0(&VarNum_11, STATE_VARIABLE_Counter_0_14, STATE_VARIABLE_Counter_15);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (VarNum_11));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (Name_7));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]), ((MR_Box) (Var_6)), ((MR_Box) (Var_17)), STATE_VARIABLE_VarNumMap_0_12, STATE_VARIABLE_VarNumMap_13);
  }
}

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_VarNumMap_13;
  MR_Word conv15_STATE_VARIABLE_Counter_15;

  ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_VarNumMap_13, ((MR_Word) (wrapper_arg_4)), &conv15_STATE_VARIABLE_Counter_15);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_VarNumMap_13));
  *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_Counter_15));
}

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv14_LambdaHeadVar__2_27;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__2618__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv14_LambdaHeadVar__2_27);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv14_LambdaHeadVar__2_27));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_VarNumMap_13;
  MR_Word conv10_STATE_VARIABLE_Counter_15;

  ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_VarNumMap_13, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_Counter_15);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_VarNumMap_13));
  *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_Counter_15));
}

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv9_LambdaHeadVar__2_27;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__2618__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_LambdaHeadVar__2_27);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_27));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_VarNumMap_15;
  MR_Word conv5_STATE_VARIABLE_Counter_17;

  ll_backend__stack_layout__user_attribute_var_num_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_VarNumMap_15, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Counter_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_VarNumMap_15));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Counter_17));
}

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_VarNumMap_13;
  MR_Word conv1_STATE_VARIABLE_Counter_15;

  ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_VarNumMap_13, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Counter_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_VarNumMap_13));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_15));
}

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_27;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__2618__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_27);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0(
  MR_Word VarTable_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarNumMap_0_29,
  MR_Word * STATE_VARIABLE_VarNumMap_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32)
{
  MR_bool succeeded;
  MR_Word Internal_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word MaybeTrace_12 = ((MR_Word) ((MR_hl_field(0, Internal_9, 0))));
  MR_Word MaybeResume_13 = ((MR_Word) ((MR_hl_field(0, Internal_9, 1))));
  MR_Word MaybeReturn_14 = ((MR_Word) ((MR_hl_field(0, Internal_9, 2))));
  MR_Word STATE_VARIABLE_VarNumMap_2_36;
  MR_Word STATE_VARIABLE_Counter_2_37;
  MR_Word STATE_VARIABLE_VarNumMap_3_38;
  MR_Word STATE_VARIABLE_Counter_3_39;

  if ((MaybeTrace_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_VarNumMap_2_36 = STATE_VARIABLE_VarNumMap_0_29;
    STATE_VARIABLE_Counter_2_37 = STATE_VARIABLE_Counter_0_31;
  }
  else
  {
    MR_Word Trace_15 = ((MR_Word) ((MR_hl_field(1, MaybeTrace_12, 0))));
    MR_Word MaybeUser_20 = ((MR_Word) ((MR_hl_field(0, Trace_15, 3))));
    MR_Word TraceLayout_21 = ((MR_Word) ((MR_hl_field(0, Trace_15, 4))));
    MR_Word STATE_VARIABLE_VarNumMap_1_33;
    MR_Word STATE_VARIABLE_Counter_1_34;
    MR_Word VarInfoSet_48 = ((MR_Word) ((MR_hl_field(0, TraceLayout_21, 0))));
    MR_Word VarInfos_50;
    MR_Word VarsNames_52;
    MR_Box conv4_STATE_VARIABLE_VarNumMap_1_33;
    MR_Box conv3_STATE_VARIABLE_Counter_1_34;

    VarInfos_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), VarInfoSet_48);
    mercury__list__filter_map_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[39]), VarInfos_50, &VarsNames_52);
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[40]), VarsNames_52, ((MR_Box) (STATE_VARIABLE_VarNumMap_0_29)), &conv4_STATE_VARIABLE_VarNumMap_1_33, ((MR_Box) (STATE_VARIABLE_Counter_0_31)), &conv3_STATE_VARIABLE_Counter_1_34);
    STATE_VARIABLE_VarNumMap_1_33 = ((MR_Word) (conv4_STATE_VARIABLE_VarNumMap_1_33));
    STATE_VARIABLE_Counter_1_34 = ((MR_Word) (conv3_STATE_VARIABLE_Counter_1_34));
    if ((MaybeUser_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_VarNumMap_2_36 = STATE_VARIABLE_VarNumMap_1_33;
      STATE_VARIABLE_Counter_2_37 = STATE_VARIABLE_Counter_1_34;
    }
    else
    {
      MR_Word UserEvent_22 = ((MR_Word) ((MR_hl_field(1, MaybeUser_20, 0))));
      MR_Word Attributes_24 = ((MR_Word) ((MR_hl_field(0, UserEvent_22, 1))));
      MR_Word Var_35;
      MR_Box conv8_STATE_VARIABLE_VarNumMap_2_36;
      MR_Box conv7_STATE_VARIABLE_Counter_2_37;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_9[2]));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_3));
        MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_35, 3) = ((MR_Box) (VarTable_7));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[7]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_35, Attributes_24, ((MR_Box) (STATE_VARIABLE_VarNumMap_1_33)), &conv8_STATE_VARIABLE_VarNumMap_2_36, ((MR_Box) (STATE_VARIABLE_Counter_1_34)), &conv7_STATE_VARIABLE_Counter_2_37);
      STATE_VARIABLE_VarNumMap_2_36 = ((MR_Word) (conv8_STATE_VARIABLE_VarNumMap_2_36));
      STATE_VARIABLE_Counter_2_37 = ((MR_Word) (conv7_STATE_VARIABLE_Counter_2_37));
    }
  }
  if ((MaybeResume_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_VarNumMap_3_38 = STATE_VARIABLE_VarNumMap_2_36;
    STATE_VARIABLE_Counter_3_39 = STATE_VARIABLE_Counter_2_37;
  }
  else
  {
    MR_Word ResumeLayout_25 = ((MR_Word) ((MR_hl_field(1, MaybeResume_13, 0))));
    MR_Word VarInfoSet_58 = ((MR_Word) ((MR_hl_field(0, ResumeLayout_25, 0))));
    MR_Word VarInfos_60;
    MR_Word VarsNames_62;
    MR_Box conv13_STATE_VARIABLE_VarNumMap_3_38;
    MR_Box conv12_STATE_VARIABLE_Counter_3_39;

    VarInfos_60 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), VarInfoSet_58);
    mercury__list__filter_map_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[41]), VarInfos_60, &VarsNames_62);
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[42]), VarsNames_62, ((MR_Box) (STATE_VARIABLE_VarNumMap_2_36)), &conv13_STATE_VARIABLE_VarNumMap_3_38, ((MR_Box) (STATE_VARIABLE_Counter_2_37)), &conv12_STATE_VARIABLE_Counter_3_39);
    STATE_VARIABLE_VarNumMap_3_38 = ((MR_Word) (conv13_STATE_VARIABLE_VarNumMap_3_38));
    STATE_VARIABLE_Counter_3_39 = ((MR_Word) (conv12_STATE_VARIABLE_Counter_3_39));
  }
  if ((MaybeReturn_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_VarNumMap_30 = STATE_VARIABLE_VarNumMap_3_38;
    *STATE_VARIABLE_Counter_32 = STATE_VARIABLE_Counter_3_39;
  }
  else
  {
    MR_Word Return_26 = ((MR_Word) ((MR_hl_field(1, MaybeReturn_14, 0))));
    MR_Word ReturnLayout_28 = ((MR_Word) ((MR_hl_field(0, Return_26, 1))));
    MR_Word VarInfoSet_68 = ((MR_Word) ((MR_hl_field(0, ReturnLayout_28, 0))));
    MR_Word VarInfos_70;
    MR_Word VarsNames_72;
    MR_Box conv18_STATE_VARIABLE_VarNumMap_30;
    MR_Box conv17_STATE_VARIABLE_Counter_32;

    VarInfos_70 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), VarInfoSet_68);
    mercury__list__filter_map_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[43]), VarInfos_70, &VarsNames_72);
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[10]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[44]), VarsNames_72, ((MR_Box) (STATE_VARIABLE_VarNumMap_3_38)), &conv18_STATE_VARIABLE_VarNumMap_30, ((MR_Box) (STATE_VARIABLE_Counter_3_39)), &conv17_STATE_VARIABLE_Counter_32);
    *STATE_VARIABLE_VarNumMap_30 = ((MR_Word) (conv18_STATE_VARIABLE_VarNumMap_30));
    *STATE_VARIABLE_Counter_32 = ((MR_Word) (conv17_STATE_VARIABLE_Counter_32));
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_closure_arg_rval_4_p_0(
  MR_Word ClosureArg_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * STATE_VARIABLE_StaticCellInfo_14)
{
  MR_Word ArgRval_6;
  MR_Word ArgRvalType_7;
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, ClosureArg_5, 0))));

  ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_9, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_StaticCellInfo_0_13, STATE_VARIABLE_StaticCellInfo_14, &ArgRval_6, &ArgRvalType_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ArgRval_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgRvalType_7));
  }
}

static MR_Integer MR_CALL 
ll_backend__stack_layout__project_array_slot_locn_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Locn_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));

  return Locn_5;
}

static MR_Integer MR_CALL 
ll_backend__stack_layout__project_array_slot_hlds_var_num_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer VarNum_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));

  return VarNum_4;
}

static MR_Word MR_CALL 
ll_backend__stack_layout__project_array_slot_pti_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word PTI_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  return PTI_3;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__select_trace_return_1_p_0(
  MR_Word LocnInfo_2)
{
  MR_bool succeeded;
  MR_Word Locn_3 = ((MR_Word) ((MR_hl_field(0, LocnInfo_2, 0))));
  MR_Word LvalType_4 = ((MR_Word) ((MR_hl_field(0, LocnInfo_2, 1))));
  MR_String Name_7;
  MR_Word Lval_10;

  succeeded = ((MR_tag((MR_Word) LvalType_4)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_7 = ((MR_String) ((MR_hl_field(1, LvalType_4, 1))));
    succeeded = (strcmp(Name_7, (MR_String) "") == 0);
    succeeded = !(succeeded);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) Locn_3)) == (MR_Integer) 0))
        Lval_10 = ((MR_Word) ((MR_hl_field(0, Locn_3, 0))));
      else
        Lval_10 = ((MR_Word) ((MR_hl_field(1, Locn_3, 0))));
      switch (MR_tag((MR_Word) Lval_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Lval_10, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(3, Lval_10, 1))) & (MR_Integer) 1);

                succeeded = (Var_15 == (MR_Integer) 0);
              }
              break;
          }
          break;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_368;

  ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1431__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_368);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_368));
}

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_362;

  ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1429__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_362);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_362));
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_layout__select_trace_return_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0(
  MR_Word Params_13,
  MR_Word ProcLabel_14,
  MR_Word ProcLayoutName_15,
  MR_Word VarNumMap_16,
  MR_Word HeadVar__5_5,
  MR_Word * LabelLayout_19,
  MR_Word STATE_VARIABLE_StringTable_0_101,
  MR_Word * STATE_VARIABLE_StringTable_102,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_103,
  MR_Word * STATE_VARIABLE_StaticCellInfo_104,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_105,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_106)
{
  MR_bool succeeded;
  MR_Integer LabelNum_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__5_5, 0))));
  MR_Word Internal_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 1))));
  MR_Word Trace_23 = ((MR_Word) ((MR_hl_field(0, Internal_18, 0))));
  MR_Word Resume_24 = ((MR_Word) ((MR_hl_field(0, Internal_18, 1))));
  MR_Word Return_25 = ((MR_Word) ((MR_hl_field(0, Internal_18, 2))));
  MR_Word TraceLiveVarSet_26;
  MR_Word TraceTypeVarMap_27;
  MR_Word MaybeUserInfo_28;
  MR_Word ResumeLiveVarSet_34;
  MR_Word ResumeTypeVarMap_35;
  MR_Word MaybePort_43;
  MR_Word MaybeIsHidden_44;
  MR_Word MaybeGoalPath_47;
  MR_Word AgcStackLayout_55;
  MR_Word ReturnLiveVarSet_56;
  MR_Word ReturnTypeVarMap_57;
  MR_Word MaybeVarInfo_61;
  MR_Word MaybeUserDataSlot_66;
  MR_Integer LabelNumber_91;
  MR_Word Label_92;
  MR_Word BasicLayout_93;
  MR_Word LabelVars_94;
  MR_Integer Slot_96;
  MR_Word STATE_VARIABLE_LabelLayoutInfo_6_132;

  if ((Resume_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), &ResumeLiveVarSet_34);
    mercury__map__init_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), &ResumeTypeVarMap_35);
  }
  else
  {
    MR_Word ResumeLayout_36 = ((MR_Word) ((MR_hl_field(1, Resume_24, 0))));

    ResumeLiveVarSet_34 = ((MR_Word) ((MR_hl_field(0, ResumeLayout_36, 0))));
    ResumeTypeVarMap_35 = ((MR_Word) ((MR_hl_field(0, ResumeLayout_36, 1))));
  }
  AgcStackLayout_55 = ((((MR_Unsigned) ((MR_hl_field(0, Params_13, 4))) >> 6)) & (MR_Integer) 1);
  if ((Trace_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), &TraceLiveVarSet_26);
    mercury__map__init_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), &TraceTypeVarMap_27);
    MaybeUserInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
    if ((Return_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybePort_43 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeIsHidden_44 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeGoalPath_47 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_StringTable_102 = STATE_VARIABLE_StringTable_0_101;
      mercury__set__init_1_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), &ReturnLiveVarSet_56);
      mercury__map__init_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), &ReturnTypeVarMap_57);
    }
    else
    {
      MR_Word ReturnInfo_48 = ((MR_Word) ((MR_hl_field(1, Return_25, 0))));
      MR_Word TargetsContexts_49;
      MR_Word ReturnLayout_59;
      MR_Word ReturnLiveVarSet0_60;
      MR_Word GoalPath_141;
      MR_Word Var_51;
      MR_Word Var_52;

      MaybePort_43 = (MR_Word) (MR_mkword(1, &ll_backend__stack_layout_scalar_common_3[0]));
      MaybeIsHidden_44 = (MR_Word) (MR_mkword(1, &ll_backend__stack_layout_scalar_common_3[1]));
      TargetsContexts_49 = ((MR_Word) ((MR_hl_field(0, ReturnInfo_48, 0))));
      ReturnLayout_59 = ((MR_Word) ((MR_hl_field(0, ReturnInfo_48, 1))));
      succeeded = ll_backend__stack_layout__find_valid_return_context_4_p_0(TargetsContexts_49, &Var_51, &Var_52, &GoalPath_141);
      if (succeeded)
      {
        MR_String GoalPathStr_139;
        MR_Integer GoalPathNum_140;

        GoalPathStr_139 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_141);
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(GoalPathStr_139, &GoalPathNum_140, STATE_VARIABLE_StringTable_0_101, STATE_VARIABLE_StringTable_102);
        {
          MaybeGoalPath_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeGoalPath_47, 0) = ((MR_Box) (GoalPathNum_140));
        }
      }
      else
      {
        MaybeGoalPath_47 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_StringTable_102 = STATE_VARIABLE_StringTable_0_101;
      }
      ReturnLiveVarSet0_60 = ((MR_Word) ((MR_hl_field(0, ReturnLayout_59, 0))));
      ReturnTypeVarMap_57 = ((MR_Word) ((MR_hl_field(0, ReturnLayout_59, 1))));
      switch (AgcStackLayout_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__set__filter_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[36]), ReturnLiveVarSet0_60, &ReturnLiveVarSet_56);
          break;
        case (MR_Integer) 1:
          ReturnLiveVarSet_56 = ReturnLiveVarSet0_60;
          break;
      }
    }
  }
  else
  {
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word TraceLayout_33;
    MR_Word Var_107 = ((MR_Word) ((MR_hl_field(1, Trace_23, 0))));

    Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Var_107, 1))) >> 1)) & (MR_Integer) 15);
    Var_31 = ((MR_Unsigned) ((MR_hl_field(0, Var_107, 1))) & (MR_Integer) 1);
    Var_32 = ((MR_Word) ((MR_hl_field(0, Var_107, 2))));
    MaybeUserInfo_28 = ((MR_Word) ((MR_hl_field(0, Var_107, 3))));
    TraceLayout_33 = ((MR_Word) ((MR_hl_field(0, Var_107, 4))));
    TraceLiveVarSet_26 = ((MR_Word) ((MR_hl_field(0, TraceLayout_33, 0))));
    TraceTypeVarMap_27 = ((MR_Word) ((MR_hl_field(0, TraceLayout_33, 1))));
    if ((Return_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String GoalPathStr_45;
      MR_Integer GoalPathNum_46;

      {
        MaybePort_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePort_43, 0) = ((MR_Box) (Var_30));
      }
      {
        MaybeIsHidden_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeIsHidden_44, 0) = ((MR_Box) (Var_31));
      }
      GoalPathStr_45 = mdbcomp__goal_path__goal_path_to_string_1_f_0(Var_32);
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(GoalPathStr_45, &GoalPathNum_46, STATE_VARIABLE_StringTable_0_101, STATE_VARIABLE_StringTable_102);
      {
        MaybeGoalPath_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeGoalPath_47, 0) = ((MR_Box) (GoalPathNum_46));
      }
      mercury__set__init_1_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), &ReturnLiveVarSet_56);
      mercury__map__init_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), &ReturnTypeVarMap_57);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.construct_internal_layout\'/12", (MR_String) "label has both trace and return layout info");
        return;
      }
  }
  succeeded = (Trace_23 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (Resume_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Return_25 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MaybeVarInfo_61 = (MR_Word) ((MR_Unsigned) 0U);
    if ((MaybeUserInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeUserDataSlot_66 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_StaticCellInfo_104 = STATE_VARIABLE_StaticCellInfo_0_103;
      STATE_VARIABLE_LabelLayoutInfo_6_132 = STATE_VARIABLE_LabelLayoutInfo_0_105;
    }
    else
    {
      MR_Word UserInfo_67 = ((MR_Word) ((MR_hl_field(1, MaybeUserInfo_28, 0))));
      MR_Integer UserEventNumber_68 = ((MR_Integer) ((MR_hl_field(0, UserInfo_67, 0))));
      MR_Word Attributes_69 = ((MR_Word) ((MR_hl_field(0, UserInfo_67, 1))));
      MR_Word UserLocnsArray_70;
      MR_Word UserAttrMaybeVarNums_71;
      MR_Word UserLocnsDataAddr_72;
      MR_Word UserLocnsRval_73;
      MR_Integer NumVarNums_74;
      MR_Integer VarNumSlotNum0_75;
      MR_Integer VarNumSlotNum_76;
      MR_Word UserAttrVarNumsSlot_77;
      MR_Word VarNums0_78;
      MR_Word VarNums_79;
      MR_Word UserEventCounter0_80;
      MR_Integer UserEventSlotNum_81;
      MR_Word UserEventCounter_82;
      MR_Word UserEventSlot_83;
      MR_Word UserData_84;
      MR_Word UserEvents0_85;
      MR_Word UserEvents_86;
      MR_Word STATE_VARIABLE_StaticCellInfo_2_121;
      MR_Word Var_123;
      MR_Word Var_126;
      MR_Word Var_130;
      MR_Integer Var_153;
      MR_Integer Var_154;
      MR_Integer Var_155;
      MR_Integer Var_156;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_164;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;

      ll_backend__stack_layout__construct_user_data_array_7_p_0(Params_13, VarNumMap_16, Attributes_69, &UserLocnsArray_70, &UserAttrMaybeVarNums_71, STATE_VARIABLE_StaticCellInfo_0_103, &STATE_VARIABLE_StaticCellInfo_2_121);
      ll_backend__global_data__add_scalar_static_cell_4_p_0(UserLocnsArray_70, &UserLocnsDataAddr_72, STATE_VARIABLE_StaticCellInfo_2_121, STATE_VARIABLE_StaticCellInfo_104);
      {
        Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, Var_123, 1) = ((MR_Box) (UserLocnsDataAddr_72));
      }
      {
        UserLocnsRval_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, UserLocnsRval_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, UserLocnsRval_73, 1) = ((MR_Box) (Var_123));
      }
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), UserAttrMaybeVarNums_71, &NumVarNums_74);
      Var_153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 0))));
      Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 1))));
      Var_155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 2))));
      Var_156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 3))));
      Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 4))));
      Var_158 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 5))));
      Var_159 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 6))));
      Var_160 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 7))));
      Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 8))));
      VarNumSlotNum0_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 9))));
      Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 10))));
      VarNums0_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 11))));
      Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 12))));
      Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 13))));
      Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 14))));
      Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 15))));
      Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 16))));
      Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 17))));
      Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 18))));
      Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_105, 19))));
      VarNumSlotNum_76 = (MR_Integer) ((MR_Unsigned) VarNumSlotNum0_75 + (MR_Unsigned) NumVarNums_74);
      {
        UserAttrVarNumsSlot_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserAttrVarNumsSlot_77, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(0, UserAttrVarNumsSlot_77, 1) = ((MR_Box) (VarNumSlotNum0_75));
      }
      Var_126 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), UserAttrMaybeVarNums_71);
      VarNums_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), VarNums0_78, Var_126);
      UserEventCounter0_80 = Var_161;
      mercury__counter__allocate_3_p_0(&UserEventSlotNum_81, UserEventCounter0_80, &UserEventCounter_82);
      UserEvents0_85 = Var_162;
      {
        UserEventSlot_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserEventSlot_83, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, UserEventSlot_83, 1) = ((MR_Box) (UserEventSlotNum_81));
      }
      {
        UserData_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserData_84, 0) = ((MR_Box) (UserEventNumber_68));
        MR_hl_field(0, UserData_84, 1) = ((MR_Box) (UserLocnsRval_73));
        MR_hl_field(0, UserData_84, 2) = ((MR_Box) (UserAttrVarNumsSlot_77));
      }
      Var_130 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), ((MR_Box) (UserData_84)));
      UserEvents_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), UserEvents0_85, Var_130);
      {
        STATE_VARIABLE_LabelLayoutInfo_6_132 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 0) = ((MR_Box) (Var_153));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 1) = ((MR_Box) (Var_154));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 2) = ((MR_Box) (Var_155));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 3) = ((MR_Box) (Var_156));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 4) = ((MR_Box) (Var_157));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 5) = ((MR_Box) (Var_158));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 6) = ((MR_Box) (Var_159));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 7) = ((MR_Box) (Var_160));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 8) = ((MR_Box) (UserEventCounter_82));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 9) = ((MR_Box) (VarNumSlotNum_76));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 10) = ((MR_Box) (UserEvents_86));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 11) = ((MR_Box) (VarNums_79));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 12) = ((MR_Box) (Var_164));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 13) = ((MR_Box) (Var_165));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 14) = ((MR_Box) (Var_166));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 15) = ((MR_Box) (Var_167));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 16) = ((MR_Box) (Var_168));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 17) = ((MR_Box) (Var_169));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 18) = ((MR_Box) (Var_170));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 19) = ((MR_Box) (Var_171));
      }
      {
        MaybeUserDataSlot_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeUserDataSlot_66, 0) = ((MR_Box) (UserEventSlot_83));
      }
    }
    LabelNumber_91 = (MR_Integer) 0;
  }
  else
  {
    MR_Word LiveVarSet0_62;
    MR_Word LiveVarSet_63;
    MR_Word TypeVarMap0_64;
    MR_Word TypeVarMap_65;
    MR_Word STATE_VARIABLE_StaticCellInfo_1_798;
    MR_Word STATE_VARIABLE_LabelLayoutInfo_1_799;
    MR_Word STATE_VARIABLE_LabelLayoutInfo_5_809;

    mercury__set__union_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), TraceLiveVarSet_26, ResumeLiveVarSet_34, &LiveVarSet0_62);
    mercury__set__union_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), LiveVarSet0_62, ReturnLiveVarSet_56, &LiveVarSet_63);
    mercury__map__union_4_p_1((MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[37]), TraceTypeVarMap_27, ResumeTypeVarMap_35, &TypeVarMap0_64);
    mercury__map__union_4_p_1((MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[38]), TypeVarMap0_64, ReturnTypeVarMap_57, &TypeVarMap_65);
    ll_backend__stack_layout__construct_label_var_info_9_p_0(Params_13, LiveVarSet_63, VarNumMap_16, TypeVarMap_65, &MaybeVarInfo_61, STATE_VARIABLE_StaticCellInfo_0_103, &STATE_VARIABLE_StaticCellInfo_1_798, STATE_VARIABLE_LabelLayoutInfo_0_105, &STATE_VARIABLE_LabelLayoutInfo_1_799);
    if ((MaybeUserInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeUserDataSlot_66 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_StaticCellInfo_104 = STATE_VARIABLE_StaticCellInfo_1_798;
      STATE_VARIABLE_LabelLayoutInfo_5_809 = STATE_VARIABLE_LabelLayoutInfo_1_799;
    }
    else
    {
      MR_Word UserInfo_564 = ((MR_Word) ((MR_hl_field(1, MaybeUserInfo_28, 0))));
      MR_Integer UserEventNumber_565 = ((MR_Integer) ((MR_hl_field(0, UserInfo_564, 0))));
      MR_Word Attributes_566 = ((MR_Word) ((MR_hl_field(0, UserInfo_564, 1))));
      MR_Word UserLocnsArray_567;
      MR_Word UserAttrMaybeVarNums_568;
      MR_Word UserLocnsDataAddr_569;
      MR_Word UserLocnsRval_570;
      MR_Integer NumVarNums_571;
      MR_Integer VarNumSlotNum0_572;
      MR_Integer VarNumSlotNum_573;
      MR_Word UserAttrVarNumsSlot_574;
      MR_Word VarNums0_575;
      MR_Word VarNums_576;
      MR_Word UserEventCounter0_577;
      MR_Integer UserEventSlotNum_578;
      MR_Word UserEventCounter_579;
      MR_Word UserEventSlot_580;
      MR_Word UserData_581;
      MR_Word UserEvents0_582;
      MR_Word UserEvents_583;
      MR_Word STATE_VARIABLE_StaticCellInfo_2_584;
      MR_Word Var_585;
      MR_Word Var_588;
      MR_Word Var_592;
      MR_Integer Var_593;
      MR_Integer Var_594;
      MR_Integer Var_595;
      MR_Integer Var_596;
      MR_Word Var_597;
      MR_Word Var_598;
      MR_Word Var_599;
      MR_Word Var_600;
      MR_Word Var_601;
      MR_Word Var_602;
      MR_Word Var_603;
      MR_Word Var_604;
      MR_Word Var_605;
      MR_Word Var_606;
      MR_Word Var_607;
      MR_Word Var_608;
      MR_Word Var_609;
      MR_Word Var_610;

      ll_backend__stack_layout__construct_user_data_array_7_p_0(Params_13, VarNumMap_16, Attributes_566, &UserLocnsArray_567, &UserAttrMaybeVarNums_568, STATE_VARIABLE_StaticCellInfo_1_798, &STATE_VARIABLE_StaticCellInfo_2_584);
      ll_backend__global_data__add_scalar_static_cell_4_p_0(UserLocnsArray_567, &UserLocnsDataAddr_569, STATE_VARIABLE_StaticCellInfo_2_584, STATE_VARIABLE_StaticCellInfo_104);
      {
        Var_585 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_585, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, Var_585, 1) = ((MR_Box) (UserLocnsDataAddr_569));
      }
      {
        UserLocnsRval_570 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, UserLocnsRval_570, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, UserLocnsRval_570, 1) = ((MR_Box) (Var_585));
      }
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), UserAttrMaybeVarNums_568, &NumVarNums_571);
      Var_593 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 0))));
      Var_594 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 1))));
      Var_595 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 2))));
      Var_596 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 3))));
      Var_597 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 4))));
      Var_598 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 5))));
      Var_599 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 6))));
      Var_600 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 7))));
      Var_601 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 8))));
      VarNumSlotNum0_572 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 9))));
      Var_602 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 10))));
      VarNums0_575 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 11))));
      Var_603 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 12))));
      Var_604 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 13))));
      Var_605 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 14))));
      Var_606 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 15))));
      Var_607 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 16))));
      Var_608 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 17))));
      Var_609 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 18))));
      Var_610 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_1_799, 19))));
      VarNumSlotNum_573 = (MR_Integer) ((MR_Unsigned) VarNumSlotNum0_572 + (MR_Unsigned) NumVarNums_571);
      {
        UserAttrVarNumsSlot_574 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserAttrVarNumsSlot_574, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(0, UserAttrVarNumsSlot_574, 1) = ((MR_Box) (VarNumSlotNum0_572));
      }
      Var_588 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), UserAttrMaybeVarNums_568);
      VarNums_576 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), VarNums0_575, Var_588);
      UserEventCounter0_577 = Var_601;
      mercury__counter__allocate_3_p_0(&UserEventSlotNum_578, UserEventCounter0_577, &UserEventCounter_579);
      UserEvents0_582 = Var_602;
      {
        UserEventSlot_580 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserEventSlot_580, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, UserEventSlot_580, 1) = ((MR_Box) (UserEventSlotNum_578));
      }
      {
        UserData_581 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UserData_581, 0) = ((MR_Box) (UserEventNumber_565));
        MR_hl_field(0, UserData_581, 1) = ((MR_Box) (UserLocnsRval_570));
        MR_hl_field(0, UserData_581, 2) = ((MR_Box) (UserAttrVarNumsSlot_574));
      }
      Var_592 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), ((MR_Box) (UserData_581)));
      UserEvents_583 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), UserEvents0_582, Var_592);
      {
        STATE_VARIABLE_LabelLayoutInfo_5_809 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 0) = ((MR_Box) (Var_593));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 1) = ((MR_Box) (Var_594));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 2) = ((MR_Box) (Var_595));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 3) = ((MR_Box) (Var_596));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 4) = ((MR_Box) (Var_597));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 5) = ((MR_Box) (Var_598));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 6) = ((MR_Box) (Var_599));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 7) = ((MR_Box) (Var_600));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 8) = ((MR_Box) (UserEventCounter_579));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 9) = ((MR_Box) (VarNumSlotNum_573));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 10) = ((MR_Box) (UserEvents_583));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 11) = ((MR_Box) (VarNums_576));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 12) = ((MR_Box) (Var_603));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 13) = ((MR_Box) (Var_604));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 14) = ((MR_Box) (Var_605));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 15) = ((MR_Box) (Var_606));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 16) = ((MR_Box) (Var_607));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 17) = ((MR_Box) (Var_608));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 18) = ((MR_Box) (Var_609));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 19) = ((MR_Box) (Var_610));
      }
      {
        MaybeUserDataSlot_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeUserDataSlot_66, 0) = ((MR_Box) (UserEventSlot_580));
      }
    }
    if ((Trace_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      LabelNumber_91 = (MR_Integer) 0;
      STATE_VARIABLE_LabelLayoutInfo_6_132 = STATE_VARIABLE_LabelLayoutInfo_5_809;
    }
    else
    {
      MR_Word LabelNumCounter0_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 18))));
      MR_Integer LabelNumber0_89;
      MR_Word LabelNumCounter_90;
      MR_Integer Var_309 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 0))));
      MR_Integer Var_310 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 1))));
      MR_Integer Var_311 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 2))));
      MR_Integer Var_312 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 3))));
      MR_Word Var_313 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 4))));
      MR_Word Var_314 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 5))));
      MR_Word Var_315 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 6))));
      MR_Word Var_316 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 7))));
      MR_Word Var_317 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 8))));
      MR_Integer Var_318 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 9))));
      MR_Word Var_319 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 10))));
      MR_Word Var_320 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 11))));
      MR_Word Var_321 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 12))));
      MR_Word Var_322 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 13))));
      MR_Word Var_323 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 14))));
      MR_Word Var_324 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 15))));
      MR_Word Var_325 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 16))));
      MR_Word Var_326 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 17))));
      MR_Word Var_327 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_5_809, 19))));
      MR_Integer Var_133;

      mercury__counter__allocate_3_p_0(&LabelNumber0_89, LabelNumCounter0_88, &LabelNumCounter_90);
      {
        STATE_VARIABLE_LabelLayoutInfo_6_132 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 0) = ((MR_Box) (Var_309));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 1) = ((MR_Box) (Var_310));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 2) = ((MR_Box) (Var_311));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 3) = ((MR_Box) (Var_312));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 4) = ((MR_Box) (Var_313));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 5) = ((MR_Box) (Var_314));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 6) = ((MR_Box) (Var_315));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 7) = ((MR_Box) (Var_316));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 8) = ((MR_Box) (Var_317));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 9) = ((MR_Box) (Var_318));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 10) = ((MR_Box) (Var_319));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 11) = ((MR_Box) (Var_320));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 12) = ((MR_Box) (Var_321));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 13) = ((MR_Box) (Var_322));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 14) = ((MR_Box) (Var_323));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 15) = ((MR_Box) (Var_324));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 16) = ((MR_Box) (Var_325));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 17) = ((MR_Box) (Var_326));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 18) = ((MR_Box) (LabelNumCounter_90));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_132, 19) = ((MR_Box) (Var_327));
      }
      Var_133 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 16);
      succeeded = (LabelNumber0_89 < Var_133);
      if (succeeded)
        LabelNumber_91 = LabelNumber0_89;
      else
        LabelNumber_91 = (MR_Integer) 0;
    }
  }
  {
    Label_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Label_92, 0) = ((MR_Box) (LabelNum_17));
    MR_hl_field(0, Label_92, 1) = ((MR_Box) (ProcLabel_14));
  }
  {
    BasicLayout_93 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BasicLayout_93, 0) = ((MR_Box) (ProcLabel_14));
    MR_hl_field(0, BasicLayout_93, 1) = ((MR_Box) (LabelNum_17));
    MR_hl_field(0, BasicLayout_93, 2) = ((MR_Box) (ProcLayoutName_15));
    MR_hl_field(0, BasicLayout_93, 3) = ((MR_Box) (MaybePort_43));
    MR_hl_field(0, BasicLayout_93, 4) = ((MR_Box) (MaybeIsHidden_44));
    MR_hl_field(0, BasicLayout_93, 5) = ((MR_Box) (LabelNumber_91));
    MR_hl_field(0, BasicLayout_93, 6) = ((MR_Box) (MaybeGoalPath_47));
    MR_hl_field(0, BasicLayout_93, 7) = ((MR_Box) (MaybeUserDataSlot_66));
  }
  switch (MR_tag((MR_Word) MaybeVarInfo_61)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NoVarsLayout_95;

        LabelVars_94 = (MR_Integer) 0;
        NoVarsLayout_95 = (MR_Word) (BasicLayout_93);
        ll_backend__stack_layout__add_no_vars_internal_layout_data_5_p_0(Label_92, NoVarsLayout_95, &Slot_96, STATE_VARIABLE_LabelLayoutInfo_6_132, STATE_VARIABLE_LabelLayoutInfo_106);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SLayoutVarInfo_97 = (MR_Word) (MR_body((MR_Word) (MaybeVarInfo_61), (MR_Integer) 1));
        MR_Word SVarsLayout_98;

        LabelVars_94 = (MR_Integer) 1;
        {
          SVarsLayout_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SVarsLayout_98, 0) = ((MR_Box) (BasicLayout_93));
          MR_hl_field(0, SVarsLayout_98, 1) = ((MR_Box) (SLayoutVarInfo_97));
        }
        ll_backend__stack_layout__add_short_vars_internal_layout_data_5_p_0(Label_92, SVarsLayout_98, &Slot_96, STATE_VARIABLE_LabelLayoutInfo_6_132, STATE_VARIABLE_LabelLayoutInfo_106);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LLayoutVarInfo_99 = (MR_Word) (MR_body((MR_Word) (MaybeVarInfo_61), (MR_Integer) 2));
        MR_Word LVarsLayout_100;

        LabelVars_94 = (MR_Integer) 2;
        {
          LVarsLayout_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LVarsLayout_100, 0) = ((MR_Box) (BasicLayout_93));
          MR_hl_field(0, LVarsLayout_100, 1) = ((MR_Box) (LLayoutVarInfo_99));
        }
        ll_backend__stack_layout__add_long_vars_internal_layout_data_5_p_0(Label_92, LVarsLayout_100, &Slot_96, STATE_VARIABLE_LabelLayoutInfo_6_132, STATE_VARIABLE_LabelLayoutInfo_106);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *LabelLayout_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProcLabel_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (LabelNum_17));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (LabelVars_94));
    MR_hl_field(0, base, 3) = ((MR_Box) (Slot_96));
    MR_hl_field(0, base, 4) = ((MR_Box) (Internal_18));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1780__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1778__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv3_Locn_5;

  conv3_Locn_5 = ll_backend__stack_layout__project_array_slot_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Locn_5));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv2_Locn_5;

  conv2_Locn_5 = ll_backend__stack_layout__project_array_slot_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Locn_5));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_VarNum_4;

  conv1_VarNum_4 = ll_backend__stack_layout__project_array_slot_hlds_var_num_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_VarNum_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_PTI_3;

  conv0_PTI_3 = ll_backend__stack_layout__project_array_slot_pti_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_PTI_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0(
  MR_Word Params_10,
  MR_Word VarInfoSet_11,
  MR_Word VarNumMap_12,
  MR_Word TVarLocnMap_13,
  MR_Word * MaybeVarInfo_14,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_66,
  MR_Word * STATE_VARIABLE_StaticCellInfo_67,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_68,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_69)
{
  MR_bool succeeded;
  MR_Word TypeParamsRval_17;
  MR_Word VarInfos0_18;
  MR_Word VarInfos_19;
  MR_Integer BytesLimit_20;
  MR_Word ModuleInfo_21;
  MR_Word LongArrayInfos_22;
  MR_Word ShortArrayInfos_23;
  MR_Word AllArrayInfos_24;
  MR_Word PTIs_25;
  MR_Word HLDSVarNums_26;
  MR_Word ShortLocns_27;
  MR_Word LongLocns_28;
  MR_Integer NumPTIs_29;
  MR_Integer NumHLDSVarNums_30;
  MR_Integer NumShortLocns_31;
  MR_Integer NumLongLocns_32;
  MR_Integer EncodedLength_33;
  MR_Word CompressArrays_34;
  MR_Integer PTISlot_40;
  MR_Integer HLDSVarNumSlot_47;
  MR_Integer ShortLocnSlot_54;
  MR_Word STATE_VARIABLE_StaticCellInfo_1_70;
  MR_Integer Var_72;
  MR_Word Var_79;
  MR_Word Var_82;
  MR_Integer Var_85;
  MR_Integer Var_86;
  MR_Integer Var_87;
  MR_Word STATE_VARIABLE_LabelLayoutInfo_2_93;
  MR_Word STATE_VARIABLE_LabelLayoutInfo_4_100;
  MR_Word STATE_VARIABLE_LabelLayoutInfo_6_106;
  MR_Word Var_95;

  ll_backend__stack_layout__construct_tvar_vector_4_p_0(TVarLocnMap_13, &TypeParamsRval_17, STATE_VARIABLE_StaticCellInfo_0_66, &STATE_VARIABLE_StaticCellInfo_1_70);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), VarInfoSet_11, &VarInfos0_18);
  ll_backend__stack_layout__sort_livevals_2_p_0(VarInfos0_18, &VarInfos_19);
  Var_72 = ll_backend__stack_layout__short_count_bits_0_f_0();
  mercury__int__pow_3_p_0((MR_Integer) 2, Var_72, &BytesLimit_20);
  ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(VarInfos_19, ModuleInfo_21, VarNumMap_12, (MR_Integer) 0, BytesLimit_20, &LongArrayInfos_22, &ShortArrayInfos_23, STATE_VARIABLE_StaticCellInfo_1_70, STATE_VARIABLE_StaticCellInfo_67);
  AllArrayInfos_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0), LongArrayInfos_22, ShortArrayInfos_23);
  PTIs_25 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[32]), AllArrayInfos_24);
  HLDSVarNums_26 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[33]), AllArrayInfos_24);
  ShortLocns_27 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[34]), ShortArrayInfos_23);
  LongLocns_28 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[35]), LongArrayInfos_22);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), PTIs_25, &NumPTIs_29);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HLDSVarNums_26, &NumHLDSVarNums_30);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ShortLocns_27, &NumShortLocns_31);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LongLocns_28, &NumLongLocns_32);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_5));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (NumPTIs_29));
    MR_hl_field(0, Var_79, 4) = ((MR_Box) (NumHLDSVarNums_30));
  }
  mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ll_backend.stack_layout.construct_label_var_info\'/9", (MR_String) "NumPTIs != NumHLDSVarNums");
  Var_85 = (MR_Integer) ((MR_Unsigned) NumLongLocns_32 + (MR_Unsigned) NumShortLocns_31);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_6));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (NumPTIs_29));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (Var_85));
  }
  mercury__require__expect_3_p_0(Var_82, (MR_String) "predicate \140ll_backend.stack_layout.construct_label_var_info\'/9", (MR_String) "NumPTIs != NumLongLocns + NumShortLocns");
  Var_87 = ll_backend__stack_layout__short_count_bits_0_f_0();
  Var_86 = mercury__int__f_60_60_2_f_0(NumLongLocns_32, Var_87);
  EncodedLength_33 = (MR_Integer) ((MR_Unsigned) Var_86 + (MR_Unsigned) NumShortLocns_31);
  CompressArrays_34 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  succeeded = (NumPTIs_29 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word AllRevPTIs0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 4))));
    MR_Integer NextPTISlot0_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 0))));
    MR_Word RevPTIs_37;
    MR_Integer OldPTIOffset_39;
    MR_Integer Var_89;
    MR_Integer Var_90;
    MR_Integer CompressionLimit_113;

    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), PTIs_25, &RevPTIs_37);
    succeeded = (CompressArrays_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CompressionLimit_113 = ((MR_Integer) ((MR_hl_field(1, CompressArrays_34, 0))));
      Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 0))));
      succeeded = (Var_89 <= CompressionLimit_113);
      if (succeeded)
      {
        Var_90 = (MR_Integer) 0;
        succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_108_108_95_98_97_99_107_101_110_100_46_108_108_100_115_46_114_118_97_108_93_95_48_95_49_4_p_0(RevPTIs_37, AllRevPTIs0_35, Var_90, &OldPTIOffset_39);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_91 = (MR_Integer) ((MR_Unsigned) NextPTISlot0_36 - (MR_Unsigned) OldPTIOffset_39);

      PTISlot_40 = (MR_Integer) ((MR_Unsigned) Var_91 - (MR_Unsigned) NumPTIs_29);
      STATE_VARIABLE_LabelLayoutInfo_2_93 = STATE_VARIABLE_LabelLayoutInfo_0_68;
    }
    else
    {
      MR_Word AllRevPTIs_41;
      MR_Integer NextPTISlot_42;
      MR_Integer Var_197;
      MR_Integer Var_198;
      MR_Integer Var_199;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_Word Var_204;
      MR_Integer Var_205;
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

      AllRevPTIs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevPTIs_37, AllRevPTIs0_35);
      Var_197 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 1))));
      Var_198 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 2))));
      Var_199 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 3))));
      Var_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 5))));
      Var_202 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 6))));
      Var_203 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 7))));
      Var_204 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 8))));
      Var_205 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 9))));
      Var_206 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 10))));
      Var_207 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 11))));
      Var_208 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 12))));
      Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 13))));
      Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 14))));
      Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 15))));
      Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 16))));
      Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 17))));
      Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 18))));
      Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_0_68, 19))));
      PTISlot_40 = NextPTISlot0_36;
      NextPTISlot_42 = (MR_Integer) ((MR_Unsigned) NextPTISlot0_36 + (MR_Unsigned) NumPTIs_29);
      {
        STATE_VARIABLE_LabelLayoutInfo_2_93 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 0) = ((MR_Box) (NextPTISlot_42));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 1) = ((MR_Box) (Var_197));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 2) = ((MR_Box) (Var_198));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 3) = ((MR_Box) (Var_199));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 4) = ((MR_Box) (AllRevPTIs_41));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 5) = ((MR_Box) (Var_201));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 6) = ((MR_Box) (Var_202));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 7) = ((MR_Box) (Var_203));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 8) = ((MR_Box) (Var_204));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 9) = ((MR_Box) (Var_205));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 10) = ((MR_Box) (Var_206));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 11) = ((MR_Box) (Var_207));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 12) = ((MR_Box) (Var_208));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 13) = ((MR_Box) (Var_209));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 14) = ((MR_Box) (Var_210));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 15) = ((MR_Box) (Var_211));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 16) = ((MR_Box) (Var_212));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 17) = ((MR_Box) (Var_213));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 18) = ((MR_Box) (Var_214));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 19) = ((MR_Box) (Var_215));
      }
    }
  }
  else
  {
    PTISlot_40 = (MR_Integer) -1;
    STATE_VARIABLE_LabelLayoutInfo_2_93 = STATE_VARIABLE_LabelLayoutInfo_0_68;
  }
  succeeded = (NumHLDSVarNums_30 > (MR_Integer) 0);
  if (succeeded)
  {
    Var_95 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 4))) >> 5)) & (MR_Integer) 1);
    succeeded = (Var_95 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word AllRevHLDSVarNums0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 7))));
    MR_Integer NextHLDSVarNumSlot0_44 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 3))));
    MR_Word RevHLDSVarNums_45;
    MR_Integer OldHLDSVarNumsOffset_46;
    MR_Integer Var_96;
    MR_Integer Var_97;
    MR_Integer CompressionLimit_114;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HLDSVarNums_26, &RevHLDSVarNums_45);
    succeeded = (CompressArrays_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CompressionLimit_114 = ((MR_Integer) ((MR_hl_field(1, CompressArrays_34, 0))));
      Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 3))));
      succeeded = (Var_96 <= CompressionLimit_114);
      if (succeeded)
      {
        Var_97 = (MR_Integer) 0;
        succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevHLDSVarNums_45, AllRevHLDSVarNums0_43, Var_97, &OldHLDSVarNumsOffset_46);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_98 = (MR_Integer) ((MR_Unsigned) NextHLDSVarNumSlot0_44 - (MR_Unsigned) OldHLDSVarNumsOffset_46);

      HLDSVarNumSlot_47 = (MR_Integer) ((MR_Unsigned) Var_98 - (MR_Unsigned) NumHLDSVarNums_30);
      STATE_VARIABLE_LabelLayoutInfo_4_100 = STATE_VARIABLE_LabelLayoutInfo_2_93;
    }
    else
    {
      MR_Word AllRevHLDSVarNums_48;
      MR_Integer NextHLDSVarNumSlot_49;
      MR_Integer Var_304;
      MR_Integer Var_305;
      MR_Integer Var_306;
      MR_Word Var_308;
      MR_Word Var_309;
      MR_Word Var_310;
      MR_Word Var_312;
      MR_Integer Var_313;
      MR_Word Var_314;
      MR_Word Var_315;
      MR_Word Var_316;
      MR_Word Var_317;
      MR_Word Var_318;
      MR_Word Var_319;
      MR_Word Var_320;
      MR_Word Var_321;
      MR_Word Var_322;
      MR_Word Var_323;

      AllRevHLDSVarNums_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevHLDSVarNums_45, AllRevHLDSVarNums0_43);
      Var_304 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 0))));
      Var_305 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 1))));
      Var_306 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 2))));
      Var_308 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 4))));
      Var_309 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 5))));
      Var_310 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 6))));
      Var_312 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 8))));
      Var_313 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 9))));
      Var_314 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 10))));
      Var_315 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 11))));
      Var_316 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 12))));
      Var_317 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 13))));
      Var_318 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 14))));
      Var_319 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 15))));
      Var_320 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 16))));
      Var_321 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 17))));
      Var_322 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 18))));
      Var_323 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_2_93, 19))));
      HLDSVarNumSlot_47 = NextHLDSVarNumSlot0_44;
      NextHLDSVarNumSlot_49 = (MR_Integer) ((MR_Unsigned) NextHLDSVarNumSlot0_44 + (MR_Unsigned) NumHLDSVarNums_30);
      {
        STATE_VARIABLE_LabelLayoutInfo_4_100 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 0) = ((MR_Box) (Var_304));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 1) = ((MR_Box) (Var_305));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 2) = ((MR_Box) (Var_306));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 3) = ((MR_Box) (NextHLDSVarNumSlot_49));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 4) = ((MR_Box) (Var_308));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 5) = ((MR_Box) (Var_309));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 6) = ((MR_Box) (Var_310));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 7) = ((MR_Box) (AllRevHLDSVarNums_48));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 8) = ((MR_Box) (Var_312));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 9) = ((MR_Box) (Var_313));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 10) = ((MR_Box) (Var_314));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 11) = ((MR_Box) (Var_315));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 12) = ((MR_Box) (Var_316));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 13) = ((MR_Box) (Var_317));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 14) = ((MR_Box) (Var_318));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 15) = ((MR_Box) (Var_319));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 16) = ((MR_Box) (Var_320));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 17) = ((MR_Box) (Var_321));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 18) = ((MR_Box) (Var_322));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 19) = ((MR_Box) (Var_323));
      }
    }
  }
  else
  {
    HLDSVarNumSlot_47 = (MR_Integer) -1;
    STATE_VARIABLE_LabelLayoutInfo_4_100 = STATE_VARIABLE_LabelLayoutInfo_2_93;
  }
  succeeded = (NumShortLocns_31 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word AllRevShortLocns0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 6))));
    MR_Integer NextShortLocnSlot0_51 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 2))));
    MR_Word RevShortLocns_52;
    MR_Integer OldShortLocnsOffset_53;
    MR_Integer Var_102;
    MR_Integer Var_103;
    MR_Integer CompressionLimit_115;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ShortLocns_27, &RevShortLocns_52);
    succeeded = (CompressArrays_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CompressionLimit_115 = ((MR_Integer) ((MR_hl_field(1, CompressArrays_34, 0))));
      Var_102 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 2))));
      succeeded = (Var_102 <= CompressionLimit_115);
      if (succeeded)
      {
        Var_103 = (MR_Integer) 0;
        succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevShortLocns_52, AllRevShortLocns0_50, Var_103, &OldShortLocnsOffset_53);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_104 = (MR_Integer) ((MR_Unsigned) NextShortLocnSlot0_51 - (MR_Unsigned) OldShortLocnsOffset_53);

      ShortLocnSlot_54 = (MR_Integer) ((MR_Unsigned) Var_104 - (MR_Unsigned) NumShortLocns_31);
      STATE_VARIABLE_LabelLayoutInfo_6_106 = STATE_VARIABLE_LabelLayoutInfo_4_100;
    }
    else
    {
      MR_Word AllRevShortLocns_55;
      MR_Integer NextShortLocnSlot_56;
      MR_Integer Var_401;
      MR_Integer Var_402;
      MR_Integer Var_404;
      MR_Word Var_405;
      MR_Word Var_406;
      MR_Word Var_408;
      MR_Word Var_409;
      MR_Integer Var_410;
      MR_Word Var_411;
      MR_Word Var_412;
      MR_Word Var_413;
      MR_Word Var_414;
      MR_Word Var_415;
      MR_Word Var_416;
      MR_Word Var_417;
      MR_Word Var_418;
      MR_Word Var_419;
      MR_Word Var_420;

      AllRevShortLocns_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevShortLocns_52, AllRevShortLocns0_50);
      Var_401 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 0))));
      Var_402 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 1))));
      Var_404 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 3))));
      Var_405 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 4))));
      Var_406 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 5))));
      Var_408 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 7))));
      Var_409 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 8))));
      Var_410 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 9))));
      Var_411 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 10))));
      Var_412 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 11))));
      Var_413 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 12))));
      Var_414 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 13))));
      Var_415 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 14))));
      Var_416 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 15))));
      Var_417 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 16))));
      Var_418 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 17))));
      Var_419 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 18))));
      Var_420 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_4_100, 19))));
      ShortLocnSlot_54 = NextShortLocnSlot0_51;
      NextShortLocnSlot_56 = (MR_Integer) ((MR_Unsigned) NextShortLocnSlot0_51 + (MR_Unsigned) NumShortLocns_31);
      {
        STATE_VARIABLE_LabelLayoutInfo_6_106 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 0) = ((MR_Box) (Var_401));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 1) = ((MR_Box) (Var_402));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 2) = ((MR_Box) (NextShortLocnSlot_56));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 3) = ((MR_Box) (Var_404));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 4) = ((MR_Box) (Var_405));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 5) = ((MR_Box) (Var_406));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 6) = ((MR_Box) (AllRevShortLocns_55));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 7) = ((MR_Box) (Var_408));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 8) = ((MR_Box) (Var_409));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 9) = ((MR_Box) (Var_410));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 10) = ((MR_Box) (Var_411));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 11) = ((MR_Box) (Var_412));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 12) = ((MR_Box) (Var_413));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 13) = ((MR_Box) (Var_414));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 14) = ((MR_Box) (Var_415));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 15) = ((MR_Box) (Var_416));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 16) = ((MR_Box) (Var_417));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 17) = ((MR_Box) (Var_418));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 18) = ((MR_Box) (Var_419));
        MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 19) = ((MR_Box) (Var_420));
      }
    }
  }
  else
  {
    ShortLocnSlot_54 = (MR_Integer) -1;
    STATE_VARIABLE_LabelLayoutInfo_6_106 = STATE_VARIABLE_LabelLayoutInfo_4_100;
  }
  succeeded = (NumLongLocns_32 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word AllRevLongLocns0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 5))));
    MR_Integer NextLongLocnSlot0_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 1))));
    MR_Word RevLongLocns_59;
    MR_Integer LongLocnSlot_61;
    MR_Word LVarInfo_64;
    MR_Integer OldLongLocnsOffset_60;
    MR_Integer Var_108;
    MR_Integer Var_109;
    MR_Integer CompressionLimit_116;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LongLocns_28, &RevLongLocns_59);
    succeeded = (CompressArrays_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CompressionLimit_116 = ((MR_Integer) ((MR_hl_field(1, CompressArrays_34, 0))));
      Var_108 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 1))));
      succeeded = (Var_108 <= CompressionLimit_116);
      if (succeeded)
      {
        Var_109 = (MR_Integer) 0;
        succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevLongLocns_59, AllRevLongLocns0_57, Var_109, &OldLongLocnsOffset_60);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_110 = (MR_Integer) ((MR_Unsigned) NextLongLocnSlot0_58 - (MR_Unsigned) OldLongLocnsOffset_60);

      LongLocnSlot_61 = (MR_Integer) ((MR_Unsigned) Var_110 - (MR_Unsigned) NumLongLocns_32);
      *STATE_VARIABLE_LabelLayoutInfo_69 = STATE_VARIABLE_LabelLayoutInfo_6_106;
    }
    else
    {
      MR_Word AllRevLongLocns_62;
      MR_Integer NextLongLocnSlot_63;
      MR_Integer Var_498;
      MR_Integer Var_500;
      MR_Integer Var_501;
      MR_Word Var_502;
      MR_Word Var_504;
      MR_Word Var_505;
      MR_Word Var_506;
      MR_Integer Var_507;
      MR_Word Var_508;
      MR_Word Var_509;
      MR_Word Var_510;
      MR_Word Var_511;
      MR_Word Var_512;
      MR_Word Var_513;
      MR_Word Var_514;
      MR_Word Var_515;
      MR_Word Var_516;
      MR_Word Var_517;

      AllRevLongLocns_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLongLocns_59, AllRevLongLocns0_57);
      Var_498 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 0))));
      Var_500 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 2))));
      Var_501 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 3))));
      Var_502 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 4))));
      Var_504 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 6))));
      Var_505 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 7))));
      Var_506 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 8))));
      Var_507 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 9))));
      Var_508 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 10))));
      Var_509 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 11))));
      Var_510 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 12))));
      Var_511 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 13))));
      Var_512 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 14))));
      Var_513 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 15))));
      Var_514 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 16))));
      Var_515 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 17))));
      Var_516 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 18))));
      Var_517 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LabelLayoutInfo_6_106, 19))));
      LongLocnSlot_61 = NextLongLocnSlot0_58;
      NextLongLocnSlot_63 = (MR_Integer) ((MR_Unsigned) NextLongLocnSlot0_58 + (MR_Unsigned) NumLongLocns_32);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_LabelLayoutInfo_69 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_498));
        MR_hl_field(0, base, 1) = ((MR_Box) (NextLongLocnSlot_63));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_500));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_501));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_502));
        MR_hl_field(0, base, 5) = ((MR_Box) (AllRevLongLocns_62));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_504));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_505));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_506));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_507));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_508));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_509));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_510));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_511));
        MR_hl_field(0, base, 14) = ((MR_Box) (Var_512));
        MR_hl_field(0, base, 15) = ((MR_Box) (Var_513));
        MR_hl_field(0, base, 16) = ((MR_Box) (Var_514));
        MR_hl_field(0, base, 17) = ((MR_Box) (Var_515));
        MR_hl_field(0, base, 18) = ((MR_Box) (Var_516));
        MR_hl_field(0, base, 19) = ((MR_Box) (Var_517));
      }
    }
    {
      LVarInfo_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LVarInfo_64, 0) = ((MR_Box) (EncodedLength_33));
      MR_hl_field(0, LVarInfo_64, 1) = ((MR_Box) (TypeParamsRval_17));
      MR_hl_field(0, LVarInfo_64, 2) = ((MR_Box) (PTISlot_40));
      MR_hl_field(0, LVarInfo_64, 3) = ((MR_Box) (HLDSVarNumSlot_47));
      MR_hl_field(0, LVarInfo_64, 4) = ((MR_Box) (ShortLocnSlot_54));
      MR_hl_field(0, LVarInfo_64, 5) = ((MR_Box) (LongLocnSlot_61));
    }
    *MaybeVarInfo_14 = (MR_Word) (MR_mkword(2, (MR_Word) (LVarInfo_64)));
  }
  else
  {
    MR_Word SVarInfo_65;

    {
      SVarInfo_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SVarInfo_65, 0) = ((MR_Box) (EncodedLength_33));
      MR_hl_field(0, SVarInfo_65, 1) = ((MR_Box) (TypeParamsRval_17));
      MR_hl_field(0, SVarInfo_65, 2) = ((MR_Box) (PTISlot_40));
      MR_hl_field(0, SVarInfo_65, 3) = ((MR_Box) (HLDSVarNumSlot_47));
      MR_hl_field(0, SVarInfo_65, 4) = ((MR_Box) (ShortLocnSlot_54));
    }
    *MaybeVarInfo_14 = (MR_Word) (MR_mkword(1, (MR_Word) (SVarInfo_65)));
    *STATE_VARIABLE_LabelLayoutInfo_69 = STATE_VARIABLE_LabelLayoutInfo_6_106;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_108_108_95_98_97_99_107_101_110_100_46_108_108_100_115_46_114_118_97_108_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Tail_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_108_108_95_98_97_99_107_101_110_100_46_108_108_100_115_46_114_118_97_108_93_95_48_95_49_2_p_0(Search_5, HeadVar__2_2);
      if (succeeded)
      {
        *FoundAtOffset_9 = CurOffset_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) CurOffset_8 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__2_2 = Tail_7;
        MR_Integer next_value_of_CurOffset_8 = Var_11;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        CurOffset_8 = next_value_of_CurOffset_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_108_108_95_98_97_99_107_101_110_100_46_108_108_100_115_46_114_118_97_108_93_95_48_95_49_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
      MR_Word SearchHead_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SearchTail_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Head_6;
      MR_Word Tail_7;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Head_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = ll_backend__llds____Unify____rval_0_0(SearchHead_4, Head_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = SearchTail_5;
          next_value_of_HeadVar__2_2 = Tail_7;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_Integer MR_CALL 
ll_backend__stack_layout__short_count_bits_0_f_0(void)
{
  return (MR_Integer) 10;
}

static void MR_CALL 
ll_backend__stack_layout__construct_tvar_vector_4_p_0(
  MR_Word TVarLocnMap_5,
  MR_Word * TypeParamRval_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_10,
  MR_Word * STATE_VARIABLE_StaticCellInfo_11)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), TVarLocnMap_5);
  if (succeeded)
  {
    *TypeParamRval_6 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[23]));
    *STATE_VARIABLE_StaticCellInfo_11 = STATE_VARIABLE_StaticCellInfo_0_10;
  }
  else
  {
    MR_Word Vector_8;
    MR_Word DataAddr_9;
    MR_Word Var_15;
    MR_Word TVarLocns_18;
    MR_Word TypeParamLocs_19;
    MR_Integer TypeParamsLength_20;
    MR_Word LengthRval_21;
    MR_Word Var_23;
    MR_Word Var_24;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), TVarLocnMap_5, &TVarLocns_18);
    ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_18, (MR_Integer) 1, &TypeParamLocs_19);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), TypeParamLocs_19, &TypeParamsLength_20);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (TypeParamsLength_20));
    }
    {
      LengthRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LengthRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LengthRval_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (LengthRval_21));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[3])));
    }
    {
      Vector_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Vector_8, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Vector_8, 1) = ((MR_Box) (TypeParamLocs_19));
    }
    ll_backend__global_data__add_scalar_static_cell_4_p_0(Vector_8, &DataAddr_9, STATE_VARIABLE_StaticCellInfo_0_10, STATE_VARIABLE_StaticCellInfo_11);
    {
      Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_15, 1) = ((MR_Box) (DataAddr_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TypeParamRval_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word VarNumMap_3,
  MR_Integer BytesSoFar_4,
  MR_Integer BytesLimit_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = HeadVar__8_8;
  }
  else
  {
    MR_Word VarInfo_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word VarInfos_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Locn_26 = ((MR_Word) ((MR_hl_field(0, VarInfo_17, 0))));
    MR_Word LiveValueType_27 = ((MR_Word) ((MR_hl_field(0, VarInfo_17, 1))));
    MR_Word TypeRval_29;
    MR_Integer VarNum_30;
    MR_Word STATE_VARIABLE_StaticCellInfo_1_44;
    MR_Word Type_33;
    MR_Word Var_45;
    MR_Word Var_46;

    ll_backend__stack_layout__represent_live_value_type_and_var_num_6_p_0(VarNumMap_3, LiveValueType_27, &TypeRval_29, &VarNum_30, HeadVar__8_8, &STATE_VARIABLE_StaticCellInfo_1_44);
    succeeded = ((MR_tag((MR_Word) LiveValueType_27)) == (MR_Integer) 1);
    if (succeeded)
    {
      Type_33 = ((MR_Word) ((MR_hl_field(1, LiveValueType_27, 2))));
      Var_45 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_2, Type_33);
      succeeded = (Var_45 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Locn_26)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(0, Locn_26, 0))));
          succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.construct_liveval_array_slots\'/9", (MR_String) "unexpected reference to dummy value");
        return;
      }
    else
    {
      MR_Integer ShortLocn_37;

      succeeded = (BytesSoFar_4 < BytesLimit_5);
      if (succeeded)
        succeeded = ll_backend__stack_layout__represent_locn_as_byte_2_p_0(Locn_26, &ShortLocn_37);
      if (succeeded)
      {
        MR_Word ArraySlot_38;
        MR_Word ShortArraySlots0_39;
        MR_Integer Var_49;

        {
          ArraySlot_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArraySlot_38, 0) = ((MR_Box) (TypeRval_29));
          MR_hl_field(0, ArraySlot_38, 1) = ((MR_Box) (VarNum_30));
          MR_hl_field(0, ArraySlot_38, 2) = ((MR_Box) (ShortLocn_37));
        }
        Var_49 = (MR_Integer) ((MR_Unsigned) BytesSoFar_4 + (MR_Unsigned) 1);
        ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(VarInfos_18, ModuleInfo_2, VarNumMap_3, Var_49, BytesLimit_5, HeadVar__6_6, &ShortArraySlots0_39, STATE_VARIABLE_StaticCellInfo_1_44, HeadVar__9_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ArraySlot_38));
          MR_hl_field(1, base, 1) = ((MR_Box) (ShortArraySlots0_39));
        }
      }
      else
      {
        MR_Integer LongLocn_40;
        MR_Word LongArraySlots0_41;
        MR_Word ArraySlot_53;

        ll_backend__stack_layout__represent_locn_as_int_2_p_0(Locn_26, &LongLocn_40);
        {
          ArraySlot_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArraySlot_53, 0) = ((MR_Box) (TypeRval_29));
          MR_hl_field(0, ArraySlot_53, 1) = ((MR_Box) (VarNum_30));
          MR_hl_field(0, ArraySlot_53, 2) = ((MR_Box) (LongLocn_40));
        }
        ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(VarInfos_18, ModuleInfo_2, VarNumMap_3, BytesSoFar_4, BytesLimit_5, &LongArraySlots0_41, HeadVar__7_7, STATE_VARIABLE_StaticCellInfo_1_44, HeadVar__9_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ArraySlot_53));
          MR_hl_field(1, base, 1) = ((MR_Box) (LongArraySlots0_41));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_byte_2_p_0(
  MR_Word LayoutLocn_3,
  MR_Integer * Byte_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LayoutLocn_3)) == (MR_Integer) 0);
  MR_Word Lval_5;
  MR_Integer Var_6;
  MR_Integer Var_7;

  if (succeeded)
  {
    Lval_5 = ((MR_Word) ((MR_hl_field(0, LayoutLocn_3, 0))));
    switch (MR_tag((MR_Word) Lval_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Val_33;
              MR_Integer Var_69;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 4, &Val_33);
              Var_69 = (Val_33 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_69 + (MR_Unsigned) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Val_36;
              MR_Integer Var_57;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 5, &Val_36);
              Var_57 = (Val_36 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_57 + (MR_Unsigned) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Val_39;
              MR_Integer Var_51;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 6, &Val_39);
              Var_51 = (Val_39 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Val_42;
              MR_Integer Var_55;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 7, &Val_42);
              Var_55 = (Val_42 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_55 + (MR_Unsigned) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Val_45;
              MR_Integer Var_65;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 8, &Val_45);
              Var_65 = (Val_45 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Val_48;
              MR_Integer Var_59;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 10, &Val_48);
              Var_59 = (Val_48 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) 3);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(1, Lval_5, 1))));
          MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(1, Lval_5, 0))) & (MR_Integer) 1);
          MR_Word Var_10;
          MR_String Var_11;
          MR_String Var_12;
          MR_Integer Var_13;
          MR_Integer Var_14;
          MR_Integer Var_63;
          MR_Integer Var_64;

          succeeded = (Var_9 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_13 = (MR_Integer) 0;
            Var_11 = (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2";
            Var_12 = (MR_String) "bad reg";
            {
              Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_10, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
              MR_hl_field(0, Var_10, 1) = ((MR_Box) (ll_backend__stack_layout__represent_locn_as_byte_2_p_0_3));
              MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_10, 3) = ((MR_Box) (Num_8));
              MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_13));
            }
            mercury__require__expect_3_p_0(Var_10, Var_11, Var_12);
            Var_14 = (MR_Integer) 0;
            Var_64 = (MR_Integer) 2;
            Var_63 = (Num_8 << Var_64);
            *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) Var_14);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_5, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Num_15 = ((MR_Integer) ((MR_hl_field(3, Lval_5, 1))));
              MR_Word Var_16;
              MR_Integer Var_67;

              {
                Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(0, Var_16, 1) = ((MR_Box) (ll_backend__stack_layout__represent_locn_as_byte_2_p_0_4));
                MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_16, 3) = ((MR_Box) (Num_15));
                MR_hl_field(0, Var_16, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_16, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2", (MR_String) "bad stackvar");
              Var_67 = (Num_15 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Num_21 = ((MR_Integer) ((MR_hl_field(3, Lval_5, 1))));
              MR_Word Var_22;
              MR_Integer Var_61;

              {
                Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(0, Var_22, 1) = ((MR_Box) (ll_backend__stack_layout__represent_locn_as_byte_2_p_0_2));
                MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_22, 3) = ((MR_Box) (Num_21));
                MR_hl_field(0, Var_22, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2", (MR_String) "bad parent_stackvar");
              Var_61 = (Num_21 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) 1);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Num_27 = ((MR_Integer) ((MR_hl_field(3, Lval_5, 1))));
              MR_Word Var_28;
              MR_Integer Var_53;

              {
                Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__stack_layout__represent_locn_as_byte_2_p_0_1));
                MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_28, 3) = ((MR_Box) (Num_27));
                MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2", (MR_String) "bad framevar");
              Var_53 = (Num_27 << 2);
              *Byte_4 = (MR_Integer) ((MR_Unsigned) Var_53 + (MR_Unsigned) 2);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      Var_6 = (MR_Integer) 0;
      succeeded = (Var_6 <= *Byte_4);
      if (succeeded)
      {
        Var_7 = (MR_Integer) 256;
        succeeded = (*Byte_4 < Var_7);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__represent_live_value_type_and_var_num_6_p_0(
  MR_Word VarNumMap_7,
  MR_Word LiveValueType_8,
  MR_Word * TypeRval_9,
  MR_Integer * VarNum_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_19,
  MR_Word * STATE_VARIABLE_StaticCellInfo_20)
{
  switch (MR_tag((MR_Word) LiveValueType_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(LiveValueType_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[45]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[27]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 2:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[33]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 3:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[39]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 4:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[36]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 5:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[30]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 6:
          {
            ll_backend__stack_layout__represent_special_live_value_type_2_p_0((MR_String) "trailptr", TypeRval_9);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 7:
          {
            ll_backend__stack_layout__represent_special_live_value_type_2_p_0((MR_String) "ticket", TypeRval_9);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 8:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[42]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 9:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[42]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 10:
          {
            *TypeRval_9 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[42]));
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 11:
          {
            ll_backend__stack_layout__represent_special_live_value_type_2_p_0((MR_String) "unwanted", TypeRval_9);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, LiveValueType_8, 0))));
        MR_Word Type_15 = ((MR_Word) ((MR_hl_field(1, LiveValueType_8, 2))));

        ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_p_0(Type_15, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_StaticCellInfo_0_19, STATE_VARIABLE_StaticCellInfo_20, TypeRval_9);
        ll_backend__stack_layout__convert_var_to_int_3_p_0(VarNumMap_7, Var_13, VarNum_10);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__represent_special_live_value_type_2_p_0(
  MR_String SpecialTypeName_3,
  MR_Word * Rval_4)
{
  MR_Word RttiTypeCtor_5;
  MR_Word CtorRttiId_6;
  MR_Word DataId_7;
  MR_Word Var_12;

  {
    RttiTypeCtor_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiTypeCtor_5, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6]));
    MR_hl_field(0, RttiTypeCtor_5, 1) = ((MR_Box) (SpecialTypeName_3));
    MR_hl_field(0, RttiTypeCtor_5, 2) = ((MR_Box) (MR_Word) (UINT16_C(0)));
  }
  {
    CtorRttiId_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CtorRttiId_6, 0) = ((MR_Box) (RttiTypeCtor_5));
    MR_hl_field(0, CtorRttiId_6, 1) = ((MR_Box) ((MR_Unsigned) 44U));
  }
  {
    DataId_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DataId_7, 0) = ((MR_Box) (CtorRttiId_6));
  }
  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) (DataId_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Rval_4 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_12));
  }
}

static void MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_34;

  ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1647__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_34);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_34));
}

static MR_bool MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1640__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0(
  MR_Word OrigInfos_3,
  MR_Word * FinalInfos_4)
{
  MR_bool succeeded;
  MR_Word NamedVarInfos0_14;
  MR_Word OtherInfos0_15;
  MR_Word NamedVarInfos_29;
  MR_Word OtherInfos_30;

  mercury__list__filter_4_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[23]), OrigInfos_3, &NamedVarInfos0_14, &OtherInfos0_15);
  mercury__list__sort_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[24]), NamedVarInfos0_14, &NamedVarInfos_29);
  mercury__list__sort_3_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[24]), OtherInfos0_15, &OtherInfos_30);
  *FinalInfos_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), NamedVarInfos_29, OtherInfos_30);
}

static void MR_CALL 
ll_backend__stack_layout__construct_user_data_array_7_p_0(
  MR_Word Params_1,
  MR_Word VarNumMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = HeadVar__6_6;
  }
  else
  {
    MR_Word MaybeAttr_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word MaybeAttrs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word LocnTypedRval_17;
    MR_Word LocnTypedRvals_18;
    MR_Word MaybeVarNum_19;
    MR_Word MaybeVarNums_20;
    MR_Word STATE_VARIABLE_StaticCellInfo_1_30;

    if ((MaybeAttr_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      LocnTypedRval_17 = (MR_Word) (&ll_backend__stack_layout_scalar_common_2[24]);
      MaybeVarNum_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_StaticCellInfo_1_30 = HeadVar__6_6;
    }
    else
    {
      MR_Word Attr_22 = ((MR_Word) ((MR_hl_field(1, MaybeAttr_15, 0))));
      MR_Word Locn_23 = ((MR_Word) ((MR_hl_field(0, Attr_22, 0))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Attr_22, 1))));
      MR_Word LocnRval_25;
      MR_Word LocnRvalType_26;
      MR_Integer VarNum_27;

      ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(Params_1, Locn_23, &LocnRval_25, &LocnRvalType_26, HeadVar__6_6, &STATE_VARIABLE_StaticCellInfo_1_30);
      {
        LocnTypedRval_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LocnTypedRval_17, 0) = ((MR_Box) (LocnRval_25));
        MR_hl_field(0, LocnTypedRval_17, 1) = ((MR_Box) (LocnRvalType_26));
      }
      ll_backend__stack_layout__convert_var_to_int_3_p_0(VarNumMap_2, Var_24, &VarNum_27);
      {
        MaybeVarNum_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeVarNum_19, 0) = ((MR_Box) (VarNum_27));
      }
    }
    ll_backend__stack_layout__construct_user_data_array_7_p_0(Params_1, VarNumMap_2, MaybeAttrs_16, &LocnTypedRvals_18, &MaybeVarNums_20, STATE_VARIABLE_StaticCellInfo_1_30, HeadVar__7_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LocnTypedRval_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (LocnTypedRvals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeVarNum_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeVarNums_20));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(
  MR_Word Params_7,
  MR_Word LvalOrConst_8,
  MR_Word * Rval_9,
  MR_Word * Type_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_32,
  MR_Word * STATE_VARIABLE_StaticCellInfo_33)
{
  switch (MR_tag((MR_Word) LvalOrConst_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(0, LvalOrConst_8, 0))));
        MR_Word Var_34;
        MR_Integer Word_66;
        MR_Word Var_67;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (Lval_12));
        }
        ll_backend__stack_layout__represent_locn_as_int_2_p_0(Var_34, &Word_66);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Word_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_9 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_67));
        }
        *Type_10 = (MR_Word) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[3]));
        *STATE_VARIABLE_StaticCellInfo_33 = STATE_VARIABLE_StaticCellInfo_0_32;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_locn_or_const_as_int_rval\'/6", (MR_String) "bad rval");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_19 = ((MR_Word) ((MR_hl_field(2, LvalOrConst_8, 0))));
        MR_Word LvalOrConstBase_20 = ((MR_Word) ((MR_hl_field(2, LvalOrConst_8, 1))));
        MR_Word BaseRval_21;

        ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(Params_7, LvalOrConstBase_20, &BaseRval_21, Type_10, STATE_VARIABLE_StaticCellInfo_0_32, STATE_VARIABLE_StaticCellInfo_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_9 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Tag_19));
          MR_hl_field(2, base, 1) = ((MR_Box) (BaseRval_21));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, LvalOrConst_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_locn_or_const_as_int_rval\'/6", (MR_String) "bad rval");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnboxedFloats_14 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 4))) >> 2)) & (MR_Integer) 1);
            MR_Word UnboxedInt64s_15 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 4))) >> 1)) & (MR_Integer) 1);
            MR_Word LLDSType_17;
            MR_Word DataId_18;
            MR_Word Var_36;
            MR_Word Var_38;
            MR_Word Var_40;

            LLDSType_17 = ll_backend__global_data__rval_type_as_arg_4_f_0(UnboxedFloats_14, UnboxedInt64s_15, (MR_Integer) 0, LvalOrConst_8);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_38, 0) = ((MR_Box) (LvalOrConst_8));
              MR_hl_field(0, Var_38, 1) = ((MR_Box) (LLDSType_17));
            }
            {
              Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(Var_36, &DataId_18, STATE_VARIABLE_StaticCellInfo_0_32, STATE_VARIABLE_StaticCellInfo_33);
            {
              Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_40, 1) = ((MR_Box) (DataId_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_40));
            }
            *Type_10 = (MR_Word) ((MR_Unsigned) 12U);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__convert_var_to_int_3_p_0(
  MR_Word VarNumMap_4,
  MR_Word Var_5,
  MR_Integer * VarNum_6)
{
  MR_Integer VarNum0_7;
  MR_Integer Limit_9;
  MR_Word Var_10;
  MR_Integer Var_11;
  MR_Box conv0_Var_10;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]), VarNumMap_4, ((MR_Box) (Var_5)), &conv0_Var_10);
  Var_10 = ((MR_Word) (conv0_Var_10));
  VarNum0_7 = ((MR_Integer) ((MR_hl_field(0, Var_10, 0))));
  Var_11 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) 8));
  Limit_9 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
  mercury__int__min_3_p_0(VarNum0_7, Limit_9, VarNum_6);
}

static void MR_CALL 
ll_backend__stack_layout__add_long_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_18,
  MR_Word * STATE_VARIABLE_LLI_19)
{
  MR_Word RevLayouts0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 17))));
  MR_Word RevLayouts_11;
  MR_Word Counter0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 14))));
  MR_Word Counter_13;
  MR_Word LayoutName_15;
  MR_Word LabelToLayoutMap0_16;
  MR_Word LabelToLayoutMap_17;
  MR_Integer Var_80;
  MR_Integer Var_81;
  MR_Integer Var_82;
  MR_Integer Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Integer Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;

  {
    RevLayouts_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevLayouts_11, 0) = ((MR_Box) (Layout_7));
    MR_hl_field(1, RevLayouts_11, 1) = ((MR_Box) (RevLayouts0_10));
  }
  mercury__counter__allocate_3_p_0(Slot_8, Counter0_12, &Counter_13);
  {
    LayoutName_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LayoutName_15, 0) = ((MR_Box) (MR_mkword(1, &ll_backend__stack_layout_scalar_common_3[4])));
    MR_hl_field(0, LayoutName_15, 1) = ((MR_Box) (*Slot_8));
  }
  LabelToLayoutMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 19))));
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ((MR_Box) (Label_6)), ((MR_Box) (LayoutName_15)), LabelToLayoutMap0_16, &LabelToLayoutMap_17);
  Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 0))));
  Var_81 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 1))));
  Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 2))));
  Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 5))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 6))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 7))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 8))));
  Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 9))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 10))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 11))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 12))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 13))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 15))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 16))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 18))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_LLI_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_92));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_93));
    MR_hl_field(0, base, 14) = ((MR_Box) (Counter_13));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_95));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_96));
    MR_hl_field(0, base, 17) = ((MR_Box) (RevLayouts_11));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_98));
    MR_hl_field(0, base, 19) = ((MR_Box) (LabelToLayoutMap_17));
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_short_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_18,
  MR_Word * STATE_VARIABLE_LLI_19)
{
  MR_Word RevLayouts0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 16))));
  MR_Word RevLayouts_11;
  MR_Word Counter0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 13))));
  MR_Word Counter_13;
  MR_Word LayoutName_15;
  MR_Word LabelToLayoutMap0_16;
  MR_Word LabelToLayoutMap_17;
  MR_Integer Var_80;
  MR_Integer Var_81;
  MR_Integer Var_82;
  MR_Integer Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Integer Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_98;

  {
    RevLayouts_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevLayouts_11, 0) = ((MR_Box) (Layout_7));
    MR_hl_field(1, RevLayouts_11, 1) = ((MR_Box) (RevLayouts0_10));
  }
  mercury__counter__allocate_3_p_0(Slot_8, Counter0_12, &Counter_13);
  {
    LayoutName_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LayoutName_15, 0) = ((MR_Box) (MR_mkword(1, &ll_backend__stack_layout_scalar_common_3[3])));
    MR_hl_field(0, LayoutName_15, 1) = ((MR_Box) (*Slot_8));
  }
  LabelToLayoutMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 19))));
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ((MR_Box) (Label_6)), ((MR_Box) (LayoutName_15)), LabelToLayoutMap0_16, &LabelToLayoutMap_17);
  Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 0))));
  Var_81 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 1))));
  Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 2))));
  Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 5))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 6))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 7))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 8))));
  Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 9))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 10))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 11))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 12))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 14))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 15))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 17))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_18, 18))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_LLI_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_92));
    MR_hl_field(0, base, 13) = ((MR_Box) (Counter_13));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_94));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_95));
    MR_hl_field(0, base, 16) = ((MR_Box) (RevLayouts_11));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_97));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_98));
    MR_hl_field(0, base, 19) = ((MR_Box) (LabelToLayoutMap_17));
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_no_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_17,
  MR_Word * STATE_VARIABLE_LLI_18)
{
  MR_Word RevLayouts0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 15))));
  MR_Word RevLayouts_11;
  MR_Word Counter0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 12))));
  MR_Word Counter_13;
  MR_Word LayoutName_14;
  MR_Word LabelToLayoutMap0_15;
  MR_Word LabelToLayoutMap_16;
  MR_Integer Var_80;
  MR_Integer Var_81;
  MR_Integer Var_82;
  MR_Integer Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Integer Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;

  {
    RevLayouts_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevLayouts_11, 0) = ((MR_Box) (Layout_7));
    MR_hl_field(1, RevLayouts_11, 1) = ((MR_Box) (RevLayouts0_10));
  }
  mercury__counter__allocate_3_p_0(Slot_8, Counter0_12, &Counter_13);
  {
    LayoutName_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LayoutName_14, 0) = ((MR_Box) (MR_mkword(1, &ll_backend__stack_layout_scalar_common_3[2])));
    MR_hl_field(0, LayoutName_14, 1) = ((MR_Box) (*Slot_8));
  }
  LabelToLayoutMap0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 19))));
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ((MR_Box) (Label_6)), ((MR_Box) (LayoutName_14)), LabelToLayoutMap0_15, &LabelToLayoutMap_16);
  Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 0))));
  Var_81 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 1))));
  Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 2))));
  Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 3))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 5))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 6))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 7))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 8))));
  Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 9))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 10))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 11))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 13))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 14))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 16))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 17))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LLI_0_17, 18))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_LLI_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 12) = ((MR_Box) (Counter_13));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_93));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_94));
    MR_hl_field(0, base, 15) = ((MR_Box) (RevLayouts_11));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_96));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_97));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_98));
    MR_hl_field(0, base, 19) = ((MR_Box) (LabelToLayoutMap_16));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__var_has_name_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_String VarName_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));

  succeeded = (strcmp(VarName_3, (MR_String) "") == 0);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__construct_table_arg_pti_rval_4_p_0(
  MR_Word ClosureArg_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_15,
  MR_Word * STATE_VARIABLE_StaticCellInfo_16)
{
  MR_Word ArgRval_6;
  MR_Word ArgRvalType_7;
  MR_Word Type_12 = ((MR_Word) ((MR_hl_field(0, ClosureArg_5, 3))));

  ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_12, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_StaticCellInfo_0_15, STATE_VARIABLE_StaticCellInfo_16, &ArgRval_6, &ArgRvalType_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ArgRval_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgRvalType_7));
  }
}

static void MR_CALL 
ll_backend__stack_layout__convert_slot_to_locn_map_2_p_0(
  MR_Word SlotLocn_3,
  MR_Word * LvalLocns_4)
{
  MR_Word LvalLocn_6;

  if (((MR_tag((MR_Word) SlotLocn_3)) == (MR_Integer) 0))
  {
    MR_Integer SlotNum_5 = ((MR_Integer) ((MR_hl_field(0, SlotLocn_3, 0))));
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) (SlotNum_5));
    }
    {
      LvalLocn_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LvalLocn_6, 0) = ((MR_Box) (Var_8));
    }
  }
  else
  {
    MR_Integer Offset_7 = ((MR_Integer) ((MR_hl_field(1, SlotLocn_3, 1))));
    MR_Word Var_10;
    MR_Integer SlotNum_12 = ((MR_Integer) ((MR_hl_field(1, SlotLocn_3, 0))));

    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (SlotNum_12));
    }
    {
      LvalLocn_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LvalLocn_6, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, LvalLocn_6, 1) = ((MR_Box) (Offset_7));
    }
  }
  *LvalLocns_4 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), ((MR_Box) (LvalLocn_6)));
}

static void MR_CALL 
ll_backend__stack_layout__update_label_table_3_p_0(
  MR_Word InternalLabelInfo_4,
  MR_Word STATE_VARIABLE_LabelTables_0_26,
  MR_Word * STATE_VARIABLE_LabelTables_27)
{
  MR_bool succeeded;
  MR_Word LabelVars_8 = ((MR_Unsigned) ((MR_hl_field(0, InternalLabelInfo_4, 2))) & (MR_Integer) 3);
  MR_Integer Slot_9 = ((MR_Integer) ((MR_hl_field(0, InternalLabelInfo_4, 3))));
  MR_Word InternalInfo_10 = ((MR_Word) ((MR_hl_field(0, InternalLabelInfo_4, 4))));
  MR_Word Port_11 = ((MR_Word) ((MR_hl_field(0, InternalInfo_10, 0))));
  MR_Word Return_13 = ((MR_Word) ((MR_hl_field(0, InternalInfo_10, 2))));
  MR_Word Target_16;
  MR_Word Context_17;
  MR_Word TargetsContexts_14;
  MR_Word Var_28;
  MR_Word _GoalPath_18;

  succeeded = (Return_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_28 = ((MR_Word) ((MR_hl_field(1, Return_13, 0))));
    TargetsContexts_14 = ((MR_Word) ((MR_hl_field(0, Var_28, 0))));
    succeeded = ll_backend__stack_layout__find_valid_return_context_4_p_0(TargetsContexts_14, &Target_16, &Context_17, &_GoalPath_18);
  }
  if (succeeded)
  {
    MR_Word IsReturn_20;
    MR_String File_34;
    MR_Integer Line_35;
    MR_Word TargetLabel_19;
    MR_Word LabelTable0_36;
    MR_Box conv0_LabelTable0_36;

    succeeded = ((MR_tag((MR_Word) Target_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      TargetLabel_19 = ((MR_Word) ((MR_hl_field(1, Target_16, 0))));
      {
        IsReturn_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IsReturn_20, 0) = ((MR_Box) (TargetLabel_19));
      }
    }
    else
      IsReturn_20 = (MR_Word) ((MR_Unsigned) 0U);
    File_34 = mercury__term_context__context_file_1_f_0(Context_17);
    Line_35 = mercury__term_context__context_line_1_f_0(Context_17);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), STATE_VARIABLE_LabelTables_0_26, ((MR_Box) (File_34)), &conv0_LabelTable0_36);
    if (succeeded)
    {
      LabelTable0_36 = ((MR_Word) (conv0_LabelTable0_36));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word LabelLayout_37;
      MR_Word Var_41;
      MR_Word LineInfo0_38;
      MR_Box conv1_LineInfo0_38;

      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = (MR_Box) ((MR_Unsigned) (LabelVars_8));
      }
      {
        LabelLayout_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LabelLayout_37, 0) = ((MR_Box) (Var_41));
        MR_hl_field(0, LabelLayout_37, 1) = ((MR_Box) (Slot_9));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), LabelTable0_36, Line_35, &conv1_LineInfo0_38);
      if (succeeded)
      {
        LineInfo0_38 = ((MR_Word) (conv1_LineInfo0_38));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word LineInfo_39;
        MR_Word LabelTable_40;
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (LabelLayout_37));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (IsReturn_20));
        }
        {
          LineInfo_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LineInfo_39, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, LineInfo_39, 1) = ((MR_Box) (LineInfo0_38));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), Line_35, ((MR_Box) (LineInfo_39)), LabelTable0_36, &LabelTable_40);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (File_34)), ((MR_Box) (LabelTable_40)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
      }
      else
      {
        MR_Word Var_43;
        MR_Word LineInfo_48;
        MR_Word LabelTable_49;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (LabelLayout_37));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (IsReturn_20));
        }
        {
          LineInfo_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LineInfo_48, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, LineInfo_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), Line_35, ((MR_Box) (LineInfo_48)), LabelTable0_36, &LabelTable_49);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (File_34)), ((MR_Box) (LabelTable_49)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
      }
    }
    else
    {
      MR_String File_69;
      MR_Integer Line_70;
      MR_Integer Var_71;

      File_69 = mercury__term_context__context_file_1_f_0(Context_17);
      Line_70 = mercury__term_context__context_line_1_f_0(Context_17);
      succeeded = (strcmp(File_69, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_71 = (MR_Integer) 0;
        succeeded = (Line_70 > Var_71);
      }
      if (succeeded)
      {
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word LabelLayout_50;
        MR_Word LineInfo_51;
        MR_Word LabelTable_52;

        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = (MR_Box) ((MR_Unsigned) (LabelVars_8));
        }
        {
          LabelLayout_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LabelLayout_50, 0) = ((MR_Box) (Var_45));
          MR_hl_field(0, LabelLayout_50, 1) = ((MR_Box) (Slot_9));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (LabelLayout_50));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (IsReturn_20));
        }
        {
          LineInfo_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LineInfo_51, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, LineInfo_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        LabelTable_52 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), ((MR_Box) (Line_35)), ((MR_Box) (LineInfo_51)));
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (File_34)), ((MR_Box) (LabelTable_52)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
      }
      else
        *STATE_VARIABLE_LabelTables_27 = STATE_VARIABLE_LabelTables_0_26;
    }
  }
  else
  {
    MR_Word Context_33;
    MR_Word Var_30;
    MR_String File_72;
    MR_Integer Line_73;
    MR_Integer Var_74;

    succeeded = (Port_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(1, Port_11, 0))));
      Context_33 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
      File_72 = mercury__term_context__context_file_1_f_0(Context_33);
      Line_73 = mercury__term_context__context_line_1_f_0(Context_33);
      succeeded = (strcmp(File_72, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_74 = (MR_Integer) 0;
        succeeded = (Line_73 > Var_74);
      }
    }
    if (succeeded)
      ll_backend__stack_layout__update_label_table_2_6_p_0(LabelVars_8, Slot_9, Context_33, (MR_Word) ((MR_Unsigned) 4U), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
    else
      *STATE_VARIABLE_LabelTables_27 = STATE_VARIABLE_LabelTables_0_26;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__find_valid_return_context_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ValidTarget_7,
  MR_Word * ValidContext_8,
  MR_Word * ValidGoalPath_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TargetContext_5;
    MR_Word TargetContexts_6;
    MR_Word Target_10;
    MR_Word Context_11;
    MR_Word GoalPath_12;
    MR_Word Var_13;
    MR_String File_14;
    MR_Integer Line_15;
    MR_Integer Var_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      TargetContext_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      TargetContexts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Target_10 = ((MR_Word) ((MR_hl_field(0, TargetContext_5, 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, TargetContext_5, 1))));
      Context_11 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
      GoalPath_12 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
      File_14 = mercury__term_context__context_file_1_f_0(Context_11);
      Line_15 = mercury__term_context__context_line_1_f_0(Context_11);
      succeeded = (strcmp(File_14, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_16 = (MR_Integer) 0;
        succeeded = (Line_15 > Var_16);
      }
      if (succeeded)
      {
        *ValidTarget_7 = Target_10;
        *ValidContext_8 = Context_11;
        *ValidGoalPath_9 = GoalPath_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = TargetContexts_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__update_label_table_2_6_p_0(
  MR_Word LabelVars_7,
  MR_Integer Slot_8,
  MR_Word Context_9,
  MR_Word IsReturn_10,
  MR_Word STATE_VARIABLE_LabelTables_0_19,
  MR_Word * STATE_VARIABLE_LabelTables_20)
{
  MR_bool succeeded;
  MR_String File_12;
  MR_Integer Line_13;
  MR_Word LabelTable0_14;
  MR_Box conv0_LabelTable0_14;

  File_12 = mercury__term_context__context_file_1_f_0(Context_9);
  Line_13 = mercury__term_context__context_line_1_f_0(Context_9);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), STATE_VARIABLE_LabelTables_0_19, ((MR_Box) (File_12)), &conv0_LabelTable0_14);
  if (succeeded)
  {
    LabelTable0_14 = ((MR_Word) (conv0_LabelTable0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word LabelLayout_15;
    MR_Word Var_21;
    MR_Word LineInfo0_16;
    MR_Box conv1_LineInfo0_16;

    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = (MR_Box) ((MR_Unsigned) (LabelVars_7));
    }
    {
      LabelLayout_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LabelLayout_15, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, LabelLayout_15, 1) = ((MR_Box) (Slot_8));
    }
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), LabelTable0_14, Line_13, &conv1_LineInfo0_16);
    if (succeeded)
    {
      LineInfo0_16 = ((MR_Word) (conv1_LineInfo0_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word LineInfo_17;
      MR_Word LabelTable_18;
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (LabelLayout_15));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (IsReturn_10));
      }
      {
        LineInfo_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LineInfo_17, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, LineInfo_17, 1) = ((MR_Box) (LineInfo0_16));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), Line_13, ((MR_Box) (LineInfo_17)), LabelTable0_14, &LabelTable_18);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (File_12)), ((MR_Box) (LabelTable_18)), STATE_VARIABLE_LabelTables_0_19, STATE_VARIABLE_LabelTables_20);
    }
    else
    {
      MR_Word Var_24;
      MR_Word LineInfo_31;
      MR_Word LabelTable_32;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (LabelLayout_15));
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (IsReturn_10));
      }
      {
        LineInfo_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LineInfo_31, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, LineInfo_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), Line_13, ((MR_Box) (LineInfo_31)), LabelTable0_14, &LabelTable_32);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (File_12)), ((MR_Box) (LabelTable_32)), STATE_VARIABLE_LabelTables_0_19, STATE_VARIABLE_LabelTables_20);
    }
  }
  else
  {
    MR_String File_52;
    MR_Integer Line_53;
    MR_Integer Var_54;

    File_52 = mercury__term_context__context_file_1_f_0(Context_9);
    Line_53 = mercury__term_context__context_line_1_f_0(Context_9);
    succeeded = (strcmp(File_52, (MR_String) "") == 0);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_54 = (MR_Integer) 0;
      succeeded = (Line_53 > Var_54);
    }
    if (succeeded)
    {
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word LabelLayout_33;
      MR_Word LineInfo_34;
      MR_Word LabelTable_35;

      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = (MR_Box) ((MR_Unsigned) (LabelVars_7));
      }
      {
        LabelLayout_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LabelLayout_33, 0) = ((MR_Box) (Var_27));
        MR_hl_field(0, LabelLayout_33, 1) = ((MR_Box) (Slot_8));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (LabelLayout_33));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (IsReturn_10));
      }
      {
        LineInfo_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LineInfo_34, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, LineInfo_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      LabelTable_35 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), ((MR_Box) (Line_13)), ((MR_Box) (LineInfo_34)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), ((MR_Box) (File_12)), ((MR_Box) (LabelTable_35)), STATE_VARIABLE_LabelTables_0_19, STATE_VARIABLE_LabelTables_20);
    }
    else
      *STATE_VARIABLE_LabelTables_20 = STATE_VARIABLE_LabelTables_0_19;
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_LabelTables_27;

  ll_backend__stack_layout__update_label_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_LabelTables_27);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_LabelTables_27));
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LabelLayout_19;
  MR_Word conv2_STATE_VARIABLE_StringTable_102;
  MR_Word conv1_STATE_VARIABLE_StaticCellInfo_104;
  MR_Word conv0_STATE_VARIABLE_LabelLayoutInfo_106;

  ll_backend__stack_layout__construct_internal_layout_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv3_LabelLayout_19, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_StringTable_102, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_StaticCellInfo_104, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_LabelLayoutInfo_106);
  *wrapper_arg_2 = ((MR_Box) (conv3_LabelLayout_19));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_StringTable_102));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_StaticCellInfo_104));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_LabelLayoutInfo_106));
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0(
  MR_Word Params_15,
  MR_Word PLI_16,
  MR_Word STATE_VARIABLE_LabelTables_0_55,
  MR_Word * STATE_VARIABLE_LabelTables_56,
  MR_Word STATE_VARIABLE_StringTable_0_57,
  MR_Word * STATE_VARIABLE_StringTable_58,
  MR_Word STATE_VARIABLE_TypeTable_0_59,
  MR_Word * STATE_VARIABLE_TypeTable_60,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_61,
  MR_Word * STATE_VARIABLE_StaticCellInfo_62,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_63,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_64,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_65,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_66)
{
  MR_bool succeeded;
  MR_Word ForceProcIdLayout_27 = ((((MR_Unsigned) ((MR_hl_field(0, PLI_16, 2))) >> 1)) & (MR_Integer) 1);
  MR_Word RttiProcLabel_29 = ((MR_Word) ((MR_hl_field(0, PLI_16, 3))));
  MR_Word EntryLabel_30 = ((MR_Word) ((MR_hl_field(0, PLI_16, 4))));
  MR_Word HeadVars_36 = ((MR_Word) ((MR_hl_field(0, PLI_16, 10))));
  MR_Word Goal_38 = ((MR_Word) ((MR_hl_field(0, PLI_16, 12))));
  MR_Word VarTable_41 = ((MR_Word) ((MR_hl_field(0, PLI_16, 15))));
  MR_Word InternalMap_42 = ((MR_Word) ((MR_hl_field(0, PLI_16, 16))));
  MR_Word MaybeTableIoEntry_43 = ((MR_Word) ((MR_hl_field(0, PLI_16, 17))));
  MR_Word Internals_46;
  MR_Word VarNumMap_47;
  MR_Word ProcLabel_48;
  MR_Word ProcIdLayout_49;
  MR_Word Kind_52;
  MR_Word ProcLayoutName_53;
  MR_Word InternalLabelInfos_54;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_StringTable_1_71;
  MR_Word STATE_VARIABLE_StaticCellInfo_1_72;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Box conv8_STATE_VARIABLE_LabelTables_56;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0), InternalMap_42, &Internals_46);
  ll_backend__stack_layout__compute_var_number_map_5_p_0(VarTable_41, HeadVars_36, Internals_46, Goal_38, &VarNumMap_47);
  ProcLabel_48 = ll_backend__llds__get_proc_label_1_f_0(EntryLabel_30);
  Var_67 = ((((MR_Unsigned) ((MR_hl_field(0, Params_15, 4))) >> 4)) & (MR_Integer) 1);
  mercury__bool__or_3_p_0(Var_67, ForceProcIdLayout_27, &ProcIdLayout_49);
  succeeded = (ProcIdLayout_49 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (MaybeTableIoEntry_43 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word UserOrUci_51;

    UserOrUci_51 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_48);
    {
      Kind_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Kind_52, 0) = (MR_Box) ((MR_Unsigned) (UserOrUci_51));
    }
  }
  else
    Kind_52 = (MR_Word) ((MR_Unsigned) 0U);
  {
    ProcLayoutName_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLayoutName_53, 0) = ((MR_Box) (RttiProcLabel_29));
    MR_hl_field(0, ProcLayoutName_53, 1) = ((MR_Box) (Kind_52));
  }
  Var_134 = ((((MR_Unsigned) ((MR_hl_field(0, Params_15, 4))) >> 6)) & (MR_Integer) 1);
  Var_133 = ((((MR_Unsigned) ((MR_hl_field(0, Params_15, 4))) >> 5)) & (MR_Integer) 1);
  succeeded = (Var_134 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (Var_133 == (MR_Integer) 1);
  if (succeeded)
    succeeded = ll_backend__stack_layout__valid_proc_layout_1_p_0(PLI_16);
  if (succeeded)
  {
    MR_Word Var_70;
    MR_Box conv6_STATE_VARIABLE_StringTable_1_71;
    MR_Box conv5_STATE_VARIABLE_StaticCellInfo_1_72;
    MR_Box conv4_STATE_VARIABLE_LabelLayoutInfo_64;

    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_12[0]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_1));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (Params_15));
      MR_hl_field(0, Var_70, 4) = ((MR_Box) (ProcLabel_48));
      MR_hl_field(0, Var_70, 5) = ((MR_Box) (ProcLayoutName_53));
      MR_hl_field(0, Var_70, 6) = ((MR_Box) (VarNumMap_47));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&ll_backend__stack_layout_scalar_common_1[6]), (MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0), Var_70, Internals_46, &InternalLabelInfos_54, ((MR_Box) (STATE_VARIABLE_StringTable_0_57)), &conv6_STATE_VARIABLE_StringTable_1_71, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_61)), &conv5_STATE_VARIABLE_StaticCellInfo_1_72, ((MR_Box) (STATE_VARIABLE_LabelLayoutInfo_0_63)), &conv4_STATE_VARIABLE_LabelLayoutInfo_64);
    STATE_VARIABLE_StringTable_1_71 = ((MR_Word) (conv6_STATE_VARIABLE_StringTable_1_71));
    STATE_VARIABLE_StaticCellInfo_1_72 = ((MR_Word) (conv5_STATE_VARIABLE_StaticCellInfo_1_72));
    *STATE_VARIABLE_LabelLayoutInfo_64 = ((MR_Word) (conv4_STATE_VARIABLE_LabelLayoutInfo_64));
  }
  else
  {
    InternalLabelInfos_54 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_LabelLayoutInfo_64 = STATE_VARIABLE_LabelLayoutInfo_0_63;
    STATE_VARIABLE_StaticCellInfo_1_72 = STATE_VARIABLE_StaticCellInfo_0_61;
    STATE_VARIABLE_StringTable_1_71 = STATE_VARIABLE_StringTable_0_57;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[2]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[22]), InternalLabelInfos_54, ((MR_Box) (STATE_VARIABLE_LabelTables_0_55)), &conv8_STATE_VARIABLE_LabelTables_56);
  *STATE_VARIABLE_LabelTables_56 = ((MR_Word) (conv8_STATE_VARIABLE_LabelTables_56));
  ll_backend__stack_layout__construct_proc_layout_15_p_0(Params_15, PLI_16, ProcLayoutName_53, Kind_52, InternalLabelInfos_54, VarNumMap_47, *STATE_VARIABLE_LabelLayoutInfo_64, STATE_VARIABLE_StringTable_1_71, STATE_VARIABLE_StringTable_58, STATE_VARIABLE_TypeTable_0_59, STATE_VARIABLE_TypeTable_60, STATE_VARIABLE_StaticCellInfo_1_72, STATE_VARIABLE_StaticCellInfo_62, STATE_VARIABLE_ProcLayoutInfo_0_65, STATE_VARIABLE_ProcLayoutInfo_66);
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_layout_15_p_0(
  MR_Word Params_16,
  MR_Word PLI_17,
  MR_Word ProcLayoutName_18,
  MR_Word Kind_19,
  MR_Word InternalLabelInfos_20,
  MR_Word VarNumMap_21,
  MR_Word LabelLayoutInfo_22,
  MR_Word STATE_VARIABLE_StringTable_0_102,
  MR_Word * STATE_VARIABLE_StringTable_103,
  MR_Word STATE_VARIABLE_TypeTable_0_104,
  MR_Word * STATE_VARIABLE_TypeTable_105,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_106,
  MR_Word * STATE_VARIABLE_StaticCellInfo_107,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_108,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_109)
{
  MR_bool succeeded;
  MR_Word Detism_27 = ((((MR_Unsigned) ((MR_hl_field(0, PLI_17, 0))) >> 3)) & (MR_Integer) 7);
  MR_Word EffTraceLevel_28 = ((MR_Unsigned) ((MR_hl_field(0, PLI_17, 0))) & (MR_Integer) 7);
  MR_Word EvalMethod_29 = ((MR_Word) ((MR_hl_field(0, PLI_17, 1))));
  MR_Word NeedGoalRep_30 = ((((MR_Unsigned) ((MR_hl_field(0, PLI_17, 2))) >> 2)) & (MR_Integer) 1);
  MR_Word NeedsAllNames_32 = ((MR_Unsigned) ((MR_hl_field(0, PLI_17, 2))) & (MR_Integer) 1);
  MR_Word RttiProcLabel_33 = ((MR_Word) ((MR_hl_field(0, PLI_17, 3))));
  MR_Word EntryLabel_34 = ((MR_Word) ((MR_hl_field(0, PLI_17, 4))));
  MR_Integer StackSlots_35 = ((MR_Integer) ((MR_hl_field(0, PLI_17, 5))));
  MR_Word SuccipLoc_36 = ((MR_Word) ((MR_hl_field(0, PLI_17, 6))));
  MR_Word MaybeCallLabel_37 = ((MR_Word) ((MR_hl_field(0, PLI_17, 7))));
  MR_Integer MaxTraceRegR_38 = ((MR_Integer) ((MR_hl_field(0, PLI_17, 8))));
  MR_Integer MaxTraceRegF_39 = ((MR_Integer) ((MR_hl_field(0, PLI_17, 9))));
  MR_Word HeadVars_40 = ((MR_Word) ((MR_hl_field(0, PLI_17, 10))));
  MR_Word ArgModes_41 = ((MR_Word) ((MR_hl_field(0, PLI_17, 11))));
  MR_Word Goal_42 = ((MR_Word) ((MR_hl_field(0, PLI_17, 12))));
  MR_Word InstMap_43 = ((MR_Word) ((MR_hl_field(0, PLI_17, 13))));
  MR_Word TraceSlotInfo_44 = ((MR_Word) ((MR_hl_field(0, PLI_17, 14))));
  MR_Word VarTable_45 = ((MR_Word) ((MR_hl_field(0, PLI_17, 15))));
  MR_Word InternalMap_46 = ((MR_Word) ((MR_hl_field(0, PLI_17, 16))));
  MR_Word MaybeTableInfo_47 = ((MR_Word) ((MR_hl_field(0, PLI_17, 17))));
  MR_Word OISUKindFors_48 = ((MR_Word) ((MR_hl_field(0, PLI_17, 18))));
  MR_Word MaybeDeepProfInfo_49 = ((MR_Word) ((MR_hl_field(0, PLI_17, 19))));
  MR_Word Traversal_50;
  MR_Word PredId_51;
  MR_Integer ProcId_52;
  MR_Word PredProcId_53;
  MR_Word MaybeTableSlotName_54;
  MR_Word More_58;
  MR_Word ProcLayout_95;
  MR_Word RevProcLayouts0_96;
  MR_Word RevProcLayouts_97;
  MR_Word RevProcLayoutNames0_98;
  MR_Word RevProcLayoutNames_99;
  MR_Word LabelToLayoutMap0_100;
  MR_Word LabelToLayoutMap_101;
  MR_Word STATE_VARIABLE_ProcLayoutInfo_1_111;
  MR_Word STATE_VARIABLE_ProcLayoutInfo_5_119;
  MR_Word STATE_VARIABLE_ProcLayoutInfo_8_123;
  MR_Word Var_124;
  MR_Word Var_273;
  MR_Word Var_274;
  MR_Integer Var_275;
  MR_Word Var_276;
  MR_Word Var_305;
  MR_Word Var_306;
  MR_Integer Var_307;
  MR_Word Var_308;
  MR_Word Var_309;
  MR_Word Var_310;

  ll_backend__stack_layout__construct_proc_traversal_6_p_0(Params_16, EntryLabel_34, Detism_27, StackSlots_35, SuccipLoc_36, &Traversal_50);
  PredId_51 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_33, 6))));
  ProcId_52 = ((MR_Integer) ((MR_hl_field(0, RttiProcLabel_33, 7))));
  {
    PredProcId_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_53, 0) = ((MR_Box) (PredId_51));
    MR_hl_field(0, PredProcId_53, 1) = ((MR_Box) (ProcId_52));
  }
  if ((MaybeTableInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeTableSlotName_54 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_StaticCellInfo_107 = STATE_VARIABLE_StaticCellInfo_0_106;
    STATE_VARIABLE_ProcLayoutInfo_1_111 = STATE_VARIABLE_ProcLayoutInfo_0_108;
  }
  else
  {
    MR_Word TableInfo_55 = ((MR_Word) ((MR_hl_field(1, MaybeTableInfo_47, 0))));
    MR_Word TableExecTraceInfo0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 1))));
    MR_Word TableExecTraceInfo_57;
    MR_Word Var_166;
    MR_Integer Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;

    ll_backend__stack_layout__construct_exec_trace_table_data_8_p_0(PredProcId_53, ProcLayoutName_18, TableInfo_55, &MaybeTableSlotName_54, STATE_VARIABLE_StaticCellInfo_0_106, STATE_VARIABLE_StaticCellInfo_107, TableExecTraceInfo0_56, &TableExecTraceInfo_57);
    Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 0))));
    Var_168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 2))));
    Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 3))));
    Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 4))));
    Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 5))));
    Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_0_108, 6))));
    {
      STATE_VARIABLE_ProcLayoutInfo_1_111 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 0) = ((MR_Box) (Var_166));
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 1) = ((MR_Box) (TableExecTraceInfo_57));
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 2) = ((MR_Box) (Var_168));
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 3) = ((MR_Box) (Var_169));
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 4) = ((MR_Box) (Var_170));
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 5) = ((MR_Box) (Var_171));
      MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 6) = ((MR_Box) (Var_172));
    }
  }
  if ((Kind_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    More_58 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_StringTable_103 = STATE_VARIABLE_StringTable_0_102;
    *STATE_VARIABLE_TypeTable_105 = STATE_VARIABLE_TypeTable_0_104;
    STATE_VARIABLE_ProcLayoutInfo_5_119 = STATE_VARIABLE_ProcLayoutInfo_1_111;
  }
  else
  {
    MR_Word TraceStackLayout_60 = ((((MR_Unsigned) ((MR_hl_field(0, Params_16, 4))) >> 5)) & (MR_Integer) 1);
    MR_Word MaybeExecTraceSlotName_64;
    MR_Word ModuleInfo_65;
    MR_Word ModuleName_66;
    MR_Word DeepProfiling_67;
    MR_Word MaybeProcStaticSlotName_76;
    MR_Word MaybeProcBytesSlotName_93;
    MR_Word ModuleLayoutName_94;
    MR_Word STATE_VARIABLE_StringTable_1_112;
    MR_Word STATE_VARIABLE_ProcLayoutInfo_2_113;
    MR_Word TypeCtorInfo_312_312;
    MR_Word TypeCtorInfo_313_313;

    succeeded = (TraceStackLayout_60 == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtorInfo_312_312 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      TypeCtorInfo_313_313 = (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_312_312, TypeCtorInfo_313_313, InternalMap_46);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = ll_backend__stack_layout__valid_proc_layout_1_p_0(PLI_17);
    }
    if (succeeded)
    {
      MR_Word ExecTraceInfo0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 1))));
      MR_Word ExecTraceSlotName_62;
      MR_Word ExecTraceInfo_63;
      MR_Word Var_190;
      MR_Integer Var_192;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_196;

      ll_backend__stack_layout__construct_exec_trace_layout_22_p_0(Params_16, RttiProcLabel_33, EvalMethod_29, EffTraceLevel_28, MaybeCallLabel_37, MaybeTableSlotName_54, MaxTraceRegR_38, MaxTraceRegF_39, HeadVars_40, ArgModes_41, TraceSlotInfo_44, VarTable_45, MaybeTableInfo_47, NeedsAllNames_32, VarNumMap_21, InternalLabelInfos_20, &ExecTraceSlotName_62, LabelLayoutInfo_22, STATE_VARIABLE_StringTable_0_102, &STATE_VARIABLE_StringTable_1_112, ExecTraceInfo0_61, &ExecTraceInfo_63);
      Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 0))));
      Var_192 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 2))));
      Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 3))));
      Var_194 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 4))));
      Var_195 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 5))));
      Var_196 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_1_111, 6))));
      {
        STATE_VARIABLE_ProcLayoutInfo_2_113 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 0) = ((MR_Box) (Var_190));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 1) = ((MR_Box) (ExecTraceInfo_63));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 2) = ((MR_Box) (Var_192));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 3) = ((MR_Box) (Var_193));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 4) = ((MR_Box) (Var_194));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 5) = ((MR_Box) (Var_195));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 6) = ((MR_Box) (Var_196));
      }
      {
        MaybeExecTraceSlotName_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeExecTraceSlotName_64, 0) = ((MR_Box) (ExecTraceSlotName_62));
      }
    }
    else
    {
      MaybeExecTraceSlotName_64 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ProcLayoutInfo_2_113 = STATE_VARIABLE_ProcLayoutInfo_1_111;
      STATE_VARIABLE_StringTable_1_112 = STATE_VARIABLE_StringTable_0_102;
    }
    ModuleInfo_65 = ((MR_Word) ((MR_hl_field(0, Params_16, 0))));
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_65, &ModuleName_66);
    DeepProfiling_67 = ((((MR_Unsigned) ((MR_hl_field(0, Params_16, 4))) >> 7)) & (MR_Integer) 1);
    succeeded = (NeedGoalRep_30 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (DeepProfiling_67 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word IncludeVarNameTable_68;
      MR_Word IncludeVarTypes_69;
      MR_Word BytecodeBody_78;
      MR_Word BytecodeHeadVars_79;
      MR_Word BytecodeInstMap_80;
      MR_Word BytecodeVarTable_81;
      MR_Word BytecodeDetism_82;
      MR_Word BytecodeVarNumMap_83;
      MR_Word ProcBytes_84;
      MR_Word RevProcBytes_85;
      MR_Integer NumProcBytes_86;
      MR_Word RevAllProcBytes0_87;
      MR_Word RevAllProcBytes_88;
      MR_Integer ProcByteSlot_90;
      MR_Integer NextProcByte_91;
      MR_Word ProcBytesSlotName_92;
      MR_Word STATE_VARIABLE_ProcLayoutInfo_3_114;
      MR_Word Var_240;
      MR_Word Var_241;
      MR_Word Var_244;
      MR_Word Var_245;
      MR_Word Var_246;

      switch (DeepProfiling_67) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            IncludeVarNameTable_68 = (MR_Integer) 0;
            IncludeVarTypes_69 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            IncludeVarNameTable_68 = (MR_Integer) 1;
            if ((OISUKindFors_48 == (MR_Word) ((MR_Unsigned) 0U)))
              IncludeVarTypes_69 = (MR_Integer) 0;
            else
              IncludeVarTypes_69 = (MR_Integer) 1;
          }
          break;
      }
      if ((MaybeDeepProfInfo_49 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeProcStaticSlotName_76 = (MR_Word) ((MR_Unsigned) 0U);
        BytecodeHeadVars_79 = HeadVars_40;
        BytecodeBody_78 = Goal_42;
        BytecodeInstMap_80 = InstMap_43;
        BytecodeVarTable_81 = VarTable_45;
        BytecodeDetism_82 = Detism_27;
        BytecodeVarNumMap_83 = VarNumMap_21;
        STATE_VARIABLE_ProcLayoutInfo_3_114 = STATE_VARIABLE_ProcLayoutInfo_2_113;
      }
      else
      {
        MR_Word DeepProfInfo_72 = ((MR_Word) ((MR_hl_field(1, MaybeDeepProfInfo_49, 0))));
        MR_Word ProcStaticInfo0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 0))));
        MR_Word ProcStaticSlotName_74;
        MR_Word ProcStaticInfo_75;
        MR_Word DeepOriginalBody_77;
        MR_Word Var_226;
        MR_Integer Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;

        ll_backend__stack_layout__construct_proc_static_layout_4_p_0(DeepProfInfo_72, &ProcStaticSlotName_74, ProcStaticInfo0_73, &ProcStaticInfo_75);
        Var_226 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 1))));
        Var_227 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 2))));
        Var_228 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 3))));
        Var_229 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 4))));
        Var_230 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 5))));
        Var_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 6))));
        {
          STATE_VARIABLE_ProcLayoutInfo_3_114 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 0) = ((MR_Box) (ProcStaticInfo_75));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 1) = ((MR_Box) (Var_226));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 2) = ((MR_Box) (Var_227));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 3) = ((MR_Box) (Var_228));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 4) = ((MR_Box) (Var_229));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 5) = ((MR_Box) (Var_230));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 6) = ((MR_Box) (Var_231));
        }
        {
          MaybeProcStaticSlotName_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeProcStaticSlotName_76, 0) = ((MR_Box) (ProcStaticSlotName_74));
        }
        DeepOriginalBody_77 = ((MR_Word) ((MR_hl_field(0, DeepProfInfo_72, 2))));
        BytecodeBody_78 = ((MR_Word) ((MR_hl_field(0, DeepOriginalBody_77, 0))));
        BytecodeHeadVars_79 = ((MR_Word) ((MR_hl_field(0, DeepOriginalBody_77, 1))));
        BytecodeInstMap_80 = ((MR_Word) ((MR_hl_field(0, DeepOriginalBody_77, 2))));
        BytecodeVarTable_81 = ((MR_Word) ((MR_hl_field(0, DeepOriginalBody_77, 3))));
        BytecodeDetism_82 = ((MR_Unsigned) ((MR_hl_field(0, DeepOriginalBody_77, 4))) & (MR_Integer) 7);
        ll_backend__stack_layout__compute_var_number_map_5_p_0(BytecodeVarTable_81, BytecodeHeadVars_79, (MR_Word) ((MR_Unsigned) 0U), BytecodeBody_78, &BytecodeVarNumMap_83);
      }
      ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(BytecodeHeadVars_79, BytecodeBody_78, BytecodeInstMap_80, BytecodeVarTable_81, BytecodeVarNumMap_83, ModuleInfo_65, IncludeVarNameTable_68, IncludeVarTypes_69, BytecodeDetism_82, STATE_VARIABLE_StringTable_1_112, STATE_VARIABLE_StringTable_103, STATE_VARIABLE_TypeTable_0_104, STATE_VARIABLE_TypeTable_105, &ProcBytes_84);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProcBytes_84, &RevProcBytes_85);
      mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProcBytes_84, &NumProcBytes_86);
      RevAllProcBytes0_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 3))));
      RevAllProcBytes_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevProcBytes_85, RevAllProcBytes0_87);
      Var_240 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 0))));
      Var_241 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 1))));
      ProcByteSlot_90 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 2))));
      Var_244 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 4))));
      Var_245 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 5))));
      Var_246 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_3_114, 6))));
      NextProcByte_91 = (MR_Integer) ((MR_Unsigned) NumProcBytes_86 + (MR_Unsigned) ProcByteSlot_90);
      {
        STATE_VARIABLE_ProcLayoutInfo_5_119 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 0) = ((MR_Box) (Var_240));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 1) = ((MR_Box) (Var_241));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 2) = ((MR_Box) (NextProcByte_91));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 3) = ((MR_Box) (RevAllProcBytes_88));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 4) = ((MR_Box) (Var_244));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 5) = ((MR_Box) (Var_245));
        MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 6) = ((MR_Box) (Var_246));
      }
      {
        ProcBytesSlotName_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcBytesSlotName_92, 0) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, ProcBytesSlotName_92, 1) = ((MR_Box) (ProcByteSlot_90));
      }
      {
        MaybeProcBytesSlotName_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeProcBytesSlotName_93, 0) = ((MR_Box) (ProcBytesSlotName_92));
      }
    }
    else
    {
      if ((MaybeDeepProfInfo_49 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeProcStaticSlotName_76 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_ProcLayoutInfo_5_119 = STATE_VARIABLE_ProcLayoutInfo_2_113;
      }
      else
      {
        MR_Word DeepProfInfo_126 = ((MR_Word) ((MR_hl_field(1, MaybeDeepProfInfo_49, 0))));
        MR_Word ProcStaticInfo0_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 0))));
        MR_Word ProcStaticSlotName_128;
        MR_Word ProcStaticInfo_129;
        MR_Word Var_267;
        MR_Integer Var_268;
        MR_Word Var_269;
        MR_Word Var_270;
        MR_Word Var_271;
        MR_Word Var_272;

        ll_backend__stack_layout__construct_proc_static_layout_4_p_0(DeepProfInfo_126, &ProcStaticSlotName_128, ProcStaticInfo0_127, &ProcStaticInfo_129);
        Var_267 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 1))));
        Var_268 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 2))));
        Var_269 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 3))));
        Var_270 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 4))));
        Var_271 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 5))));
        Var_272 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_2_113, 6))));
        {
          STATE_VARIABLE_ProcLayoutInfo_5_119 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 0) = ((MR_Box) (ProcStaticInfo_129));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 1) = ((MR_Box) (Var_267));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 2) = ((MR_Box) (Var_268));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 3) = ((MR_Box) (Var_269));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 4) = ((MR_Box) (Var_270));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 5) = ((MR_Box) (Var_271));
          MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 6) = ((MR_Box) (Var_272));
        }
        {
          MaybeProcStaticSlotName_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeProcStaticSlotName_76, 0) = ((MR_Box) (ProcStaticSlotName_128));
        }
      }
      MaybeProcBytesSlotName_93 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TypeTable_105 = STATE_VARIABLE_TypeTable_0_104;
      *STATE_VARIABLE_StringTable_103 = STATE_VARIABLE_StringTable_1_112;
    }
    {
      ModuleLayoutName_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModuleLayoutName_94, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, ModuleLayoutName_94, 1) = ((MR_Box) (ModuleName_66));
    }
    {
      More_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, More_58, 0) = ((MR_Box) (MaybeProcStaticSlotName_76));
      MR_hl_field(1, More_58, 1) = ((MR_Box) (MaybeExecTraceSlotName_64));
      MR_hl_field(1, More_58, 2) = ((MR_Box) (MaybeProcBytesSlotName_93));
      MR_hl_field(1, More_58, 3) = ((MR_Box) (ModuleLayoutName_94));
    }
  }
  {
    ProcLayout_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLayout_95, 0) = ((MR_Box) (RttiProcLabel_33));
    MR_hl_field(0, ProcLayout_95, 1) = ((MR_Box) (Traversal_50));
    MR_hl_field(0, ProcLayout_95, 2) = ((MR_Box) (More_58));
  }
  Var_273 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 0))));
  Var_274 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 1))));
  Var_275 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 2))));
  Var_276 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 3))));
  RevProcLayouts0_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 4))));
  RevProcLayoutNames0_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 5))));
  LabelToLayoutMap0_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_5_119, 6))));
  {
    RevProcLayouts_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevProcLayouts_97, 0) = ((MR_Box) (ProcLayout_95));
    MR_hl_field(1, RevProcLayouts_97, 1) = ((MR_Box) (RevProcLayouts0_96));
  }
  {
    RevProcLayoutNames_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevProcLayoutNames_99, 0) = ((MR_Box) (ProcLayoutName_18));
    MR_hl_field(1, RevProcLayoutNames_99, 1) = ((MR_Box) (RevProcLayoutNames0_98));
  }
  {
    STATE_VARIABLE_ProcLayoutInfo_8_123 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 0) = ((MR_Box) (Var_273));
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 1) = ((MR_Box) (Var_274));
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 2) = ((MR_Box) (Var_275));
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 3) = ((MR_Box) (Var_276));
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 4) = ((MR_Box) (RevProcLayouts_97));
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 5) = ((MR_Box) (RevProcLayoutNames_99));
    MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 6) = ((MR_Box) (LabelToLayoutMap0_100));
  }
  {
    Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_124, 1) = ((MR_Box) (ProcLayoutName_18));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), ((MR_Box) (EntryLabel_34)), ((MR_Box) (Var_124)), LabelToLayoutMap0_100, &LabelToLayoutMap_101);
  Var_305 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 0))));
  Var_306 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 1))));
  Var_307 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 2))));
  Var_308 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 3))));
  Var_309 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 4))));
  Var_310 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcLayoutInfo_8_123, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ProcLayoutInfo_109 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_305));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_306));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_307));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_308));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_309));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_310));
    MR_hl_field(0, base, 6) = ((MR_Box) (LabelToLayoutMap_101));
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_exec_trace_table_data_8_p_0(
  MR_Word PredProcId_9,
  MR_Word ProcLayoutName_10,
  MR_Word TableInfo_11,
  MR_Word * MaybeTableSlotName_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_32,
  MR_Word * STATE_VARIABLE_StaticCellInfo_33,
  MR_Word STATE_VARIABLE_ExecTraceInfo_0_34,
  MR_Word * STATE_VARIABLE_ExecTraceInfo_35)
{
  if (((MR_tag((MR_Word) TableInfo_11)) == (MR_Integer) 0))
  {
    MR_Word TableIOInfo_15 = ((MR_Word) ((MR_hl_field(0, TableInfo_11, 0))));
    MR_Word MaybeTableArgInfos_16 = (MR_Word) (TableIOInfo_15);
    MR_Word TableIoEntryData_17;
    MR_Word RevTableIoEntryDatas0_23;
    MR_Word RevTableIoEntryDatas_24;
    MR_Word TableDataCounter0_25;
    MR_Integer Slot_26;
    MR_Word TableDataCounter_27;
    MR_Word TableDataSlotName_28;
    MR_Word TableIoEntryMap0_29;
    MR_Word TableIoEntryMap_30;
    MR_Word STATE_VARIABLE_ExecTraceInfo_1_39;
    MR_Word STATE_VARIABLE_ExecTraceInfo_2_40;
    MR_Integer Var_42;
    MR_Integer Var_43;
    MR_Integer Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer Var_73;
    MR_Integer Var_74;
    MR_Integer Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Integer Var_94;
    MR_Integer Var_95;
    MR_Integer Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;

    if ((MaybeTableArgInfos_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        TableIoEntryData_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TableIoEntryData_17, 0) = ((MR_Box) (ProcLayoutName_10));
        MR_hl_field(0, TableIoEntryData_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_StaticCellInfo_33 = STATE_VARIABLE_StaticCellInfo_0_32;
    }
    else
    {
      MR_Word TableArgInfos_18 = ((MR_Word) ((MR_hl_field(1, MaybeTableArgInfos_16, 0))));
      MR_Integer NumPTIs_19;
      MR_Word PTIVectorRval_20;
      MR_Word TVarVectorRval_21;
      MR_Word TableIoArgsData_22;
      MR_Word Var_38;

      ll_backend__stack_layout__convert_table_arg_info_6_p_0(TableArgInfos_18, &NumPTIs_19, &PTIVectorRval_20, &TVarVectorRval_21, STATE_VARIABLE_StaticCellInfo_0_32, STATE_VARIABLE_StaticCellInfo_33);
      {
        TableIoArgsData_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TableIoArgsData_22, 0) = ((MR_Box) (NumPTIs_19));
        MR_hl_field(0, TableIoArgsData_22, 1) = ((MR_Box) (PTIVectorRval_20));
        MR_hl_field(0, TableIoArgsData_22, 2) = ((MR_Box) (TVarVectorRval_21));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (TableIoArgsData_22));
      }
      {
        TableIoEntryData_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TableIoEntryData_17, 0) = ((MR_Box) (ProcLayoutName_10));
        MR_hl_field(0, TableIoEntryData_17, 1) = ((MR_Box) (Var_38));
      }
    }
    Var_42 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 0))));
    Var_43 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 1))));
    Var_44 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 2))));
    TableDataCounter0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 3))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 4))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 5))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 6))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 7))));
    RevTableIoEntryDatas0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 8))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 9))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_34, 10))));
    {
      RevTableIoEntryDatas_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevTableIoEntryDatas_24, 0) = ((MR_Box) (TableIoEntryData_17));
      MR_hl_field(1, RevTableIoEntryDatas_24, 1) = ((MR_Box) (RevTableIoEntryDatas0_23));
    }
    {
      STATE_VARIABLE_ExecTraceInfo_1_39 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 3) = ((MR_Box) (TableDataCounter0_25));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 5) = ((MR_Box) (Var_47));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 6) = ((MR_Box) (Var_48));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 7) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 8) = ((MR_Box) (RevTableIoEntryDatas_24));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 9) = ((MR_Box) (Var_50));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 10) = ((MR_Box) (Var_51));
    }
    mercury__counter__allocate_3_p_0(&Slot_26, TableDataCounter0_25, &TableDataCounter_27);
    Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 0))));
    Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 1))));
    Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 2))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 4))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 5))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 6))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 7))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 8))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 9))));
    TableIoEntryMap0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_39, 10))));
    {
      STATE_VARIABLE_ExecTraceInfo_2_40 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 0) = ((MR_Box) (Var_73));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 1) = ((MR_Box) (Var_74));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 2) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 3) = ((MR_Box) (TableDataCounter_27));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 4) = ((MR_Box) (Var_77));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 5) = ((MR_Box) (Var_78));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 6) = ((MR_Box) (Var_79));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 7) = ((MR_Box) (Var_80));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 8) = ((MR_Box) (Var_81));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 9) = ((MR_Box) (Var_82));
      MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 10) = ((MR_Box) (TableIoEntryMap0_29));
    }
    {
      TableDataSlotName_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TableDataSlotName_28, 0) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, TableDataSlotName_28, 1) = ((MR_Box) (Slot_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTableSlotName_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TableDataSlotName_28));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ((MR_Box) (PredProcId_9)), ((MR_Box) (TableDataSlotName_28)), TableIoEntryMap0_29, &TableIoEntryMap_30);
    Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 0))));
    Var_95 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 1))));
    Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 2))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 3))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 4))));
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 5))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 6))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 7))));
    Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 8))));
    Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_40, 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ExecTraceInfo_35 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_97));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_98));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_99));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_100));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_101));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_102));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_103));
      MR_hl_field(0, base, 10) = ((MR_Box) (TableIoEntryMap_30));
    }
  }
  else
  {
    *MaybeTableSlotName_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_StaticCellInfo_33 = STATE_VARIABLE_StaticCellInfo_0_32;
    *STATE_VARIABLE_ExecTraceInfo_35 = STATE_VARIABLE_ExecTraceInfo_0_34;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_exec_trace_layout_22_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_layout__IntroducedFrom__pred__construct_exec_trace_layout__971__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__construct_exec_trace_layout_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_VarNum_6;

  ll_backend__stack_layout__convert_var_to_int_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_VarNum_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_VarNum_6));
}

static void MR_CALL 
ll_backend__stack_layout__construct_exec_trace_layout_22_p_0(
  MR_Word Params_23,
  MR_Word RttiProcLabel_24,
  MR_Word EvalMethod_25,
  MR_Word EffTraceLevel_26,
  MR_Word MaybeCallLabel_27,
  MR_Word MaybeTableSlotName_28,
  MR_Integer MaxTraceRegR_29,
  MR_Integer MaxTraceRegF_30,
  MR_Word HeadVars_31,
  MR_Word ArgModes_32,
  MR_Word TraceSlotInfo_33,
  MR_Word VarTable_34,
  MR_Word MaybeTableInfo_35,
  MR_Word NeedsAllNames_36,
  MR_Word VarNumMap_37,
  MR_Word InternalLabelInfos_38,
  MR_Word * ExecTraceName_39,
  MR_Word LabelLayoutInfo_40,
  MR_Word STATE_VARIABLE_StringTable_0_109,
  MR_Word * STATE_VARIABLE_StringTable_110,
  MR_Word STATE_VARIABLE_ExecTraceInfo_0_111,
  MR_Word * STATE_VARIABLE_ExecTraceInfo_112)
{
  MR_bool succeeded;
  MR_Word RevInterfaceEventLayoutNames_43;
  MR_Word RevInternalEventLayoutNames_44;
  MR_Word InterfaceEventLayoutNames_45;
  MR_Word InternalEventLayoutNames_46;
  MR_Integer MaxVarNum_47;
  MR_Word VarNameVector_48;
  MR_Word HeadVarNumVector_49;
  MR_Word MaybeFromFullSlot_50;
  MR_Word MaybeIoSeqSlot_51;
  MR_Word MaybeTrailSlots_52;
  MR_Word MaybeMaxfrSlot_53;
  MR_Word MaybeCallTableSlot_54;
  MR_Word MaybeTailRecSlot_55;
  MR_Word ModuleInfo_56;
  MR_Word MaybeCallLabelSlotName_59;
  MR_Word MaybeTable_60;
  MR_Word RevEventLayouts0_67;
  MR_Word ProcEventLayouts_68;
  MR_Word RevProcEventLayouts_69;
  MR_Word RevEventLayouts_70;
  MR_Integer EventLayoutsSlot_72;
  MR_Integer NumProcEventLayouts_73;
  MR_Integer NextEventLayout_74;
  MR_Word EventLayoutsSlotName_75;
  MR_Word CompressArrays_76;
  MR_Integer NumHeadVars_82;
  MR_Word MaybeHeadVarsSlotName_89;
  MR_Word MaybeVarNamesSlotName_101;
  MR_Integer Flags_102;
  MR_Word ExecTrace_103;
  MR_Word RevExecTraces0_104;
  MR_Word RevExecTraces_105;
  MR_Word ExecTraceCounter0_106;
  MR_Integer ExecTraceSlot_107;
  MR_Word ExecTraceCounter_108;
  MR_Word Var_116;
  MR_Word STATE_VARIABLE_ExecTraceInfo_1_127;
  MR_Word STATE_VARIABLE_ExecTraceInfo_2_128;
  MR_Word STATE_VARIABLE_ExecTraceInfo_4_134;
  MR_Word STATE_VARIABLE_ExecTraceInfo_6_140;
  MR_Word STATE_VARIABLE_ExecTraceInfo_7_142;
  MR_Integer Var_208;
  MR_Word Var_213;
  MR_Integer Var_334;
  MR_Integer Var_335;
  MR_Integer Var_336;
  MR_Word Var_337;
  MR_Word Var_339;
  MR_Word Var_340;
  MR_Word Var_341;
  MR_Word Var_342;
  MR_Word Var_343;
  MR_Integer Var_187;
  MR_Integer Var_188;
  MR_Word Var_190;
  MR_Word Var_191;
  MR_Word Var_192;
  MR_Word Var_193;
  MR_Word Var_195;
  MR_Word Var_196;
  MR_Word Var_197;
  MR_Integer Var_209;
  MR_Word Var_211;
  MR_Word Var_212;
  MR_Word Var_214;
  MR_Word Var_215;
  MR_Word Var_216;
  MR_Word Var_217;
  MR_Word Var_218;
  MR_Integer Var_365;
  MR_Integer Var_366;
  MR_Integer Var_367;
  MR_Word Var_368;
  MR_Word Var_370;
  MR_Word Var_371;
  MR_Word Var_372;
  MR_Word Var_373;
  MR_Word Var_374;
  MR_Word Var_375;

  ll_backend__stack_layout__collect_event_data_addrs_5_p_0(InternalLabelInfos_38, (MR_Word) ((MR_Unsigned) 0U), &RevInterfaceEventLayoutNames_43, (MR_Word) ((MR_Unsigned) 0U), &RevInternalEventLayoutNames_44);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), RevInterfaceEventLayoutNames_43, &InterfaceEventLayoutNames_45);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), RevInternalEventLayoutNames_44, &InternalEventLayoutNames_46);
  ll_backend__stack_layout__construct_var_name_vector_6_p_0(VarNumMap_37, NeedsAllNames_36, &MaxVarNum_47, &VarNameVector_48, STATE_VARIABLE_StringTable_0_109, STATE_VARIABLE_StringTable_110);
  {
    Var_116 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_116, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[0]));
    MR_hl_field(0, Var_116, 1) = ((MR_Box) (ll_backend__stack_layout__construct_exec_trace_layout_22_p_0_1));
    MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_116, 3) = ((MR_Box) (VarNumMap_37));
  }
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_116, HeadVars_31, &HeadVarNumVector_49);
  MaybeFromFullSlot_50 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_33, 0))));
  MaybeIoSeqSlot_51 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_33, 1))));
  MaybeTrailSlots_52 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_33, 2))));
  MaybeMaxfrSlot_53 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_33, 3))));
  MaybeCallTableSlot_54 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_33, 4))));
  MaybeTailRecSlot_55 = ((MR_Word) ((MR_hl_field(0, TraceSlotInfo_33, 5))));
  ModuleInfo_56 = ((MR_Word) ((MR_hl_field(0, Params_23, 0))));
  if ((MaybeCallLabel_27 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeCallLabelSlotName_59 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CallLabel_57 = ((MR_Word) ((MR_hl_field(1, MaybeCallLabel_27, 0))));
    MR_Word CallLabelSlotName_58;
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_40, 19))));
    MR_Box conv1_CallLabelSlotName_58;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), Var_117, ((MR_Box) (CallLabel_57)), &conv1_CallLabelSlotName_58);
    CallLabelSlotName_58 = ((MR_Word) (conv1_CallLabelSlotName_58));
    {
      MaybeCallLabelSlotName_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeCallLabelSlotName_59, 0) = ((MR_Box) (CallLabelSlotName_58));
    }
  }
  if ((MaybeTableInfo_35 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTable_60 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TableInfo_61 = ((MR_Word) ((MR_hl_field(1, MaybeTableInfo_35, 0))));

    if (((MR_tag((MR_Word) TableInfo_61)) == (MR_Integer) 0))
      if ((MaybeTableSlotName_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.construct_exec_trace_layout\'/22", (MR_String) "MaybeTableSlotName = no");
          return;
        }
      else
      {
        MR_Word TableSlotName_63 = ((MR_Word) ((MR_hl_field(1, MaybeTableSlotName_28, 0))));
        MR_Word Var_118 = (MR_Word) ((MR_Word) (TableSlotName_63));

        {
          MaybeTable_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTable_60, 0) = ((MR_Box) (Var_118));
        }
      }
    else
    {
      MR_Word ProcLabel_65;
      MR_Word TableDataId_66;
      MR_Word Var_121;
      MR_Word Var_126;

      {
        Var_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_121, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[4]));
        MR_hl_field(0, Var_121, 1) = ((MR_Box) (ll_backend__stack_layout__construct_exec_trace_layout_22_p_0_2));
        MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_121, 3) = ((MR_Box) (MaybeTableSlotName_28));
        MR_hl_field(0, Var_121, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_121, (MR_String) "predicate \140ll_backend.stack_layout.construct_exec_trace_layout\'/22", (MR_String) "MaybeTableSlotName != no");
      ProcLabel_65 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_24);
      {
        TableDataId_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TableDataId_66, 0) = ((MR_Box) (ProcLabel_65));
        MR_hl_field(1, TableDataId_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_126, 0) = ((MR_Box) (TableDataId_66));
      }
      {
        MaybeTable_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTable_60, 0) = ((MR_Box) (Var_126));
      }
    }
  }
  RevEventLayouts0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 7))));
  ProcEventLayouts_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), InterfaceEventLayoutNames_45, InternalEventLayoutNames_46);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ProcEventLayouts_68, &RevProcEventLayouts_69);
  RevEventLayouts_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), RevProcEventLayouts_69, RevEventLayouts0_67);
  Var_187 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 0))));
  Var_188 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 1))));
  EventLayoutsSlot_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 2))));
  Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 3))));
  Var_191 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 4))));
  Var_192 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 5))));
  Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 6))));
  Var_195 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 8))));
  Var_196 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 9))));
  Var_197 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_0_111, 10))));
  {
    STATE_VARIABLE_ExecTraceInfo_1_127 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 0) = ((MR_Box) (Var_187));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 1) = ((MR_Box) (Var_188));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 2) = ((MR_Box) (EventLayoutsSlot_72));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 3) = ((MR_Box) (Var_190));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 4) = ((MR_Box) (Var_191));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 5) = ((MR_Box) (Var_192));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 6) = ((MR_Box) (Var_193));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 7) = ((MR_Box) (RevEventLayouts_70));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 8) = ((MR_Box) (Var_195));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 9) = ((MR_Box) (Var_196));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 10) = ((MR_Box) (Var_197));
  }
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ProcEventLayouts_68, &NumProcEventLayouts_73);
  NextEventLayout_74 = (MR_Integer) ((MR_Unsigned) EventLayoutsSlot_72 + (MR_Unsigned) NumProcEventLayouts_73);
  Var_208 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 0))));
  Var_209 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 1))));
  Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 3))));
  Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 4))));
  Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 5))));
  Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 6))));
  Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 7))));
  Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 8))));
  Var_217 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 9))));
  Var_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_1_127, 10))));
  {
    STATE_VARIABLE_ExecTraceInfo_2_128 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 0) = ((MR_Box) (Var_208));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 1) = ((MR_Box) (Var_209));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 2) = ((MR_Box) (NextEventLayout_74));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 3) = ((MR_Box) (Var_211));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 4) = ((MR_Box) (Var_212));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 5) = ((MR_Box) (Var_213));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 6) = ((MR_Box) (Var_214));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 7) = ((MR_Box) (Var_215));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 8) = ((MR_Box) (Var_216));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 9) = ((MR_Box) (Var_217));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 10) = ((MR_Box) (Var_218));
  }
  {
    EventLayoutsSlotName_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EventLayoutsSlotName_75, 0) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, EventLayoutsSlotName_75, 1) = ((MR_Box) (EventLayoutsSlot_72));
  }
  CompressArrays_76 = ((MR_Word) ((MR_hl_field(0, Params_23, 1))));
  if ((HeadVarNumVector_49 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeHeadVarsSlotName_89 = (MR_Word) ((MR_Unsigned) 0U);
    NumHeadVars_82 = (MR_Integer) 0;
    STATE_VARIABLE_ExecTraceInfo_4_134 = STATE_VARIABLE_ExecTraceInfo_2_128;
  }
  else
  {
    MR_Word RevHeadVarNumVector_81;
    MR_Integer HeadVarNumSlot_85;
    MR_Word HeadVarNumSlotName_88;
    MR_Integer OldHeadVarNumOffset_84;
    MR_Integer Var_130;
    MR_Integer Var_131;
    MR_Integer CompressionLimit_145;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVarNumVector_49, &RevHeadVarNumVector_81);
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVarNumVector_49, &NumHeadVars_82);
    succeeded = (CompressArrays_76 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CompressionLimit_145 = ((MR_Integer) ((MR_hl_field(1, CompressArrays_76, 0))));
      Var_130 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 0))));
      succeeded = (Var_130 <= CompressionLimit_145);
      if (succeeded)
      {
        Var_131 = (MR_Integer) 0;
        succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevHeadVarNumVector_81, Var_213, Var_131, &OldHeadVarNumOffset_84);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_132 = (MR_Integer) ((MR_Unsigned) Var_208 - (MR_Unsigned) OldHeadVarNumOffset_84);

      HeadVarNumSlot_85 = (MR_Integer) ((MR_Unsigned) Var_132 - (MR_Unsigned) NumHeadVars_82);
      STATE_VARIABLE_ExecTraceInfo_4_134 = STATE_VARIABLE_ExecTraceInfo_2_128;
    }
    else
    {
      MR_Word RevHeadVarNums_86;
      MR_Integer NextHeadVarNum_87;
      MR_Integer Var_261;
      MR_Integer Var_262;
      MR_Word Var_263;
      MR_Word Var_264;
      MR_Word Var_266;
      MR_Word Var_267;
      MR_Word Var_268;
      MR_Word Var_269;
      MR_Word Var_270;

      RevHeadVarNums_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevHeadVarNumVector_81, Var_213);
      Var_261 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 1))));
      Var_262 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 2))));
      Var_263 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 3))));
      Var_264 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 4))));
      Var_266 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 6))));
      Var_267 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 7))));
      Var_268 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 8))));
      Var_269 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 9))));
      Var_270 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_2_128, 10))));
      HeadVarNumSlot_85 = Var_208;
      NextHeadVarNum_87 = (MR_Integer) ((MR_Unsigned) Var_208 + (MR_Unsigned) NumHeadVars_82);
      {
        STATE_VARIABLE_ExecTraceInfo_4_134 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 0) = ((MR_Box) (NextHeadVarNum_87));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 1) = ((MR_Box) (Var_261));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 2) = ((MR_Box) (Var_262));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 3) = ((MR_Box) (Var_263));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 4) = ((MR_Box) (Var_264));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 5) = ((MR_Box) (RevHeadVarNums_86));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 6) = ((MR_Box) (Var_266));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 7) = ((MR_Box) (Var_267));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 8) = ((MR_Box) (Var_268));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 9) = ((MR_Box) (Var_269));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 10) = ((MR_Box) (Var_270));
      }
    }
    {
      HeadVarNumSlotName_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVarNumSlotName_88, 0) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(0, HeadVarNumSlotName_88, 1) = ((MR_Box) (HeadVarNumSlot_85));
    }
    {
      MaybeHeadVarsSlotName_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeHeadVarsSlotName_89, 0) = ((MR_Box) (HeadVarNumSlotName_88));
    }
  }
  if ((VarNameVector_48 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeVarNamesSlotName_101 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ExecTraceInfo_6_140 = STATE_VARIABLE_ExecTraceInfo_4_134;
  }
  else
  {
    MR_Word RevVarNames0_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 6))));
    MR_Integer NextVarName0_93 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 1))));
    MR_Word RevVarNameVector_94;
    MR_Integer NumVarNames_95;
    MR_Integer VarNameSlot_97;
    MR_Word VarNameSlotName_100;
    MR_Integer OldVarNameOffset_96;
    MR_Integer Var_136;
    MR_Integer Var_137;
    MR_Integer CompressionLimit_146;

    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameVector_48, &RevVarNameVector_94);
    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameVector_48, &NumVarNames_95);
    succeeded = (CompressArrays_76 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CompressionLimit_146 = ((MR_Integer) ((MR_hl_field(1, CompressArrays_76, 0))));
      Var_136 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 1))));
      succeeded = (Var_136 <= CompressionLimit_146);
      if (succeeded)
      {
        Var_137 = (MR_Integer) 0;
        succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevVarNameVector_94, RevVarNames0_92, Var_137, &OldVarNameOffset_96);
      }
    }
    if (succeeded)
    {
      MR_Integer Var_138 = (MR_Integer) ((MR_Unsigned) NextVarName0_93 - (MR_Unsigned) OldVarNameOffset_96);

      VarNameSlot_97 = (MR_Integer) ((MR_Unsigned) Var_138 - (MR_Unsigned) NumVarNames_95);
      STATE_VARIABLE_ExecTraceInfo_6_140 = STATE_VARIABLE_ExecTraceInfo_4_134;
    }
    else
    {
      MR_Word RevVarNames_98;
      MR_Integer NextVarName_99;
      MR_Integer Var_312;
      MR_Integer Var_314;
      MR_Word Var_315;
      MR_Word Var_316;
      MR_Word Var_317;
      MR_Word Var_319;
      MR_Word Var_320;
      MR_Word Var_321;
      MR_Word Var_322;

      RevVarNames_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevVarNameVector_94, RevVarNames0_92);
      Var_312 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 0))));
      Var_314 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 2))));
      Var_315 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 3))));
      Var_316 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 4))));
      Var_317 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 5))));
      Var_319 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 7))));
      Var_320 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 8))));
      Var_321 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 9))));
      Var_322 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_4_134, 10))));
      VarNameSlot_97 = NextVarName0_93;
      NextVarName_99 = (MR_Integer) ((MR_Unsigned) NextVarName0_93 + (MR_Unsigned) NumVarNames_95);
      {
        STATE_VARIABLE_ExecTraceInfo_6_140 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 0) = ((MR_Box) (Var_312));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 1) = ((MR_Box) (NextVarName_99));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 2) = ((MR_Box) (Var_314));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 3) = ((MR_Box) (Var_315));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 4) = ((MR_Box) (Var_316));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 5) = ((MR_Box) (Var_317));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 6) = ((MR_Box) (RevVarNames_98));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 7) = ((MR_Box) (Var_319));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 8) = ((MR_Box) (Var_320));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 9) = ((MR_Box) (Var_321));
        MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 10) = ((MR_Box) (Var_322));
      }
    }
    {
      VarNameSlotName_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarNameSlotName_100, 0) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, VarNameSlotName_100, 1) = ((MR_Box) (VarNameSlot_97));
    }
    {
      MaybeVarNamesSlotName_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeVarNamesSlotName_101, 0) = ((MR_Box) (VarNameSlotName_100));
    }
  }
  ll_backend__stack_layout__encode_exec_trace_flags_5_p_0(ModuleInfo_56, VarTable_34, HeadVars_31, ArgModes_32, &Flags_102);
  {
    ExecTrace_103 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExecTrace_103, 0) = ((MR_Box) (MaybeCallLabelSlotName_59));
    MR_hl_field(0, ExecTrace_103, 1) = ((MR_Box) (EventLayoutsSlotName_75));
    MR_hl_field(0, ExecTrace_103, 2) = ((MR_Box) (NumProcEventLayouts_73));
    MR_hl_field(0, ExecTrace_103, 3) = ((MR_Box) (MaybeTable_60));
    MR_hl_field(0, ExecTrace_103, 4) = ((MR_Box) (MaybeHeadVarsSlotName_89));
    MR_hl_field(0, ExecTrace_103, 5) = ((MR_Box) (NumHeadVars_82));
    MR_hl_field(0, ExecTrace_103, 6) = ((MR_Box) (MaybeVarNamesSlotName_101));
    MR_hl_field(0, ExecTrace_103, 7) = ((MR_Box) (MaxVarNum_47));
    MR_hl_field(0, ExecTrace_103, 8) = ((MR_Box) (MaxTraceRegR_29));
    MR_hl_field(0, ExecTrace_103, 9) = ((MR_Box) (MaxTraceRegF_30));
    MR_hl_field(0, ExecTrace_103, 10) = ((MR_Box) (MaybeFromFullSlot_50));
    MR_hl_field(0, ExecTrace_103, 11) = ((MR_Box) (MaybeIoSeqSlot_51));
    MR_hl_field(0, ExecTrace_103, 12) = ((MR_Box) (MaybeTrailSlots_52));
    MR_hl_field(0, ExecTrace_103, 13) = ((MR_Box) (MaybeMaxfrSlot_53));
    MR_hl_field(0, ExecTrace_103, 14) = ((MR_Box) (EvalMethod_25));
    MR_hl_field(0, ExecTrace_103, 15) = ((MR_Box) (MaybeCallTableSlot_54));
    MR_hl_field(0, ExecTrace_103, 16) = ((MR_Box) (MaybeTailRecSlot_55));
    MR_hl_field(0, ExecTrace_103, 17) = (MR_Box) ((MR_Unsigned) (EffTraceLevel_26));
    MR_hl_field(0, ExecTrace_103, 18) = ((MR_Box) (Flags_102));
  }
  Var_334 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 0))));
  Var_335 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 1))));
  Var_336 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 2))));
  Var_337 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 3))));
  ExecTraceCounter0_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 4))));
  Var_339 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 5))));
  Var_340 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 6))));
  Var_341 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 7))));
  Var_342 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 8))));
  RevExecTraces0_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 9))));
  Var_343 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_6_140, 10))));
  {
    RevExecTraces_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevExecTraces_105, 0) = ((MR_Box) (ExecTrace_103));
    MR_hl_field(1, RevExecTraces_105, 1) = ((MR_Box) (RevExecTraces0_104));
  }
  {
    STATE_VARIABLE_ExecTraceInfo_7_142 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 0) = ((MR_Box) (Var_334));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 1) = ((MR_Box) (Var_335));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 2) = ((MR_Box) (Var_336));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 3) = ((MR_Box) (Var_337));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 4) = ((MR_Box) (ExecTraceCounter0_106));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 5) = ((MR_Box) (Var_339));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 6) = ((MR_Box) (Var_340));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 7) = ((MR_Box) (Var_341));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 8) = ((MR_Box) (Var_342));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 9) = ((MR_Box) (RevExecTraces_105));
    MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 10) = ((MR_Box) (Var_343));
  }
  mercury__counter__allocate_3_p_0(&ExecTraceSlot_107, ExecTraceCounter0_106, &ExecTraceCounter_108);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ExecTraceName_39 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 60U));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExecTraceSlot_107));
  }
  Var_365 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 0))));
  Var_366 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 1))));
  Var_367 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 2))));
  Var_368 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 3))));
  Var_370 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 5))));
  Var_371 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 6))));
  Var_372 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 7))));
  Var_373 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 8))));
  Var_374 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 9))));
  Var_375 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExecTraceInfo_7_142, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ExecTraceInfo_112 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_365));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_366));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_367));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_368));
    MR_hl_field(0, base, 4) = ((MR_Box) (ExecTraceCounter_108));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_370));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_371));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_372));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_373));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_374));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_375));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Tail_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0(Search_5, HeadVar__2_2);
      if (succeeded)
      {
        *FoundAtOffset_9 = CurOffset_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) CurOffset_8 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__2_2 = Tail_7;
        MR_Integer next_value_of_CurOffset_8 = Var_11;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        CurOffset_8 = next_value_of_CurOffset_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
      MR_Integer SearchHead_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SearchTail_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Head_6;
      MR_Word Tail_7;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Head_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        Tail_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = (SearchHead_4 == Head_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = SearchTail_5;
          next_value_of_HeadVar__2_2 = Tail_7;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_var_name_vector_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_layout__var_has_name_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__construct_var_name_vector_6_p_0(
  MR_Word VarNumMap_7,
  MR_Word NeedsAllNames_8,
  MR_Integer * MaxVarNum_9,
  MR_Word * Offsets_10,
  MR_Word STATE_VARIABLE_StringTable_0_19,
  MR_Word * STATE_VARIABLE_StringTable_20)
{
  MR_bool succeeded;
  MR_Word VarNames0_12;
  MR_Word VarNames_13;
  MR_Word SortedVarNames_14;

  mercury__map__values_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]), VarNumMap_7, &VarNames0_12);
  switch (NeedsAllNames_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__list__filter_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[21]), VarNames0_12, &VarNames_13);
      break;
    case (MR_Integer) 1:
      VarNames_13 = VarNames0_12;
      break;
  }
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]), VarNames_13, &SortedVarNames_14);
  if ((SortedVarNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaxVarNum_9 = (MR_Integer) 0;
    *Offsets_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_StringTable_20 = STATE_VARIABLE_StringTable_0_19;
  }
  else
  {
    MR_Integer MaxVarNum0_18;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, SortedVarNames_14, 0))));

    MaxVarNum0_18 = ((MR_Integer) ((MR_hl_field(0, Var_22, 0))));
    ll_backend__stack_layout__construct_var_name_rvals_7_p_0(SortedVarNames_14, (MR_Integer) 1, MaxVarNum0_18, MaxVarNum_9, Offsets_10, STATE_VARIABLE_StringTable_0_19, STATE_VARIABLE_StringTable_20);
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_var_name_rvals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_StringTable_0_6,
  MR_Word * STATE_VARIABLE_StringTable_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = HeadVar__3_3;
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_StringTable_7 = STATE_VARIABLE_StringTable_0_6;
  }
  else
  {
    MR_Integer Var_14;
    MR_String Name_15;
    MR_Word VarNamesTail_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer Offset_19;
    MR_Word OffsetsTail_20;
    MR_Word VarNames_22;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word STATE_VARIABLE_StringTable_1_28;
    MR_Integer STATE_VARIABLE_MaxNum_1_29;
    MR_Integer Var_30;

    Var_14 = ((MR_Integer) ((MR_hl_field(0, Var_27, 0))));
    Name_15 = ((MR_String) ((MR_hl_field(0, Var_27, 1))));
    succeeded = (Var_14 == HeadVar__2_2);
    if (succeeded)
    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(Name_15, &Offset_19, STATE_VARIABLE_StringTable_0_6, &STATE_VARIABLE_StringTable_1_28);
      STATE_VARIABLE_MaxNum_1_29 = Var_14;
      VarNames_22 = VarNamesTail_16;
    }
    else
    {
      Offset_19 = (MR_Integer) 0;
      VarNames_22 = HeadVar__1_1;
      STATE_VARIABLE_StringTable_1_28 = STATE_VARIABLE_StringTable_0_6;
      STATE_VARIABLE_MaxNum_1_29 = HeadVar__3_3;
    }
    Var_30 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    ll_backend__stack_layout__construct_var_name_rvals_7_p_0(VarNames_22, Var_30, STATE_VARIABLE_MaxNum_1_29, HeadVar__4_4, &OffsetsTail_20, STATE_VARIABLE_StringTable_1_28, STATE_VARIABLE_StringTable_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Offset_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (OffsetsTail_20));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__encode_exec_trace_flags_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word HeadVars_8,
  MR_Word ArgModes_9,
  MR_Integer * STATE_VARIABLE_Flags_13)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_Flags_2_15;
  MR_Integer Var_11;
  MR_Integer Var_12;

  succeeded = hlds__hlds_proc_util__proc_info_has_io_state_pair_from_details_6_p_0(ModuleInfo_6, VarTable_7, HeadVars_8, ArgModes_9, &Var_11, &Var_12);
  if (succeeded)
    STATE_VARIABLE_Flags_2_15 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
  else
    STATE_VARIABLE_Flags_2_15 = (MR_Integer) 0;
  succeeded = ll_backend__stack_layout__some_var_is_higher_order_2_p_0(VarTable_7, HeadVars_8);
  if (succeeded)
    *STATE_VARIABLE_Flags_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Flags_2_15 + (MR_Unsigned) 2);
  else
    *STATE_VARIABLE_Flags_13 = STATE_VARIABLE_Flags_2_15;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__some_var_is_higher_order_2_p_0(
  MR_Word VarTable_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadVar_4;
    MR_Word HeadVars_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadVar_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      HeadVars_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      {
        MR_Word VarType_6;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, HeadVar_4, &VarType_6);
        succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(VarType_6);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = HeadVars_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__collect_event_data_addrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevInterfaces_0_2,
  MR_Word * STATE_VARIABLE_RevInterfaces_3,
  MR_Word STATE_VARIABLE_RevInternals_0_4,
  MR_Word * STATE_VARIABLE_RevInternals_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevInternals_5 = STATE_VARIABLE_RevInternals_0_4;
      *STATE_VARIABLE_RevInterfaces_3 = STATE_VARIABLE_RevInterfaces_0_2;
    }
    else
    {
      MR_Word Info_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Infos_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word LabelVars_18 = ((MR_Unsigned) ((MR_hl_field(0, Info_12, 2))) & (MR_Integer) 3);
      MR_Integer Slot_19 = ((MR_Integer) ((MR_hl_field(0, Info_12, 3))));
      MR_Word InternalInfo_20 = ((MR_Word) ((MR_hl_field(0, Info_12, 4))));
      MR_Word MaybePortInfo_21 = ((MR_Word) ((MR_hl_field(0, InternalInfo_20, 0))));
      MR_Word STATE_VARIABLE_RevInterfaces_1_32;
      MR_Word STATE_VARIABLE_RevInternals_1_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevInterfaces_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInternals_0_4;

      if ((MaybePortInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_RevInterfaces_1_32 = STATE_VARIABLE_RevInterfaces_0_2;
        STATE_VARIABLE_RevInternals_1_34 = STATE_VARIABLE_RevInternals_0_4;
      }
      else
      {
        MR_Word PortInfo_24 = ((MR_Word) ((MR_hl_field(1, MaybePortInfo_21, 0))));
        MR_Word Port_25 = ((((MR_Unsigned) ((MR_hl_field(0, PortInfo_24, 1))) >> 1)) & (MR_Integer) 15);

        switch (Port_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            {
              MR_Word LayoutName_26;
              MR_Word Var_31;

              {
                Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_31, 0) = (MR_Box) ((MR_Unsigned) (LabelVars_18));
              }
              {
                LayoutName_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, LayoutName_26, 0) = ((MR_Box) (Var_31));
                MR_hl_field(0, LayoutName_26, 1) = ((MR_Box) (Slot_19));
              }
              {
                STATE_VARIABLE_RevInterfaces_1_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevInterfaces_1_32, 0) = ((MR_Box) (LayoutName_26));
                MR_hl_field(1, STATE_VARIABLE_RevInterfaces_1_32, 1) = ((MR_Box) (STATE_VARIABLE_RevInterfaces_0_2));
              }
              STATE_VARIABLE_RevInternals_1_34 = STATE_VARIABLE_RevInternals_0_4;
            }
            break;
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
          case (MR_Integer) 11:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              MR_Word Var_33;
              MR_Word LayoutName_37;

              {
                Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_33, 0) = (MR_Box) ((MR_Unsigned) (LabelVars_18));
              }
              {
                LayoutName_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, LayoutName_37, 0) = ((MR_Box) (Var_33));
                MR_hl_field(0, LayoutName_37, 1) = ((MR_Box) (Slot_19));
              }
              {
                STATE_VARIABLE_RevInternals_1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevInternals_1_34, 0) = ((MR_Box) (LayoutName_37));
                MR_hl_field(1, STATE_VARIABLE_RevInternals_1_34, 1) = ((MR_Box) (STATE_VARIABLE_RevInternals_0_4));
              }
              STATE_VARIABLE_RevInterfaces_1_32 = STATE_VARIABLE_RevInterfaces_0_2;
            }
            break;
          case (MR_Integer) 5:
            {
              STATE_VARIABLE_RevInterfaces_1_32 = STATE_VARIABLE_RevInterfaces_0_2;
              STATE_VARIABLE_RevInternals_1_34 = STATE_VARIABLE_RevInternals_0_4;
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Infos_13;
      next_value_of_STATE_VARIABLE_RevInterfaces_0_2 = STATE_VARIABLE_RevInterfaces_1_32;
      next_value_of_STATE_VARIABLE_RevInternals_0_4 = STATE_VARIABLE_RevInternals_1_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevInterfaces_0_2 = next_value_of_STATE_VARIABLE_RevInterfaces_0_2;
      STATE_VARIABLE_RevInternals_0_4 = next_value_of_STATE_VARIABLE_RevInternals_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_static_layout_4_p_0(
  MR_Word DeepProfInfo_5,
  MR_Word * ProcStaticSlotName_6,
  MR_Word STATE_VARIABLE_ProcStaticInfo_0_42,
  MR_Word * STATE_VARIABLE_ProcStaticInfo_43)
{
  MR_Word HLDSProcStatic_8 = ((MR_Word) ((MR_hl_field(0, DeepProfInfo_5, 0))));
  MR_Word DeepExcpSlots_9 = ((MR_Word) ((MR_hl_field(0, DeepProfInfo_5, 1))));
  MR_String FileName_11 = ((MR_String) ((MR_hl_field(0, HLDSProcStatic_8, 0))));
  MR_Integer LineNumber_12 = ((MR_Integer) ((MR_hl_field(0, HLDSProcStatic_8, 1))));
  MR_Word IsInInterface_13 = ((MR_Unsigned) ((MR_hl_field(0, HLDSProcStatic_8, 2))) & (MR_Integer) 1);
  MR_Word CallSites_14 = ((MR_Word) ((MR_hl_field(0, HLDSProcStatic_8, 3))));
  MR_Word CoveragePoints_15 = ((MR_Word) ((MR_hl_field(0, HLDSProcStatic_8, 4))));
  MR_Word MaybeCallSitesTuple_16;
  MR_Word MaybeCoveragePointsTuple_26;
  MR_Word ProcStatic_36;
  MR_Word RevProcStatics0_37;
  MR_Word RevProcStatics_38;
  MR_Word ProcStaticCounter0_39;
  MR_Integer ProcStaticSlot_40;
  MR_Word ProcStaticCounter_41;
  MR_Word STATE_VARIABLE_ProcStaticInfo_2_45;
  MR_Word STATE_VARIABLE_ProcStaticInfo_4_48;
  MR_Word STATE_VARIABLE_ProcStaticInfo_5_50;
  MR_Integer Var_96;
  MR_Integer Var_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Integer Var_112;
  MR_Integer Var_113;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;

  if ((CallSites_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeCallSitesTuple_16 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ProcStaticInfo_2_45 = STATE_VARIABLE_ProcStaticInfo_0_42;
  }
  else
  {
    MR_Word RevCallSites_19;
    MR_Integer NumCallSites_20;
    MR_Word RevAllCallSites0_21;
    MR_Word RevAllCallSites_22;
    MR_Integer CallSiteSlot_24;
    MR_Integer NextCallSite_25;
    MR_Tuple Var_46;
    MR_Integer Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;

    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), CallSites_14, &RevCallSites_19);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), CallSites_14, &NumCallSites_20);
    RevAllCallSites0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_0_42, 3))));
    RevAllCallSites_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), RevCallSites_19, RevAllCallSites0_21);
    CallSiteSlot_24 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_0_42, 0))));
    Var_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_0_42, 1))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_0_42, 2))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_0_42, 4))));
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_0_42, 5))));
    NextCallSite_25 = (MR_Integer) ((MR_Unsigned) CallSiteSlot_24 + (MR_Unsigned) NumCallSites_20);
    {
      STATE_VARIABLE_ProcStaticInfo_2_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 0) = ((MR_Box) (NextCallSite_25));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 3) = ((MR_Box) (RevAllCallSites_22));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 5) = ((MR_Box) (Var_62));
    }
    {
      Var_46 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (CallSiteSlot_24));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (NumCallSites_20));
    }
    {
      MaybeCallSitesTuple_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeCallSitesTuple_16, 0) = ((MR_Box) (Var_46));
    }
  }
  if ((CoveragePoints_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeCoveragePointsTuple_26 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_ProcStaticInfo_4_48 = STATE_VARIABLE_ProcStaticInfo_2_45;
  }
  else
  {
    MR_Word RevCoveragePoints_29;
    MR_Integer NumCoveragePoints_30;
    MR_Word RevAllCoveragePoints0_31;
    MR_Word RevAllCoveragePoints_32;
    MR_Integer CoveragePointSlot_34;
    MR_Integer NextCoveragePoint_35;
    MR_Tuple Var_49;
    MR_Integer Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;

    mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CoveragePoints_15, &RevCoveragePoints_29);
    mercury__list__length_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CoveragePoints_15, &NumCoveragePoints_30);
    RevAllCoveragePoints0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 4))));
    RevAllCoveragePoints_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), RevCoveragePoints_29, RevAllCoveragePoints0_31);
    Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 0))));
    CoveragePointSlot_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 1))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 2))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 3))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_2_45, 5))));
    NextCoveragePoint_35 = (MR_Integer) ((MR_Unsigned) CoveragePointSlot_34 + (MR_Unsigned) NumCoveragePoints_30);
    {
      STATE_VARIABLE_ProcStaticInfo_4_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 0) = ((MR_Box) (Var_79));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 1) = ((MR_Box) (NextCoveragePoint_35));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 2) = ((MR_Box) (Var_81));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 3) = ((MR_Box) (Var_82));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 4) = ((MR_Box) (RevAllCoveragePoints_32));
      MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 5) = ((MR_Box) (Var_84));
    }
    {
      Var_49 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (CoveragePointSlot_34));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (NumCoveragePoints_30));
    }
    {
      MaybeCoveragePointsTuple_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeCoveragePointsTuple_26, 0) = ((MR_Box) (Var_49));
    }
  }
  {
    ProcStatic_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcStatic_36, 0) = ((MR_Box) (FileName_11));
    MR_hl_field(0, ProcStatic_36, 1) = ((MR_Box) (LineNumber_12));
    MR_hl_field(0, ProcStatic_36, 2) = (MR_Box) ((MR_Unsigned) (IsInInterface_13));
    MR_hl_field(0, ProcStatic_36, 3) = ((MR_Box) (DeepExcpSlots_9));
    MR_hl_field(0, ProcStatic_36, 4) = ((MR_Box) (MaybeCallSitesTuple_16));
    MR_hl_field(0, ProcStatic_36, 5) = ((MR_Box) (MaybeCoveragePointsTuple_26));
  }
  Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 0))));
  Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 1))));
  ProcStaticCounter0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 2))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 3))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 4))));
  RevProcStatics0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_4_48, 5))));
  {
    RevProcStatics_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevProcStatics_38, 0) = ((MR_Box) (ProcStatic_36));
    MR_hl_field(1, RevProcStatics_38, 1) = ((MR_Box) (RevProcStatics0_37));
  }
  {
    STATE_VARIABLE_ProcStaticInfo_5_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 0) = ((MR_Box) (Var_96));
    MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 1) = ((MR_Box) (Var_97));
    MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 2) = ((MR_Box) (ProcStaticCounter0_39));
    MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 3) = ((MR_Box) (Var_99));
    MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 4) = ((MR_Box) (Var_100));
    MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 5) = ((MR_Box) (RevProcStatics_38));
  }
  mercury__counter__allocate_3_p_0(&ProcStaticSlot_40, ProcStaticCounter0_39, &ProcStaticCounter_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ProcStaticSlotName_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcStaticSlot_40));
  }
  Var_112 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 0))));
  Var_113 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 1))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 3))));
  Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 4))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcStaticInfo_5_50, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ProcStaticInfo_43 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_112));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_113));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcStaticCounter_41));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_115));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_116));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_117));
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_traversal_6_p_0(
  MR_Word Params_7,
  MR_Word EntryLabel_8,
  MR_Word Detism_9,
  MR_Integer NumStackSlots_10,
  MR_Word MaybeSuccipLoc_11,
  MR_Word * Traversal_12)
{
  MR_bool succeeded;
  MR_Word MaybeSuccipInt_17;
  MR_Word StaticCodeAddr_18;
  MR_Word MaybeEntryLabel_19;

  if ((MaybeSuccipLoc_11 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeSuccipInt_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Location_13 = ((MR_Integer) ((MR_hl_field(1, MaybeSuccipLoc_11, 0))));
    MR_Word SuccipLval_15;
    MR_Integer SuccipInt_16;
    MR_Word Var_21;
    MR_Word Var_33;
    MR_Word Var_14;

    parse_tree__prog_data__determinism_components_3_p_0(Detism_9, &Var_14, &Var_33);
    succeeded = ((MR_Integer) 3 == Var_33);
    if (succeeded)
      {
        SuccipLval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SuccipLval_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, SuccipLval_15, 1) = ((MR_Box) (Location_13));
      }
    else
      {
        SuccipLval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SuccipLval_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, SuccipLval_15, 1) = ((MR_Box) (Location_13));
      }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (SuccipLval_15));
    }
    ll_backend__stack_layout__represent_locn_as_int_2_p_0(Var_21, &SuccipInt_16);
    {
      MaybeSuccipInt_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeSuccipInt_17, 0) = ((MR_Box) (SuccipInt_16));
    }
  }
  StaticCodeAddr_18 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 4))) >> 3)) & (MR_Integer) 1);
  switch (StaticCodeAddr_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      MaybeEntryLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      {
        MaybeEntryLabel_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeEntryLabel_19, 0) = ((MR_Box) (EntryLabel_8));
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Traversal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeEntryLabel_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeSuccipInt_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (NumStackSlots_10));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Detism_9));
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_line_no_4_p_0(
  MR_Integer LineNo_5,
  MR_Word LineInfo_6,
  MR_Word RevList0_7,
  MR_Word * RevList_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (LineNo_5));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (LineInfo_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *RevList_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (RevList0_7));
  }
}

static void MR_CALL 
ll_backend__stack_layout__format_label_table_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  ll_backend__stack_layout__IntroducedFrom__pred__format_label_table__387__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
}

static void MR_CALL 
ll_backend__stack_layout__format_label_table_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * FileLayoutData_5)
{
  MR_String FileName_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word LineNoMap_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word LineNoList_6;
  MR_Word FlatLineNoList_7;
  MR_Word FilteredList_14;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[0]), LineNoMap_4, &LineNoList_6);
  ll_backend__stack_layout__flatten_label_table_3_p_0(LineNoList_6, (MR_Word) ((MR_Unsigned) 0U), &FlatLineNoList_7);
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[8]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[9]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[20]), FlatLineNoList_7, &FilteredList_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FileLayoutData_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (FilteredList_14));
  }
}

static void MR_CALL 
ll_backend__stack_layout__flatten_label_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RevList_8;

  ll_backend__stack_layout__add_line_no_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_RevList_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_RevList_8));
}

static void MR_CALL 
ll_backend__stack_layout__flatten_label_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[8]), HeadVar__2_2, List_3);
    else
    {
      MR_Integer LineNo_6;
      MR_Word LinesInfos_7;
      MR_Word Lines_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word RevList1_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_13;
      MR_Box conv1_RevList1_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      LineNo_6 = ((MR_Integer) ((MR_hl_field(0, Var_12, 0))));
      LinesInfos_7 = ((MR_Word) ((MR_hl_field(0, Var_12, 1))));
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[3]));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (ll_backend__stack_layout__flatten_label_table_3_p_0_1));
        MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_13, 3) = ((MR_Box) (LineNo_6));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[0]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[5]), Var_13, LinesInfos_7, ((MR_Box) (HeadVar__2_2)), &conv1_RevList1_11);
      RevList1_11 = ((MR_Word) (conv1_RevList1_11));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Lines_8;
      next_value_of_HeadVar__2_2 = RevList1_11;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_4_p_0(
  MR_Word Attr_5,
  MR_Word * TypeRvalAndType_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * STATE_VARIABLE_StaticCellInfo_14)
{
  MR_Word Type_8 = ((MR_Word) ((MR_hl_field(0, Attr_5, 2))));
  MR_Word TypeRval_11;
  MR_Word TypeRvalType_12;

  ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_8, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_StaticCellInfo_0_13, STATE_VARIABLE_StaticCellInfo_14, &TypeRval_11, &TypeRvalType_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeRvalAndType_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeRval_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeRvalType_12));
  }
}

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TypeRvalAndType_6;
  MR_Word conv0_STATE_VARIABLE_StaticCellInfo_14;

  ll_backend__stack_layout__build_event_arg_type_info_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TypeRvalAndType_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StaticCellInfo_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_TypeRvalAndType_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_14));
}

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0(
  MR_Word EventSpec_6,
  MR_Word STATE_VARIABLE_EventArgTypeInfoMap_0_14,
  MR_Word * STATE_VARIABLE_EventArgTypeInfoMap_15,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_16,
  MR_Word * STATE_VARIABLE_StaticCellInfo_17)
{
  MR_Integer EventNumber_9 = ((MR_Integer) ((MR_hl_field(0, EventSpec_6, 0))));
  MR_Word Attrs_10 = ((MR_Word) ((MR_hl_field(0, EventSpec_6, 3))));
  MR_Word RvalsAndTypes_11;
  MR_Word TypesDataAddr_12;
  MR_Word Rval_13;
  MR_Word STATE_VARIABLE_StaticCellInfo_1_19;
  MR_Word Var_21;
  MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_19;

  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[19]), Attrs_10, &RvalsAndTypes_11, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_16)), &conv2_STATE_VARIABLE_StaticCellInfo_1_19);
  STATE_VARIABLE_StaticCellInfo_1_19 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_19));
  ll_backend__global_data__add_scalar_static_cell_4_p_0(RvalsAndTypes_11, &TypesDataAddr_12, STATE_VARIABLE_StaticCellInfo_1_19, STATE_VARIABLE_StaticCellInfo_17);
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (TypesDataAddr_12));
  }
  {
    Rval_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Rval_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Rval_13, 1) = ((MR_Box) (Var_21));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), EventNumber_9, ((MR_Box) (Rval_13)), STATE_VARIABLE_EventArgTypeInfoMap_0_14, STATE_VARIABLE_EventArgTypeInfoMap_15);
}

static MR_bool MR_CALL 
ll_backend__stack_layout__valid_proc_layout_1_p_0(
  MR_Word ProcLayoutInfo_2)
{
  MR_bool succeeded;
  MR_Word EntryLabel_3 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_2, 4))));
  MR_Word ProcLabel_4;

  ProcLabel_4 = ll_backend__llds__get_proc_label_1_f_0(EntryLabel_3);
  if (((MR_tag((MR_Word) ProcLabel_4)) == (MR_Integer) 0))
  {
    MR_Word DeclModule_7 = ((MR_Word) ((MR_hl_field(0, ProcLabel_4, 2))));
    MR_String Name_8 = ((MR_String) ((MR_hl_field(0, ProcLabel_4, 3))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_4, 4))));

    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(DeclModule_7, Name_8, Arity_9);
    succeeded = !(succeeded);
  }
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__compute_var_number_map_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_VarNumMap_30;
  MR_Word conv6_STATE_VARIABLE_Counter_32;

  ll_backend__stack_layout__internal_var_number_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_VarNumMap_30, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Counter_32);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_VarNumMap_30));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Counter_32));
}

static void MR_CALL 
ll_backend__stack_layout__compute_var_number_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarNumMap_16;
  MR_Word conv0_STATE_VARIABLE_Counter_18;

  ll_backend__stack_layout__add_var_to_var_number_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarNumMap_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Counter_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarNumMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Counter_18));
}

void MR_CALL 
ll_backend__stack_layout__compute_var_number_map_5_p_0(
  MR_Word VarTable_6,
  MR_Word HeadVars_7,
  MR_Word Internals_8,
  MR_Word Goal_9,
  MR_Word * VarNumMap_10)
{
  MR_Word GoalVarSet_12;
  MR_Word GoalVars_13;
  MR_Word STATE_VARIABLE_VarNumMap_1_15;
  MR_Word STATE_VARIABLE_Counter_1_16;
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_VarNumMap_2_19;
  MR_Word STATE_VARIABLE_Counter_2_20;
  MR_Word STATE_VARIABLE_VarNumMap_3_22;
  MR_Word STATE_VARIABLE_Counter_3_23;
  MR_Word Var_24;
  MR_Box conv3_STATE_VARIABLE_VarNumMap_2_19;
  MR_Box conv2_STATE_VARIABLE_Counter_2_20;
  MR_Box conv5_STATE_VARIABLE_VarNumMap_3_22;
  MR_Box conv4_STATE_VARIABLE_Counter_3_23;
  MR_Box conv9_VarNumMap_10;
  MR_Box conv8_Var_14;

  STATE_VARIABLE_VarNumMap_1_15 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[4]));
  STATE_VARIABLE_Counter_1_16 = mercury__counter__init_1_f_0((MR_Integer) 1);
  hlds__goal_vars__vars_in_goal_2_p_0(Goal_9, &GoalVarSet_12);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVarSet_12, &GoalVars_13);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_9[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ll_backend__stack_layout__compute_var_number_map_5_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (VarTable_6));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_18, GoalVars_13, ((MR_Box) (STATE_VARIABLE_VarNumMap_1_15)), &conv3_STATE_VARIABLE_VarNumMap_2_19, ((MR_Box) (STATE_VARIABLE_Counter_1_16)), &conv2_STATE_VARIABLE_Counter_2_20);
  STATE_VARIABLE_VarNumMap_2_19 = ((MR_Word) (conv3_STATE_VARIABLE_VarNumMap_2_19));
  STATE_VARIABLE_Counter_2_20 = ((MR_Word) (conv2_STATE_VARIABLE_Counter_2_20));
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[4]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_18, HeadVars_7, ((MR_Box) (STATE_VARIABLE_VarNumMap_2_19)), &conv5_STATE_VARIABLE_VarNumMap_3_22, ((MR_Box) (STATE_VARIABLE_Counter_2_20)), &conv4_STATE_VARIABLE_Counter_3_23);
  STATE_VARIABLE_VarNumMap_3_22 = ((MR_Word) (conv5_STATE_VARIABLE_VarNumMap_3_22));
  STATE_VARIABLE_Counter_3_23 = ((MR_Word) (conv4_STATE_VARIABLE_Counter_3_23));
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_9[1]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__stack_layout__compute_var_number_map_5_p_0_2));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (VarTable_6));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[6]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[5]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_24, Internals_8, ((MR_Box) (STATE_VARIABLE_VarNumMap_3_22)), &conv9_VarNumMap_10, ((MR_Box) (STATE_VARIABLE_Counter_3_23)), &conv8_Var_14);
  *VarNumMap_10 = ((MR_Word) (conv9_VarNumMap_10));
}

void MR_CALL 
ll_backend__stack_layout__represent_determinism_rval_2_p_0(
  MR_Word Detism_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word Var_4;
  MR_Integer Var_5;

  Var_5 = hlds__code_model__represent_determinism_1_f_0(Detism_3);
  {
    Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_4, 0) = ((MR_Box) (Var_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_4));
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_closure_layout_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Word conv0_STATE_VARIABLE_StaticCellInfo_14;

  ll_backend__stack_layout__construct_closure_arg_rval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StaticCellInfo_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_14));
}

void MR_CALL 
ll_backend__stack_layout__construct_closure_layout_13_p_0(
  MR_Word CallerProcLabel_14,
  MR_Integer SeqNo_15,
  MR_Word ClosureLayoutInfo_16,
  MR_Word ClosureProcLabel_17,
  MR_Word ModuleName_18,
  MR_String FileName_19,
  MR_Integer LineNumber_20,
  MR_Word Origin_21,
  MR_String GoalPath_22,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_35,
  MR_Word * STATE_VARIABLE_StaticCellInfo_36,
  MR_Word * TypedRvals_24,
  MR_Word * Data_25)
{
  MR_bool succeeded;
  MR_Word ClosureId_26;
  MR_Word DataId_27;
  MR_Word ProcIdRval_28;
  MR_Word ProcIdTypedRval_29;
  MR_Word ClosureArgs_30;
  MR_Word TVarLocnMap_31;
  MR_Word ClosureArgTypedRvals_32;
  MR_Word TVarVectorRval_33;
  MR_Word TVarVectorTypedRval_34;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_StaticCellInfo_1_39;
  MR_Word Var_42;
  MR_Word ArgTypedRvals_43;
  MR_Integer Length_44;
  MR_Word LengthTypedRval_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_39;

  {
    ClosureId_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClosureId_26, 0) = ((MR_Box) (CallerProcLabel_14));
    MR_hl_field(1, ClosureId_26, 1) = ((MR_Box) (SeqNo_15));
    MR_hl_field(1, ClosureId_26, 2) = ((MR_Box) (ClosureProcLabel_17));
  }
  {
    DataId_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DataId_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, DataId_27, 1) = ((MR_Box) (ClosureId_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Data_25 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CallerProcLabel_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (SeqNo_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (ClosureProcLabel_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (ModuleName_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (FileName_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (LineNumber_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Origin_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (GoalPath_22));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (DataId_27));
  }
  {
    ProcIdRval_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcIdRval_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ProcIdRval_28, 1) = ((MR_Box) (Var_37));
  }
  {
    ProcIdTypedRval_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcIdTypedRval_29, 0) = ((MR_Box) (ProcIdRval_28));
    MR_hl_field(0, ProcIdTypedRval_29, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  ClosureArgs_30 = ((MR_Word) ((MR_hl_field(0, ClosureLayoutInfo_16, 0))));
  TVarLocnMap_31 = ((MR_Word) ((MR_hl_field(0, ClosureLayoutInfo_16, 1))));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[18]), ClosureArgs_30, &ArgTypedRvals_43, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_35)), &conv2_STATE_VARIABLE_StaticCellInfo_1_39);
  STATE_VARIABLE_StaticCellInfo_1_39 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_39));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ArgTypedRvals_43, &Length_44);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Length_44));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    LengthTypedRval_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LengthTypedRval_45, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, LengthTypedRval_45, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[2])));
  }
  {
    ClosureArgTypedRvals_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClosureArgTypedRvals_32, 0) = ((MR_Box) (LengthTypedRval_45));
    MR_hl_field(1, ClosureArgTypedRvals_32, 1) = ((MR_Box) (ArgTypedRvals_43));
  }
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), TVarLocnMap_31);
  if (succeeded)
  {
    TVarVectorRval_33 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[23]));
    *STATE_VARIABLE_StaticCellInfo_36 = STATE_VARIABLE_StaticCellInfo_1_39;
  }
  else
  {
    MR_Word Vector_53;
    MR_Word DataAddr_54;
    MR_Word Var_57;
    MR_Word TVarLocns_60;
    MR_Word TypeParamLocs_61;
    MR_Integer TypeParamsLength_62;
    MR_Word LengthRval_63;
    MR_Word Var_65;
    MR_Word Var_66;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), TVarLocnMap_31, &TVarLocns_60);
    ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_60, (MR_Integer) 1, &TypeParamLocs_61);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), TypeParamLocs_61, &TypeParamsLength_62);
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (TypeParamsLength_62));
    }
    {
      LengthRval_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LengthRval_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LengthRval_63, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (LengthRval_63));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[3])));
    }
    {
      Vector_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Vector_53, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Vector_53, 1) = ((MR_Box) (TypeParamLocs_61));
    }
    ll_backend__global_data__add_scalar_static_cell_4_p_0(Vector_53, &DataAddr_54, STATE_VARIABLE_StaticCellInfo_1_39, STATE_VARIABLE_StaticCellInfo_36);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (DataAddr_54));
    }
    {
      TVarVectorRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TVarVectorRval_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, TVarVectorRval_33, 1) = ((MR_Box) (Var_57));
    }
  }
  {
    TVarVectorTypedRval_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TVarVectorTypedRval_34, 0) = ((MR_Box) (TVarVectorRval_33));
    MR_hl_field(0, TVarVectorTypedRval_34, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (TVarVectorTypedRval_34));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (ClosureArgTypedRvals_32));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TypedRvals_24 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ProcIdTypedRval_29));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LvalLocns_4;

  ll_backend__stack_layout__convert_slot_to_locn_map_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_LvalLocns_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_LvalLocns_4));
}

static void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Word conv0_STATE_VARIABLE_StaticCellInfo_16;

  ll_backend__stack_layout__construct_table_arg_pti_rval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StaticCellInfo_16);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_16));
}

void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0(
  MR_Word TableArgInfos_7,
  MR_Integer * NumPTIs_8,
  MR_Word * PTIVectorRval_9,
  MR_Word * TVarVectorRval_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_17,
  MR_Word * STATE_VARIABLE_StaticCellInfo_18)
{
  MR_bool succeeded;
  MR_Word Args_12 = ((MR_Word) ((MR_hl_field(0, TableArgInfos_7, 0))));
  MR_Word TVarSlotMap_13 = ((MR_Word) ((MR_hl_field(0, TableArgInfos_7, 1))));
  MR_Word PTIRvalsTypes_14;
  MR_Word PTIVectorAddr_15;
  MR_Word TVarLocnMap_16;
  MR_Word STATE_VARIABLE_StaticCellInfo_1_20;
  MR_Word STATE_VARIABLE_StaticCellInfo_2_21;
  MR_Word Var_22;
  MR_Box conv2_STATE_VARIABLE_StaticCellInfo_1_20;

  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0), Args_12, NumPTIs_8);
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[16]), Args_12, &PTIRvalsTypes_14, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv2_STATE_VARIABLE_StaticCellInfo_1_20);
  STATE_VARIABLE_StaticCellInfo_1_20 = ((MR_Word) (conv2_STATE_VARIABLE_StaticCellInfo_1_20));
  ll_backend__global_data__add_scalar_static_cell_4_p_0(PTIRvalsTypes_14, &PTIVectorAddr_15, STATE_VARIABLE_StaticCellInfo_1_20, &STATE_VARIABLE_StaticCellInfo_2_21);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (PTIVectorAddr_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *PTIVectorRval_9 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_22));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[17]), TVarSlotMap_13, &TVarLocnMap_16);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), TVarLocnMap_16);
  if (succeeded)
  {
    *TVarVectorRval_10 = (MR_Word) (MR_mkword(3, &ll_backend__stack_layout_scalar_common_2[23]));
    *STATE_VARIABLE_StaticCellInfo_18 = STATE_VARIABLE_StaticCellInfo_2_21;
  }
  else
  {
    MR_Word Vector_36;
    MR_Word DataAddr_37;
    MR_Word Var_40;
    MR_Word TVarLocns_43;
    MR_Word TypeParamLocs_44;
    MR_Integer TypeParamsLength_45;
    MR_Word LengthRval_46;
    MR_Word Var_48;
    MR_Word Var_49;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[3]), (MR_Word) (&ll_backend__stack_layout_scalar_common_2[2]), TVarLocnMap_16, &TVarLocns_43);
    ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_43, (MR_Integer) 1, &TypeParamLocs_44);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), TypeParamLocs_44, &TypeParamsLength_45);
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (TypeParamsLength_45));
    }
    {
      LengthRval_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LengthRval_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LengthRval_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (LengthRval_46));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[3])));
    }
    {
      Vector_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Vector_36, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, Vector_36, 1) = ((MR_Box) (TypeParamLocs_44));
    }
    ll_backend__global_data__add_scalar_static_cell_4_p_0(Vector_36, &DataAddr_37, STATE_VARIABLE_StaticCellInfo_2_21, STATE_VARIABLE_StaticCellInfo_18);
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (DataAddr_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TVarVectorRval_10 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Var_40));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurSlot_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TVar_5;
    MR_Word Locns_6;
    MR_Word TVarLocns_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer TVarNum_10;
    MR_Integer NextSlot_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    TVar_5 = ((MR_Word) ((MR_hl_field(0, Var_17, 0))));
    Locns_6 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_5, &TVarNum_10);
    NextSlot_11 = (MR_Integer) ((MR_Unsigned) CurSlot_2 + (MR_Unsigned) 1);
    succeeded = (TVarNum_10 == CurSlot_2);
    if (succeeded)
    {
      MR_Word Locn_14;
      MR_Word Rval_15;
      MR_Word VectorTail_16;
      MR_Word Var_21;
      MR_Integer Word_37;
      MR_Word Var_38;
      MR_Word LeastLocn_12;
      MR_Word Var_13;
      MR_Box conv0_LeastLocn_12;

      succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), &conv0_LeastLocn_12, Locns_6, &Var_13);
      if (succeeded)
      {
        LeastLocn_12 = ((MR_Word) (conv0_LeastLocn_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Locn_14 = LeastLocn_12;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.construct_type_param_locn_vector\'/3", (MR_String) "tvar has empty set of locations");
          return;
        }
      ll_backend__stack_layout__represent_locn_as_int_2_p_0(Locn_14, &Word_37);
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Word_37));
      }
      {
        Rval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Rval_15, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Rval_15, 1) = ((MR_Box) (Var_38));
      }
      ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_7, NextSlot_11, &VectorTail_16);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (Rval_15));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__stack_layout_scalar_common_3[3])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (VectorTail_16));
      }
    }
    else
    {
      succeeded = (TVarNum_10 > CurSlot_2);
      if (succeeded)
      {
        MR_Word VectorTail_34;

        ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(HeadVar__1_1, NextSlot_11, &VectorTail_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[24]));
          MR_hl_field(1, base, 1) = ((MR_Box) (VectorTail_34));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.construct_type_param_locn_vector\'/3", (MR_String) "unsorted tvars");
          return;
        }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_int_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__stack_layout__represent_locn_as_int_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Word_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

    ll_backend__stack_layout__represent_lval_2_p_0(Lval_3, Word_2);
  }
  else
  {
    MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer Offset_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer BaseWord_8;
    MR_Integer BaseAndOffset_9;
    MR_Word Var_10;
    MR_Integer Var_13;
    MR_Integer Var_16;
    MR_Integer Tag_19;
    MR_Integer Var_20;

    ll_backend__stack_layout__represent_lval_2_p_0(Lval_5, &BaseWord_8);
    Var_13 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (ll_backend__stack_layout__represent_locn_as_int_2_p_0_1));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_13));
      MR_hl_field(0, Var_10, 4) = ((MR_Box) (Offset_6));
    }
    mercury__require__expect_3_p_0(Var_10, (MR_String) "predicate \140ll_backend.stack_layout.represent_locn_as_int\'/2", (MR_String) "offset too large to be represented");
    Var_16 = mercury__int__f_60_60_2_f_0(BaseWord_8, (MR_Integer) 6);
    BaseAndOffset_9 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) Offset_6);
    ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 9, &Tag_19);
    Var_20 = mercury__int__f_60_60_2_f_0(BaseAndOffset_9, (MR_Integer) 5);
    *Word_2 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) Tag_19);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Word_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 4, (MR_Integer) 0, Word_2);
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Tag_119;
            MR_Integer Var_120;

            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 5, &Tag_119);
            Var_120 = mercury__int__f_60_60_2_f_0((MR_Integer) 0, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_120 + (MR_Unsigned) Tag_119);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Tag_104;
            MR_Integer Var_105;

            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 6, &Tag_104);
            Var_105 = mercury__int__f_60_60_2_f_0((MR_Integer) 0, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_105 + (MR_Unsigned) Tag_104);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Tag_116;
            MR_Integer Var_117;

            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 7, &Tag_116);
            Var_117 = mercury__int__f_60_60_2_f_0((MR_Integer) 0, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_117 + (MR_Unsigned) Tag_116);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Tag_134;
            MR_Integer Var_135;

            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 8, &Tag_134);
            Var_135 = mercury__int__f_60_60_2_f_0((MR_Integer) 0, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_135 + (MR_Unsigned) Tag_134);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer Tag_122;
            MR_Integer Var_123;

            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 10, &Tag_122);
            Var_123 = mercury__int__f_60_60_2_f_0((MR_Integer) 0, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_123 + (MR_Unsigned) Tag_122);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_102 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
        MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);

        switch (Var_103) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Tag_128;
              MR_Integer Var_129;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 1, &Tag_128);
              Var_129 = mercury__int__f_60_60_2_f_0(Var_102, (MR_Integer) 5);
              *Word_2 = (MR_Integer) ((MR_Unsigned) Var_129 + (MR_Unsigned) Tag_128);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Tag_131;
              MR_Integer Var_132;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 0, &Tag_131);
              Var_132 = mercury__int__f_60_60_2_f_0(Var_102, (MR_Integer) 5);
              *Word_2 = (MR_Integer) ((MR_Unsigned) Var_132 + (MR_Unsigned) Tag_131);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in temp register");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Num_11 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Var_13;

            {
              Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_13, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
              MR_hl_field(0, Var_13, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_4));
              MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_13, 3) = ((MR_Box) (Num_11));
              MR_hl_field(0, Var_13, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad stackvar");
            ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 2, Num_11, Word_2);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Num_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Var_20;
            MR_Integer Tag_125;
            MR_Integer Var_126;

            {
              Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
              MR_hl_field(0, Var_20, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_3));
              MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_20, 3) = ((MR_Box) (Num_18));
              MR_hl_field(0, Var_20, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad parent_stackvar");
            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 11, &Tag_125);
            Var_126 = mercury__int__f_60_60_2_f_0(Num_18, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_126 + (MR_Unsigned) Tag_125);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Num_25 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Var_27;
            MR_Integer Tag_113;
            MR_Integer Var_114;

            {
              Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
              MR_hl_field(0, Var_27, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_2));
              MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_27, 3) = ((MR_Box) (Num_25));
              MR_hl_field(0, Var_27, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad framevar");
            ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 3, &Tag_113);
            Var_114 = mercury__int__f_60_60_2_f_0(Num_25, (MR_Integer) 5);
            *Word_2 = (MR_Integer) ((MR_Unsigned) Var_114 + (MR_Unsigned) Tag_113);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StackType_32 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
            MR_Integer Num_33 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
            MR_Word Var_35;

            {
              Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
              MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_1));
              MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_35, 3) = ((MR_Box) (Num_33));
              MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad stackvar");
            switch (StackType_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer Tag_107;
                  MR_Integer Var_108;

                  ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 13, &Tag_107);
                  Var_108 = mercury__int__f_60_60_2_f_0(Num_33, (MR_Integer) 5);
                  *Word_2 = (MR_Integer) ((MR_Unsigned) Var_108 + (MR_Unsigned) Tag_107);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Integer Tag_110;
                  MR_Integer Var_111;

                  ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 12, &Tag_110);
                  Var_111 = mercury__int__f_60_60_2_f_0(Num_33, (MR_Integer) 5);
                  *Word_2 = (MR_Integer) ((MR_Unsigned) Var_111 + (MR_Unsigned) Tag_110);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
            return;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
            return;
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
            return;
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in field");
            return;
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in mem_ref");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in global_var_ref");
            return;
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in lvar");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__stack_layout__make_tagged_word_3_p_0(
  MR_Word Locn_4,
  MR_Integer Value_5,
  MR_Integer * TaggedValue_6)
{
  MR_Integer Tag_7;
  MR_Integer Var_8;

  ll_backend__stack_layout__locn_type_code_2_p_0(Locn_4, &Tag_7);
  Var_8 = mercury__int__f_60_60_2_f_0(Value_5, (MR_Integer) 5);
  *TaggedValue_6 = (MR_Integer) ((MR_Unsigned) Var_8 + (MR_Unsigned) Tag_7);
}

static void MR_CALL 
ll_backend__stack_layout__locn_type_code_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&ll_backend__stack_layout_vector_common_7[0 + HeadVar__1_1]))->ll_backend__stack_layout__vector_common_type_7_0__vct_7_f_0;
}

static void MR_CALL 
ll_backend__stack_layout__generate_llds_layout_data_26_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_EventArgTypeInfoMap_15;
  MR_Word conv12_STATE_VARIABLE_StaticCellInfo_17;

  ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_EventArgTypeInfoMap_15, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_StaticCellInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_EventArgTypeInfoMap_15));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_StaticCellInfo_17));
}

static void MR_CALL 
ll_backend__stack_layout__generate_llds_layout_data_26_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_LabelTables_56;
  MR_Word conv4_STATE_VARIABLE_StringTable_58;
  MR_Word conv3_STATE_VARIABLE_TypeTable_60;
  MR_Word conv2_STATE_VARIABLE_StaticCellInfo_62;
  MR_Word conv1_STATE_VARIABLE_LabelLayoutInfo_64;
  MR_Word conv0_STATE_VARIABLE_ProcLayoutInfo_66;

  ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_LabelTables_56, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_StringTable_58, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_TypeTable_60, ((MR_Word) (wrapper_arg_8)), &conv2_STATE_VARIABLE_StaticCellInfo_62, ((MR_Word) (wrapper_arg_10)), &conv1_STATE_VARIABLE_LabelLayoutInfo_64, ((MR_Word) (wrapper_arg_12)), &conv0_STATE_VARIABLE_ProcLayoutInfo_66);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_LabelTables_56));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_StringTable_58));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_TypeTable_60));
  *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_StaticCellInfo_62));
  *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_LabelLayoutInfo_64));
  *wrapper_arg_13 = ((MR_Box) (conv0_STATE_VARIABLE_ProcLayoutInfo_66));
}

void MR_CALL 
ll_backend__stack_layout__generate_llds_layout_data_26_p_0(
  MR_Word ModuleInfo_27,
  MR_Word STATE_VARIABLE_GlobalData_0_131,
  MR_Word * STATE_VARIABLE_GlobalData_132,
  MR_Word * PseudoTypeInfoRvals_29,
  MR_Word * HLDSVarNums_30,
  MR_Word * ShortLocns_31,
  MR_Word * LongLocns_32,
  MR_Word * UserEventVarNums_33,
  MR_Word * UserEvents_34,
  MR_Word * NoVarLabelLayouts_35,
  MR_Word * SVarLabelLayouts_36,
  MR_Word * LVarLabelLayouts_37,
  MR_Word * InternalLabelToLayoutMap_38,
  MR_Word * ProcLabelToLayoutMap_39,
  MR_Word * CallSiteStatics_40,
  MR_Word * CoveragePoints_41,
  MR_Word * ProcStatics_42,
  MR_Word * ProcHeadVarNums_43,
  MR_Word * ProcVarNames_44,
  MR_Word * ProcBodyBytecodes_45,
  MR_Word * TableIoEntries_46,
  MR_Word * TableIoEntryMap_47,
  MR_Word * ProcEventLayouts_48,
  MR_Word * ExecTraces_49,
  MR_Word * ProcLayouts_50,
  MR_Word * ModuleLayouts_51)
{
  MR_bool succeeded;
  MR_Word Params_52;
  MR_Word LabelTables0_53;
  MR_Word StringTable0_54;
  MR_Word TypeTable0_55;
  MR_Word StaticCellInfo0_56;
  MR_Word LabelLayoutInfo0_57;
  MR_Word ProcLayoutInfo0_58;
  MR_Word ProcLayoutList_59;
  MR_Word LabelTables_60;
  MR_Word StringTable_61;
  MR_Word TypeTable_62;
  MR_Word StaticCellInfo1_63;
  MR_Word LabelLayoutInfo_64;
  MR_Word ProcLayoutInfo_65;
  MR_Word LabelsCounter_66;
  MR_Integer NumLabels_67;
  MR_Word RevCallSiteStatics_69;
  MR_Word RevCoveragePoints_70;
  MR_Word RevProcStatics_71;
  MR_Word RevProcHeadVarNums_72;
  MR_Word RevProcVarNames_73;
  MR_Word RevProcEventLayouts_74;
  MR_Word RevTableIoEntries_75;
  MR_Word RevExecTraces_76;
  MR_Word RevProcBodyBytecodes_77;
  MR_Word RevProcLayouts_78;
  MR_Word RevProcLayoutNames_79;
  MR_Word ProcLayoutNames_80;
  MR_Word RevPseudoTypeInfoRvals_81;
  MR_Word RevLongLocns_82;
  MR_Word RevShortLocns_83;
  MR_Word RevHLDSVarNums_84;
  MR_Word UserEventVarNumsCord_85;
  MR_Word UserEventsCord_86;
  MR_Word RevNoVarLabelLayouts_87;
  MR_Word RevSVarLabelLayouts_88;
  MR_Word RevLVarLabelLayouts_89;
  MR_Word DeepProfiling_90;
  MR_Word MaybeDeepProfInfo_107;
  MR_Word TraceLayout_108;
  MR_Word StaticCellInfo_118;
  MR_Word MaybeDebugInfo_125;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_137;
  MR_Word Var_142;
  MR_Word Var_525;
  MR_Box conv11_LabelTables_60;
  MR_Box conv10_StringTable_61;
  MR_Box conv9_TypeTable_62;
  MR_Box conv8_StaticCellInfo1_63;
  MR_Box conv7_LabelLayoutInfo_64;
  MR_Box conv6_ProcLayoutInfo_65;
  MR_Word Var_68;

  Params_52 = ll_backend__stack_layout__init_stack_layout_params_1_f_0(ModuleInfo_27);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), &LabelTables0_53);
  StringTable0_54 = ll_backend__prog_rep_tables__init_string_table_info_0_f_0();
  TypeTable0_55 = ll_backend__prog_rep_tables__init_type_table_info_0_f_0();
  ll_backend__global_data__global_data_get_static_cell_info_2_p_0(STATE_VARIABLE_GlobalData_0_131, &StaticCellInfo0_56);
  LabelLayoutInfo0_57 = ll_backend__stack_layout__init_label_layouts_info_0_f_0();
  ProcLayoutInfo0_58 = ll_backend__stack_layout__init_proc_layouts_info_0_f_0();
  ll_backend__global_data__global_data_get_all_proc_layouts_2_p_0(STATE_VARIABLE_GlobalData_0_131, &ProcLayoutList_59);
  {
    Var_133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_133, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_5[0]));
    MR_hl_field(0, Var_133, 1) = ((MR_Box) (ll_backend__stack_layout__generate_llds_layout_data_26_p_0_1));
    MR_hl_field(0, Var_133, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_133, 3) = ((MR_Box) (Params_52));
  }
  mercury__list__foldl6_14_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[2]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0), (MR_Word) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0), Var_133, ProcLayoutList_59, ((MR_Box) (LabelTables0_53)), &conv11_LabelTables_60, ((MR_Box) (StringTable0_54)), &conv10_StringTable_61, ((MR_Box) (TypeTable0_55)), &conv9_TypeTable_62, ((MR_Box) (StaticCellInfo0_56)), &conv8_StaticCellInfo1_63, ((MR_Box) (LabelLayoutInfo0_57)), &conv7_LabelLayoutInfo_64, ((MR_Box) (ProcLayoutInfo0_58)), &conv6_ProcLayoutInfo_65);
  LabelTables_60 = ((MR_Word) (conv11_LabelTables_60));
  StringTable_61 = ((MR_Word) (conv10_StringTable_61));
  TypeTable_62 = ((MR_Word) (conv9_TypeTable_62));
  StaticCellInfo1_63 = ((MR_Word) (conv8_StaticCellInfo1_63));
  LabelLayoutInfo_64 = ((MR_Word) (conv7_LabelLayoutInfo_64));
  ProcLayoutInfo_65 = ((MR_Word) (conv6_ProcLayoutInfo_65));
  LabelsCounter_66 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 18))));
  mercury__counter__allocate_3_p_0(&NumLabels_67, LabelsCounter_66, &Var_68);
  Var_134 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 0))));
  RevCallSiteStatics_69 = ((MR_Word) ((MR_hl_field(0, Var_134, 3))));
  RevCoveragePoints_70 = ((MR_Word) ((MR_hl_field(0, Var_134, 4))));
  RevProcStatics_71 = ((MR_Word) ((MR_hl_field(0, Var_134, 5))));
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), RevCallSiteStatics_69, CallSiteStatics_40);
  mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), RevCoveragePoints_70, CoveragePoints_41);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0), RevProcStatics_71, ProcStatics_42);
  Var_137 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 1))));
  RevProcHeadVarNums_72 = ((MR_Word) ((MR_hl_field(0, Var_137, 5))));
  RevProcVarNames_73 = ((MR_Word) ((MR_hl_field(0, Var_137, 6))));
  RevProcEventLayouts_74 = ((MR_Word) ((MR_hl_field(0, Var_137, 7))));
  RevTableIoEntries_75 = ((MR_Word) ((MR_hl_field(0, Var_137, 8))));
  RevExecTraces_76 = ((MR_Word) ((MR_hl_field(0, Var_137, 9))));
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevProcHeadVarNums_72, ProcHeadVarNums_43);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevProcVarNames_73, ProcVarNames_44);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), RevProcEventLayouts_74, ProcEventLayouts_48);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0), RevTableIoEntries_75, TableIoEntries_46);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0), RevExecTraces_76, ExecTraces_49);
  Var_142 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 1))));
  RevProcBodyBytecodes_77 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 3))));
  RevProcLayouts_78 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 4))));
  RevProcLayoutNames_79 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 5))));
  *TableIoEntryMap_47 = ((MR_Word) ((MR_hl_field(0, Var_142, 10))));
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevProcBodyBytecodes_77, ProcBodyBytecodes_45);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0), RevProcLayouts_78, ProcLayouts_50);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), RevProcLayoutNames_79, &ProcLayoutNames_80);
  RevPseudoTypeInfoRvals_81 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 4))));
  RevLongLocns_82 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 5))));
  RevShortLocns_83 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 6))));
  RevHLDSVarNums_84 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 7))));
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevPseudoTypeInfoRvals_81, PseudoTypeInfoRvals_29);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLongLocns_82, LongLocns_32);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevShortLocns_83, ShortLocns_31);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevHLDSVarNums_84, HLDSVarNums_30);
  UserEventsCord_86 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 10))));
  UserEventVarNumsCord_85 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 11))));
  *UserEventVarNums_33 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]), UserEventVarNumsCord_85);
  *UserEvents_34 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), UserEventsCord_86);
  RevNoVarLabelLayouts_87 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 15))));
  RevSVarLabelLayouts_88 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 16))));
  RevLVarLabelLayouts_89 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 17))));
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0), RevNoVarLabelLayouts_87, NoVarLabelLayouts_35);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0), RevSVarLabelLayouts_88, SVarLabelLayouts_36);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0), RevLVarLabelLayouts_89, LVarLabelLayouts_37);
  *InternalLabelToLayoutMap_38 = ((MR_Word) ((MR_hl_field(0, LabelLayoutInfo_64, 19))));
  *ProcLabelToLayoutMap_39 = ((MR_Word) ((MR_hl_field(0, ProcLayoutInfo_65, 6))));
  DeepProfiling_90 = ((((MR_Unsigned) ((MR_hl_field(0, Params_52, 4))) >> 7)) & (MR_Integer) 1);
  TraceLayout_108 = ((((MR_Unsigned) ((MR_hl_field(0, Params_52, 4))) >> 5)) & (MR_Integer) 1);
  Var_525 = ((MR_Unsigned) ((MR_hl_field(0, Params_52, 4))) & (MR_Integer) 1);
  switch (DeepProfiling_90) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeDeepProfInfo_107 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word OISUMap_91;
        MR_Word OISUPairs_92;
        MR_Integer NumOISUTypes_93;
        MR_Word OISUBytesCord_94;
        MR_Word OISUBytes0_95;
        MR_Word OISUBytes_96;
        MR_Integer NumTypes_100;
        MR_Word TypeBytes0_101;
        MR_Word TypeBytes_102;
        MR_Word DeepProfInfo_106;

        hlds__hlds_module__module_info_get_oisu_map_2_p_0(ModuleInfo_27, &OISUMap_91);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), OISUMap_91, &OISUPairs_92);
        ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(ModuleInfo_27, OISUPairs_92, &NumOISUTypes_93, &OISUBytesCord_94);
        OISUBytes0_95 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OISUBytesCord_94);
        if ((OISUBytes0_95 == (MR_Word) ((MR_Unsigned) 0U)))
          OISUBytes_96 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word OISULimitBytes_99;
          MR_Integer Var_143;
          MR_Integer Var_144;

          Var_144 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OISUBytes0_95);
          Var_143 = (MR_Integer) ((MR_Unsigned) Var_144 + (MR_Unsigned) 4);
          mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_143, &OISULimitBytes_99);
          OISUBytes_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OISULimitBytes_99, OISUBytes0_95);
        }
        ll_backend__prog_rep_tables__get_type_table_contents_3_p_0(TypeTable_62, &NumTypes_100, &TypeBytes0_101);
        if ((TypeBytes0_101 == (MR_Word) ((MR_Unsigned) 0U)))
          TypeBytes_102 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word TypeTableSizeBytes_105;
          MR_Integer Var_146;
          MR_Integer Var_147;

          Var_147 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeBytes0_101);
          Var_146 = (MR_Integer) ((MR_Unsigned) Var_147 + (MR_Unsigned) 4);
          mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_146, &TypeTableSizeBytes_105);
          TypeBytes_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeTableSizeBytes_105, TypeBytes0_101);
        }
        {
          DeepProfInfo_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DeepProfInfo_106, 0) = ((MR_Box) (NumOISUTypes_93));
          MR_hl_field(0, DeepProfInfo_106, 1) = ((MR_Box) (OISUBytes_96));
          MR_hl_field(0, DeepProfInfo_106, 2) = ((MR_Box) (NumTypes_100));
          MR_hl_field(0, DeepProfInfo_106, 3) = ((MR_Box) (TypeBytes_102));
        }
        {
          MaybeDeepProfInfo_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDeepProfInfo_107, 0) = ((MR_Box) (DeepProfInfo_106));
        }
      }
      break;
  }
  switch (TraceLayout_108) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        StaticCellInfo_118 = StaticCellInfo1_63;
        MaybeDebugInfo_125 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word EffLabelTables_110;
        MR_Word SourceFileLayouts_111;
        MR_Word TraceSuppress_112;
        MR_Integer SuppressedEvents_113;
        MR_Word MaybeEventSet_117;
        MR_Word TraceLevel_123;
        MR_Word DebugInfo_124;

        switch (Var_525) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), &EffLabelTables_110);
            break;
          case (MR_Integer) 1:
            EffLabelTables_110 = LabelTables_60;
            break;
        }
        ll_backend__stack_layout__format_label_tables_2_p_0(EffLabelTables_110, &SourceFileLayouts_111);
        TraceSuppress_112 = ((MR_Word) ((MR_hl_field(0, Params_52, 3))));
        SuppressedEvents_113 = libs__trace_params__encode_suppressed_events_1_f_0(TraceSuppress_112);
        if ((*UserEvents_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeEventSet_117 = (MR_Word) ((MR_Unsigned) 0U);
          StaticCellInfo_118 = StaticCellInfo1_63;
        }
        else
        {
          MR_Word EventSet_119;
          MR_Word EventSetData_120;
          MR_Word EventArgTypeInfoMap_121;
          MR_Word EventSetLayoutData_122;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Box conv15_EventArgTypeInfoMap_121;
          MR_Box conv14_StaticCellInfo_118;

          hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_27, &EventSet_119);
          EventSetData_120 = parse_tree__prog_event__derive_event_set_data_1_f_0(EventSet_119);
          Var_150 = ((MR_Word) ((MR_hl_field(0, EventSetData_120, 2))));
          Var_151 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
          mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[3]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[15]), Var_150, ((MR_Box) (Var_151)), &conv15_EventArgTypeInfoMap_121, ((MR_Box) (StaticCellInfo1_63)), &conv14_StaticCellInfo_118);
          EventArgTypeInfoMap_121 = ((MR_Word) (conv15_EventArgTypeInfoMap_121));
          StaticCellInfo_118 = ((MR_Word) (conv14_StaticCellInfo_118));
          {
            EventSetLayoutData_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, EventSetLayoutData_122, 0) = ((MR_Box) (EventSetData_120));
            MR_hl_field(0, EventSetLayoutData_122, 1) = ((MR_Box) (EventArgTypeInfoMap_121));
          }
          {
            MaybeEventSet_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeEventSet_117, 0) = ((MR_Box) (EventSetLayoutData_122));
          }
        }
        TraceLevel_123 = ((MR_Unsigned) ((MR_hl_field(0, Params_52, 2))) & (MR_Integer) 3);
        {
          DebugInfo_124 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DebugInfo_124, 0) = ((MR_Box) (ProcLayoutNames_80));
          MR_hl_field(0, DebugInfo_124, 1) = ((MR_Box) (SourceFileLayouts_111));
          MR_hl_field(0, DebugInfo_124, 2) = (MR_Box) ((MR_Unsigned) (TraceLevel_123));
          MR_hl_field(0, DebugInfo_124, 3) = ((MR_Box) (SuppressedEvents_113));
          MR_hl_field(0, DebugInfo_124, 4) = ((MR_Box) (NumLabels_67));
          MR_hl_field(0, DebugInfo_124, 5) = ((MR_Box) (MaybeEventSet_117));
        }
        {
          MaybeDebugInfo_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDebugInfo_125, 0) = ((MR_Box) (DebugInfo_124));
        }
      }
      break;
  }
  succeeded = (MaybeDeepProfInfo_107 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (MaybeDebugInfo_125 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *ModuleLayouts_51 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleName_126;
    MR_Word StringList_127;
    MR_Integer StringTableSize_128;
    MR_Word StringTableContents_129;
    MR_Word ModuleLayout_130;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_27, &ModuleName_126);
    ll_backend__prog_rep_tables__get_string_table_contents_3_p_0(StringTable_61, &StringList_127, &StringTableSize_128);
    StringTableContents_129 = (MR_Word) (StringList_127);
    {
      ModuleLayout_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleLayout_130, 0) = ((MR_Box) (ModuleName_126));
      MR_hl_field(0, ModuleLayout_130, 1) = ((MR_Box) (StringTableSize_128));
      MR_hl_field(0, ModuleLayout_130, 2) = ((MR_Box) (StringTableContents_129));
      MR_hl_field(0, ModuleLayout_130, 3) = ((MR_Box) (MaybeDeepProfInfo_107));
      MR_hl_field(0, ModuleLayout_130, 4) = ((MR_Box) (MaybeDebugInfo_125));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ModuleLayouts_51 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleLayout_130));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_118, STATE_VARIABLE_GlobalData_0_131, STATE_VARIABLE_GlobalData_132);
}

static MR_Word MR_CALL 
ll_backend__stack_layout__init_stack_layout_params_1_f_0(
  MR_Word ModuleInfo_3)
{
  MR_Word Params_4;
  MR_Word Globals_5;
  MR_Word OptTuple_6;
  MR_Word CommonLayoutData_7;
  MR_Integer CompressLimit_8;
  MR_Word TraceLevel_9;
  MR_Word TraceSuppress_10;
  MR_Word DeepProfiling_11;
  MR_Word AgcLayout_12;
  MR_Word TraceLayout_13;
  MR_Word ProcIdLayout_14;
  MR_Word StaticCodeAddr_15;
  MR_Word UnboxedFloatOpt_16;
  MR_Word UnboxedInt64sOpt_17;
  MR_Word RttiLineNumbers_18;
  MR_Word CompressArrays_19;
  MR_Word UnboxedFloat_20;
  MR_Word UnboxedInt64s_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
  libs__globals__get_opt_tuple_2_p_0(Globals_5, &OptTuple_6);
  CommonLayoutData_7 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_6, 2))) >> 23)) & (MR_Integer) 1);
  CompressLimit_8 = ((MR_Integer) ((MR_hl_field(0, OptTuple_6, 38))));
  libs__globals__get_trace_level_2_p_0(Globals_5, &TraceLevel_9);
  libs__globals__get_trace_suppress_2_p_0(Globals_5, &TraceSuppress_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 60, &DeepProfiling_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 729, &AgcLayout_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 731, &TraceLayout_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 730, &ProcIdLayout_14);
  StaticCodeAddr_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_6, 1))) >> 9)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 100, &UnboxedFloatOpt_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 101, &UnboxedInt64sOpt_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 740, &RttiLineNumbers_18);
  switch (CommonLayoutData_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      CompressArrays_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      {
        CompressArrays_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CompressArrays_19, 0) = ((MR_Box) (CompressLimit_8));
      }
      break;
  }
  switch (UnboxedFloatOpt_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxedFloat_20 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UnboxedFloat_20 = (MR_Integer) 0;
      break;
  }
  switch (UnboxedInt64sOpt_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxedInt64s_21 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UnboxedInt64s_21 = (MR_Integer) 0;
      break;
  }
  {
    Params_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_4, 0) = ((MR_Box) (ModuleInfo_3));
    MR_hl_field(0, Params_4, 1) = ((MR_Box) (CompressArrays_19));
    MR_hl_field(0, Params_4, 2) = (MR_Box) ((MR_Unsigned) (TraceLevel_9));
    MR_hl_field(0, Params_4, 3) = ((MR_Box) (TraceSuppress_10));
    MR_hl_field(0, Params_4, 4) = (MR_Box) (((((MR_Unsigned) (DeepProfiling_11) << 7)) | (((((MR_Unsigned) (AgcLayout_12) << 6)) | (((((MR_Unsigned) (TraceLayout_13) << 5)) | (((((MR_Unsigned) (ProcIdLayout_14) << 4)) | (((((MR_Unsigned) (StaticCodeAddr_15) << 3)) | (((((MR_Unsigned) (UnboxedFloat_20) << 2)) | (((((MR_Unsigned) (UnboxedInt64s_21) << 1)) | (MR_Unsigned) (RttiLineNumbers_18)))))))))))))));
  }
  return Params_4;
}

static MR_Word MR_CALL 
ll_backend__stack_layout__init_label_layouts_info_0_f_0(void)
{
  MR_Word Info_2;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_25;
  MR_Word Var_27;

  Var_11 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0));
  Var_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__stack_layout_scalar_common_2[1]));
  Var_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_18 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_20 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
  Var_27 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0));
  {
    Info_2 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_2, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info_2, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info_2, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info_2, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 8) = ((MR_Box) (Var_11));
    MR_hl_field(0, Info_2, 9) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info_2, 10) = ((MR_Box) (Var_14));
    MR_hl_field(0, Info_2, 11) = ((MR_Box) (Var_15));
    MR_hl_field(0, Info_2, 12) = ((MR_Box) (Var_16));
    MR_hl_field(0, Info_2, 13) = ((MR_Box) (Var_18));
    MR_hl_field(0, Info_2, 14) = ((MR_Box) (Var_20));
    MR_hl_field(0, Info_2, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 16) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 17) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 18) = ((MR_Box) (Var_25));
    MR_hl_field(0, Info_2, 19) = ((MR_Box) (Var_27));
  }
  return Info_2;
}

static MR_Word MR_CALL 
ll_backend__stack_layout__init_proc_layouts_info_0_f_0(void)
{
  MR_Word Info_2;
  MR_Word ProcStaticInfo_3;
  MR_Word ExecTraceInfo_4;
  MR_Word Var_9;
  MR_Word Var_14;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_31;

  Var_14 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    ProcStaticInfo_3 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcStaticInfo_3, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ProcStaticInfo_3, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ProcStaticInfo_3, 2) = ((MR_Box) (Var_14));
    MR_hl_field(0, ProcStaticInfo_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcStaticInfo_3, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ProcStaticInfo_3, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_22 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_24 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_31 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0));
  {
    ExecTraceInfo_4 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExecTraceInfo_4, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ExecTraceInfo_4, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ExecTraceInfo_4, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ExecTraceInfo_4, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, ExecTraceInfo_4, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, ExecTraceInfo_4, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ExecTraceInfo_4, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ExecTraceInfo_4, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ExecTraceInfo_4, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ExecTraceInfo_4, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ExecTraceInfo_4, 10) = ((MR_Box) (Var_31));
  }
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0));
  {
    Info_2 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_2, 0) = ((MR_Box) (ProcStaticInfo_3));
    MR_hl_field(0, Info_2, 1) = ((MR_Box) (ExecTraceInfo_4));
    MR_hl_field(0, Info_2, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Info_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info_2, 6) = ((MR_Box) (Var_9));
  }
  return Info_2;
}

static void MR_CALL 
ll_backend__stack_layout__format_label_tables_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FileLayoutData_5;

  ll_backend__stack_layout__format_label_table_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FileLayoutData_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_FileLayoutData_5));
}

static void MR_CALL 
ll_backend__stack_layout__format_label_tables_2_p_0(
  MR_Word LabelTableMap_3,
  MR_Word * SourceFileLayouts_4)
{
  MR_Word LabelTableList_5;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[1]), LabelTableMap_3, &LabelTableList_5);
  mercury__list__map_3_p_0((MR_Word) (&ll_backend__stack_layout_scalar_common_1[7]), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0), (MR_Word) (&ll_backend__stack_layout_scalar_common_1[14]), LabelTableList_5, SourceFileLayouts_4);
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____exec_traces_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____exec_traces_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____exec_traces_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____exec_traces_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____file_label_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____file_label_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____file_label_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____file_label_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____internal_label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____internal_label_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____internal_label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____internal_label_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____is_label_return_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____is_label_return_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____is_label_return_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____is_label_return_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_layouts_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____label_layouts_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_layouts_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____label_layouts_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____label_tables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____label_tables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____line_no_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____line_no_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____line_no_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____line_no_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____liveval_array_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____liveval_array_slot_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____liveval_array_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____liveval_array_slot_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____locn_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____locn_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____locn_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____locn_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____maybe_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____maybe_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____maybe_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____maybe_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_layouts_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____proc_layouts_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_layouts_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____proc_layouts_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_statics_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____proc_statics_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_statics_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____proc_statics_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____stack_layout_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_layout____Unify____stack_layout_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_layout____Compare____stack_layout_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_layout____Compare____stack_layout_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__stack_layout__init(void)
{
}

void mercury__ll_backend__stack_layout__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_exec_traces_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_file_label_table_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_tables_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_line_no_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_locn_type_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_maybe_var_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_statics_info_0);
  MR_register_type_ctor_info(&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_stack_layout_params_0);
}

void mercury__ll_backend__stack_layout__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__stack_layout__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.stack_layout.
