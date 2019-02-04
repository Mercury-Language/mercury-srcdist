/*
** Automatically generated from `stack_layout.m'
** by the Mercury compiler,
** version rotd-2018-03-11
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
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
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_EnumFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__enum_value_ordered_locn_type_0[15];

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
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1869__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer HeadVar__2_87);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1867__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer NumHLDSVarNums_30);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1737__1_3_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1731__1_1_p_0(
  MR_Word LambdaHeadVar__1_31);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1522__1_3_p_0(
  MR_Word HeadVar__1_373,
  MR_Word HeadVar__2_374,
  MR_Word * HeadVar__3_375);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1520__1_3_p_0(
  MR_Word HeadVar__1_367,
  MR_Word HeadVar__2_368,
  MR_Word * HeadVar__3_369);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__1333__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27);

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_exec_trace_layout__967__1_2_p_0(
  MR_Word MaybeTableSlotName_29,
  MR_Word HeadVar__2_124);

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__format_label_table__381__1_2_p_0(
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
  MR_Word HeadVar__2_1,
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
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_114_118_97_108_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_114_118_97_108_93_95_48_95_49_2_p_0(
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
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Byte_2);

static void MR_CALL 
ll_backend__stack_layout__make_tagged_byte_3_p_0(
  MR_Integer Tag_4,
  MR_Integer Value_5,
  MR_Integer * TaggedValue_6);

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
  MR_Word STATE_VARIABLE_StaticCellInfo_0_30,
  MR_Word * STATE_VARIABLE_StaticCellInfo_31);

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

static void MR_CALL 
ll_backend__stack_layout__add_var_to_var_number_map_6_p_0(
  MR_Word VarSet_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_13,
  MR_Word * STATE_VARIABLE_VarNumMap_14,
  MR_Word STATE_VARIABLE_Counter_0_15,
  MR_Word * STATE_VARIABLE_Counter_16);

static void MR_CALL 
ll_backend__stack_layout__user_attribute_var_num_map_6_p_0(
  MR_Word VarSet_7,
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
  MR_Word VarSet_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarNumMap_0_29,
  MR_Word * STATE_VARIABLE_VarNumMap_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32);

static void MR_CALL 
ll_backend__stack_layout__label_layout_var_number_map_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__stack_layout__label_layout_var_number_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__label_layout_var_number_map_5_p_0(
  MR_Word LabelLayout_6,
  MR_Word STATE_VARIABLE_VarNumMap_0_22,
  MR_Word * STATE_VARIABLE_VarNumMap_23,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25);

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
  MR_Word STATE_VARIABLE_LabelTables_0_56,
  MR_Word * STATE_VARIABLE_LabelTables_57,
  MR_Word STATE_VARIABLE_StringTable_0_58,
  MR_Word * STATE_VARIABLE_StringTable_59,
  MR_Word STATE_VARIABLE_TypeTable_0_60,
  MR_Word * STATE_VARIABLE_TypeTable_61,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_62,
  MR_Word * STATE_VARIABLE_StaticCellInfo_63,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_64,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_65,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_66,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_67);

static void MR_CALL 
ll_backend__stack_layout__construct_proc_layout_15_p_0(
  MR_Word Params_16,
  MR_Word PLI_17,
  MR_Word ProcLayoutName_18,
  MR_Word Kind_19,
  MR_Word InternalLabelInfos_20,
  MR_Word VarNumMap_21,
  MR_Word LabelLayoutInfo_22,
  MR_Word STATE_VARIABLE_StringTable_0_104,
  MR_Word * STATE_VARIABLE_StringTable_105,
  MR_Word STATE_VARIABLE_TypeTable_0_106,
  MR_Word * STATE_VARIABLE_TypeTable_107,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_108,
  MR_Word * STATE_VARIABLE_StaticCellInfo_109,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_110,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_111);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0(
  MR_Word Params_24,
  MR_Word RttiProcLabel_25,
  MR_Word EvalMethod_26,
  MR_Word EffTraceLevel_27,
  MR_Word MaybeCallLabel_28,
  MR_Word MaybeTableSlotName_29,
  MR_Integer MaxTraceRegR_30,
  MR_Integer MaxTraceRegF_31,
  MR_Word HeadVars_32,
  MR_Word ArgModes_33,
  MR_Word TraceSlotInfo_34,
  MR_Word VarTypes_36,
  MR_Word MaybeTableInfo_37,
  MR_Word NeedsAllNames_38,
  MR_Word VarNumMap_39,
  MR_Word InternalLabelInfos_40,
  MR_Word * ExecTraceName_41,
  MR_Word LabelLayoutInfo_42,
  MR_Word STATE_VARIABLE_StringTable_0_111,
  MR_Word * STATE_VARIABLE_StringTable_112,
  MR_Word STATE_VARIABLE_ExecTraceInfo_0_113,
  MR_Word * STATE_VARIABLE_ExecTraceInfo_114);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9);

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
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
  MR_Word HeadVars_7,
  MR_Word ArgModes_8,
  MR_Word VarTypes_9,
  MR_Integer * STATE_VARIABLE_Flags_13);

static void MR_CALL 
ll_backend__stack_layout__collect_event_data_addrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevInterfaces_0_2,
  MR_Word * STATE_VARIABLE_RevInterfaces_3,
  MR_Word STATE_VARIABLE_RevInternals_0_4,
  MR_Word * STATE_VARIABLE_RevInternals_5);

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
ll_backend__stack_layout__construct_closure_layout_13_p_0_1(
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


static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_1[48][3];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_2[38][2];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_3[15][1];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_4[8][5];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_5[1][17];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_6[2][8];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_8[4][7];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_9[3][9];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_10[2][4];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_11[4][6];

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_12[1][15];


/* sealed */ struct ll_backend__stack_layout__vector_common_type_7_0_s {
  const MR_Integer ll_backend__stack_layout__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct ll_backend__stack_layout__vector_common_type_7_0_s ll_backend__stack_layout_vector_common_7[15];



static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_1[48][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[4])),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[4])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[0])),
    ((MR_Box) (ll_backend__stack_layout__format_label_tables_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[0])),
    ((MR_Box) (ll_backend__stack_layout__generate_llds_layout_data_26_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[0])),
    ((MR_Box) (ll_backend__stack_layout__construct_closure_layout_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[1])),
    ((MR_Box) (ll_backend__stack_layout__convert_table_arg_info_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[2])),
    ((MR_Box) (ll_backend__stack_layout__convert_table_arg_info_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[2])),
    ((MR_Box) (ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[3])),
    ((MR_Box) (ll_backend__stack_layout__format_label_table_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_10[0])),
    ((MR_Box) (ll_backend__stack_layout__construct_var_name_vector_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[1])),
    ((MR_Box) (ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[5])),
    ((MR_Box) (ll_backend__stack_layout__label_layout_var_number_map_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[1])),
    ((MR_Box) (ll_backend__stack_layout__label_layout_var_number_map_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[5])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_6[1])),
    ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_10[1])),
    ((MR_Box) (ll_backend__stack_layout__sort_livevals_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[2])),
    ((MR_Box) (ll_backend__stack_layout__sort_livevals_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "curfr")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "hp")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "maxfr")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "redofr")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "redoip")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6])),
    ((MR_Box) ((MR_String) "unwanted")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[6])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[7])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[7])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[7])),
    ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_10[1])),
    ((MR_Box) (ll_backend__stack_layout__construct_internal_layout_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[3])),
    ((MR_Box) (ll_backend__stack_layout__construct_internal_layout_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[3])),
    ((MR_Box) (ll_backend__stack_layout__construct_internal_layout_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_2[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[8]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[1]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[1])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[0])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[1])))
  },
  /* row 26 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[29])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_1[30])))
  },
  /* row 28 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_1[32])))
  },
  /* row 30 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[33])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_1[34])))
  },
  /* row 32 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[35])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_1[36])))
  },
  /* row 34 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_1[38])))
  },
  /* row 36 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_1[40])))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_3[15][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[26]))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[28]))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[30]))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[32]))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[34]))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[36]))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_4[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_5[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_8[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0__plain_ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_9[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__stack_layout__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__stack_layout__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__stack_layout__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__continuation_info__type_ctor_info_user_attribute_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_10[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_11[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0)),
    ((MR_Box) (&ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_layout_scalar_common_12[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 5 },
  /* row 4 */   {     (MR_Integer) 6 },
  /* row 5 */   {     (MR_Integer) 7 },
  /* row 6 */   {     (MR_Integer) 9 },
  /* row 7 */   {     (MR_Integer) 10 },
  /* row 8 */   {     (MR_Integer) 11 },
  /* row 9 */   {     (MR_Integer) 15 },
  /* row 10 */   {     (MR_Integer) 11 },
  /* row 11 */   {     (MR_Integer) 3 },
  /* row 12 */   {     (MR_Integer) 13 },
  /* row 13 */   {     (MR_Integer) 13 },
  /* row 14 */   {     (MR_Integer) 14 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0,
    (MR_TypeInfo) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__stack_layout__list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0__plain_ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_layout__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_layout__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_layout__maybe__pti_maybe_1__plain_ll_backend__continuation_info__type_ctor_info_user_attribute_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_user_attribute_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_table_io_entry_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_exec_traces_info_0_0[11] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_table_io_entry_data_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0
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
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_exec_traces_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_exec_traces_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_exec_traces_info_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_exec_traces_info_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_exec_traces_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_exec_traces_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_exec_traces_info_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_exec_traces_info_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_exec_traces_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_exec_traces_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____exec_traces_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____exec_traces_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "exec_traces_info",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_exec_traces_info_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_exec_traces_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_exec_traces_info_0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_file_label_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__stack_layout____Unify____file_label_table_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____file_label_table_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "file_label_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_internal_label_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_internal_label_info_0_0[5] = {
  (MR_String) "containing_proc",
  (MR_String) "label_num_in_proc",
  (MR_String) "maybe_has_var_info",
  (MR_String) "slot_in_array",
  (MR_String) "internal_layout_info"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0 = {
  (MR_String) "internal_label_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_internal_label_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_internal_label_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_internal_label_info_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_internal_label_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_internal_label_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_internal_label_info_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_internal_label_info_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_internal_label_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____internal_label_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____internal_label_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "internal_label_info",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_internal_label_info_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_internal_label_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_internal_label_info_0
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_is_label_return_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_0 = {
  (MR_String) "known_callee",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_is_label_return_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_1 = {
  (MR_String) "unknown_callee",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_2 = {
  (MR_String) "not_a_return",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_0[2] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_1,
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_2
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_1[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_is_label_return_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_is_label_return_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_is_label_return_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____is_label_return_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____is_label_return_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "is_label_return",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_is_label_return_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_is_label_return_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_is_label_return_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__cord__ti_cord_1ll_backend__layout__type_ctor_info_user_event_data_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__cord__ti_cord_1maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_no_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_short_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_long_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_label_layouts_info_0_0[20] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__cord__ti_cord_1ll_backend__layout__type_ctor_info_user_event_data_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__cord__ti_cord_1maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_no_vars_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_short_vars_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_label_layout_long_vars_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0
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
  (MR_Integer) 20,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_label_layouts_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_label_layouts_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_label_layouts_info_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_label_layouts_info_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_label_layouts_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_label_layouts_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_label_layouts_info_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_label_layouts_info_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_label_layouts_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____label_layouts_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____label_layouts_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "label_layouts_info",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_label_layouts_info_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_label_layouts_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_label_layouts_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_tables_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__stack_layout____Unify____label_tables_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____label_tables_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "label_tables",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_line_no_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__stack_layout____Unify____line_no_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____line_no_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "line_no_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__stack_layout__pair__ti_pair_2ll_backend__layout__type_ctor_info_layout_slot_name_0ll_backend__stack_layout__type_ctor_info_is_label_return_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_liveval_array_slot_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_liveval_array_slot_0_0[3] = {
  (MR_String) "lai_type",
  (MR_String) "lai_hlds_var_num",
  (MR_String) "lai_locn_desc"
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0 = {
  (MR_String) "liveval_array_slot",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_liveval_array_slot_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_liveval_array_slot_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_liveval_array_slot_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_liveval_array_slot_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_liveval_array_slot_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_liveval_array_slot_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_liveval_array_slot_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_liveval_array_slot_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____liveval_array_slot_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____liveval_array_slot_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "liveval_array_slot",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_liveval_array_slot_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_liveval_array_slot_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_liveval_array_slot_0
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_0 = {
  (MR_String) "lval_r_reg",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_1 = {
  (MR_String) "lval_f_reg",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_2 = {
  (MR_String) "lval_stackvar",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_3 = {
  (MR_String) "lval_framevar",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_4 = {
  (MR_String) "lval_succip",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_5 = {
  (MR_String) "lval_maxfr",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_6 = {
  (MR_String) "lval_curfr",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_7 = {
  (MR_String) "lval_hp",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_8 = {
  (MR_String) "lval_sp",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_9 = {
  (MR_String) "lval_indirect",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_10 = {
  (MR_String) "lval_parent_sp",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_11 = {
  (MR_String) "lval_parent_stackvar",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_12 = {
  (MR_String) "lval_double_stackvar",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_13 = {
  (MR_String) "lval_double_parent_stackvar",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__enum_functor_desc_locn_type_0_14 = {
  (MR_String) "lval_double_framevar",
  (MR_Integer) 14
};

static const MR_EnumFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__enum_value_ordered_locn_type_0[15] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__stack_layout____Unify____locn_type_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____locn_type_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "locn_type",
  {     ll_backend__stack_layout__ll_backend__stack_layout__enum_name_ordered_locn_type_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__enum_value_ordered_locn_type_0 },
  (MR_Integer) 15,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_locn_type_0
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_0 = {
  (MR_String) "no_var_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_1 = {
  (MR_String) "short_var_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_2[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_2 = {
  (MR_String) "long_var_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_maybe_var_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_0
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_1[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_1
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_2[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_maybe_var_info_0_2
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_maybe_var_info_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_maybe_var_info_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____maybe_var_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____maybe_var_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "maybe_var_info",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_maybe_var_info_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_maybe_var_info_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_maybe_var_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_layouts_info_0_0[7] = {
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_statics_info_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_exec_traces_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_data_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0
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
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_layouts_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_layouts_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_layouts_info_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_layouts_info_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_layouts_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_layouts_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_layouts_info_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_layouts_info_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_layouts_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____proc_layouts_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____proc_layouts_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "proc_layouts_info",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_layouts_info_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_layouts_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_layouts_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_statics_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1mdbcomp__program_representation__type_ctor_info_coverage_point_info_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__list__ti_list_1ll_backend__layout__type_ctor_info_proc_layout_proc_static_0
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_proc_statics_info_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_proc_statics_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_statics_info_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_statics_info_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_statics_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_proc_statics_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_statics_info_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_proc_statics_info_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_statics_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_statics_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____proc_statics_info_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____proc_statics_info_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "proc_statics_info",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_proc_statics_info_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_proc_statics_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_proc_statics_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_layout__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

static const MR_PseudoTypeInfo ll_backend__stack_layout__ll_backend__stack_layout__field_types_stack_layout_params_0_0[12] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__stack_layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0
};

static const MR_ConstString ll_backend__stack_layout__ll_backend__stack_layout__field_names_stack_layout_params_0_0[12] = {
  (MR_String) "slp_module_info",
  (MR_String) "slp_trace_level",
  (MR_String) "slp_trace_suppress",
  (MR_String) "slp_deep_profiling",
  (MR_String) "slp_agc_stack_layout",
  (MR_String) "slp_trace_stack_layout",
  (MR_String) "slp_procid_stack_layout",
  (MR_String) "slp_compress_arrays",
  (MR_String) "slp_static_code_addresses",
  (MR_String) "slp_unboxed_floats",
  (MR_String) "slp_rtti_line_numbers",
  (MR_String) "slp_unboxed_int64s"
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 3,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0 = {
  (MR_String) "stack_layout_params",
  (MR_Integer) 12,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_types_stack_layout_params_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_names_stack_layout_params_0_0,
  ll_backend__stack_layout__ll_backend__stack_layout__field_locns_stack_layout_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_stack_layout_params_0_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0
};

static const MR_DuPtagLayout ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_stack_layout_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__stack_layout__ll_backend__stack_layout__du_stag_ordered_stack_layout_params_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_stack_layout_params_0[1] = {
  &ll_backend__stack_layout__ll_backend__stack_layout__du_functor_desc_stack_layout_params_0_0
};

static const MR_Integer ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_stack_layout_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_stack_layout_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__stack_layout____Unify____stack_layout_params_0_0_10001)),
  ((MR_Box) (ll_backend__stack_layout____Compare____stack_layout_params_0_0_10001)),
  (MR_String) "ll_backend.stack_layout",
  (MR_String) "stack_layout_params",
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_name_ordered_stack_layout_params_0 },
  {     ll_backend__stack_layout__ll_backend__stack_layout__du_ptag_ordered_stack_layout_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_layout__ll_backend__stack_layout__functor_number_map_stack_layout_params_0
};

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1869__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer HeadVar__2_87)
{
  {
    MR_bool succeeded = (NumPTIs_29 == HeadVar__2_87);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1867__1_2_p_0(
  MR_Integer NumPTIs_29,
  MR_Integer NumHLDSVarNums_30)
{
  {
    MR_bool succeeded = (NumPTIs_29 == NumHLDSVarNums_30);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1737__1_3_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34)
{
  {
    MR_bool succeeded;
    MR_Word Lval1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 0)));
    MR_Word LiveType1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 1)));
    MR_Word Lval2_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, (MR_Integer) 0)));
    MR_Word LiveType2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, (MR_Integer) 1)));
    MR_String Name1_26;
    MR_String Name2_27;
    MR_Word NameResult_28;
    MR_String Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 2)));
    MR_String Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, (MR_Integer) 2)));
    MR_String NamePrime_45;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_String NamePrime_51;
    MR_Word Var_50;
    MR_Word Var_52;

    succeeded = ((MR_tag((MR_Word) LiveType1_21)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveType1_21, (MR_Integer) 0)));
      NamePrime_45 = ((MR_String) (MR_hl_field(MR_mktag(1), LiveType1_21, (MR_Integer) 1)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveType1_21, (MR_Integer) 2)));
      Name1_26 = NamePrime_45;
    }
    else
      Name1_26 = (MR_String) "";
    succeeded = ((MR_tag((MR_Word) LiveType2_24)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveType2_24, (MR_Integer) 0)));
      NamePrime_51 = ((MR_String) (MR_hl_field(MR_mktag(1), LiveType2_24, (MR_Integer) 1)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveType2_24, (MR_Integer) 2)));
      Name2_27 = NamePrime_51;
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
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1731__1_1_p_0(
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_bool succeeded;
    MR_Word LvalType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 1)));
    MR_String Name_11;
    MR_Word _Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 0)));
    MR_String Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 2)));
    MR_Word Var_10;
    MR_Word Var_12;

    succeeded = ((MR_tag((MR_Word) LvalType_8)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), LvalType_8, (MR_Integer) 0)));
      Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), LvalType_8, (MR_Integer) 1)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), LvalType_8, (MR_Integer) 2)));
      succeeded = (strcmp(Name_11, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1522__1_3_p_0(
  MR_Word HeadVar__1_373,
  MR_Word HeadVar__2_374,
  MR_Word * HeadVar__3_375)
{
  {
    mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, HeadVar__1_373, HeadVar__2_374, HeadVar__3_375);
  }
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1520__1_3_p_0(
  MR_Word HeadVar__1_367,
  MR_Word HeadVar__2_368,
  MR_Word * HeadVar__3_369)
{
  {
    mercury__set__intersect_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, HeadVar__1_367, HeadVar__2_368, HeadVar__3_369);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__1333__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27)
{
  {
    MR_bool succeeded;
    MR_Word LiveValueType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 1)));
    MR_Word Var_32;
    MR_String Name_33;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 0)));
    MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 2)));
    MR_Word Var_19;

    succeeded = ((MR_tag((MR_Word) LiveValueType_17)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveValueType_17, (MR_Integer) 0)));
      Name_33 = ((MR_String) (MR_hl_field(MR_mktag(1), LiveValueType_17, (MR_Integer) 1)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveValueType_17, (MR_Integer) 2)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__2_27 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Name_33));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__construct_exec_trace_layout__967__1_2_p_0(
  MR_Word MaybeTableSlotName_29,
  MR_Word HeadVar__2_124)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[6], ((MR_Box) (MaybeTableSlotName_29)), ((MR_Box) (HeadVar__2_124)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__IntroducedFrom__pred__format_label_table__381__1_2_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word * LambdaHeadVar__2_17)
{
  {
    MR_Integer LineNo_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_16, (MR_Integer) 0)));
    MR_Word Label_12;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_16, (MR_Integer) 1)));
    MR_Word _IsReturn_13;

    Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
    _IsReturn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LineNo_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Label_12));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____stack_layout_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_39 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_40 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_39 == CastY_40);
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
      MR_Word ArgX4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX9_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgY9_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgX10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY10_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY11_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX12_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY12_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_28;

      hlds__hlds_module____Compare____module_info_0_0(&Var_28, ArgX1_4, ArgY1_5);
      succeeded = (Var_28 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_28;
      else
      {
        MR_Word Var_29;

        libs__trace_params____Compare____trace_level_0_0(&Var_29, ArgX2_6, ArgY2_7);
        succeeded = (Var_29 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_29;
        else
        {
          MR_Word Var_30;

          mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0, &Var_30, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_30 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_30;
          else
          {
            MR_Word Var_31;
            MR_Integer Var_53 = (MR_Integer) ArgX4_10;
            MR_Integer Var_54 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, Var_53, Var_54);
            succeeded = (Var_31 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_31;
            else
            {
              MR_Word Var_32;
              MR_Integer Var_55 = (MR_Integer) ArgX5_12;
              MR_Integer Var_56 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_55, Var_56);
              succeeded = (Var_32 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_32;
              else
              {
                MR_Word Var_33;
                MR_Integer Var_57 = (MR_Integer) ArgX6_14;
                MR_Integer Var_58 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_33, Var_57, Var_58);
                succeeded = (Var_33 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_33;
                else
                {
                  MR_Word Var_34;
                  MR_Integer Var_59 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_60 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, Var_59, Var_60);
                  succeeded = (Var_34 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_34;
                  else
                  {
                    MR_Word Var_35;

                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[1], &Var_35, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_35 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_35;
                    else
                    {
                      MR_Word Var_36;
                      MR_Integer Var_61 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_62 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_61, Var_62);
                      succeeded = (Var_36 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_36;
                      else
                      {
                        MR_Word Var_37;
                        MR_Integer Var_63 = (MR_Integer) ArgX10_22;
                        MR_Integer Var_64 = (MR_Integer) ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_63, Var_64);
                        succeeded = (Var_37 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_37;
                        else
                        {
                          MR_Word Var_38;
                          MR_Integer Var_65 = (MR_Integer) ArgX11_24;
                          MR_Integer Var_66 = (MR_Integer) ArgY11_25;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_38, Var_65, Var_66);
                          succeeded = (Var_38 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_38;
                          else
                          {
                            MR_Integer Var_67 = (MR_Integer) ArgX12_26;
                            MR_Integer Var_68 = (MR_Integer) ArgY12_27;

                            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_67, Var_68);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeInfo_32_32;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX9_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeCtorInfo_31_31 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0;
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_31_31, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
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
                    TypeInfo_32_32 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[1];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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
}

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_layouts_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      ll_backend__stack_layout____Compare____proc_statics_info_0_0(&Var_18, ArgX1_4, ArgY1_5);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        ll_backend__stack_layout____Compare____exec_traces_info_0_0(&Var_19, ArgX2_6, ArgY2_7);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX3_8, ArgY3_9);
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[8], &Var_21, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[18], &Var_22, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[19], &Var_23, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[13], HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
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
ll_backend__stack_layout____Compare____proc_statics_info_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, ArgX2_6, ArgY2_7);
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

            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[20], &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[21], &Var_20, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[22], HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = ll_backend__stack_layout____Unify____proc_statics_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ll_backend__stack_layout____Unify____exec_traces_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[8];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[18];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[19];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_22_22 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[13];
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
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_statics_info_0_0(
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
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[20];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[21];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[22];
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

static void MR_CALL 
ll_backend__stack_layout____Compare____maybe_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_16 == CastY_17);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_8 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 1);

                  ll_backend__layout____Compare____label_short_var_info_0_0(HeadVar__1_1, Var_21, ArgY1_8);
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
            MR_Word Var_20 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 2);

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
                  MR_Word ArgY1_15 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 2);

                  ll_backend__layout____Compare____label_long_var_info_0_0(HeadVar__1_1, Var_20, ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____maybe_var_info_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 1);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);
              succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 2);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 2);
              succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____locn_type_0_0(
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

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____locn_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____liveval_array_slot_0_0(
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
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      ll_backend__llds____Compare____rval_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____liveval_array_slot_0_0(
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
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

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
}

static void MR_CALL 
ll_backend__stack_layout____Compare____line_no_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____line_no_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_tables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_layouts_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_63 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_64 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_63 == CastY_64);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Integer ArgX10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Integer ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12)));
      MR_Word ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13)));
      MR_Word ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13)));
      MR_Word ArgX15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14)));
      MR_Word ArgY15_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14)));
      MR_Word ArgX16_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15)));
      MR_Word ArgY16_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15)));
      MR_Word ArgX17_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16)));
      MR_Word ArgY17_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16)));
      MR_Word ArgX18_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17)));
      MR_Word ArgY18_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17)));
      MR_Word ArgX19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18)));
      MR_Word ArgY19_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18)));
      MR_Word ArgX20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19)));
      MR_Word ArgY20_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19)));
      MR_Word Var_44;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_44, ArgX1_4, ArgY1_5);
      succeeded = (Var_44 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_44;
      else
      {
        MR_Word Var_45;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_45, ArgX2_6, ArgY2_7);
        succeeded = (Var_45 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_45;
        else
        {
          MR_Word Var_46;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, ArgX3_8, ArgY3_9);
          succeeded = (Var_46 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_46;
          else
          {
            MR_Word Var_47;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_47, ArgX4_10, ArgY4_11);
            succeeded = (Var_47 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_47;
            else
            {
              MR_Word Var_48;

              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[12], &Var_48, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_48 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_48;
              else
              {
                MR_Word Var_49;

                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[8], &Var_49, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_49 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_49;
                else
                {
                  MR_Word Var_50;

                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[8], &Var_50, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_50 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_50;
                  else
                  {
                    MR_Word Var_51;

                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[8], &Var_51, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_51 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_51;
                    else
                    {
                      MR_Word Var_52;

                      mercury__counter____Compare____counter_0_0(&Var_52, ArgX9_20, ArgY9_21);
                      succeeded = (Var_52 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_52;
                      else
                      {
                        MR_Word Var_53;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_53, ArgX10_22, ArgY10_23);
                        succeeded = (Var_53 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_53;
                        else
                        {
                          MR_Word Var_54;

                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[13], &Var_54, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_54 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_54;
                          else
                          {
                            MR_Word Var_55;

                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[14], &Var_55, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_55 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_55;
                            else
                            {
                              MR_Word Var_56;

                              mercury__counter____Compare____counter_0_0(&Var_56, ArgX13_28, ArgY13_29);
                              succeeded = (Var_56 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_56;
                              else
                              {
                                MR_Word Var_57;

                                mercury__counter____Compare____counter_0_0(&Var_57, ArgX14_30, ArgY14_31);
                                succeeded = (Var_57 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_57;
                                else
                                {
                                  MR_Word Var_58;

                                  mercury__counter____Compare____counter_0_0(&Var_58, ArgX15_32, ArgY15_33);
                                  succeeded = (Var_58 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_58;
                                  else
                                  {
                                    MR_Word Var_59;

                                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[15], &Var_59, ((MR_Box) (ArgX16_34)), ((MR_Box) (ArgY16_35)));
                                    succeeded = (Var_59 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_59;
                                    else
                                    {
                                      MR_Word Var_60;

                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[16], &Var_60, ((MR_Box) (ArgX17_36)), ((MR_Box) (ArgY17_37)));
                                      succeeded = (Var_60 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_60;
                                      else
                                      {
                                        MR_Word Var_61;

                                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[17], &Var_61, ((MR_Box) (ArgX18_38)), ((MR_Box) (ArgY18_39)));
                                        succeeded = (Var_61 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_61;
                                        else
                                        {
                                          MR_Word Var_62;

                                          mercury__counter____Compare____counter_0_0(&Var_62, ArgX19_40, ArgY19_41);
                                          succeeded = (Var_62 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_62;
                                          else
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[12], HeadVar__1_1, ((MR_Box) (ArgX20_42)), ((MR_Box) (ArgY20_43)));
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

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_layouts_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_43 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_44 = (MR_Integer) HeadVar__2_2;

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
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Integer ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Word ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13)));
      MR_Word ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13)));
      MR_Word ArgX15_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14)));
      MR_Word ArgY15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14)));
      MR_Word ArgX16_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15)));
      MR_Word ArgY16_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15)));
      MR_Word ArgX17_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16)));
      MR_Word ArgY17_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16)));
      MR_Word ArgX18_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17)));
      MR_Word ArgY18_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17)));
      MR_Word ArgX19_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18)));
      MR_Word ArgY19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18)));
      MR_Word ArgX20_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19)));
      MR_Word ArgY20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19)));

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
              TypeInfo_45_45 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[12];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_46_46 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[8];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_47_47 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[8];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_48_48 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[8];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      succeeded = mercury__counter____Unify____counter_0_0(ArgX9_19, ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          TypeInfo_50_50 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[13];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_51_51 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[14];
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
                                    TypeInfo_55_55 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[15];
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                    if (succeeded)
                                    {
                                      TypeInfo_56_56 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[16];
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                      if (succeeded)
                                      {
                                        TypeInfo_57_57 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[17];
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                        if (succeeded)
                                        {
                                          succeeded = mercury__counter____Unify____counter_0_0(ArgX19_39, ArgY19_40);
                                          if (succeeded)
                                          {
                                            TypeInfo_59_59 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[12];
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
}

static void MR_CALL 
ll_backend__stack_layout____Compare____is_label_return_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  ll_backend__llds____Compare____label_0_0(HeadVar__1_1, Var_13, ArgY1_5);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____is_label_return_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____internal_label_info_0_0(
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
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mdbcomp__prim_data____Compare____proc_label_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;
          MR_Integer Var_25 = (MR_Integer) ArgX3_8;
          MR_Integer Var_26 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_25, Var_26);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              ll_backend__continuation_info____Compare____internal_layout_info_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

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
}

static void MR_CALL 
ll_backend__stack_layout____Compare____file_label_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____file_label_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____exec_traces_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_37 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
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
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word Var_26;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, ArgX1_4, ArgY1_5);
      succeeded = (Var_26 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_26;
      else
      {
        MR_Word Var_27;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_27, ArgX2_6, ArgY2_7);
        succeeded = (Var_27 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_27;
        else
        {
          MR_Word Var_28;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_28, ArgX3_8, ArgY3_9);
          succeeded = (Var_28 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_28;
          else
          {
            MR_Word Var_29;

            mercury__counter____Compare____counter_0_0(&Var_29, ArgX4_10, ArgY4_11);
            succeeded = (Var_29 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_29;
            else
            {
              MR_Word Var_30;

              mercury__counter____Compare____counter_0_0(&Var_30, ArgX5_12, ArgY5_13);
              succeeded = (Var_30 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_30;
              else
              {
                MR_Word Var_31;

                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[8], &Var_31, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_31 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_31;
                else
                {
                  MR_Word Var_32;

                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[8], &Var_32, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_32 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_32;
                  else
                  {
                    MR_Word Var_33;

                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[9], &Var_33, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_33 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_33;
                    else
                    {
                      MR_Word Var_34;

                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[10], &Var_34, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_34 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_34;
                      else
                      {
                        MR_Word Var_35;

                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[11], &Var_35, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
                        succeeded = (Var_35 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_35;
                        else
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[11], HeadVar__1_1, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
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
ll_backend__stack_layout____Unify____exec_traces_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_26 = (MR_Integer) HeadVar__2_2;

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
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
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
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Word ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));

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
                TypeInfo_29_29 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[8];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_30_30 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[8];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_31_31 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[9];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_32_32 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[10];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_33_33 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[11];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_34_34 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[11];
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
}

static void MR_CALL 
ll_backend__stack_layout__construct_closure_arg_rval_4_p_0(
  MR_Word ClosureArg_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * STATE_VARIABLE_StaticCellInfo_14)
{
  {
    MR_Word ArgRval_6;
    MR_Word ArgRvalType_7;
    MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureArg_5, (MR_Integer) 0)));
    MR_Word _Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureArg_5, (MR_Integer) 1)));

    ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_9, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_StaticCellInfo_0_13, STATE_VARIABLE_StaticCellInfo_14, &ArgRval_6, &ArgRvalType_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgRval_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgRvalType_7));
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__stack_layout__project_array_slot_locn_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer Locn_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    return Locn_5;
  }
}

static MR_Integer MR_CALL 
ll_backend__stack_layout__project_array_slot_hlds_var_num_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer VarNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    return VarNum_4;
  }
}

static MR_Word MR_CALL 
ll_backend__stack_layout__project_array_slot_pti_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PTI_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    return PTI_3;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__select_trace_return_1_p_0(
  MR_Word LocnInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word Locn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocnInfo_2, (MR_Integer) 0)));
    MR_Word LvalType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocnInfo_2, (MR_Integer) 1)));
    MR_String Name_7;
    MR_Word Lval_10;
    MR_String Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), LocnInfo_2, (MR_Integer) 2)));
    MR_Word Var_6;
    MR_Word Var_8;

    succeeded = ((MR_tag((MR_Word) LvalType_4)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), LvalType_4, (MR_Integer) 0)));
      Name_7 = ((MR_String) (MR_hl_field(MR_mktag(1), LvalType_4, (MR_Integer) 1)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), LvalType_4, (MR_Integer) 2)));
      succeeded = (strcmp(Name_7, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        if (((MR_tag((MR_Word) Locn_3)) == (MR_mktag((MR_Integer) 0))))
          Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Locn_3, (MR_Integer) 0)));
        else
        {
          MR_Integer Var_11;

          Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Locn_3, (MR_Integer) 0)));
          Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_3, (MR_Integer) 1)));
        }
        switch (MR_tag((MR_Word) Lval_10)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_10, (MR_Integer) 0)))) {
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
                  MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_10, (MR_Integer) 1)));
                  MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_10, (MR_Integer) 2)));

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
}

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_375;

    ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1522__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_375);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_375));
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_369;

    ll_backend__stack_layout__IntroducedFrom__pred__construct_internal_layout__1520__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_369);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_369));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_internal_layout_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_layout__select_trace_return_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Integer LabelNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word Internal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1)));
    MR_Word Trace_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Internal_18, (MR_Integer) 0)));
    MR_Word Resume_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Internal_18, (MR_Integer) 1)));
    MR_Word Return_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Internal_18, (MR_Integer) 2)));
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
    MR_Word STATE_VARIABLE_LabelLayoutInfo_134_134;
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

    if ((Resume_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__set__init_1_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, &ResumeLiveVarSet_34);
      mercury__map__init_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], &ResumeTypeVarMap_35);
    }
    else
    {
      MR_Word ResumeLayout_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Resume_24, (MR_Integer) 0)));

      ResumeLiveVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResumeLayout_36, (MR_Integer) 0)));
      ResumeTypeVarMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResumeLayout_36, (MR_Integer) 1)));
    }
    Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 0)));
    Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 1)));
    Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 2)));
    Var_152 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3)))) & (MR_Integer) 1);
    AgcStackLayout_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 4)));
    Var_156 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    if ((Trace_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__set__init_1_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, &TraceLiveVarSet_26);
      mercury__map__init_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], &TraceTypeVarMap_27);
      MaybeUserInfo_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      if ((Return_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MaybePort_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MaybeIsHidden_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MaybeGoalPath_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_StringTable_102 = STATE_VARIABLE_StringTable_0_101;
      }
      else
      {
        MR_Word ReturnInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Return_25, (MR_Integer) 0)));
        MR_Word TargetsContexts_49;
        MR_Word Var_50;
        MR_Word GoalPath_143;
        MR_Word Var_51;
        MR_Word Var_52;

        MaybePort_43 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[13]);
        MaybeIsHidden_44 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[14]);
        TargetsContexts_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReturnInfo_48, (MR_Integer) 0)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReturnInfo_48, (MR_Integer) 1)));
        succeeded = ll_backend__stack_layout__find_valid_return_context_4_p_0(TargetsContexts_49, &Var_51, &Var_52, &GoalPath_143);
        if (succeeded)
        {
          MR_String GoalPathStr_141;
          MR_Integer GoalPathNum_142;

          GoalPathStr_141 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_143);
          ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(GoalPathStr_141, &GoalPathNum_142, STATE_VARIABLE_StringTable_0_101, STATE_VARIABLE_StringTable_102);
          {
            MaybeGoalPath_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeGoalPath_47, 0) = ((MR_Box) (GoalPathNum_142));
          }
        }
        else
        {
          MaybeGoalPath_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_StringTable_102 = STATE_VARIABLE_StringTable_0_101;
        }
      }
      if ((Return_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__set__init_1_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, &ReturnLiveVarSet_56);
        mercury__map__init_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], &ReturnTypeVarMap_57);
      }
      else
      {
        MR_Word ReturnLayout_59;
        MR_Word ReturnLiveVarSet0_60;
        MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Return_25, (MR_Integer) 0)));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 0)));

        ReturnLayout_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 1)));
        ReturnLiveVarSet0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReturnLayout_59, (MR_Integer) 0)));
        ReturnTypeVarMap_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReturnLayout_59, (MR_Integer) 1)));
        switch (AgcStackLayout_55) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set__filter_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[45], ReturnLiveVarSet0_60, &ReturnLiveVarSet_56);
            }
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
      MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), Trace_23, (MR_Integer) 0)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 0)));

      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 1)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 2)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 3)));
      MaybeUserInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 4)));
      TraceLayout_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 5)));
      TraceLiveVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceLayout_33, (MR_Integer) 0)));
      TraceTypeVarMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceLayout_33, (MR_Integer) 1)));
      if ((Return_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String GoalPathStr_45;
        MR_Integer GoalPathNum_46;

        {
          MaybePort_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePort_43, 0) = ((MR_Box) (Var_30));
        }
        {
          MaybeIsHidden_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeIsHidden_44, 0) = ((MR_Box) (Var_31));
        }
        GoalPathStr_45 = mdbcomp__goal_path__goal_path_to_string_1_f_0(Var_32);
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(GoalPathStr_45, &GoalPathNum_46, STATE_VARIABLE_StringTable_0_101, STATE_VARIABLE_StringTable_102);
        {
          MaybeGoalPath_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeGoalPath_47, 0) = ((MR_Box) (GoalPathNum_46));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_internal_layout\'/12", (MR_String) "label has both trace and return layout info");
          return;
        }
      }
      mercury__set__init_1_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, &ReturnLiveVarSet_56);
      mercury__map__init_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], &ReturnTypeVarMap_57);
    }
    succeeded = (Trace_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (Resume_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Return_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MaybeVarInfo_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      if ((MaybeUserInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MaybeUserDataSlot_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_StaticCellInfo_104 = STATE_VARIABLE_StaticCellInfo_0_103;
        STATE_VARIABLE_LabelLayoutInfo_134_134 = STATE_VARIABLE_LabelLayoutInfo_0_105;
      }
      else
      {
        MR_Word TypeInfo_377_377;
        MR_Word TypeCtorInfo_378_378;
        MR_Word UserInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserInfo_28, (MR_Integer) 0)));
        MR_Integer UserEventNumber_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), UserInfo_67, (MR_Integer) 0)));
        MR_Word Attributes_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), UserInfo_67, (MR_Integer) 1)));
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
        MR_Word STATE_VARIABLE_StaticCellInfo_122_122;
        MR_Word Var_124;
        MR_Word Var_128;
        MR_Word Var_132;
        MR_Integer Var_160;
        MR_Integer Var_161;
        MR_Integer Var_162;
        MR_Integer Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Integer Var_218;
        MR_Integer Var_219;
        MR_Integer Var_220;
        MR_Integer Var_221;
        MR_Word Var_222;
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Integer Var_227;
        MR_Word Var_228;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_233;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word Var_236;
        MR_Word Var_237;
        MR_Integer Var_257;
        MR_Integer Var_258;
        MR_Integer Var_259;
        MR_Integer Var_260;
        MR_Word Var_261;
        MR_Word Var_262;
        MR_Word Var_263;
        MR_Word Var_264;
        MR_Integer Var_266;
        MR_Word Var_268;
        MR_Word Var_269;
        MR_Word Var_270;
        MR_Word Var_271;
        MR_Word Var_272;
        MR_Word Var_273;
        MR_Word Var_274;
        MR_Word Var_275;
        MR_Word Var_276;

        ll_backend__stack_layout__construct_user_data_array_7_p_0(Params_13, VarNumMap_16, Attributes_69, &UserLocnsArray_70, &UserAttrMaybeVarNums_71, STATE_VARIABLE_StaticCellInfo_0_103, &STATE_VARIABLE_StaticCellInfo_122_122);
        ll_backend__global_data__add_scalar_static_cell_4_p_0(UserLocnsArray_70, &UserLocnsDataAddr_72, STATE_VARIABLE_StaticCellInfo_122_122, STATE_VARIABLE_StaticCellInfo_104);
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
          MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (UserLocnsDataAddr_72));
          MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          UserLocnsRval_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UserLocnsRval_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), UserLocnsRval_73, 1) = ((MR_Box) (Var_124));
        }
        TypeInfo_377_377 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[1];
        mercury__list__length_2_p_0(TypeInfo_377_377, UserAttrMaybeVarNums_71, &NumVarNums_74);
        Var_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 0)));
        Var_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 1)));
        Var_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 2)));
        Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 3)));
        Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 4)));
        Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 5)));
        Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 6)));
        Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 7)));
        Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 8)));
        VarNumSlotNum0_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 9)));
        Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 10)));
        Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 11)));
        Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 12)));
        Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 13)));
        Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 14)));
        Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 15)));
        Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 16)));
        Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 17)));
        Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 18)));
        Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_105, (MR_Integer) 19)));
        VarNumSlotNum_76 = (VarNumSlotNum0_75 + NumVarNums_74);
        VarNums0_78 = Var_170;
        {
          UserAttrVarNumsSlot_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserAttrVarNumsSlot_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(0), UserAttrVarNumsSlot_77, 1) = ((MR_Box) (VarNumSlotNum0_75));
        }
        Var_128 = mercury__cord__from_list_1_f_0(TypeInfo_377_377, UserAttrMaybeVarNums_71);
        VarNums_79 = mercury__cord__f_43_43_2_f_0(TypeInfo_377_377, VarNums0_78, Var_128);
        Var_218 = Var_160;
        Var_219 = Var_161;
        Var_220 = Var_162;
        Var_221 = Var_163;
        Var_222 = Var_164;
        Var_223 = Var_165;
        Var_224 = Var_166;
        Var_225 = Var_167;
        UserEventCounter0_80 = Var_168;
        Var_227 = VarNumSlotNum_76;
        Var_228 = Var_169;
        Var_230 = Var_171;
        Var_231 = Var_172;
        Var_232 = Var_173;
        Var_233 = Var_174;
        Var_234 = Var_175;
        Var_235 = Var_176;
        Var_236 = Var_177;
        Var_237 = Var_178;
        mercury__counter__allocate_3_p_0(&UserEventSlotNum_81, UserEventCounter0_80, &UserEventCounter_82);
        Var_257 = Var_218;
        Var_258 = Var_219;
        Var_259 = Var_220;
        Var_260 = Var_221;
        Var_261 = Var_222;
        Var_262 = Var_223;
        Var_263 = Var_224;
        Var_264 = Var_225;
        Var_266 = Var_227;
        UserEvents0_85 = Var_228;
        Var_268 = VarNums_79;
        Var_269 = Var_230;
        Var_270 = Var_231;
        Var_271 = Var_232;
        Var_272 = Var_233;
        Var_273 = Var_234;
        Var_274 = Var_235;
        Var_275 = Var_236;
        Var_276 = Var_237;
        {
          UserEventSlot_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserEventSlot_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), UserEventSlot_83, 1) = ((MR_Box) (UserEventSlotNum_81));
        }
        {
          UserData_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserData_84, 0) = ((MR_Box) (UserEventNumber_68));
          MR_hl_field(MR_mktag(0), UserData_84, 1) = ((MR_Box) (UserLocnsRval_73));
          MR_hl_field(MR_mktag(0), UserData_84, 2) = ((MR_Box) (UserAttrVarNumsSlot_77));
        }
        TypeCtorInfo_378_378 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0;
        Var_132 = mercury__cord__singleton_1_f_0(TypeCtorInfo_378_378, ((MR_Box) (UserData_84)));
        UserEvents_86 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_378_378, UserEvents0_85, Var_132);
        {
          STATE_VARIABLE_LabelLayoutInfo_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 0) = ((MR_Box) (Var_257));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 1) = ((MR_Box) (Var_258));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 2) = ((MR_Box) (Var_259));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 3) = ((MR_Box) (Var_260));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 4) = ((MR_Box) (Var_261));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 5) = ((MR_Box) (Var_262));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 6) = ((MR_Box) (Var_263));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 7) = ((MR_Box) (Var_264));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 8) = ((MR_Box) (UserEventCounter_82));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 9) = ((MR_Box) (Var_266));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 10) = ((MR_Box) (UserEvents_86));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 11) = ((MR_Box) (Var_268));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 12) = ((MR_Box) (Var_269));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 13) = ((MR_Box) (Var_270));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 14) = ((MR_Box) (Var_271));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 15) = ((MR_Box) (Var_272));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 16) = ((MR_Box) (Var_273));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 17) = ((MR_Box) (Var_274));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 18) = ((MR_Box) (Var_275));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 19) = ((MR_Box) (Var_276));
        }
        {
          MaybeUserDataSlot_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeUserDataSlot_66, 0) = ((MR_Box) (UserEventSlot_83));
        }
      }
      LabelNumber_91 = (MR_Integer) 0;
    }
    else
    {
      MR_Word TypeCtorInfo_366_366 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
      MR_Word TypeInfo_371_371;
      MR_Word TypeInfo_372_372;
      MR_Word LiveVarSet0_62;
      MR_Word LiveVarSet_63;
      MR_Word TypeVarMap0_64;
      MR_Word TypeVarMap_65;
      MR_Word STATE_VARIABLE_StaticCellInfo_120_677;
      MR_Word STATE_VARIABLE_LabelLayoutInfo_121_678;
      MR_Word STATE_VARIABLE_LabelLayoutInfo_133_689;

      mercury__set__union_3_p_0(TypeCtorInfo_366_366, TraceLiveVarSet_26, ResumeLiveVarSet_34, &LiveVarSet0_62);
      mercury__set__union_3_p_0(TypeCtorInfo_366_366, LiveVarSet0_62, ReturnLiveVarSet_56, &LiveVarSet_63);
      TypeInfo_371_371 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[2];
      TypeInfo_372_372 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[3];
      mercury__map__union_4_p_1(TypeInfo_371_371, TypeInfo_372_372, (MR_Word) &ll_backend__stack_layout_scalar_common_1[46], TraceTypeVarMap_27, ResumeTypeVarMap_35, &TypeVarMap0_64);
      mercury__map__union_4_p_1(TypeInfo_371_371, TypeInfo_372_372, (MR_Word) &ll_backend__stack_layout_scalar_common_1[47], TypeVarMap0_64, ReturnTypeVarMap_57, &TypeVarMap_65);
      ll_backend__stack_layout__construct_label_var_info_9_p_0(Params_13, LiveVarSet_63, VarNumMap_16, TypeVarMap_65, &MaybeVarInfo_61, STATE_VARIABLE_StaticCellInfo_0_103, &STATE_VARIABLE_StaticCellInfo_120_677, STATE_VARIABLE_LabelLayoutInfo_0_105, &STATE_VARIABLE_LabelLayoutInfo_121_678);
      if ((MaybeUserInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MaybeUserDataSlot_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_StaticCellInfo_104 = STATE_VARIABLE_StaticCellInfo_120_677;
        STATE_VARIABLE_LabelLayoutInfo_133_689 = STATE_VARIABLE_LabelLayoutInfo_121_678;
      }
      else
      {
        MR_Word TypeInfo_377_546;
        MR_Word TypeCtorInfo_378_547;
        MR_Word UserInfo_439 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserInfo_28, (MR_Integer) 0)));
        MR_Integer UserEventNumber_440 = ((MR_Integer) (MR_hl_field(MR_mktag(0), UserInfo_439, (MR_Integer) 0)));
        MR_Word Attributes_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), UserInfo_439, (MR_Integer) 1)));
        MR_Word UserLocnsArray_442;
        MR_Word UserAttrMaybeVarNums_443;
        MR_Word UserLocnsDataAddr_444;
        MR_Word UserLocnsRval_445;
        MR_Integer NumVarNums_446;
        MR_Integer VarNumSlotNum0_447;
        MR_Integer VarNumSlotNum_448;
        MR_Word UserAttrVarNumsSlot_449;
        MR_Word VarNums0_450;
        MR_Word VarNums_451;
        MR_Word UserEventCounter0_452;
        MR_Integer UserEventSlotNum_453;
        MR_Word UserEventCounter_454;
        MR_Word UserEventSlot_455;
        MR_Word UserData_456;
        MR_Word UserEvents0_457;
        MR_Word UserEvents_458;
        MR_Word STATE_VARIABLE_StaticCellInfo_122_459;
        MR_Word Var_460;
        MR_Word Var_464;
        MR_Word Var_468;
        MR_Integer Var_469;
        MR_Integer Var_470;
        MR_Integer Var_471;
        MR_Integer Var_472;
        MR_Word Var_473;
        MR_Word Var_474;
        MR_Word Var_475;
        MR_Word Var_476;
        MR_Word Var_477;
        MR_Word Var_478;
        MR_Word Var_479;
        MR_Word Var_480;
        MR_Word Var_481;
        MR_Word Var_482;
        MR_Word Var_483;
        MR_Word Var_484;
        MR_Word Var_485;
        MR_Word Var_486;
        MR_Word Var_487;
        MR_Integer Var_488;
        MR_Integer Var_489;
        MR_Integer Var_490;
        MR_Integer Var_491;
        MR_Word Var_492;
        MR_Word Var_493;
        MR_Word Var_494;
        MR_Word Var_495;
        MR_Integer Var_496;
        MR_Word Var_497;
        MR_Word Var_499;
        MR_Word Var_500;
        MR_Word Var_501;
        MR_Word Var_502;
        MR_Word Var_503;
        MR_Word Var_504;
        MR_Word Var_505;
        MR_Word Var_506;
        MR_Integer Var_507;
        MR_Integer Var_508;
        MR_Integer Var_509;
        MR_Integer Var_510;
        MR_Word Var_511;
        MR_Word Var_512;
        MR_Word Var_513;
        MR_Word Var_514;
        MR_Integer Var_516;
        MR_Word Var_517;
        MR_Word Var_518;
        MR_Word Var_519;
        MR_Word Var_520;
        MR_Word Var_521;
        MR_Word Var_522;
        MR_Word Var_523;
        MR_Word Var_524;
        MR_Word Var_525;

        ll_backend__stack_layout__construct_user_data_array_7_p_0(Params_13, VarNumMap_16, Attributes_441, &UserLocnsArray_442, &UserAttrMaybeVarNums_443, STATE_VARIABLE_StaticCellInfo_120_677, &STATE_VARIABLE_StaticCellInfo_122_459);
        ll_backend__global_data__add_scalar_static_cell_4_p_0(UserLocnsArray_442, &UserLocnsDataAddr_444, STATE_VARIABLE_StaticCellInfo_122_459, STATE_VARIABLE_StaticCellInfo_104);
        {
          Var_460 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_460, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
          MR_hl_field(MR_mktag(3), Var_460, 1) = ((MR_Box) (UserLocnsDataAddr_444));
          MR_hl_field(MR_mktag(3), Var_460, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          UserLocnsRval_445 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UserLocnsRval_445, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), UserLocnsRval_445, 1) = ((MR_Box) (Var_460));
        }
        TypeInfo_377_546 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[1];
        mercury__list__length_2_p_0(TypeInfo_377_546, UserAttrMaybeVarNums_443, &NumVarNums_446);
        Var_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 0)));
        Var_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 1)));
        Var_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 2)));
        Var_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 3)));
        Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 4)));
        Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 5)));
        Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 6)));
        Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 7)));
        Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 8)));
        VarNumSlotNum0_447 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 9)));
        Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 10)));
        Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 11)));
        Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 12)));
        Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 13)));
        Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 14)));
        Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 15)));
        Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 16)));
        Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 17)));
        Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 18)));
        Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_121_678, (MR_Integer) 19)));
        VarNumSlotNum_448 = (VarNumSlotNum0_447 + NumVarNums_446);
        VarNums0_450 = Var_479;
        {
          UserAttrVarNumsSlot_449 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserAttrVarNumsSlot_449, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(0), UserAttrVarNumsSlot_449, 1) = ((MR_Box) (VarNumSlotNum0_447));
        }
        Var_464 = mercury__cord__from_list_1_f_0(TypeInfo_377_546, UserAttrMaybeVarNums_443);
        VarNums_451 = mercury__cord__f_43_43_2_f_0(TypeInfo_377_546, VarNums0_450, Var_464);
        Var_488 = Var_469;
        Var_489 = Var_470;
        Var_490 = Var_471;
        Var_491 = Var_472;
        Var_492 = Var_473;
        Var_493 = Var_474;
        Var_494 = Var_475;
        Var_495 = Var_476;
        UserEventCounter0_452 = Var_477;
        Var_496 = VarNumSlotNum_448;
        Var_497 = Var_478;
        Var_499 = Var_480;
        Var_500 = Var_481;
        Var_501 = Var_482;
        Var_502 = Var_483;
        Var_503 = Var_484;
        Var_504 = Var_485;
        Var_505 = Var_486;
        Var_506 = Var_487;
        mercury__counter__allocate_3_p_0(&UserEventSlotNum_453, UserEventCounter0_452, &UserEventCounter_454);
        Var_507 = Var_488;
        Var_508 = Var_489;
        Var_509 = Var_490;
        Var_510 = Var_491;
        Var_511 = Var_492;
        Var_512 = Var_493;
        Var_513 = Var_494;
        Var_514 = Var_495;
        Var_516 = Var_496;
        UserEvents0_457 = Var_497;
        Var_517 = VarNums_451;
        Var_518 = Var_499;
        Var_519 = Var_500;
        Var_520 = Var_501;
        Var_521 = Var_502;
        Var_522 = Var_503;
        Var_523 = Var_504;
        Var_524 = Var_505;
        Var_525 = Var_506;
        {
          UserEventSlot_455 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserEventSlot_455, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), UserEventSlot_455, 1) = ((MR_Box) (UserEventSlotNum_453));
        }
        {
          UserData_456 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserData_456, 0) = ((MR_Box) (UserEventNumber_440));
          MR_hl_field(MR_mktag(0), UserData_456, 1) = ((MR_Box) (UserLocnsRval_445));
          MR_hl_field(MR_mktag(0), UserData_456, 2) = ((MR_Box) (UserAttrVarNumsSlot_449));
        }
        TypeCtorInfo_378_547 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0;
        Var_468 = mercury__cord__singleton_1_f_0(TypeCtorInfo_378_547, ((MR_Box) (UserData_456)));
        UserEvents_458 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_378_547, UserEvents0_457, Var_468);
        {
          STATE_VARIABLE_LabelLayoutInfo_133_689 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 0) = ((MR_Box) (Var_507));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 1) = ((MR_Box) (Var_508));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 2) = ((MR_Box) (Var_509));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 3) = ((MR_Box) (Var_510));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 4) = ((MR_Box) (Var_511));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 5) = ((MR_Box) (Var_512));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 6) = ((MR_Box) (Var_513));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 7) = ((MR_Box) (Var_514));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 8) = ((MR_Box) (UserEventCounter_454));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 9) = ((MR_Box) (Var_516));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 10) = ((MR_Box) (UserEvents_458));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 11) = ((MR_Box) (Var_517));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 12) = ((MR_Box) (Var_518));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 13) = ((MR_Box) (Var_519));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 14) = ((MR_Box) (Var_520));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 15) = ((MR_Box) (Var_521));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 16) = ((MR_Box) (Var_522));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 17) = ((MR_Box) (Var_523));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 18) = ((MR_Box) (Var_524));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, 19) = ((MR_Box) (Var_525));
        }
        {
          MaybeUserDataSlot_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeUserDataSlot_66, 0) = ((MR_Box) (UserEventSlot_455));
        }
      }
      if ((Trace_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        LabelNumber_91 = (MR_Integer) 0;
        STATE_VARIABLE_LabelLayoutInfo_134_134 = STATE_VARIABLE_LabelLayoutInfo_133_689;
      }
      else
      {
        MR_Word LabelNumCounter0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 18)));
        MR_Integer LabelNumber0_89;
        MR_Word LabelNumCounter_90;
        MR_Integer Var_316 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 0)));
        MR_Integer Var_317 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 1)));
        MR_Integer Var_318 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 2)));
        MR_Integer Var_319 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 3)));
        MR_Word Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 4)));
        MR_Word Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 5)));
        MR_Word Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 6)));
        MR_Word Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 7)));
        MR_Word Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 8)));
        MR_Integer Var_325 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 9)));
        MR_Word Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 10)));
        MR_Word Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 11)));
        MR_Word Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 12)));
        MR_Word Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 13)));
        MR_Word Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 14)));
        MR_Word Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 15)));
        MR_Word Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 16)));
        MR_Word Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 17)));
        MR_Word Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_133_689, (MR_Integer) 19)));
        MR_Integer Var_135;

        mercury__counter__allocate_3_p_0(&LabelNumber0_89, LabelNumCounter0_88, &LabelNumCounter_90);
        {
          STATE_VARIABLE_LabelLayoutInfo_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 0) = ((MR_Box) (Var_316));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 1) = ((MR_Box) (Var_317));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 2) = ((MR_Box) (Var_318));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 3) = ((MR_Box) (Var_319));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 4) = ((MR_Box) (Var_320));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 5) = ((MR_Box) (Var_321));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 6) = ((MR_Box) (Var_322));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 7) = ((MR_Box) (Var_323));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 8) = ((MR_Box) (Var_324));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 9) = ((MR_Box) (Var_325));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 10) = ((MR_Box) (Var_326));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 11) = ((MR_Box) (Var_327));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 12) = ((MR_Box) (Var_328));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 13) = ((MR_Box) (Var_329));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 14) = ((MR_Box) (Var_330));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 15) = ((MR_Box) (Var_331));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 16) = ((MR_Box) (Var_332));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 17) = ((MR_Box) (Var_333));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 18) = ((MR_Box) (LabelNumCounter_90));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_134_134, 19) = ((MR_Box) (Var_334));
        }
        Var_135 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 16);
        succeeded = (LabelNumber0_89 < Var_135);
        if (succeeded)
          LabelNumber_91 = LabelNumber0_89;
        else
          LabelNumber_91 = (MR_Integer) 0;
      }
    }
    {
      Label_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Label_92, 0) = ((MR_Box) (LabelNum_17));
      MR_hl_field(MR_mktag(0), Label_92, 1) = ((MR_Box) (ProcLabel_14));
    }
    {
      BasicLayout_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BasicLayout_93, 0) = ((MR_Box) (ProcLabel_14));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 1) = ((MR_Box) (LabelNum_17));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 2) = ((MR_Box) (ProcLayoutName_15));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 3) = ((MR_Box) (MaybePort_43));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 4) = ((MR_Box) (MaybeIsHidden_44));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 5) = ((MR_Box) (LabelNumber_91));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 6) = ((MR_Box) (MaybeGoalPath_47));
      MR_hl_field(MR_mktag(0), BasicLayout_93, 7) = ((MR_Box) (MaybeUserDataSlot_66));
    }
    switch (MR_tag((MR_Word) MaybeVarInfo_61)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NoVarsLayout_95;

          LabelVars_94 = (MR_Integer) 0;
          NoVarsLayout_95 = (MR_Word) BasicLayout_93;
          ll_backend__stack_layout__add_no_vars_internal_layout_data_5_p_0(Label_92, NoVarsLayout_95, &Slot_96, STATE_VARIABLE_LabelLayoutInfo_134_134, STATE_VARIABLE_LabelLayoutInfo_106);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SLayoutVarInfo_97 = (MR_Word) MR_body(((MR_Word) MaybeVarInfo_61), (MR_Integer) 1);
          MR_Word SVarsLayout_98;

          LabelVars_94 = (MR_Integer) 1;
          {
            SVarsLayout_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SVarsLayout_98, 0) = ((MR_Box) (BasicLayout_93));
            MR_hl_field(MR_mktag(0), SVarsLayout_98, 1) = ((MR_Box) (SLayoutVarInfo_97));
          }
          ll_backend__stack_layout__add_short_vars_internal_layout_data_5_p_0(Label_92, SVarsLayout_98, &Slot_96, STATE_VARIABLE_LabelLayoutInfo_134_134, STATE_VARIABLE_LabelLayoutInfo_106);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LLayoutVarInfo_99 = (MR_Word) MR_body(((MR_Word) MaybeVarInfo_61), (MR_Integer) 2);
          MR_Word LVarsLayout_100;

          LabelVars_94 = (MR_Integer) 2;
          {
            LVarsLayout_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LVarsLayout_100, 0) = ((MR_Box) (BasicLayout_93));
            MR_hl_field(MR_mktag(0), LVarsLayout_100, 1) = ((MR_Box) (LLayoutVarInfo_99));
          }
          ll_backend__stack_layout__add_long_vars_internal_layout_data_5_p_0(Label_92, LVarsLayout_100, &Slot_96, STATE_VARIABLE_LabelLayoutInfo_134_134, STATE_VARIABLE_LabelLayoutInfo_106);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *LabelLayout_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcLabel_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LabelNum_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LabelVars_94));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Slot_96));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Internal_18));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1869__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_layout__IntroducedFrom__pred__construct_label_var_info__1867__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv3_Locn_5;

    conv3_Locn_5 = ll_backend__stack_layout__project_array_slot_locn_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_Locn_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv2_Locn_5;

    conv2_Locn_5 = ll_backend__stack_layout__project_array_slot_locn_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_Locn_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_VarNum_4;

    conv1_VarNum_4 = ll_backend__stack_layout__project_array_slot_hlds_var_num_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_VarNum_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__stack_layout__construct_label_var_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_PTI_3;

    conv0_PTI_3 = ll_backend__stack_layout__project_array_slot_pti_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_PTI_3));
    return wrapper_arg_2;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_541_541;
    MR_Word TypeCtorInfo_542_542;
    MR_Word TypeCtorInfo_545_545;
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
    MR_Word STATE_VARIABLE_StaticCellInfo_70_70;
    MR_Integer Var_72;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Integer Var_87;
    MR_Integer Var_88;
    MR_Integer Var_89;
    MR_Word STATE_VARIABLE_LabelLayoutInfo_95_95;
    MR_Word STATE_VARIABLE_LabelLayoutInfo_102_102;
    MR_Word STATE_VARIABLE_LabelLayoutInfo_108_108;
    MR_Word Var_119;
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
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_97;
    MR_Word Var_238;
    MR_Word Var_239;
    MR_Word Var_240;
    MR_Word Var_241;
    MR_Word Var_242;
    MR_Word Var_243;
    MR_Word Var_244;
    MR_Word Var_245;
    MR_Word Var_246;
    MR_Word Var_247;
    MR_Word Var_248;

    ll_backend__stack_layout__construct_tvar_vector_4_p_0(TVarLocnMap_13, &TypeParamsRval_17, STATE_VARIABLE_StaticCellInfo_0_66, &STATE_VARIABLE_StaticCellInfo_70_70);
    mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0, VarInfoSet_11, &VarInfos0_18);
    ll_backend__stack_layout__sort_livevals_2_p_0(VarInfos0_18, &VarInfos_19);
    Var_72 = ll_backend__stack_layout__short_count_bits_0_f_0();
    mercury__int__pow_3_p_0((MR_Integer) 2, Var_72, &BytesLimit_20);
    ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1)));
    Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2)));
    Var_121 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 4)));
    Var_126 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(VarInfos_19, ModuleInfo_21, VarNumMap_12, (MR_Integer) 0, BytesLimit_20, &LongArrayInfos_22, &ShortArrayInfos_23, STATE_VARIABLE_StaticCellInfo_70_70, STATE_VARIABLE_StaticCellInfo_67);
    TypeCtorInfo_541_541 = (MR_Word) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_liveval_array_slot_0;
    AllArrayInfos_24 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_541_541, LongArrayInfos_22, ShortArrayInfos_23);
    TypeCtorInfo_542_542 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    PTIs_25 = mercury__list__map_2_f_0(TypeCtorInfo_541_541, TypeCtorInfo_542_542, (MR_Word) &ll_backend__stack_layout_scalar_common_1[41], AllArrayInfos_24);
    TypeCtorInfo_545_545 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    HLDSVarNums_26 = mercury__list__map_2_f_0(TypeCtorInfo_541_541, TypeCtorInfo_545_545, (MR_Word) &ll_backend__stack_layout_scalar_common_1[42], AllArrayInfos_24);
    ShortLocns_27 = mercury__list__map_2_f_0(TypeCtorInfo_541_541, TypeCtorInfo_545_545, (MR_Word) &ll_backend__stack_layout_scalar_common_1[43], ShortArrayInfos_23);
    LongLocns_28 = mercury__list__map_2_f_0(TypeCtorInfo_541_541, TypeCtorInfo_545_545, (MR_Word) &ll_backend__stack_layout_scalar_common_1[44], LongArrayInfos_22);
    mercury__list__length_2_p_0(TypeCtorInfo_542_542, PTIs_25, &NumPTIs_29);
    mercury__list__length_2_p_0(TypeCtorInfo_545_545, HLDSVarNums_26, &NumHLDSVarNums_30);
    mercury__list__length_2_p_0(TypeCtorInfo_545_545, ShortLocns_27, &NumShortLocns_31);
    mercury__list__length_2_p_0(TypeCtorInfo_545_545, LongLocns_28, &NumLongLocns_32);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_5));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (NumPTIs_29));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (NumHLDSVarNums_30));
    }
    mercury__require__expect_4_p_0(Var_79, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_label_var_info\'/9", (MR_String) "NumPTIs != NumHLDSVarNums");
    Var_87 = (NumLongLocns_32 + NumShortLocns_31);
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ll_backend__stack_layout__construct_label_var_info_9_p_0_6));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (NumPTIs_29));
      MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (Var_87));
    }
    mercury__require__expect_4_p_0(Var_83, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_label_var_info\'/9", (MR_String) "NumPTIs != NumLongLocns + NumShortLocns");
    Var_89 = ll_backend__stack_layout__short_count_bits_0_f_0();
    Var_88 = mercury__int__f_60_60_2_f_0(NumLongLocns_32, Var_89);
    EncodedLength_33 = (Var_88 + NumShortLocns_31);
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2)));
    Var_133 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    CompressArrays_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 4)));
    Var_137 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    succeeded = (NumPTIs_29 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word AllRevPTIs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 4)));
      MR_Integer NextPTISlot0_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 0)));
      MR_Word RevPTIs_37;
      MR_Integer Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 1)));
      MR_Integer Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 2)));
      MR_Integer Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 3)));
      MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 5)));
      MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 6)));
      MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 7)));
      MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 8)));
      MR_Integer Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 9)));
      MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 10)));
      MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 11)));
      MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 12)));
      MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 13)));
      MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 14)));
      MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 15)));
      MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 16)));
      MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 17)));
      MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 18)));
      MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 19)));
      MR_Integer OldPTIOffset_39;
      MR_Integer Var_91;
      MR_Integer Var_92;
      MR_Integer CompressionLimit_115;
      MR_Integer Var_179;
      MR_Integer Var_180;
      MR_Integer Var_181;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Word Var_186;
      MR_Integer Var_187;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_191;
      MR_Word Var_192;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_196;
      MR_Word Var_197;

      mercury__list__reverse_2_p_0(TypeCtorInfo_542_542, PTIs_25, &RevPTIs_37);
      succeeded = ((MR_tag((MR_Word) CompressArrays_34)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CompressionLimit_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CompressArrays_34, (MR_Integer) 0)));
        Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 0)));
        Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 1)));
        Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 2)));
        Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 3)));
        Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 4)));
        Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 5)));
        Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 6)));
        Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 7)));
        Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 8)));
        Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 9)));
        Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 10)));
        Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 11)));
        Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 12)));
        Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 13)));
        Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 14)));
        Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 15)));
        Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 16)));
        Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 17)));
        Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 18)));
        Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 19)));
        succeeded = (Var_91 <= CompressionLimit_115);
        if (succeeded)
        {
          Var_92 = (MR_Integer) 0;
          succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_114_118_97_108_93_95_48_95_49_4_p_0(RevPTIs_37, AllRevPTIs0_35, Var_92, &OldPTIOffset_39);
        }
      }
      if (succeeded)
      {
        MR_Integer Var_93 = (NextPTISlot0_36 - OldPTIOffset_39);

        PTISlot_40 = (Var_93 - NumPTIs_29);
        STATE_VARIABLE_LabelLayoutInfo_95_95 = STATE_VARIABLE_LabelLayoutInfo_0_68;
      }
      else
      {
        MR_Word AllRevPTIs_41;
        MR_Integer NextPTISlot_42;
        MR_Integer Var_199;
        MR_Integer Var_200;
        MR_Integer Var_201;
        MR_Word Var_203;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Integer Var_207;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_214;
        MR_Word Var_215;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Integer Var_198;
        MR_Word Var_202;

        AllRevPTIs_41 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_542_542, RevPTIs_37, AllRevPTIs0_35);
        Var_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 0)));
        Var_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 1)));
        Var_200 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 2)));
        Var_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 3)));
        Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 4)));
        Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 5)));
        Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 6)));
        Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 7)));
        Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 8)));
        Var_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 9)));
        Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 10)));
        Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 11)));
        Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 12)));
        Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 13)));
        Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 14)));
        Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 15)));
        Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 16)));
        Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 17)));
        Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 18)));
        Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_0_68, (MR_Integer) 19)));
        PTISlot_40 = NextPTISlot0_36;
        NextPTISlot_42 = (NextPTISlot0_36 + NumPTIs_29);
        {
          STATE_VARIABLE_LabelLayoutInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 0) = ((MR_Box) (NextPTISlot_42));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 1) = ((MR_Box) (Var_199));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 2) = ((MR_Box) (Var_200));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 3) = ((MR_Box) (Var_201));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 4) = ((MR_Box) (AllRevPTIs_41));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 5) = ((MR_Box) (Var_203));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 6) = ((MR_Box) (Var_204));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 7) = ((MR_Box) (Var_205));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 8) = ((MR_Box) (Var_206));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 9) = ((MR_Box) (Var_207));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 10) = ((MR_Box) (Var_208));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 11) = ((MR_Box) (Var_209));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 12) = ((MR_Box) (Var_210));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 13) = ((MR_Box) (Var_211));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 14) = ((MR_Box) (Var_212));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 15) = ((MR_Box) (Var_213));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 16) = ((MR_Box) (Var_214));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 17) = ((MR_Box) (Var_215));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 18) = ((MR_Box) (Var_216));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, 19) = ((MR_Box) (Var_217));
        }
      }
    }
    else
    {
      PTISlot_40 = (MR_Integer) -1;
      STATE_VARIABLE_LabelLayoutInfo_95_95 = STATE_VARIABLE_LabelLayoutInfo_0_68;
    }
    succeeded = (NumHLDSVarNums_30 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)));
      Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1)));
      Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2)));
      Var_241 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) & (MR_Integer) 1);
      Var_242 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_243 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 4)));
      Var_245 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) & (MR_Integer) 1);
      Var_246 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_247 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_248 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      succeeded = (Var_97 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word AllRevHLDSVarNums0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 7)));
      MR_Integer NextHLDSVarNumSlot0_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 3)));
      MR_Word RevHLDSVarNums_45;
      MR_Integer Var_249 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 0)));
      MR_Integer Var_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 1)));
      MR_Integer Var_251 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 2)));
      MR_Word Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 4)));
      MR_Word Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 5)));
      MR_Word Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 6)));
      MR_Word Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 8)));
      MR_Integer Var_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 9)));
      MR_Word Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 10)));
      MR_Word Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 11)));
      MR_Word Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 12)));
      MR_Word Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 13)));
      MR_Word Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 14)));
      MR_Word Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 15)));
      MR_Word Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 16)));
      MR_Word Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 17)));
      MR_Word Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 18)));
      MR_Word Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 19)));
      MR_Integer OldHLDSVarNumsOffset_46;
      MR_Integer Var_98;
      MR_Integer Var_99;
      MR_Integer CompressionLimit_116;
      MR_Integer Var_287;
      MR_Integer Var_288;
      MR_Integer Var_289;
      MR_Word Var_290;
      MR_Word Var_291;
      MR_Word Var_292;
      MR_Word Var_293;
      MR_Word Var_294;
      MR_Integer Var_295;
      MR_Word Var_296;
      MR_Word Var_297;
      MR_Word Var_298;
      MR_Word Var_299;
      MR_Word Var_300;
      MR_Word Var_301;
      MR_Word Var_302;
      MR_Word Var_303;
      MR_Word Var_304;
      MR_Word Var_305;

      mercury__list__reverse_2_p_0(TypeCtorInfo_545_545, HLDSVarNums_26, &RevHLDSVarNums_45);
      succeeded = ((MR_tag((MR_Word) CompressArrays_34)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CompressionLimit_116 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CompressArrays_34, (MR_Integer) 0)));
        Var_287 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 0)));
        Var_288 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 1)));
        Var_289 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 2)));
        Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 3)));
        Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 4)));
        Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 5)));
        Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 6)));
        Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 7)));
        Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 8)));
        Var_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 9)));
        Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 10)));
        Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 11)));
        Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 12)));
        Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 13)));
        Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 14)));
        Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 15)));
        Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 16)));
        Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 17)));
        Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 18)));
        Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 19)));
        succeeded = (Var_98 <= CompressionLimit_116);
        if (succeeded)
        {
          Var_99 = (MR_Integer) 0;
          succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevHLDSVarNums_45, AllRevHLDSVarNums0_43, Var_99, &OldHLDSVarNumsOffset_46);
        }
      }
      if (succeeded)
      {
        MR_Integer Var_100 = (NextHLDSVarNumSlot0_44 - OldHLDSVarNumsOffset_46);

        HLDSVarNumSlot_47 = (Var_100 - NumHLDSVarNums_30);
        STATE_VARIABLE_LabelLayoutInfo_102_102 = STATE_VARIABLE_LabelLayoutInfo_95_95;
      }
      else
      {
        MR_Word AllRevHLDSVarNums_48;
        MR_Integer NextHLDSVarNumSlot_49;
        MR_Integer Var_306;
        MR_Integer Var_307;
        MR_Integer Var_308;
        MR_Word Var_310;
        MR_Word Var_311;
        MR_Word Var_312;
        MR_Word Var_314;
        MR_Integer Var_315;
        MR_Word Var_316;
        MR_Word Var_317;
        MR_Word Var_318;
        MR_Word Var_319;
        MR_Word Var_320;
        MR_Word Var_321;
        MR_Word Var_322;
        MR_Word Var_323;
        MR_Word Var_324;
        MR_Word Var_325;
        MR_Integer Var_309;
        MR_Word Var_313;

        AllRevHLDSVarNums_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_545_545, RevHLDSVarNums_45, AllRevHLDSVarNums0_43);
        Var_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 0)));
        Var_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 1)));
        Var_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 2)));
        Var_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 3)));
        Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 4)));
        Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 5)));
        Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 6)));
        Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 7)));
        Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 8)));
        Var_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 9)));
        Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 10)));
        Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 11)));
        Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 12)));
        Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 13)));
        Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 14)));
        Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 15)));
        Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 16)));
        Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 17)));
        Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 18)));
        Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_95_95, (MR_Integer) 19)));
        HLDSVarNumSlot_47 = NextHLDSVarNumSlot0_44;
        NextHLDSVarNumSlot_49 = (NextHLDSVarNumSlot0_44 + NumHLDSVarNums_30);
        {
          STATE_VARIABLE_LabelLayoutInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 0) = ((MR_Box) (Var_306));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 1) = ((MR_Box) (Var_307));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 2) = ((MR_Box) (Var_308));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 3) = ((MR_Box) (NextHLDSVarNumSlot_49));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 4) = ((MR_Box) (Var_310));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 5) = ((MR_Box) (Var_311));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 6) = ((MR_Box) (Var_312));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 7) = ((MR_Box) (AllRevHLDSVarNums_48));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 8) = ((MR_Box) (Var_314));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 9) = ((MR_Box) (Var_315));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 10) = ((MR_Box) (Var_316));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 11) = ((MR_Box) (Var_317));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 12) = ((MR_Box) (Var_318));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 13) = ((MR_Box) (Var_319));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 14) = ((MR_Box) (Var_320));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 15) = ((MR_Box) (Var_321));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 16) = ((MR_Box) (Var_322));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 17) = ((MR_Box) (Var_323));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 18) = ((MR_Box) (Var_324));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, 19) = ((MR_Box) (Var_325));
        }
      }
    }
    else
    {
      HLDSVarNumSlot_47 = (MR_Integer) -1;
      STATE_VARIABLE_LabelLayoutInfo_102_102 = STATE_VARIABLE_LabelLayoutInfo_95_95;
    }
    succeeded = (NumShortLocns_31 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word AllRevShortLocns0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 6)));
      MR_Integer NextShortLocnSlot0_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 2)));
      MR_Word RevShortLocns_52;
      MR_Integer Var_346 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 0)));
      MR_Integer Var_347 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 1)));
      MR_Integer Var_349 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 3)));
      MR_Word Var_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 4)));
      MR_Word Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 5)));
      MR_Word Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 7)));
      MR_Word Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 8)));
      MR_Integer Var_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 9)));
      MR_Word Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 10)));
      MR_Word Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 11)));
      MR_Word Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 12)));
      MR_Word Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 13)));
      MR_Word Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 14)));
      MR_Word Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 15)));
      MR_Word Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 16)));
      MR_Word Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 17)));
      MR_Word Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 18)));
      MR_Word Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 19)));
      MR_Integer OldShortLocnsOffset_53;
      MR_Integer Var_104;
      MR_Integer Var_105;
      MR_Integer CompressionLimit_117;
      MR_Integer Var_384;
      MR_Integer Var_385;
      MR_Integer Var_386;
      MR_Word Var_387;
      MR_Word Var_388;
      MR_Word Var_389;
      MR_Word Var_390;
      MR_Word Var_391;
      MR_Integer Var_392;
      MR_Word Var_393;
      MR_Word Var_394;
      MR_Word Var_395;
      MR_Word Var_396;
      MR_Word Var_397;
      MR_Word Var_398;
      MR_Word Var_399;
      MR_Word Var_400;
      MR_Word Var_401;
      MR_Word Var_402;

      mercury__list__reverse_2_p_0(TypeCtorInfo_545_545, ShortLocns_27, &RevShortLocns_52);
      succeeded = ((MR_tag((MR_Word) CompressArrays_34)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CompressionLimit_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CompressArrays_34, (MR_Integer) 0)));
        Var_384 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 0)));
        Var_385 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 1)));
        Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 2)));
        Var_386 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 3)));
        Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 4)));
        Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 5)));
        Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 6)));
        Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 7)));
        Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 8)));
        Var_392 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 9)));
        Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 10)));
        Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 11)));
        Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 12)));
        Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 13)));
        Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 14)));
        Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 15)));
        Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 16)));
        Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 17)));
        Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 18)));
        Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 19)));
        succeeded = (Var_104 <= CompressionLimit_117);
        if (succeeded)
        {
          Var_105 = (MR_Integer) 0;
          succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevShortLocns_52, AllRevShortLocns0_50, Var_105, &OldShortLocnsOffset_53);
        }
      }
      if (succeeded)
      {
        MR_Integer Var_106 = (NextShortLocnSlot0_51 - OldShortLocnsOffset_53);

        ShortLocnSlot_54 = (Var_106 - NumShortLocns_31);
        STATE_VARIABLE_LabelLayoutInfo_108_108 = STATE_VARIABLE_LabelLayoutInfo_102_102;
      }
      else
      {
        MR_Word AllRevShortLocns_55;
        MR_Integer NextShortLocnSlot_56;
        MR_Integer Var_403;
        MR_Integer Var_404;
        MR_Integer Var_406;
        MR_Word Var_407;
        MR_Word Var_408;
        MR_Word Var_410;
        MR_Word Var_411;
        MR_Integer Var_412;
        MR_Word Var_413;
        MR_Word Var_414;
        MR_Word Var_415;
        MR_Word Var_416;
        MR_Word Var_417;
        MR_Word Var_418;
        MR_Word Var_419;
        MR_Word Var_420;
        MR_Word Var_421;
        MR_Word Var_422;
        MR_Integer Var_405;
        MR_Word Var_409;

        AllRevShortLocns_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_545_545, RevShortLocns_52, AllRevShortLocns0_50);
        Var_403 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 0)));
        Var_404 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 1)));
        Var_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 2)));
        Var_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 3)));
        Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 4)));
        Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 5)));
        Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 6)));
        Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 7)));
        Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 8)));
        Var_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 9)));
        Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 10)));
        Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 11)));
        Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 12)));
        Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 13)));
        Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 14)));
        Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 15)));
        Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 16)));
        Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 17)));
        Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 18)));
        Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_102_102, (MR_Integer) 19)));
        ShortLocnSlot_54 = NextShortLocnSlot0_51;
        NextShortLocnSlot_56 = (NextShortLocnSlot0_51 + NumShortLocns_31);
        {
          STATE_VARIABLE_LabelLayoutInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 0) = ((MR_Box) (Var_403));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 1) = ((MR_Box) (Var_404));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 2) = ((MR_Box) (NextShortLocnSlot_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 3) = ((MR_Box) (Var_406));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 4) = ((MR_Box) (Var_407));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 5) = ((MR_Box) (Var_408));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 6) = ((MR_Box) (AllRevShortLocns_55));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 7) = ((MR_Box) (Var_410));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 8) = ((MR_Box) (Var_411));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 9) = ((MR_Box) (Var_412));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 10) = ((MR_Box) (Var_413));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 11) = ((MR_Box) (Var_414));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 12) = ((MR_Box) (Var_415));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 13) = ((MR_Box) (Var_416));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 14) = ((MR_Box) (Var_417));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 15) = ((MR_Box) (Var_418));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 16) = ((MR_Box) (Var_419));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 17) = ((MR_Box) (Var_420));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 18) = ((MR_Box) (Var_421));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, 19) = ((MR_Box) (Var_422));
        }
      }
    }
    else
    {
      ShortLocnSlot_54 = (MR_Integer) -1;
      STATE_VARIABLE_LabelLayoutInfo_108_108 = STATE_VARIABLE_LabelLayoutInfo_102_102;
    }
    succeeded = (NumLongLocns_32 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word AllRevLongLocns0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 5)));
      MR_Integer NextLongLocnSlot0_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 1)));
      MR_Word RevLongLocns_59;
      MR_Integer LongLocnSlot_61;
      MR_Word LVarInfo_64;
      MR_Integer Var_443 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 0)));
      MR_Integer Var_445 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 2)));
      MR_Integer Var_446 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 3)));
      MR_Word Var_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 4)));
      MR_Word Var_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 6)));
      MR_Word Var_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 7)));
      MR_Word Var_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 8)));
      MR_Integer Var_451 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 9)));
      MR_Word Var_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 10)));
      MR_Word Var_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 11)));
      MR_Word Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 12)));
      MR_Word Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 13)));
      MR_Word Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 14)));
      MR_Word Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 15)));
      MR_Word Var_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 16)));
      MR_Word Var_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 17)));
      MR_Word Var_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 18)));
      MR_Word Var_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 19)));
      MR_Integer OldLongLocnsOffset_60;
      MR_Integer Var_110;
      MR_Integer Var_111;
      MR_Integer CompressionLimit_118;
      MR_Integer Var_481;
      MR_Integer Var_482;
      MR_Integer Var_483;
      MR_Word Var_484;
      MR_Word Var_485;
      MR_Word Var_486;
      MR_Word Var_487;
      MR_Word Var_488;
      MR_Integer Var_489;
      MR_Word Var_490;
      MR_Word Var_491;
      MR_Word Var_492;
      MR_Word Var_493;
      MR_Word Var_494;
      MR_Word Var_495;
      MR_Word Var_496;
      MR_Word Var_497;
      MR_Word Var_498;
      MR_Word Var_499;

      mercury__list__reverse_2_p_0(TypeCtorInfo_545_545, LongLocns_28, &RevLongLocns_59);
      succeeded = ((MR_tag((MR_Word) CompressArrays_34)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CompressionLimit_118 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CompressArrays_34, (MR_Integer) 0)));
        Var_481 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 0)));
        Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 1)));
        Var_482 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 2)));
        Var_483 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 3)));
        Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 4)));
        Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 5)));
        Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 6)));
        Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 7)));
        Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 8)));
        Var_489 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 9)));
        Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 10)));
        Var_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 11)));
        Var_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 12)));
        Var_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 13)));
        Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 14)));
        Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 15)));
        Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 16)));
        Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 17)));
        Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 18)));
        Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 19)));
        succeeded = (Var_110 <= CompressionLimit_118);
        if (succeeded)
        {
          Var_111 = (MR_Integer) 0;
          succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevLongLocns_59, AllRevLongLocns0_57, Var_111, &OldLongLocnsOffset_60);
        }
      }
      if (succeeded)
      {
        MR_Integer Var_112 = (NextLongLocnSlot0_58 - OldLongLocnsOffset_60);

        LongLocnSlot_61 = (Var_112 - NumLongLocns_32);
        *STATE_VARIABLE_LabelLayoutInfo_69 = STATE_VARIABLE_LabelLayoutInfo_108_108;
      }
      else
      {
        MR_Word AllRevLongLocns_62;
        MR_Integer NextLongLocnSlot_63;
        MR_Integer Var_500;
        MR_Integer Var_502;
        MR_Integer Var_503;
        MR_Word Var_504;
        MR_Word Var_506;
        MR_Word Var_507;
        MR_Word Var_508;
        MR_Integer Var_509;
        MR_Word Var_510;
        MR_Word Var_511;
        MR_Word Var_512;
        MR_Word Var_513;
        MR_Word Var_514;
        MR_Word Var_515;
        MR_Word Var_516;
        MR_Word Var_517;
        MR_Word Var_518;
        MR_Word Var_519;
        MR_Integer Var_501;
        MR_Word Var_505;

        AllRevLongLocns_62 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_545_545, RevLongLocns_59, AllRevLongLocns0_57);
        Var_500 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 0)));
        Var_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 1)));
        Var_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 2)));
        Var_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 3)));
        Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 4)));
        Var_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 5)));
        Var_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 6)));
        Var_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 7)));
        Var_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 8)));
        Var_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 9)));
        Var_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 10)));
        Var_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 11)));
        Var_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 12)));
        Var_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 13)));
        Var_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 14)));
        Var_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 15)));
        Var_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 16)));
        Var_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 17)));
        Var_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 18)));
        Var_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LabelLayoutInfo_108_108, (MR_Integer) 19)));
        LongLocnSlot_61 = NextLongLocnSlot0_58;
        NextLongLocnSlot_63 = (NextLongLocnSlot0_58 + NumLongLocns_32);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_LabelLayoutInfo_69 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_500));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NextLongLocnSlot_63));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_502));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_503));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_504));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (AllRevLongLocns_62));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_506));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_507));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_508));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_509));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_510));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_511));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_512));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_513));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_514));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_515));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_516));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_517));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_518));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_519));
        }
      }
      {
        LVarInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LVarInfo_64, 0) = ((MR_Box) (EncodedLength_33));
        MR_hl_field(MR_mktag(0), LVarInfo_64, 1) = ((MR_Box) (TypeParamsRval_17));
        MR_hl_field(MR_mktag(0), LVarInfo_64, 2) = ((MR_Box) (PTISlot_40));
        MR_hl_field(MR_mktag(0), LVarInfo_64, 3) = ((MR_Box) (HLDSVarNumSlot_47));
        MR_hl_field(MR_mktag(0), LVarInfo_64, 4) = ((MR_Box) (ShortLocnSlot_54));
        MR_hl_field(MR_mktag(0), LVarInfo_64, 5) = ((MR_Box) (LongLocnSlot_61));
      }
      *MaybeVarInfo_14 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) LVarInfo_64);
    }
    else
    {
      MR_Word SVarInfo_65;

      {
        SVarInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SVarInfo_65, 0) = ((MR_Box) (EncodedLength_33));
        MR_hl_field(MR_mktag(0), SVarInfo_65, 1) = ((MR_Box) (TypeParamsRval_17));
        MR_hl_field(MR_mktag(0), SVarInfo_65, 2) = ((MR_Box) (PTISlot_40));
        MR_hl_field(MR_mktag(0), SVarInfo_65, 3) = ((MR_Box) (HLDSVarNumSlot_47));
        MR_hl_field(MR_mktag(0), SVarInfo_65, 4) = ((MR_Box) (ShortLocnSlot_54));
      }
      *MaybeVarInfo_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) SVarInfo_65);
      *STATE_VARIABLE_LabelLayoutInfo_69 = STATE_VARIABLE_LabelLayoutInfo_108_108;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_114_118_97_108_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Tail_7;
    MR_Word Head_6;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_114_118_97_108_93_95_48_95_49_2_p_0(Search_5, HeadVar__2_2);
      if (succeeded)
      {
        *FoundAtOffset_9 = CurOffset_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_11 = (CurOffset_8 + (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__2_2 = Tail_7;
        MR_Integer next_value_of_CurOffset_8 = Var_11;

        // direct tailcall eliminated
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
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_114_118_97_108_93_95_48_95_49_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word SearchHead_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word SearchTail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Head_6;
      MR_Word Tail_7;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ll_backend__llds____Unify____rval_0_0(SearchHead_4, Head_6);
        if (succeeded)
        {
          // direct tailcall eliminated
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
  {
    return (MR_Integer) 10;
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_tvar_vector_4_p_0(
  MR_Word TVarLocnMap_5,
  MR_Word * TypeParamRval_6,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_10,
  MR_Word * STATE_VARIABLE_StaticCellInfo_11)
{
  {
    MR_bool succeeded;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], TVarLocnMap_5);
    if (succeeded)
    {
      *TypeParamRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[25]);
      *STATE_VARIABLE_StaticCellInfo_11 = STATE_VARIABLE_StaticCellInfo_0_10;
    }
    else
    {
      MR_Word Vector_8;
      MR_Word DataAddr_9;
      MR_Word Var_15;
      MR_Word TVarLocns_21;
      MR_Word TypeParamLocs_22;
      MR_Integer TypeParamsLength_23;
      MR_Word LengthRval_24;
      MR_Word Var_26;
      MR_Word Var_27;

      mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], TVarLocnMap_5, &TVarLocns_21);
      ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_21, (MR_Integer) 1, &TypeParamLocs_22);
      mercury__list__length_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, TypeParamLocs_22, &TypeParamsLength_23);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (TypeParamsLength_23));
      }
      {
        LengthRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LengthRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), LengthRval_24, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (LengthRval_24));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[0])));
      }
      {
        Vector_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vector_8, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Vector_8, 1) = ((MR_Box) (TypeParamLocs_22));
      }
      ll_backend__global_data__add_scalar_static_cell_4_p_0(Vector_8, &DataAddr_9, STATE_VARIABLE_StaticCellInfo_0_10, STATE_VARIABLE_StaticCellInfo_11);
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (DataAddr_9));
        MR_hl_field(MR_mktag(3), Var_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TypeParamRval_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_15));
      }
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
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__9_9 = HeadVar__8_8;
    }
    else
    {
      MR_Word VarInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word VarInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Locn_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarInfo_17, (MR_Integer) 0)));
      MR_Word LiveValueType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarInfo_17, (MR_Integer) 1)));
      MR_Word TypeRval_29;
      MR_Integer VarNum_30;
      MR_Word STATE_VARIABLE_StaticCellInfo_44_44;
      MR_String Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), VarInfo_17, (MR_Integer) 2)));
      MR_Word Type_33;
      MR_Word Var_45;
      MR_Word Var_31;
      MR_String Var_32;
      MR_Word Var_46;
      MR_Word Var_35;
      MR_Integer Var_36;

      ll_backend__stack_layout__represent_live_value_type_and_var_num_6_p_0(VarNumMap_3, LiveValueType_27, &TypeRval_29, &VarNum_30, HeadVar__8_8, &STATE_VARIABLE_StaticCellInfo_44_44);
      succeeded = ((MR_tag((MR_Word) LiveValueType_27)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveValueType_27, (MR_Integer) 0)));
        Var_32 = ((MR_String) (MR_hl_field(MR_mktag(1), LiveValueType_27, (MR_Integer) 1)));
        Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveValueType_27, (MR_Integer) 2)));
        Var_45 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_2, Type_33);
        succeeded = (Var_45 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Locn_26)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Locn_26, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
              Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1)));
            }
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_liveval_array_slots\'/9", (MR_String) "unexpected reference to dummy value");
          return;
        }
      }
      else
      {
        MR_Integer ShortLocn_37;
        MR_Word Lval_57;
        MR_Integer Var_58;
        MR_Integer Var_59;

        succeeded = (BytesSoFar_4 < BytesLimit_5);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Locn_26)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Lval_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Locn_26, (MR_Integer) 0)));
            succeeded = ll_backend__stack_layout__represent_lval_as_byte_2_p_0(Lval_57, &ShortLocn_37);
            if (succeeded)
            {
              Var_58 = (MR_Integer) 0;
              succeeded = (Var_58 <= ShortLocn_37);
              if (succeeded)
              {
                Var_59 = (MR_Integer) 256;
                succeeded = (ShortLocn_37 < Var_59);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word ArraySlot_38;
          MR_Word ShortArraySlots0_39;
          MR_Integer Var_50;

          {
            ArraySlot_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArraySlot_38, 0) = ((MR_Box) (TypeRval_29));
            MR_hl_field(MR_mktag(0), ArraySlot_38, 1) = ((MR_Box) (VarNum_30));
            MR_hl_field(MR_mktag(0), ArraySlot_38, 2) = ((MR_Box) (ShortLocn_37));
          }
          Var_50 = (BytesSoFar_4 + (MR_Integer) 1);
          ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(VarInfos_18, ModuleInfo_2, VarNumMap_3, Var_50, BytesLimit_5, HeadVar__6_6, &ShortArraySlots0_39, STATE_VARIABLE_StaticCellInfo_44_44, HeadVar__9_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArraySlot_38));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ShortArraySlots0_39));
          }
        }
        else
        {
          MR_Integer LongLocn_40;
          MR_Word LongArraySlots0_41;
          MR_Word ArraySlot_54;

          ll_backend__stack_layout__represent_locn_as_int_2_p_0(Locn_26, &LongLocn_40);
          {
            ArraySlot_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArraySlot_54, 0) = ((MR_Box) (TypeRval_29));
            MR_hl_field(MR_mktag(0), ArraySlot_54, 1) = ((MR_Box) (VarNum_30));
            MR_hl_field(MR_mktag(0), ArraySlot_54, 2) = ((MR_Box) (LongLocn_40));
          }
          ll_backend__stack_layout__construct_liveval_array_slots_9_p_0(VarInfos_18, ModuleInfo_2, VarNumMap_3, BytesSoFar_4, BytesLimit_5, &LongArraySlots0_41, HeadVar__7_7, STATE_VARIABLE_StaticCellInfo_44_44, HeadVar__9_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArraySlot_54));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LongArraySlots0_41));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_as_byte_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Byte_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Val_37;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 4, &Val_37);
              ll_backend__stack_layout__make_tagged_byte_3_p_0((MR_Integer) 3, Val_37, Byte_2);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Val_41;
              MR_Integer Var_78;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 5, &Val_41);
              Var_78 = (Val_41 << (MR_Integer) 2);
              *Byte_2 = (Var_78 + (MR_Integer) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Val_45;
              MR_Integer Var_63;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 6, &Val_45);
              Var_63 = (Val_45 << (MR_Integer) 2);
              *Byte_2 = (Var_63 + (MR_Integer) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Val_49;
              MR_Integer Var_73;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 7, &Val_49);
              Var_73 = (Val_49 << (MR_Integer) 2);
              *Byte_2 = (Var_73 + (MR_Integer) 3);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Val_53;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 8, &Val_53);
              ll_backend__stack_layout__make_tagged_byte_3_p_0((MR_Integer) 3, Val_53, Byte_2);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Val_57;
              MR_Integer Var_83;

              ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 10, &Val_57);
              Var_83 = (Val_57 << (MR_Integer) 2);
              *Byte_2 = (Var_83 + (MR_Integer) 3);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
          MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word Var_6;
          MR_String Var_7;
          MR_String Var_8;
          MR_String Var_9;
          MR_Integer Var_10;
          MR_Integer Var_11;
          MR_Integer Var_93;
          MR_Integer Var_94;

          succeeded = (Var_5 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_10 = (MR_Integer) 0;
            Var_7 = (MR_String) "ll_backend.stack_layout";
            Var_8 = (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2";
            Var_9 = (MR_String) "bad reg";
            {
              Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_as_byte_2_p_0_3));
              MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (Num_3));
              MR_hl_field(MR_mktag(0), Var_6, 4) = ((MR_Box) (Var_10));
            }
            mercury__require__expect_4_p_0(Var_6, Var_7, Var_8, Var_9);
            Var_11 = (MR_Integer) 0;
            Var_94 = (MR_Integer) 2;
            Var_93 = (Num_3 << Var_94);
            *Byte_2 = (Var_93 + Var_11);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Num_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_14;

              {
                Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_as_byte_2_p_0_4));
                MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Num_12));
                MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_14, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2", (MR_String) "bad stackvar");
              ll_backend__stack_layout__make_tagged_byte_3_p_0((MR_Integer) 1, Num_12, Byte_2);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Num_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_22;
              MR_Integer Var_88;

              {
                Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_as_byte_2_p_0_2));
                MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Num_20));
                MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_22, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2", (MR_String) "bad parent_stackvar");
              Var_88 = (Num_20 << (MR_Integer) 2);
              *Byte_2 = (Var_88 + (MR_Integer) 1);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_30;
              MR_Integer Var_68;

              {
                Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_as_byte_2_p_0_1));
                MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Num_28));
                MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_30, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval_as_byte\'/2", (MR_String) "bad framevar");
              Var_68 = (Num_28 << (MR_Integer) 2);
              *Byte_2 = (Var_68 + (MR_Integer) 2);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__make_tagged_byte_3_p_0(
  MR_Integer Tag_4,
  MR_Integer Value_5,
  MR_Integer * TaggedValue_6)
{
  {
    MR_Integer Var_7 = (Value_5 << (MR_Integer) 2);

    *TaggedValue_6 = (Var_7 + Tag_4);
  }
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
            ll_backend__stack_layout__represent_special_live_value_type_2_p_0((MR_String) "succip", TypeRval_9);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            *TypeRval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[27]);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 2:
          {
            *TypeRval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[31]);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 3:
          {
            *TypeRval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[35]);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 4:
          {
            *TypeRval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[33]);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 5:
          {
            *TypeRval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[29]);
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
            ll_backend__stack_layout__represent_special_live_value_type_2_p_0((MR_String) "unwanted", TypeRval_9);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 9:
          {
            ll_backend__stack_layout__represent_special_live_value_type_2_p_0((MR_String) "unwanted", TypeRval_9);
            *VarNum_10 = (MR_Integer) 0;
            *STATE_VARIABLE_StaticCellInfo_20 = STATE_VARIABLE_StaticCellInfo_0_19;
          }
          break;
        case (MR_Integer) 10:
          {
            *TypeRval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[37]);
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
        MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveValueType_8, (MR_Integer) 0)));
        MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveValueType_8, (MR_Integer) 2)));
        MR_String Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), LiveValueType_8, (MR_Integer) 1)));

        ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_p_0(Type_15, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_StaticCellInfo_0_19, STATE_VARIABLE_StaticCellInfo_20, TypeRval_9);
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
  {
    MR_Word RttiTypeCtor_5;
    MR_Word DataId_6;
    MR_Word Var_10;
    MR_Word Var_12;

    {
      RttiTypeCtor_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiTypeCtor_5, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), RttiTypeCtor_5, 1) = ((MR_Box) (SpecialTypeName_3));
      MR_hl_field(MR_mktag(0), RttiTypeCtor_5, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
    }
    {
      DataId_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DataId_6, 0) = ((MR_Box) (Var_10));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (DataId_6));
      MR_hl_field(MR_mktag(3), Var_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Rval_4 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_12));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_34;

    ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1737__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_LambdaHeadVar__3_34);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_34));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_layout__IntroducedFrom__pred__sort_livevals__1731__1_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__sort_livevals_2_p_0(
  MR_Word OrigInfos_3,
  MR_Word * FinalInfos_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_39_39 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
    MR_Word NamedVarInfos0_14;
    MR_Word OtherInfos0_15;
    MR_Word CompareVarInfos_16;
    MR_Word NamedVarInfos_29;
    MR_Word OtherInfos_30;

    mercury__list__filter_4_p_0(TypeCtorInfo_39_39, (MR_Word) &ll_backend__stack_layout_scalar_common_1[27], OrigInfos_3, &NamedVarInfos0_14, &OtherInfos0_15);
    CompareVarInfos_16 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[28];
    mercury__list__sort_3_p_0(TypeCtorInfo_39_39, CompareVarInfos_16, NamedVarInfos0_14, &NamedVarInfos_29);
    mercury__list__sort_3_p_0(TypeCtorInfo_39_39, CompareVarInfos_16, OtherInfos0_15, &OtherInfos_30);
    *FinalInfos_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, NamedVarInfos_29, OtherInfos_30);
  }
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
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__7_7 = HeadVar__6_6;
  }
  else
  {
    MR_Word MaybeAttr_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word MaybeAttrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word LocnTypedRval_17;
    MR_Word LocnTypedRvals_18;
    MR_Word MaybeVarNum_19;
    MR_Word MaybeVarNums_20;
    MR_Word STATE_VARIABLE_StaticCellInfo_35_35;

    if ((MaybeAttr_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      LocnTypedRval_17 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[24];
      MaybeVarNum_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_StaticCellInfo_35_35 = HeadVar__6_6;
    }
    else
    {
      MR_Word Attr_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAttr_15, (MR_Integer) 0)));
      MR_Word Locn_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attr_22, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attr_22, (MR_Integer) 1)));
      MR_Word LocnRval_25;
      MR_Word LocnRvalType_26;
      MR_Integer VarNum_27;

      ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(Params_1, Locn_23, &LocnRval_25, &LocnRvalType_26, HeadVar__6_6, &STATE_VARIABLE_StaticCellInfo_35_35);
      {
        LocnTypedRval_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LocnTypedRval_17, 0) = ((MR_Box) (LocnRval_25));
        MR_hl_field(MR_mktag(0), LocnTypedRval_17, 1) = ((MR_Box) (LocnRvalType_26));
      }
      ll_backend__stack_layout__convert_var_to_int_3_p_0(VarNumMap_2, Var_24, &VarNum_27);
      {
        MaybeVarNum_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVarNum_19, 0) = ((MR_Box) (VarNum_27));
      }
    }
    ll_backend__stack_layout__construct_user_data_array_7_p_0(Params_1, VarNumMap_2, MaybeAttrs_16, &LocnTypedRvals_18, &MaybeVarNums_20, STATE_VARIABLE_StaticCellInfo_35_35, HeadVar__7_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LocnTypedRval_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LocnTypedRvals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeVarNum_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeVarNums_20));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(
  MR_Word Params_7,
  MR_Word LvalOrConst_8,
  MR_Word * Rval_9,
  MR_Word * Type_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_30,
  MR_Word * STATE_VARIABLE_StaticCellInfo_31)
{
  switch (MR_tag((MR_Word) LvalOrConst_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LvalOrConst_8, (MR_Integer) 0)));
        MR_Word Var_42;
        MR_Integer Word_68;
        MR_Word Var_69;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Lval_12));
        }
        ll_backend__stack_layout__represent_locn_as_int_2_p_0(Var_42, &Word_68);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Word_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_9 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_69));
        }
        *Type_10 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[0]);
        *STATE_VARIABLE_StaticCellInfo_31 = STATE_VARIABLE_StaticCellInfo_0_30;
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_locn_or_const_as_int_rval\'/6", (MR_String) "bad rval");
          return;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Tag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), LvalOrConst_8, (MR_Integer) 0)));
        MR_Word LvalOrConstBase_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), LvalOrConst_8, (MR_Integer) 1)));
        MR_Word BaseRval_21;

        ll_backend__stack_layout__represent_locn_or_const_as_int_rval_6_p_0(Params_7, LvalOrConstBase_20, &BaseRval_21, Type_10, STATE_VARIABLE_StaticCellInfo_0_30, STATE_VARIABLE_StaticCellInfo_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_9 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Tag_19));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (BaseRval_21));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LvalOrConst_8, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_locn_or_const_as_int_rval\'/6", (MR_String) "bad rval");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnboxedFloats_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word UnboxedInt64s_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word LLDSType_17;
            MR_Word DataId_18;
            MR_Word Var_36;
            MR_Word Var_38;
            MR_Word Var_40;
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
            MR_Word Var_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) & (MR_Integer) 1);
            MR_Word Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
            MR_Word Var_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) & (MR_Integer) 1);
            MR_Word Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

            LLDSType_17 = ll_backend__global_data__rval_type_as_arg_4_f_0(UnboxedFloats_14, UnboxedInt64s_15, (MR_Integer) 0, LvalOrConst_8);
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (LvalOrConst_8));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (LLDSType_17));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(Var_36, &DataId_18, STATE_VARIABLE_StaticCellInfo_0_30, STATE_VARIABLE_StaticCellInfo_31);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (DataId_18));
              MR_hl_field(MR_mktag(3), Var_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_40));
            }
            *Type_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
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
  {
    MR_Integer VarNum0_7;
    MR_Integer Limit_9;
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Box conv0_Var_10;
    MR_String Var_8;

    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[4], (MR_Word) &ll_backend__stack_layout_scalar_common_1[4], VarNumMap_4, ((MR_Box) (Var_5)), &conv0_Var_10);
    Var_10 = ((MR_Word) conv0_Var_10);
    VarNum0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
    Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
    Var_11 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ((MR_Integer) 2 * (MR_Integer) 8));
    Limit_9 = (Var_11 - (MR_Integer) 1);
    mercury__int__min_3_p_0(VarNum0_7, Limit_9, VarNum_6);
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_long_vars_internal_layout_data_5_p_0(
  MR_Word Label_6,
  MR_Word Layout_7,
  MR_Integer * Slot_8,
  MR_Word STATE_VARIABLE_LLI_0_18,
  MR_Word * STATE_VARIABLE_LLI_19)
{
  {
    MR_Word RevLayouts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 17)));
    MR_Word RevLayouts_11;
    MR_Word Counter0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 14)));
    MR_Word Counter_13;
    MR_Word LayoutName_15;
    MR_Word LabelToLayoutMap0_16;
    MR_Word LabelToLayoutMap_17;
    MR_Integer Var_81;
    MR_Integer Var_82;
    MR_Integer Var_83;
    MR_Integer Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Integer Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Integer Var_101;
    MR_Integer Var_102;
    MR_Integer Var_103;
    MR_Integer Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Integer Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 0)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 1)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 2)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 3)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 4)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 6)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 7)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 8)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 9)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 10)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 11)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 12)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 13)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 15)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 16)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 18)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 19)));
    MR_Integer Var_62;
    MR_Integer Var_63;
    MR_Integer Var_64;
    MR_Integer Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Integer Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_100;

    {
      RevLayouts_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevLayouts_11, 0) = ((MR_Box) (Layout_7));
      MR_hl_field(MR_mktag(1), RevLayouts_11, 1) = ((MR_Box) (RevLayouts0_10));
    }
    mercury__counter__allocate_3_p_0(Slot_8, Counter0_12, &Counter_13);
    {
      LayoutName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LayoutName_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[5])));
      MR_hl_field(MR_mktag(0), LayoutName_15, 1) = ((MR_Box) (*Slot_8));
    }
    Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 0)));
    Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 1)));
    Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 2)));
    Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 3)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 4)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 5)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 6)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 7)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 8)));
    Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 9)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 10)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 11)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 12)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 13)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 14)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 15)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 16)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 17)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 18)));
    LabelToLayoutMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 19)));
    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (Label_6)), ((MR_Box) (LayoutName_15)), LabelToLayoutMap0_16, &LabelToLayoutMap_17);
    Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 0)));
    Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 1)));
    Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 2)));
    Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 3)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 4)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 5)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 6)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 7)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 8)));
    Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 9)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 10)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 11)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 12)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 13)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 14)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 15)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 16)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 17)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 18)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 19)));
    Var_101 = Var_81;
    Var_102 = Var_82;
    Var_103 = Var_83;
    Var_104 = Var_84;
    Var_105 = Var_85;
    Var_106 = Var_86;
    Var_107 = Var_87;
    Var_108 = Var_88;
    Var_109 = Var_89;
    Var_110 = Var_90;
    Var_111 = Var_91;
    Var_112 = Var_92;
    Var_113 = Var_93;
    Var_114 = Var_94;
    Var_116 = Var_96;
    Var_117 = Var_97;
    Var_118 = RevLayouts_11;
    Var_119 = Var_99;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_LLI_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Counter_13));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (LabelToLayoutMap_17));
    }
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
  {
    MR_Word RevLayouts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 16)));
    MR_Word RevLayouts_11;
    MR_Word Counter0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 13)));
    MR_Word Counter_13;
    MR_Word LayoutName_15;
    MR_Word LabelToLayoutMap0_16;
    MR_Word LabelToLayoutMap_17;
    MR_Integer Var_81;
    MR_Integer Var_82;
    MR_Integer Var_83;
    MR_Integer Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Integer Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Integer Var_101;
    MR_Integer Var_102;
    MR_Integer Var_103;
    MR_Integer Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Integer Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 0)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 1)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 2)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 3)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 4)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 6)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 7)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 8)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 9)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 10)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 11)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 12)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 14)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 15)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 17)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 18)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 19)));
    MR_Integer Var_62;
    MR_Integer Var_63;
    MR_Integer Var_64;
    MR_Integer Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Integer Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_100;

    {
      RevLayouts_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevLayouts_11, 0) = ((MR_Box) (Layout_7));
      MR_hl_field(MR_mktag(1), RevLayouts_11, 1) = ((MR_Box) (RevLayouts0_10));
    }
    mercury__counter__allocate_3_p_0(Slot_8, Counter0_12, &Counter_13);
    {
      LayoutName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LayoutName_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[4])));
      MR_hl_field(MR_mktag(0), LayoutName_15, 1) = ((MR_Box) (*Slot_8));
    }
    Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 0)));
    Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 1)));
    Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 2)));
    Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 3)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 4)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 5)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 6)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 7)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 8)));
    Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 9)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 10)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 11)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 12)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 13)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 14)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 15)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 16)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 17)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 18)));
    LabelToLayoutMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 19)));
    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (Label_6)), ((MR_Box) (LayoutName_15)), LabelToLayoutMap0_16, &LabelToLayoutMap_17);
    Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 0)));
    Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 1)));
    Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 2)));
    Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 3)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 4)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 5)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 6)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 7)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 8)));
    Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 9)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 10)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 11)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 12)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 13)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 14)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 15)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 16)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 17)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 18)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_18, (MR_Integer) 19)));
    Var_101 = Var_81;
    Var_102 = Var_82;
    Var_103 = Var_83;
    Var_104 = Var_84;
    Var_105 = Var_85;
    Var_106 = Var_86;
    Var_107 = Var_87;
    Var_108 = Var_88;
    Var_109 = Var_89;
    Var_110 = Var_90;
    Var_111 = Var_91;
    Var_112 = Var_92;
    Var_113 = Var_93;
    Var_115 = Var_95;
    Var_116 = Var_96;
    Var_117 = RevLayouts_11;
    Var_118 = Var_98;
    Var_119 = Var_99;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_LLI_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Counter_13));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (LabelToLayoutMap_17));
    }
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
  {
    MR_Word RevLayouts0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 15)));
    MR_Word RevLayouts_11;
    MR_Word Counter0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 12)));
    MR_Word Counter_13;
    MR_Word LayoutName_14;
    MR_Word LabelToLayoutMap0_15;
    MR_Word LabelToLayoutMap_16;
    MR_Integer Var_81;
    MR_Integer Var_82;
    MR_Integer Var_83;
    MR_Integer Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Integer Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Integer Var_101;
    MR_Integer Var_102;
    MR_Integer Var_103;
    MR_Integer Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Integer Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 0)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 1)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 2)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 3)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 4)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 6)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 7)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 8)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 9)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 10)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 11)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 13)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 14)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 16)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 17)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 18)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 19)));
    MR_Integer Var_62;
    MR_Integer Var_63;
    MR_Integer Var_64;
    MR_Integer Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Integer Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_93;
    MR_Word Var_96;
    MR_Word Var_100;

    {
      RevLayouts_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevLayouts_11, 0) = ((MR_Box) (Layout_7));
      MR_hl_field(MR_mktag(1), RevLayouts_11, 1) = ((MR_Box) (RevLayouts0_10));
    }
    mercury__counter__allocate_3_p_0(Slot_8, Counter0_12, &Counter_13);
    {
      LayoutName_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LayoutName_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__stack_layout_scalar_common_3[3])));
      MR_hl_field(MR_mktag(0), LayoutName_14, 1) = ((MR_Box) (*Slot_8));
    }
    Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 0)));
    Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 1)));
    Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 2)));
    Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 3)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 4)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 5)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 6)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 7)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 8)));
    Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 9)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 10)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 11)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 12)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 13)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 14)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 15)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 16)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 17)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 18)));
    LabelToLayoutMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 19)));
    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (Label_6)), ((MR_Box) (LayoutName_14)), LabelToLayoutMap0_15, &LabelToLayoutMap_16);
    Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 0)));
    Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 1)));
    Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 2)));
    Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 3)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 4)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 5)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 6)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 7)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 8)));
    Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 9)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 10)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 11)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 12)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 13)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 14)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 15)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 16)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 17)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 18)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_LLI_0_17, (MR_Integer) 19)));
    Var_101 = Var_81;
    Var_102 = Var_82;
    Var_103 = Var_83;
    Var_104 = Var_84;
    Var_105 = Var_85;
    Var_106 = Var_86;
    Var_107 = Var_87;
    Var_108 = Var_88;
    Var_109 = Var_89;
    Var_110 = Var_90;
    Var_111 = Var_91;
    Var_112 = Var_92;
    Var_114 = Var_94;
    Var_115 = Var_95;
    Var_116 = RevLayouts_11;
    Var_117 = Var_97;
    Var_118 = Var_98;
    Var_119 = Var_99;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_LLI_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Counter_13));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (LabelToLayoutMap_16));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_var_to_var_number_map_6_p_0(
  MR_Word VarSet_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_13,
  MR_Word * STATE_VARIABLE_VarNumMap_14,
  MR_Word STATE_VARIABLE_Counter_0_15,
  MR_Word * STATE_VARIABLE_Counter_16)
{
  {
    MR_bool succeeded;
    MR_String Name_12;
    MR_Word Var_17;
    MR_String VarName_11;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_7, Var_8, &VarName_11);
    if (succeeded)
      Name_12 = VarName_11;
    else
      Name_12 = (MR_String) "";
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Name_12));
    }
    ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(Var_17, STATE_VARIABLE_VarNumMap_0_13, STATE_VARIABLE_VarNumMap_14, STATE_VARIABLE_Counter_0_15, STATE_VARIABLE_Counter_16);
  }
}

static void MR_CALL 
ll_backend__stack_layout__user_attribute_var_num_map_6_p_0(
  MR_Word VarSet_7,
  MR_Word MaybeAttribute_8,
  MR_Word STATE_VARIABLE_VarNumMap_0_14,
  MR_Word * STATE_VARIABLE_VarNumMap_15,
  MR_Word STATE_VARIABLE_Counter_0_16,
  MR_Word * STATE_VARIABLE_Counter_17)
{
  {
    MR_bool succeeded;

    if ((MaybeAttribute_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_VarNumMap_15 = STATE_VARIABLE_VarNumMap_0_14;
      *STATE_VARIABLE_Counter_17 = STATE_VARIABLE_Counter_0_16;
    }
    else
    {
      MR_Word Attribute_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAttribute_8, (MR_Integer) 0)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attribute_11, (MR_Integer) 1)));
      MR_String Name_29;
      MR_Word Var_30;
      MR_Word _Locn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attribute_11, (MR_Integer) 0)));
      MR_String VarName_28;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_7, Var_13, &VarName_28);
      if (succeeded)
        Name_29 = VarName_28;
      else
        Name_29 = (MR_String) "";
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Name_29));
      }
      ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(Var_30, STATE_VARIABLE_VarNumMap_0_14, STATE_VARIABLE_VarNumMap_15, STATE_VARIABLE_Counter_0_16, STATE_VARIABLE_Counter_17);
    }
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
  {
    MR_bool succeeded;
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_String Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_10;
    MR_Box conv0_Var_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[4], (MR_Word) &ll_backend__stack_layout_scalar_common_1[4], STATE_VARIABLE_VarNumMap_0_12, ((MR_Box) (Var_6)), &conv0_Var_10);
    if (succeeded)
    {
      Var_10 = ((MR_Word) conv0_Var_10);
      succeeded = MR_TRUE;
    }
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
        Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (VarNum_11));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Name_7));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[4], (MR_Word) &ll_backend__stack_layout_scalar_common_1[4], ((MR_Box) (Var_6)), ((MR_Box) (Var_17)), STATE_VARIABLE_VarNumMap_0_12, STATE_VARIABLE_VarNumMap_13);
    }
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_VarNumMap_15;
    MR_Word conv5_STATE_VARIABLE_Counter_17;

    ll_backend__stack_layout__user_attribute_var_num_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_VarNumMap_15, ((MR_Word) wrapper_arg_4), &conv5_STATE_VARIABLE_Counter_17);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_VarNumMap_15));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Counter_17));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_VarNumMap_13;
    MR_Word conv1_STATE_VARIABLE_Counter_15;

    ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_VarNumMap_13, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_Counter_15);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_VarNumMap_13));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_15));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_27;

    succeeded = ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__1333__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_27);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__internal_var_number_map_6_p_0(
  MR_Word VarSet_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarNumMap_0_29,
  MR_Word * STATE_VARIABLE_VarNumMap_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32)
{
  {
    MR_bool succeeded;
    MR_Word Internal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word MaybeTrace_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Internal_9, (MR_Integer) 0)));
    MR_Word MaybeResume_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Internal_9, (MR_Integer) 1)));
    MR_Word MaybeReturn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Internal_9, (MR_Integer) 2)));
    MR_Word STATE_VARIABLE_VarNumMap_36_36;
    MR_Word STATE_VARIABLE_Counter_37_37;
    MR_Word STATE_VARIABLE_VarNumMap_38_38;
    MR_Word STATE_VARIABLE_Counter_39_39;
    MR_Integer _Label_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

    if ((MaybeTrace_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      STATE_VARIABLE_VarNumMap_36_36 = STATE_VARIABLE_VarNumMap_0_29;
      STATE_VARIABLE_Counter_37_37 = STATE_VARIABLE_Counter_0_31;
    }
    else
    {
      MR_Word TypeCtorInfo_34_78 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
      MR_Word TypeInfo_35_79;
      MR_Word Trace_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTrace_12, (MR_Integer) 0)));
      MR_Word MaybeUser_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Trace_15, (MR_Integer) 4)));
      MR_Word TraceLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Trace_15, (MR_Integer) 5)));
      MR_Word STATE_VARIABLE_VarNumMap_33_33;
      MR_Word STATE_VARIABLE_Counter_34_34;
      MR_Word VarInfoSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceLayout_21, (MR_Integer) 0)));
      MR_Word VarInfos_59;
      MR_Word VarsNames_69;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Trace_15, (MR_Integer) 0)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Trace_15, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Trace_15, (MR_Integer) 2)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Trace_15, (MR_Integer) 3)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceLayout_21, (MR_Integer) 1)));
      MR_Box conv4_STATE_VARIABLE_VarNumMap_33_33;
      MR_Box conv3_STATE_VARIABLE_Counter_34_34;

      VarInfos_59 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_34_78, VarInfoSet_57);
      TypeInfo_35_79 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[10];
      mercury__list__filter_map_3_p_0(TypeCtorInfo_34_78, TypeInfo_35_79, (MR_Word) &ll_backend__stack_layout_scalar_common_1[25], VarInfos_59, &VarsNames_69);
      mercury__list__foldl2_6_p_0(TypeInfo_35_79, (MR_Word) &ll_backend__stack_layout_scalar_common_1[5], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[26], VarsNames_69, ((MR_Box) (STATE_VARIABLE_VarNumMap_0_29)), &conv4_STATE_VARIABLE_VarNumMap_33_33, ((MR_Box) (STATE_VARIABLE_Counter_0_31)), &conv3_STATE_VARIABLE_Counter_34_34);
      STATE_VARIABLE_VarNumMap_33_33 = ((MR_Word) conv4_STATE_VARIABLE_VarNumMap_33_33);
      STATE_VARIABLE_Counter_34_34 = ((MR_Word) conv3_STATE_VARIABLE_Counter_34_34);
      if ((MaybeUser_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        STATE_VARIABLE_VarNumMap_36_36 = STATE_VARIABLE_VarNumMap_33_33;
        STATE_VARIABLE_Counter_37_37 = STATE_VARIABLE_Counter_34_34;
      }
      else
      {
        MR_Word UserEvent_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUser_20, (MR_Integer) 0)));
        MR_Word Attributes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), UserEvent_22, (MR_Integer) 1)));
        MR_Word Var_35;
        MR_Integer _UserEventNumber_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), UserEvent_22, (MR_Integer) 0)));
        MR_Box conv8_STATE_VARIABLE_VarNumMap_36_36;
        MR_Box conv7_STATE_VARIABLE_Counter_37_37;

        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_9[2]));
          MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ll_backend__stack_layout__internal_var_number_map_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (VarSet_7));
        }
        mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[7], (MR_Word) &ll_backend__stack_layout_scalar_common_1[5], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, Var_35, Attributes_24, ((MR_Box) (STATE_VARIABLE_VarNumMap_33_33)), &conv8_STATE_VARIABLE_VarNumMap_36_36, ((MR_Box) (STATE_VARIABLE_Counter_34_34)), &conv7_STATE_VARIABLE_Counter_37_37);
        STATE_VARIABLE_VarNumMap_36_36 = ((MR_Word) conv8_STATE_VARIABLE_VarNumMap_36_36);
        STATE_VARIABLE_Counter_37_37 = ((MR_Word) conv7_STATE_VARIABLE_Counter_37_37);
      }
    }
    if ((MaybeResume_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      STATE_VARIABLE_VarNumMap_38_38 = STATE_VARIABLE_VarNumMap_36_36;
      STATE_VARIABLE_Counter_39_39 = STATE_VARIABLE_Counter_37_37;
    }
    else
    {
      MR_Word ResumeLayout_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeResume_13, (MR_Integer) 0)));

      ll_backend__stack_layout__label_layout_var_number_map_5_p_0(ResumeLayout_25, STATE_VARIABLE_VarNumMap_36_36, &STATE_VARIABLE_VarNumMap_38_38, STATE_VARIABLE_Counter_37_37, &STATE_VARIABLE_Counter_39_39);
    }
    if ((MaybeReturn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_VarNumMap_30 = STATE_VARIABLE_VarNumMap_38_38;
      *STATE_VARIABLE_Counter_32 = STATE_VARIABLE_Counter_39_39;
    }
    else
    {
      MR_Word Return_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReturn_14, (MR_Integer) 0)));
      MR_Word ReturnLayout_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Return_26, (MR_Integer) 1)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Return_26, (MR_Integer) 0)));

      ll_backend__stack_layout__label_layout_var_number_map_5_p_0(ReturnLayout_28, STATE_VARIABLE_VarNumMap_38_38, STATE_VARIABLE_VarNumMap_30, STATE_VARIABLE_Counter_39_39, STATE_VARIABLE_Counter_32);
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__label_layout_var_number_map_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_VarNumMap_13;
    MR_Word conv1_STATE_VARIABLE_Counter_15;

    ll_backend__stack_layout__add_named_var_to_var_number_map_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_VarNumMap_13, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_Counter_15);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_VarNumMap_13));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Counter_15));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__label_layout_var_number_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_27;

    succeeded = ll_backend__stack_layout__IntroducedFrom__pred__label_layout_var_number_map__1333__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_27);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__label_layout_var_number_map_5_p_0(
  MR_Word LabelLayout_6,
  MR_Word STATE_VARIABLE_VarNumMap_0_22,
  MR_Word * STATE_VARIABLE_VarNumMap_23,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_34_34 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
    MR_Word TypeInfo_35_35;
    MR_Word VarInfoSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayout_6, (MR_Integer) 0)));
    MR_Word VarInfos_11;
    MR_Word VarsNames_21;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayout_6, (MR_Integer) 1)));
    MR_Box conv4_STATE_VARIABLE_VarNumMap_23;
    MR_Box conv3_STATE_VARIABLE_Counter_25;

    VarInfos_11 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_34_34, VarInfoSet_9);
    TypeInfo_35_35 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[10];
    mercury__list__filter_map_3_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, (MR_Word) &ll_backend__stack_layout_scalar_common_1[23], VarInfos_11, &VarsNames_21);
    mercury__list__foldl2_6_p_0(TypeInfo_35_35, (MR_Word) &ll_backend__stack_layout_scalar_common_1[5], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[24], VarsNames_21, ((MR_Box) (STATE_VARIABLE_VarNumMap_0_22)), &conv4_STATE_VARIABLE_VarNumMap_23, ((MR_Box) (STATE_VARIABLE_Counter_0_24)), &conv3_STATE_VARIABLE_Counter_25);
    *STATE_VARIABLE_VarNumMap_23 = ((MR_Word) conv4_STATE_VARIABLE_VarNumMap_23);
    *STATE_VARIABLE_Counter_25 = ((MR_Word) conv3_STATE_VARIABLE_Counter_25);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__var_has_name_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_String VarName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer _VarNum_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    succeeded = (strcmp(VarName_3, (MR_String) "") == 0);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_table_arg_pti_rval_4_p_0(
  MR_Word ClosureArg_5,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_15,
  MR_Word * STATE_VARIABLE_StaticCellInfo_16)
{
  {
    MR_Word ArgRval_6;
    MR_Word ArgRvalType_7;
    MR_Word Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureArg_5, (MR_Integer) 3)));
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClosureArg_5, (MR_Integer) 0)));
    MR_String Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ClosureArg_5, (MR_Integer) 1)));
    MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClosureArg_5, (MR_Integer) 2)));

    ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_12, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_StaticCellInfo_0_15, STATE_VARIABLE_StaticCellInfo_16, &ArgRval_6, &ArgRvalType_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgRval_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgRvalType_7));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__convert_slot_to_locn_map_2_p_0(
  MR_Word SlotLocn_3,
  MR_Word * LvalLocns_4)
{
  {
    MR_Word LvalLocn_6;

    if (((MR_tag((MR_Word) SlotLocn_3)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer SlotNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SlotLocn_3, (MR_Integer) 0)));
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (SlotNum_5));
      }
      {
        LvalLocn_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LvalLocn_6, 0) = ((MR_Box) (Var_10));
      }
    }
    else
    {
      MR_Integer Offset_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SlotLocn_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer SlotNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SlotLocn_3, (MR_Integer) 0)));

      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (SlotNum_12));
      }
      {
        LvalLocn_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LvalLocn_6, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), LvalLocn_6, 1) = ((MR_Box) (Offset_7));
      }
    }
    *LvalLocns_4 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, ((MR_Box) (LvalLocn_6)));
  }
}

static void MR_CALL 
ll_backend__stack_layout__update_label_table_3_p_0(
  MR_Word InternalLabelInfo_4,
  MR_Word STATE_VARIABLE_LabelTables_0_26,
  MR_Word * STATE_VARIABLE_LabelTables_27)
{
  {
    MR_bool succeeded;
    MR_Word LabelVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalLabelInfo_4, (MR_Integer) 2)));
    MR_Integer Slot_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), InternalLabelInfo_4, (MR_Integer) 3)));
    MR_Word InternalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalLabelInfo_4, (MR_Integer) 4)));
    MR_Word Port_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalInfo_10, (MR_Integer) 0)));
    MR_Word Return_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalInfo_10, (MR_Integer) 2)));
    MR_Word _ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalLabelInfo_4, (MR_Integer) 0)));
    MR_Integer _LabelNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), InternalLabelInfo_4, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalInfo_10, (MR_Integer) 1)));
    MR_Word Target_16;
    MR_Word Context_17;
    MR_Word TargetsContexts_14;
    MR_Word Var_28;
    MR_Word Var_15;
    MR_Word _GoalPath_18;

    succeeded = ((MR_tag((MR_Word) Return_13)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Return_13, (MR_Integer) 0)));
      TargetsContexts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1)));
      succeeded = ll_backend__stack_layout__find_valid_return_context_4_p_0(TargetsContexts_14, &Target_16, &Context_17, &_GoalPath_18);
    }
    if (succeeded)
    {
      MR_Word IsReturn_20;
      MR_String File_41;
      MR_Integer Line_42;
      MR_Word TargetLabel_19;
      MR_Word LabelTable0_43;
      MR_Box conv0_LabelTable0_43;

      succeeded = ((MR_tag((MR_Word) Target_16)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TargetLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Target_16, (MR_Integer) 0)));
        {
          IsReturn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IsReturn_20, 0) = ((MR_Box) (TargetLabel_19));
        }
      }
      else
        IsReturn_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__term__context_file_2_p_0(Context_17, &File_41);
      mercury__term__context_line_2_p_0(Context_17, &Line_42);
      succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], STATE_VARIABLE_LabelTables_0_26, ((MR_Box) (File_41)), &conv0_LabelTable0_43);
      if (succeeded)
      {
        LabelTable0_43 = ((MR_Word) conv0_LabelTable0_43);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word LabelLayout_44;
        MR_Word Var_48;
        MR_Word LineInfo0_45;
        MR_Box conv1_LineInfo0_45;

        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (LabelVars_8));
        }
        {
          LabelLayout_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LabelLayout_44, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(0), LabelLayout_44, 1) = ((MR_Box) (Slot_9));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[0], LabelTable0_43, Line_42, &conv1_LineInfo0_45);
        if (succeeded)
        {
          LineInfo0_45 = ((MR_Word) conv1_LineInfo0_45);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word LineInfo_46;
          MR_Word LabelTable_47;
          MR_Word Var_49;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (LabelLayout_44));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (IsReturn_20));
          }
          {
            LineInfo_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LineInfo_46, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(1), LineInfo_46, 1) = ((MR_Box) (LineInfo0_45));
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[0], Line_42, ((MR_Box) (LineInfo_46)), LabelTable0_43, &LabelTable_47);
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (File_41)), ((MR_Box) (LabelTable_47)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
        }
        else
        {
          MR_Word Var_51;
          MR_Word LineInfo_58;
          MR_Word LabelTable_59;

          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (LabelLayout_44));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (IsReturn_20));
          }
          {
            LineInfo_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LineInfo_58, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), LineInfo_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[0], Line_42, ((MR_Box) (LineInfo_58)), LabelTable0_43, &LabelTable_59);
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (File_41)), ((MR_Box) (LabelTable_59)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
        }
      }
      else
      {
        MR_String File_83;
        MR_Integer Line_84;
        MR_Integer Var_85;

        mercury__term__context_file_2_p_0(Context_17, &File_83);
        mercury__term__context_line_2_p_0(Context_17, &Line_84);
        succeeded = (strcmp(File_83, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_85 = (MR_Integer) 0;
          succeeded = (Line_84 > Var_85);
        }
        if (succeeded)
        {
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word LabelLayout_60;
          MR_Word LineInfo_61;
          MR_Word LabelTable_62;

          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LabelVars_8));
          }
          {
            LabelLayout_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LabelLayout_60, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), LabelLayout_60, 1) = ((MR_Box) (Slot_9));
          }
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (LabelLayout_60));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (IsReturn_20));
          }
          {
            LineInfo_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LineInfo_61, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), LineInfo_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          LabelTable_62 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__stack_layout_scalar_common_2[0], ((MR_Box) (Line_42)), ((MR_Box) (LineInfo_61)));
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (File_41)), ((MR_Box) (LabelTable_62)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
        }
        else
          *STATE_VARIABLE_LabelTables_27 = STATE_VARIABLE_LabelTables_0_26;
      }
    }
    else
    {
      MR_Word Context_33;
      MR_Word Var_30;
      MR_String File_87;
      MR_Integer Line_88;
      MR_Integer Var_89;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;

      succeeded = ((MR_tag((MR_Word) Port_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Port_11, (MR_Integer) 0)));
        Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 2)));
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 3)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 4)));
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 5)));
        mercury__term__context_file_2_p_0(Context_33, &File_87);
        mercury__term__context_line_2_p_0(Context_33, &Line_88);
        succeeded = (strcmp(File_87, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_89 = (MR_Integer) 0;
          succeeded = (Line_88 > Var_89);
        }
      }
      if (succeeded)
      {
        ll_backend__stack_layout__update_label_table_2_6_p_0(LabelVars_8, Slot_9, Context_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_LabelTables_0_26, STATE_VARIABLE_LabelTables_27);
      }
      else
        *STATE_VARIABLE_LabelTables_27 = STATE_VARIABLE_LabelTables_0_26;
    }
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word TargetContext_5;
    MR_Word TargetContexts_6;
    MR_Word Target_10;
    MR_Word Context_11;
    MR_Word GoalPath_12;
    MR_Word Var_13;
    MR_String File_15;
    MR_Integer Line_16;
    MR_Integer Var_17;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      TargetContext_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      TargetContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Target_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetContext_5, (MR_Integer) 0)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetContext_5, (MR_Integer) 1)));
      Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
      GoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
      mercury__term__context_file_2_p_0(Context_11, &File_15);
      mercury__term__context_line_2_p_0(Context_11, &Line_16);
      succeeded = (strcmp(File_15, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 0;
        succeeded = (Line_16 > Var_17);
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
  {
    MR_bool succeeded;
    MR_String File_12;
    MR_Integer Line_13;
    MR_Word LabelTable0_14;
    MR_Box conv0_LabelTable0_14;

    mercury__term__context_file_2_p_0(Context_9, &File_12);
    mercury__term__context_line_2_p_0(Context_9, &Line_13);
    succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], STATE_VARIABLE_LabelTables_0_19, ((MR_Box) (File_12)), &conv0_LabelTable0_14);
    if (succeeded)
    {
      LabelTable0_14 = ((MR_Word) conv0_LabelTable0_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word LabelLayout_15;
      MR_Word Var_21;
      MR_Word LineInfo0_16;
      MR_Box conv1_LineInfo0_16;

      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (LabelVars_7));
      }
      {
        LabelLayout_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LabelLayout_15, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), LabelLayout_15, 1) = ((MR_Box) (Slot_8));
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[0], LabelTable0_14, Line_13, &conv1_LineInfo0_16);
      if (succeeded)
      {
        LineInfo0_16 = ((MR_Word) conv1_LineInfo0_16);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word LineInfo_17;
        MR_Word LabelTable_18;
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (LabelLayout_15));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (IsReturn_10));
        }
        {
          LineInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LineInfo_17, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), LineInfo_17, 1) = ((MR_Box) (LineInfo0_16));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[0], Line_13, ((MR_Box) (LineInfo_17)), LabelTable0_14, &LabelTable_18);
        mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (File_12)), ((MR_Box) (LabelTable_18)), STATE_VARIABLE_LabelTables_0_19, STATE_VARIABLE_LabelTables_20);
      }
      else
      {
        MR_Word Var_24;
        MR_Word LineInfo_31;
        MR_Word LabelTable_32;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (LabelLayout_15));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (IsReturn_10));
        }
        {
          LineInfo_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LineInfo_31, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), LineInfo_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[0], Line_13, ((MR_Box) (LineInfo_31)), LabelTable0_14, &LabelTable_32);
        mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (File_12)), ((MR_Box) (LabelTable_32)), STATE_VARIABLE_LabelTables_0_19, STATE_VARIABLE_LabelTables_20);
      }
    }
    else
    {
      MR_String File_56;
      MR_Integer Line_57;
      MR_Integer Var_58;

      mercury__term__context_file_2_p_0(Context_9, &File_56);
      mercury__term__context_line_2_p_0(Context_9, &Line_57);
      succeeded = (strcmp(File_56, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_58 = (MR_Integer) 0;
        succeeded = (Line_57 > Var_58);
      }
      if (succeeded)
      {
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word LabelLayout_33;
        MR_Word LineInfo_34;
        MR_Word LabelTable_35;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (LabelVars_7));
        }
        {
          LabelLayout_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LabelLayout_33, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), LabelLayout_33, 1) = ((MR_Box) (Slot_8));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (LabelLayout_33));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (IsReturn_10));
        }
        {
          LineInfo_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LineInfo_34, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), LineInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        LabelTable_35 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__stack_layout_scalar_common_2[0], ((MR_Box) (Line_13)), ((MR_Box) (LineInfo_34)));
        mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], ((MR_Box) (File_12)), ((MR_Box) (LabelTable_35)), STATE_VARIABLE_LabelTables_0_19, STATE_VARIABLE_LabelTables_20);
      }
      else
        *STATE_VARIABLE_LabelTables_20 = STATE_VARIABLE_LabelTables_0_19;
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_LabelTables_27;

    ll_backend__stack_layout__update_label_table_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_STATE_VARIABLE_LabelTables_27);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_LabelTables_27));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LabelLayout_19;
    MR_Word conv2_STATE_VARIABLE_StringTable_102;
    MR_Word conv1_STATE_VARIABLE_StaticCellInfo_104;
    MR_Word conv0_STATE_VARIABLE_LabelLayoutInfo_106;

    ll_backend__stack_layout__construct_internal_layout_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), &conv3_LabelLayout_19, ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_StringTable_102, ((MR_Word) wrapper_arg_5), &conv1_STATE_VARIABLE_StaticCellInfo_104, ((MR_Word) wrapper_arg_7), &conv0_STATE_VARIABLE_LabelLayoutInfo_106);
    *wrapper_arg_2 = ((MR_Box) (conv3_LabelLayout_19));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_StringTable_102));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_StaticCellInfo_104));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_LabelLayoutInfo_106));
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0(
  MR_Word Params_15,
  MR_Word PLI_16,
  MR_Word STATE_VARIABLE_LabelTables_0_56,
  MR_Word * STATE_VARIABLE_LabelTables_57,
  MR_Word STATE_VARIABLE_StringTable_0_58,
  MR_Word * STATE_VARIABLE_StringTable_59,
  MR_Word STATE_VARIABLE_TypeTable_0_60,
  MR_Word * STATE_VARIABLE_TypeTable_61,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_62,
  MR_Word * STATE_VARIABLE_StaticCellInfo_63,
  MR_Word STATE_VARIABLE_LabelLayoutInfo_0_64,
  MR_Word * STATE_VARIABLE_LabelLayoutInfo_65,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_66,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_67)
{
  {
    MR_bool succeeded;
    MR_Word RttiProcLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 0)));
    MR_Word EntryLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 1)));
    MR_Word HeadVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 10)));
    MR_Word Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 12)));
    MR_Word ForceProcIdLayout_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 16)));
    MR_Word VarSet_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 17)));
    MR_Word InternalMap_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 19)));
    MR_Word MaybeTableIoEntry_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 20)));
    MR_Word Internals_47;
    MR_Word VarNumMap_48;
    MR_Word ProcLabel_49;
    MR_Word ProcIdLayout_50;
    MR_Word Kind_53;
    MR_Word ProcLayoutName_54;
    MR_Word InternalLabelInfos_55;
    MR_Word Var_68;
    MR_Word STATE_VARIABLE_StringTable_72_72;
    MR_Word STATE_VARIABLE_StaticCellInfo_73_73;
    MR_Word _Detism_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 2)));
    MR_Integer _StackSlots_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 3)));
    MR_Word _SuccipLoc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 4)));
    MR_Word _EvalMethod_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 5)));
    MR_Word _EffTraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 6)));
    MR_Word _MaybeCallLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 7)));
    MR_Integer _MaxTraceRegR_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 8)));
    MR_Integer _MaxTraceRegF_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 9)));
    MR_Word _ArgModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 11)));
    MR_Word _NeedGoalRep_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 13)));
    MR_Word _InstMap_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 14)));
    MR_Word _TraceSlotInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 15)));
    MR_Word _VarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 18)));
    MR_Word _NeedsAllNames_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 21)));
    MR_Word _OISUKindFors_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 22)));
    MR_Word _MaybeDeepProfInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_16, (MR_Integer) 23)));
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Box conv8_STATE_VARIABLE_LabelTables_57;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, InternalMap_42, &Internals_47);
    ll_backend__stack_layout__compute_var_number_map_5_p_0(HeadVars_33, VarSet_40, Internals_47, Goal_35, &VarNumMap_48);
    ProcLabel_49 = ll_backend__llds__get_proc_label_1_f_0(EntryLabel_24);
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 1)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 2)));
    Var_84 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 4)));
    Var_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    mercury__bool__or_3_p_0(Var_68, ForceProcIdLayout_39, &ProcIdLayout_50);
    succeeded = (ProcIdLayout_50 == (MR_Integer) 1);
    if (!(succeeded))
    {
      MR_Word Var_51;

      succeeded = ((MR_tag((MR_Word) MaybeTableIoEntry_43)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTableIoEntry_43, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word UserOrUci_52;

      UserOrUci_52 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_49);
      {
        Kind_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Kind_53, 0) = ((MR_Box) (UserOrUci_52));
      }
    }
    else
      Kind_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ProcLayoutName_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLayoutName_54, 0) = ((MR_Box) (RttiProcLabel_23));
      MR_hl_field(MR_mktag(0), ProcLayoutName_54, 1) = ((MR_Box) (Kind_53));
    }
    Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
    Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 1)));
    Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 2)));
    Var_142 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 4)));
    Var_137 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    succeeded = (Var_141 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Var_140 == (MR_Integer) 1);
    if (succeeded)
      succeeded = ll_backend__stack_layout__valid_proc_layout_1_p_0(PLI_16);
    if (succeeded)
    {
      MR_Word Var_71;
      MR_Box conv6_STATE_VARIABLE_StringTable_72_72;
      MR_Box conv5_STATE_VARIABLE_StaticCellInfo_73_73;
      MR_Box conv4_STATE_VARIABLE_LabelLayoutInfo_65;

      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Params_15));
        MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (ProcLabel_49));
        MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (ProcLayoutName_54));
        MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (VarNumMap_48));
      }
      mercury__list__map_foldl3_9_p_1((MR_Word) &ll_backend__stack_layout_scalar_common_1[6], (MR_Word) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0, Var_71, Internals_47, &InternalLabelInfos_55, ((MR_Box) (STATE_VARIABLE_StringTable_0_58)), &conv6_STATE_VARIABLE_StringTable_72_72, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_62)), &conv5_STATE_VARIABLE_StaticCellInfo_73_73, ((MR_Box) (STATE_VARIABLE_LabelLayoutInfo_0_64)), &conv4_STATE_VARIABLE_LabelLayoutInfo_65);
      STATE_VARIABLE_StringTable_72_72 = ((MR_Word) conv6_STATE_VARIABLE_StringTable_72_72);
      STATE_VARIABLE_StaticCellInfo_73_73 = ((MR_Word) conv5_STATE_VARIABLE_StaticCellInfo_73_73);
      *STATE_VARIABLE_LabelLayoutInfo_65 = ((MR_Word) conv4_STATE_VARIABLE_LabelLayoutInfo_65);
    }
    else
    {
      InternalLabelInfos_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_LabelLayoutInfo_65 = STATE_VARIABLE_LabelLayoutInfo_0_64;
      STATE_VARIABLE_StaticCellInfo_73_73 = STATE_VARIABLE_StaticCellInfo_0_62;
      STATE_VARIABLE_StringTable_72_72 = STATE_VARIABLE_StringTable_0_58;
    }
    mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_internal_label_info_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[2], (MR_Word) &ll_backend__stack_layout_scalar_common_1[22], InternalLabelInfos_55, ((MR_Box) (STATE_VARIABLE_LabelTables_0_56)), &conv8_STATE_VARIABLE_LabelTables_57);
    *STATE_VARIABLE_LabelTables_57 = ((MR_Word) conv8_STATE_VARIABLE_LabelTables_57);
    ll_backend__stack_layout__construct_proc_layout_15_p_0(Params_15, PLI_16, ProcLayoutName_54, Kind_53, InternalLabelInfos_55, VarNumMap_48, *STATE_VARIABLE_LabelLayoutInfo_65, STATE_VARIABLE_StringTable_72_72, STATE_VARIABLE_StringTable_59, STATE_VARIABLE_TypeTable_0_60, STATE_VARIABLE_TypeTable_61, STATE_VARIABLE_StaticCellInfo_73_73, STATE_VARIABLE_StaticCellInfo_63, STATE_VARIABLE_ProcLayoutInfo_0_66, STATE_VARIABLE_ProcLayoutInfo_67);
  }
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
  MR_Word STATE_VARIABLE_StringTable_0_104,
  MR_Word * STATE_VARIABLE_StringTable_105,
  MR_Word STATE_VARIABLE_TypeTable_0_106,
  MR_Word * STATE_VARIABLE_TypeTable_107,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_108,
  MR_Word * STATE_VARIABLE_StaticCellInfo_109,
  MR_Word STATE_VARIABLE_ProcLayoutInfo_0_110,
  MR_Word * STATE_VARIABLE_ProcLayoutInfo_111)
{
  {
    MR_bool succeeded;
    MR_Word RttiProcLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 0)));
    MR_Word EntryLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 1)));
    MR_Word Detism_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 2)));
    MR_Integer StackSlots_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 3)));
    MR_Word SuccipLoc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 4)));
    MR_Word EvalMethod_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 5)));
    MR_Word EffTraceLevel_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 6)));
    MR_Word MaybeCallLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 7)));
    MR_Integer MaxTraceRegR_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 8)));
    MR_Integer MaxTraceRegF_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 9)));
    MR_Word HeadVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 10)));
    MR_Word ArgModes_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 11)));
    MR_Word Goal_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 12)));
    MR_Word NeedGoalRep_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 13)));
    MR_Word InstMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 14)));
    MR_Word TraceSlotInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 15)));
    MR_Word VarTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 18)));
    MR_Word InternalMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 19)));
    MR_Word MaybeTableInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 20)));
    MR_Word NeedsAllNames_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 21)));
    MR_Word OISUKindFors_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 22)));
    MR_Word MaybeDeepProfInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 23)));
    MR_Word Traversal_51;
    MR_Word PredId_52;
    MR_Integer ProcId_53;
    MR_Word PredProcId_54;
    MR_Word MaybeTableSlotName_55;
    MR_Word More_59;
    MR_Word ProcLayout_97;
    MR_Word RevProcLayouts0_98;
    MR_Word RevProcLayouts_99;
    MR_Word RevProcLayoutNames0_100;
    MR_Word RevProcLayoutNames_101;
    MR_Word LabelToLayoutMap0_102;
    MR_Word LabelToLayoutMap_103;
    MR_Word STATE_VARIABLE_ProcLayoutInfo_113_113;
    MR_Word STATE_VARIABLE_ProcLayoutInfo_121_121;
    MR_Word STATE_VARIABLE_ProcLayoutInfo_125_125;
    MR_Word Var_126;
    MR_Word Var_283;
    MR_Word Var_284;
    MR_Integer Var_285;
    MR_Word Var_286;
    MR_Word Var_287;
    MR_Word Var_288;
    MR_Word Var_289;
    MR_Word Var_290;
    MR_Integer Var_291;
    MR_Word Var_292;
    MR_Word Var_295;
    MR_Word _ForceProcIdLayout_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 16)));
    MR_Word VarSet_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), PLI_17, (MR_Integer) 17)));
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_String Var_143;
    MR_Integer Var_144;
    MR_Word Var_145;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_315;
    MR_Word Var_316;
    MR_Integer Var_317;
    MR_Word Var_318;
    MR_Word Var_319;
    MR_Word Var_320;
    MR_Word Var_321;

    ll_backend__stack_layout__construct_proc_traversal_6_p_0(Params_16, EntryLabel_28, Detism_29, StackSlots_30, SuccipLoc_31, &Traversal_51);
    Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 0)));
    Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 1)));
    Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 2)));
    Var_143 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 3)));
    Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 4)));
    Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 5)));
    PredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 6)));
    ProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 7)));
    Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 8)));
    Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 9)));
    Var_149 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 10)))) & (MR_Integer) 7);
    Var_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 11)));
    Var_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 12)))) & (MR_Integer) 1);
    Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_27, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      PredProcId_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_54, 0) = ((MR_Box) (PredId_52));
      MR_hl_field(MR_mktag(0), PredProcId_54, 1) = ((MR_Box) (ProcId_53));
    }
    if ((MaybeTableInfo_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeTableSlotName_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_StaticCellInfo_109 = STATE_VARIABLE_StaticCellInfo_0_108;
      STATE_VARIABLE_ProcLayoutInfo_113_113 = STATE_VARIABLE_ProcLayoutInfo_0_110;
    }
    else
    {
      MR_Word TableInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTableInfo_47, (MR_Integer) 0)));
      MR_Word TableExecTraceInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 1)));
      MR_Word TableExecTraceInfo_58;
      MR_Word Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 0)));
      MR_Integer Var_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 2)));
      MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 3)));
      MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 4)));
      MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 5)));
      MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 6)));
      MR_Word Var_176;
      MR_Integer Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_177;

      ll_backend__stack_layout__construct_exec_trace_table_data_8_p_0(PredProcId_54, ProcLayoutName_18, TableInfo_56, &MaybeTableSlotName_55, STATE_VARIABLE_StaticCellInfo_0_108, STATE_VARIABLE_StaticCellInfo_109, TableExecTraceInfo0_57, &TableExecTraceInfo_58);
      Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 0)));
      Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 1)));
      Var_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 2)));
      Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 3)));
      Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 4)));
      Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 5)));
      Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_0_110, (MR_Integer) 6)));
      {
        STATE_VARIABLE_ProcLayoutInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 0) = ((MR_Box) (Var_176));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 1) = ((MR_Box) (TableExecTraceInfo_58));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 2) = ((MR_Box) (Var_178));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 3) = ((MR_Box) (Var_179));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 4) = ((MR_Box) (Var_180));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 5) = ((MR_Box) (Var_181));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, 6) = ((MR_Box) (Var_182));
      }
    }
    if ((Kind_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      More_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_StringTable_105 = STATE_VARIABLE_StringTable_0_104;
      *STATE_VARIABLE_TypeTable_107 = STATE_VARIABLE_TypeTable_0_106;
      STATE_VARIABLE_ProcLayoutInfo_121_121 = STATE_VARIABLE_ProcLayoutInfo_113_113;
    }
    else
    {
      MR_Word TraceStackLayout_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word MaybeExecTraceSlotName_65;
      MR_Word ModuleInfo_66;
      MR_Word ModuleName_67;
      MR_Word DeepProfiling_68;
      MR_Word MaybeProcStaticSlotName_77;
      MR_Word MaybeProcBytesSlotName_95;
      MR_Word ModuleLayoutName_96;
      MR_Word STATE_VARIABLE_StringTable_114_114;
      MR_Word STATE_VARIABLE_ProcLayoutInfo_115_115;
      MR_Word Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 0)));
      MR_Word Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 1)));
      MR_Word Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 2)));
      MR_Word Var_186 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word Var_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 4)));
      MR_Word Var_190 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_192 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_193 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word TypeCtorInfo_322_322;
      MR_Word TypeCtorInfo_323_323;
      MR_Word Var_207;
      MR_Word Var_208;
      MR_Word Var_209;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_212;
      MR_Word Var_213;
      MR_Word Var_214;
      MR_Word Var_215;
      MR_Word Var_216;
      MR_Word Var_217;
      MR_Word Var_218;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_221;
      MR_Word Var_222;
      MR_Word Var_223;
      MR_Word Var_224;
      MR_Word Var_225;
      MR_Word Var_226;
      MR_Word Var_227;
      MR_Word Var_228;

      succeeded = (TraceStackLayout_61 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_322_322 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        TypeCtorInfo_323_323 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;
        succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_322_322, TypeCtorInfo_323_323, InternalMap_46);
        succeeded = !(succeeded);
        if (succeeded)
          succeeded = ll_backend__stack_layout__valid_proc_layout_1_p_0(PLI_17);
      }
      if (succeeded)
      {
        MR_Word ExecTraceInfo0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 1)));
        MR_Word ExecTraceSlotName_63;
        MR_Word ExecTraceInfo_64;
        MR_Word Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 0)));
        MR_Integer Var_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 2)));
        MR_Word Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 3)));
        MR_Word Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 4)));
        MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 5)));
        MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 6)));
        MR_Word Var_200;
        MR_Integer Var_202;
        MR_Word Var_203;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_201;

        ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0(Params_16, RttiProcLabel_27, EvalMethod_32, EffTraceLevel_33, MaybeCallLabel_34, MaybeTableSlotName_55, MaxTraceRegR_35, MaxTraceRegF_36, HeadVars_37, ArgModes_38, TraceSlotInfo_42, VarTypes_45, MaybeTableInfo_47, NeedsAllNames_48, VarNumMap_21, InternalLabelInfos_20, &ExecTraceSlotName_63, LabelLayoutInfo_22, STATE_VARIABLE_StringTable_0_104, &STATE_VARIABLE_StringTable_114_114, ExecTraceInfo0_62, &ExecTraceInfo_64);
        Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 0)));
        Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 1)));
        Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 2)));
        Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 3)));
        Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 4)));
        Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 5)));
        Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_113_113, (MR_Integer) 6)));
        {
          STATE_VARIABLE_ProcLayoutInfo_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 0) = ((MR_Box) (Var_200));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 1) = ((MR_Box) (ExecTraceInfo_64));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 2) = ((MR_Box) (Var_202));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 3) = ((MR_Box) (Var_203));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 4) = ((MR_Box) (Var_204));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 5) = ((MR_Box) (Var_205));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, 6) = ((MR_Box) (Var_206));
        }
        {
          MaybeExecTraceSlotName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeExecTraceSlotName_65, 0) = ((MR_Box) (ExecTraceSlotName_63));
        }
      }
      else
      {
        MaybeExecTraceSlotName_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_ProcLayoutInfo_115_115 = STATE_VARIABLE_ProcLayoutInfo_113_113;
        STATE_VARIABLE_StringTable_114_114 = STATE_VARIABLE_StringTable_0_104;
      }
      ModuleInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 0)));
      Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 1)));
      Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 2)));
      Var_209 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) & (MR_Integer) 1);
      Var_210 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_211 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_212 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 4)));
      Var_214 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) & (MR_Integer) 1);
      Var_215 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_216 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_217 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_66, &ModuleName_67);
      Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 0)));
      Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 1)));
      Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 2)));
      DeepProfiling_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) & (MR_Integer) 1);
      Var_221 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_222 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_223 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 4)));
      Var_225 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) & (MR_Integer) 1);
      Var_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_227 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_228 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      succeeded = (NeedGoalRep_40 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (DeepProfiling_68 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_324_324;
        MR_Word IncludeVarNameTable_69;
        MR_Word IncludeVarTypes_70;
        MR_Word BytecodeBody_79;
        MR_Word BytecodeHeadVars_80;
        MR_Word BytecodeInstMap_81;
        MR_Word BytecodeVarTypes_82;
        MR_Word BytecodeDetism_83;
        MR_Word BytecodeVarNumMap_85;
        MR_Word ProcBytes_86;
        MR_Word RevProcBytes_87;
        MR_Integer NumProcBytes_88;
        MR_Word RevAllProcBytes0_89;
        MR_Word RevAllProcBytes_90;
        MR_Integer ProcByteSlot_92;
        MR_Integer NextProcByte_93;
        MR_Word ProcBytesSlotName_94;
        MR_Word STATE_VARIABLE_ProcLayoutInfo_116_116;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_256;
        MR_Word Var_244;
        MR_Word Var_245;
        MR_Integer Var_246;
        MR_Word Var_247;
        MR_Word Var_248;
        MR_Word Var_249;
        MR_Word Var_253;

        switch (DeepProfiling_68) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              IncludeVarNameTable_69 = (MR_Integer) 0;
              IncludeVarTypes_70 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              IncludeVarNameTable_69 = (MR_Integer) 1;
              if ((OISUKindFors_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                IncludeVarTypes_70 = (MR_Integer) 0;
              else
                IncludeVarTypes_70 = (MR_Integer) 1;
            }
            break;
        }
        if ((MaybeDeepProfInfo_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeProcStaticSlotName_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          BytecodeHeadVars_80 = HeadVars_37;
          BytecodeBody_79 = Goal_39;
          BytecodeInstMap_81 = InstMap_41;
          BytecodeVarTypes_82 = VarTypes_45;
          BytecodeDetism_83 = Detism_29;
          BytecodeVarNumMap_85 = VarNumMap_21;
          STATE_VARIABLE_ProcLayoutInfo_116_116 = STATE_VARIABLE_ProcLayoutInfo_115_115;
        }
        else
        {
          MR_Word DeepProfInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDeepProfInfo_50, (MR_Integer) 0)));
          MR_Word ProcStaticInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 0)));
          MR_Word ProcStaticSlotName_75;
          MR_Word ProcStaticInfo_76;
          MR_Word DeepOriginalBody_78;
          MR_Word BytecodeVarSet_84;
          MR_Word Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 1)));
          MR_Integer Var_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 2)));
          MR_Word Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 3)));
          MR_Word Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 4)));
          MR_Word Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 5)));
          MR_Word Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 6)));
          MR_Word Var_236;
          MR_Integer Var_237;
          MR_Word Var_238;
          MR_Word Var_239;
          MR_Word Var_240;
          MR_Word Var_241;
          MR_Word Var_235;
          MR_Word Var_242;
          MR_Word Var_243;

          ll_backend__stack_layout__construct_proc_static_layout_4_p_0(DeepProfInfo_73, &ProcStaticSlotName_75, ProcStaticInfo0_74, &ProcStaticInfo_76);
          Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 0)));
          Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 1)));
          Var_237 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 2)));
          Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 3)));
          Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 4)));
          Var_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 5)));
          Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 6)));
          {
            STATE_VARIABLE_ProcLayoutInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 0) = ((MR_Box) (ProcStaticInfo_76));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 1) = ((MR_Box) (Var_236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 2) = ((MR_Box) (Var_237));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 3) = ((MR_Box) (Var_238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 4) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 5) = ((MR_Box) (Var_240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, 6) = ((MR_Box) (Var_241));
          }
          {
            MaybeProcStaticSlotName_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeProcStaticSlotName_77, 0) = ((MR_Box) (ProcStaticSlotName_75));
          }
          Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfInfo_73, (MR_Integer) 0)));
          Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfInfo_73, (MR_Integer) 1)));
          DeepOriginalBody_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfInfo_73, (MR_Integer) 2)));
          BytecodeBody_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepOriginalBody_78, (MR_Integer) 0)));
          BytecodeHeadVars_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepOriginalBody_78, (MR_Integer) 1)));
          BytecodeInstMap_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepOriginalBody_78, (MR_Integer) 2)));
          BytecodeVarTypes_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepOriginalBody_78, (MR_Integer) 3)));
          BytecodeDetism_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepOriginalBody_78, (MR_Integer) 4)));
          BytecodeVarSet_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepOriginalBody_78, (MR_Integer) 5)));
          ll_backend__stack_layout__compute_var_number_map_5_p_0(BytecodeHeadVars_80, BytecodeVarSet_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), BytecodeBody_79, &BytecodeVarNumMap_85);
        }
        ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(BytecodeHeadVars_80, BytecodeBody_79, BytecodeInstMap_81, BytecodeVarTypes_82, BytecodeVarNumMap_85, ModuleInfo_66, IncludeVarNameTable_69, IncludeVarTypes_70, BytecodeDetism_83, STATE_VARIABLE_StringTable_114_114, STATE_VARIABLE_StringTable_105, STATE_VARIABLE_TypeTable_0_106, STATE_VARIABLE_TypeTable_107, &ProcBytes_86);
        TypeCtorInfo_324_324 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__list__reverse_2_p_0(TypeCtorInfo_324_324, ProcBytes_86, &RevProcBytes_87);
        mercury__list__length_2_p_0(TypeCtorInfo_324_324, ProcBytes_86, &NumProcBytes_88);
        Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 0)));
        Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 1)));
        Var_246 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 2)));
        RevAllProcBytes0_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 3)));
        Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 4)));
        Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 5)));
        Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 6)));
        RevAllProcBytes_90 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_324_324, RevProcBytes_87, RevAllProcBytes0_89);
        Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 0)));
        Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 1)));
        ProcByteSlot_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 2)));
        Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 3)));
        Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 4)));
        Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 5)));
        Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_116_116, (MR_Integer) 6)));
        NextProcByte_93 = (NumProcBytes_88 + ProcByteSlot_92);
        {
          STATE_VARIABLE_ProcLayoutInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 0) = ((MR_Box) (Var_250));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 1) = ((MR_Box) (Var_251));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 2) = ((MR_Box) (NextProcByte_93));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 3) = ((MR_Box) (RevAllProcBytes_90));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 4) = ((MR_Box) (Var_254));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 5) = ((MR_Box) (Var_255));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 6) = ((MR_Box) (Var_256));
        }
        {
          ProcBytesSlotName_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcBytesSlotName_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
          MR_hl_field(MR_mktag(0), ProcBytesSlotName_94, 1) = ((MR_Box) (ProcByteSlot_92));
        }
        {
          MaybeProcBytesSlotName_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeProcBytesSlotName_95, 0) = ((MR_Box) (ProcBytesSlotName_94));
        }
      }
      else
      {
        if ((MaybeDeepProfInfo_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeProcStaticSlotName_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_ProcLayoutInfo_121_121 = STATE_VARIABLE_ProcLayoutInfo_115_115;
        }
        else
        {
          MR_Word DeepProfInfo_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDeepProfInfo_50, (MR_Integer) 0)));
          MR_Word ProcStaticInfo0_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 0)));
          MR_Word ProcStaticSlotName_130;
          MR_Word ProcStaticInfo_131;
          MR_Word Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 1)));
          MR_Integer Var_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 2)));
          MR_Word Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 3)));
          MR_Word Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 4)));
          MR_Word Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 5)));
          MR_Word Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 6)));
          MR_Word Var_277;
          MR_Integer Var_278;
          MR_Word Var_279;
          MR_Word Var_280;
          MR_Word Var_281;
          MR_Word Var_282;
          MR_Word Var_276;

          ll_backend__stack_layout__construct_proc_static_layout_4_p_0(DeepProfInfo_128, &ProcStaticSlotName_130, ProcStaticInfo0_129, &ProcStaticInfo_131);
          Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 0)));
          Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 1)));
          Var_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 2)));
          Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 3)));
          Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 4)));
          Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 5)));
          Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_115_115, (MR_Integer) 6)));
          {
            STATE_VARIABLE_ProcLayoutInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 0) = ((MR_Box) (ProcStaticInfo_131));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 1) = ((MR_Box) (Var_277));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 2) = ((MR_Box) (Var_278));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 3) = ((MR_Box) (Var_279));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 4) = ((MR_Box) (Var_280));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 5) = ((MR_Box) (Var_281));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, 6) = ((MR_Box) (Var_282));
          }
          {
            MaybeProcStaticSlotName_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeProcStaticSlotName_77, 0) = ((MR_Box) (ProcStaticSlotName_130));
          }
        }
        MaybeProcBytesSlotName_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_TypeTable_107 = STATE_VARIABLE_TypeTable_0_106;
        *STATE_VARIABLE_StringTable_105 = STATE_VARIABLE_StringTable_114_114;
      }
      {
        ModuleLayoutName_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModuleLayoutName_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), ModuleLayoutName_96, 1) = ((MR_Box) (ModuleName_67));
      }
      {
        More_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), More_59, 0) = ((MR_Box) (MaybeProcStaticSlotName_77));
        MR_hl_field(MR_mktag(1), More_59, 1) = ((MR_Box) (MaybeExecTraceSlotName_65));
        MR_hl_field(MR_mktag(1), More_59, 2) = ((MR_Box) (MaybeProcBytesSlotName_95));
        MR_hl_field(MR_mktag(1), More_59, 3) = ((MR_Box) (ModuleLayoutName_96));
      }
    }
    {
      ProcLayout_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLayout_97, 0) = ((MR_Box) (RttiProcLabel_27));
      MR_hl_field(MR_mktag(0), ProcLayout_97, 1) = ((MR_Box) (Traversal_51));
      MR_hl_field(MR_mktag(0), ProcLayout_97, 2) = ((MR_Box) (More_59));
    }
    Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 0)));
    Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 1)));
    Var_285 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 2)));
    Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 3)));
    RevProcLayouts0_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 4)));
    Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 5)));
    Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_121_121, (MR_Integer) 6)));
    {
      RevProcLayouts_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevProcLayouts_99, 0) = ((MR_Box) (ProcLayout_97));
      MR_hl_field(MR_mktag(1), RevProcLayouts_99, 1) = ((MR_Box) (RevProcLayouts0_98));
    }
    Var_289 = Var_283;
    Var_290 = Var_284;
    Var_291 = Var_285;
    Var_292 = Var_286;
    RevProcLayoutNames0_100 = Var_287;
    Var_295 = Var_288;
    {
      RevProcLayoutNames_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevProcLayoutNames_101, 0) = ((MR_Box) (ProcLayoutName_18));
      MR_hl_field(MR_mktag(1), RevProcLayoutNames_101, 1) = ((MR_Box) (RevProcLayoutNames0_100));
    }
    LabelToLayoutMap0_102 = Var_295;
    {
      STATE_VARIABLE_ProcLayoutInfo_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 0) = ((MR_Box) (Var_289));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 1) = ((MR_Box) (Var_290));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 2) = ((MR_Box) (Var_291));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 3) = ((MR_Box) (Var_292));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 4) = ((MR_Box) (RevProcLayouts_99));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 5) = ((MR_Box) (RevProcLayoutNames_101));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, 6) = ((MR_Box) (LabelToLayoutMap0_102));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (ProcLayoutName_18));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ((MR_Box) (EntryLabel_28)), ((MR_Box) (Var_126)), LabelToLayoutMap0_102, &LabelToLayoutMap_103);
    Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 0)));
    Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 1)));
    Var_317 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 2)));
    Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 3)));
    Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 4)));
    Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 5)));
    Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcLayoutInfo_125_125, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ProcLayoutInfo_111 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_315));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_316));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_317));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_318));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_319));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_320));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (LabelToLayoutMap_103));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_layout__IntroducedFrom__pred__construct_exec_trace_layout__967__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_VarNum_6;

    ll_backend__stack_layout__convert_var_to_int_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_VarNum_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_VarNum_6));
  }
}

static void MR_CALL 
ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0(
  MR_Word Params_24,
  MR_Word RttiProcLabel_25,
  MR_Word EvalMethod_26,
  MR_Word EffTraceLevel_27,
  MR_Word MaybeCallLabel_28,
  MR_Word MaybeTableSlotName_29,
  MR_Integer MaxTraceRegR_30,
  MR_Integer MaxTraceRegF_31,
  MR_Word HeadVars_32,
  MR_Word ArgModes_33,
  MR_Word TraceSlotInfo_34,
  MR_Word VarTypes_36,
  MR_Word MaybeTableInfo_37,
  MR_Word NeedsAllNames_38,
  MR_Word VarNumMap_39,
  MR_Word InternalLabelInfos_40,
  MR_Word * ExecTraceName_41,
  MR_Word LabelLayoutInfo_42,
  MR_Word STATE_VARIABLE_StringTable_0_111,
  MR_Word * STATE_VARIABLE_StringTable_112,
  MR_Word STATE_VARIABLE_ExecTraceInfo_0_113,
  MR_Word * STATE_VARIABLE_ExecTraceInfo_114)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_380_380;
    MR_Word TypeCtorInfo_384_384;
    MR_Word RevInterfaceEventLayoutNames_45;
    MR_Word RevInternalEventLayoutNames_46;
    MR_Word InterfaceEventLayoutNames_47;
    MR_Word InternalEventLayoutNames_48;
    MR_Integer MaxVarNum_49;
    MR_Word VarNameVector_50;
    MR_Word HeadVarNumVector_51;
    MR_Word MaybeFromFullSlot_52;
    MR_Word MaybeIoSeqSlot_53;
    MR_Word MaybeTrailSlots_54;
    MR_Word MaybeMaxfrSlot_55;
    MR_Word MaybeCallTableSlot_56;
    MR_Word MaybeTailRecSlot_57;
    MR_Word ModuleInfo_58;
    MR_Word MaybeCallLabelSlotName_61;
    MR_Word MaybeTable_62;
    MR_Word RevEventLayouts0_69;
    MR_Word ProcEventLayouts_70;
    MR_Word RevProcEventLayouts_71;
    MR_Word RevEventLayouts_72;
    MR_Integer EventLayoutsSlot_74;
    MR_Integer NumProcEventLayouts_75;
    MR_Integer NextEventLayout_76;
    MR_Word EventLayoutsSlotName_77;
    MR_Word CompressArrays_78;
    MR_Integer NumHeadVars_84;
    MR_Word MaybeHeadVarsSlotName_91;
    MR_Word MaybeVarNamesSlotName_103;
    MR_Integer Flags_104;
    MR_Word ExecTrace_105;
    MR_Word RevExecTraces0_106;
    MR_Word RevExecTraces_107;
    MR_Word ExecTraceCounter0_108;
    MR_Integer ExecTraceSlot_109;
    MR_Word ExecTraceCounter_110;
    MR_Word Var_118;
    MR_Word STATE_VARIABLE_ExecTraceInfo_131_131;
    MR_Word STATE_VARIABLE_ExecTraceInfo_132_132;
    MR_Word STATE_VARIABLE_ExecTraceInfo_138_138;
    MR_Word STATE_VARIABLE_ExecTraceInfo_144_144;
    MR_Word STATE_VARIABLE_ExecTraceInfo_146_146;
    MR_Integer Var_212;
    MR_Word Var_217;
    MR_Integer Var_338;
    MR_Integer Var_339;
    MR_Integer Var_340;
    MR_Word Var_341;
    MR_Word Var_342;
    MR_Word Var_343;
    MR_Word Var_344;
    MR_Word Var_345;
    MR_Word Var_346;
    MR_Word Var_347;
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
    MR_Integer Var_181;
    MR_Integer Var_182;
    MR_Integer Var_183;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_187;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_190;
    MR_Integer Var_191;
    MR_Integer Var_192;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_199;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_198;
    MR_Integer Var_213;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Integer Var_214;
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
    MR_Integer Var_369;
    MR_Integer Var_370;
    MR_Integer Var_371;
    MR_Word Var_372;
    MR_Word Var_374;
    MR_Word Var_375;
    MR_Word Var_376;
    MR_Word Var_377;
    MR_Word Var_378;
    MR_Word Var_379;
    MR_Word Var_373;

    ll_backend__stack_layout__collect_event_data_addrs_5_p_0(InternalLabelInfos_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevInterfaceEventLayoutNames_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevInternalEventLayoutNames_46);
    TypeCtorInfo_380_380 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_380_380, RevInterfaceEventLayoutNames_45, &InterfaceEventLayoutNames_47);
    mercury__list__reverse_2_p_0(TypeCtorInfo_380_380, RevInternalEventLayoutNames_46, &InternalEventLayoutNames_48);
    ll_backend__stack_layout__construct_var_name_vector_6_p_0(VarNumMap_39, NeedsAllNames_38, &MaxVarNum_49, &VarNameVector_50, STATE_VARIABLE_StringTable_0_111, STATE_VARIABLE_StringTable_112);
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0_1));
      MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (VarNumMap_39));
    }
    TypeCtorInfo_384_384 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__map_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[4], TypeCtorInfo_384_384, Var_118, HeadVars_32, &HeadVarNumVector_51);
    MaybeFromFullSlot_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceSlotInfo_34, (MR_Integer) 0)));
    MaybeIoSeqSlot_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceSlotInfo_34, (MR_Integer) 1)));
    MaybeTrailSlots_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceSlotInfo_34, (MR_Integer) 2)));
    MaybeMaxfrSlot_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceSlotInfo_34, (MR_Integer) 3)));
    MaybeCallTableSlot_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceSlotInfo_34, (MR_Integer) 4)));
    MaybeTailRecSlot_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), TraceSlotInfo_34, (MR_Integer) 5)));
    ModuleInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 0)));
    Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 1)));
    Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 2)));
    Var_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 4)));
    Var_158 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    if ((MaybeCallLabel_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeCallLabelSlotName_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word CallLabel_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCallLabel_28, (MR_Integer) 0)));
      MR_Word CallLabelSlotName_60;
      MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 19)));
      MR_Integer Var_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 0)));
      MR_Integer Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 1)));
      MR_Integer Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 2)));
      MR_Integer Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 3)));
      MR_Word Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 4)));
      MR_Word Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 5)));
      MR_Word Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 6)));
      MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 7)));
      MR_Word Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 8)));
      MR_Integer Var_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 9)));
      MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 10)));
      MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 11)));
      MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 12)));
      MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 13)));
      MR_Word Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 14)));
      MR_Word Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 15)));
      MR_Word Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 16)));
      MR_Word Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 17)));
      MR_Word Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_42, (MR_Integer) 18)));
      MR_Box conv1_CallLabelSlotName_60;

      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, TypeCtorInfo_380_380, Var_119, ((MR_Box) (CallLabel_59)), &conv1_CallLabelSlotName_60);
      CallLabelSlotName_60 = ((MR_Word) conv1_CallLabelSlotName_60);
      {
        MaybeCallLabelSlotName_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCallLabelSlotName_61, 0) = ((MR_Box) (CallLabelSlotName_60));
      }
    }
    if ((MaybeTableInfo_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeTable_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TableInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTableInfo_37, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) TableInfo_63)) == (MR_mktag((MR_Integer) 0))))
        if ((MaybeTableSlotName_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_exec_trace_layout\'/23", (MR_String) "MaybeTableSlotName = no");
            return;
          }
        }
        else
        {
          MR_Word TableSlotName_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTableSlotName_29, (MR_Integer) 0)));
          MR_Word Var_130 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) TableSlotName_65);

          {
            MaybeTable_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTable_62, 0) = ((MR_Box) (Var_130));
          }
        }
      else
      {
        MR_Word ProcLabel_67;
        MR_Word TableDataId_68;
        MR_Word Var_120;
        MR_Word Var_126;

        {
          Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ll_backend__stack_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_101_120_101_99_95_116_114_97_99_101_95_108_97_121_111_117_116_95_95_91_49_50_93_95_48_23_p_0_2));
          MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (MaybeTableSlotName_29));
          MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_4_p_0(Var_120, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_exec_trace_layout\'/23", (MR_String) "MaybeTableSlotName != no");
        ProcLabel_67 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_25);
        {
          TableDataId_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TableDataId_68, 0) = ((MR_Box) (ProcLabel_67));
          MR_hl_field(MR_mktag(1), TableDataId_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (TableDataId_68));
        }
        {
          MaybeTable_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTable_62, 0) = ((MR_Box) (Var_126));
        }
      }
    }
    Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 0)));
    Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 1)));
    Var_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 2)));
    Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 3)));
    Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 4)));
    Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 5)));
    Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 6)));
    RevEventLayouts0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 7)));
    Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 8)));
    Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 9)));
    Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 10)));
    ProcEventLayouts_70 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_380_380, InterfaceEventLayoutNames_47, InternalEventLayoutNames_48);
    mercury__list__reverse_2_p_0(TypeCtorInfo_380_380, ProcEventLayouts_70, &RevProcEventLayouts_71);
    RevEventLayouts_72 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_380_380, RevProcEventLayouts_71, RevEventLayouts0_69);
    Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 0)));
    Var_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 1)));
    EventLayoutsSlot_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 2)));
    Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 3)));
    Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 4)));
    Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 5)));
    Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 6)));
    Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 7)));
    Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 8)));
    Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 9)));
    Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_113, (MR_Integer) 10)));
    {
      STATE_VARIABLE_ExecTraceInfo_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 0) = ((MR_Box) (Var_191));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 1) = ((MR_Box) (Var_192));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 2) = ((MR_Box) (EventLayoutsSlot_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 3) = ((MR_Box) (Var_194));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 4) = ((MR_Box) (Var_195));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 5) = ((MR_Box) (Var_196));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 6) = ((MR_Box) (Var_197));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 7) = ((MR_Box) (RevEventLayouts_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 8) = ((MR_Box) (Var_199));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 9) = ((MR_Box) (Var_200));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, 10) = ((MR_Box) (Var_201));
    }
    mercury__list__length_2_p_0(TypeCtorInfo_380_380, ProcEventLayouts_70, &NumProcEventLayouts_75);
    NextEventLayout_76 = (EventLayoutsSlot_74 + NumProcEventLayouts_75);
    Var_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 0)));
    Var_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 1)));
    Var_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 2)));
    Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 3)));
    Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 4)));
    Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 5)));
    Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 6)));
    Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 7)));
    Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 8)));
    Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 9)));
    Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_131_131, (MR_Integer) 10)));
    {
      STATE_VARIABLE_ExecTraceInfo_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 0) = ((MR_Box) (Var_212));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 1) = ((MR_Box) (Var_213));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 2) = ((MR_Box) (NextEventLayout_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 3) = ((MR_Box) (Var_215));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 4) = ((MR_Box) (Var_216));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 5) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 6) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 7) = ((MR_Box) (Var_219));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 8) = ((MR_Box) (Var_220));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 9) = ((MR_Box) (Var_221));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, 10) = ((MR_Box) (Var_222));
    }
    {
      EventLayoutsSlotName_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventLayoutsSlotName_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
      MR_hl_field(MR_mktag(0), EventLayoutsSlotName_77, 1) = ((MR_Box) (EventLayoutsSlot_74));
    }
    Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 0)));
    Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 1)));
    Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 2)));
    Var_226 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_227 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_228 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_229 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    CompressArrays_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 4)));
    Var_230 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_231 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_232 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_233 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_24, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    if ((HeadVarNumVector_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeHeadVarsSlotName_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      NumHeadVars_84 = (MR_Integer) 0;
      STATE_VARIABLE_ExecTraceInfo_138_138 = STATE_VARIABLE_ExecTraceInfo_132_132;
    }
    else
    {
      MR_Word RevHeadVarNumVector_83;
      MR_Integer HeadVarNumSlot_87;
      MR_Word HeadVarNumSlotName_90;
      MR_Integer OldHeadVarNumOffset_86;
      MR_Integer Var_134;
      MR_Integer Var_135;
      MR_Integer CompressionLimit_149;
      MR_Integer Var_254;
      MR_Integer Var_255;
      MR_Word Var_256;
      MR_Word Var_257;
      MR_Word Var_258;
      MR_Word Var_259;
      MR_Word Var_260;
      MR_Word Var_261;
      MR_Word Var_262;
      MR_Word Var_263;

      mercury__list__reverse_2_p_0(TypeCtorInfo_384_384, HeadVarNumVector_51, &RevHeadVarNumVector_83);
      mercury__list__length_2_p_0(TypeCtorInfo_384_384, HeadVarNumVector_51, &NumHeadVars_84);
      succeeded = ((MR_tag((MR_Word) CompressArrays_78)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CompressionLimit_149 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CompressArrays_78, (MR_Integer) 0)));
        Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 0)));
        Var_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 1)));
        Var_255 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 2)));
        Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 3)));
        Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 4)));
        Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 5)));
        Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 6)));
        Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 7)));
        Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 8)));
        Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 9)));
        Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 10)));
        succeeded = (Var_134 <= CompressionLimit_149);
        if (succeeded)
        {
          Var_135 = (MR_Integer) 0;
          succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevHeadVarNumVector_83, Var_217, Var_135, &OldHeadVarNumOffset_86);
        }
      }
      if (succeeded)
      {
        MR_Integer Var_136 = (Var_212 - OldHeadVarNumOffset_86);

        HeadVarNumSlot_87 = (Var_136 - NumHeadVars_84);
        STATE_VARIABLE_ExecTraceInfo_138_138 = STATE_VARIABLE_ExecTraceInfo_132_132;
      }
      else
      {
        MR_Word RevHeadVarNums_88;
        MR_Integer NextHeadVarNum_89;
        MR_Integer Var_265;
        MR_Integer Var_266;
        MR_Word Var_267;
        MR_Word Var_268;
        MR_Word Var_270;
        MR_Word Var_271;
        MR_Word Var_272;
        MR_Word Var_273;
        MR_Word Var_274;
        MR_Integer Var_264;
        MR_Word Var_269;

        RevHeadVarNums_88 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_384_384, RevHeadVarNumVector_83, Var_217);
        Var_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 0)));
        Var_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 1)));
        Var_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 2)));
        Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 3)));
        Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 4)));
        Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 5)));
        Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 6)));
        Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 7)));
        Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 8)));
        Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 9)));
        Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_132_132, (MR_Integer) 10)));
        HeadVarNumSlot_87 = Var_212;
        NextHeadVarNum_89 = (Var_212 + NumHeadVars_84);
        {
          STATE_VARIABLE_ExecTraceInfo_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 0) = ((MR_Box) (NextHeadVarNum_89));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 1) = ((MR_Box) (Var_265));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 2) = ((MR_Box) (Var_266));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 3) = ((MR_Box) (Var_267));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 4) = ((MR_Box) (Var_268));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 5) = ((MR_Box) (RevHeadVarNums_88));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 6) = ((MR_Box) (Var_270));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 7) = ((MR_Box) (Var_271));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 8) = ((MR_Box) (Var_272));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 9) = ((MR_Box) (Var_273));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, 10) = ((MR_Box) (Var_274));
        }
      }
      {
        HeadVarNumSlotName_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVarNumSlotName_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
        MR_hl_field(MR_mktag(0), HeadVarNumSlotName_90, 1) = ((MR_Box) (HeadVarNumSlot_87));
      }
      {
        MaybeHeadVarsSlotName_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeHeadVarsSlotName_91, 0) = ((MR_Box) (HeadVarNumSlotName_90));
      }
    }
    if ((VarNameVector_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeVarNamesSlotName_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_ExecTraceInfo_144_144 = STATE_VARIABLE_ExecTraceInfo_138_138;
    }
    else
    {
      MR_Word RevVarNames0_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 6)));
      MR_Integer NextVarName0_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 1)));
      MR_Word RevVarNameVector_96;
      MR_Integer NumVarNames_97;
      MR_Integer VarNameSlot_99;
      MR_Word VarNameSlotName_102;
      MR_Integer Var_286 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 0)));
      MR_Integer Var_288 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 2)));
      MR_Word Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 3)));
      MR_Word Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 4)));
      MR_Word Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 5)));
      MR_Word Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 7)));
      MR_Word Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 8)));
      MR_Word Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 9)));
      MR_Word Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 10)));
      MR_Integer OldVarNameOffset_98;
      MR_Integer Var_140;
      MR_Integer Var_141;
      MR_Integer CompressionLimit_150;
      MR_Integer Var_306;
      MR_Integer Var_307;
      MR_Word Var_308;
      MR_Word Var_309;
      MR_Word Var_310;
      MR_Word Var_311;
      MR_Word Var_312;
      MR_Word Var_313;
      MR_Word Var_314;
      MR_Word Var_315;

      mercury__list__reverse_2_p_0(TypeCtorInfo_384_384, VarNameVector_50, &RevVarNameVector_96);
      mercury__list__length_2_p_0(TypeCtorInfo_384_384, VarNameVector_50, &NumVarNames_97);
      succeeded = ((MR_tag((MR_Word) CompressArrays_78)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        CompressionLimit_150 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CompressArrays_78, (MR_Integer) 0)));
        Var_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 0)));
        Var_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 1)));
        Var_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 2)));
        Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 3)));
        Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 4)));
        Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 5)));
        Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 6)));
        Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 7)));
        Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 8)));
        Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 9)));
        Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 10)));
        succeeded = (Var_140 <= CompressionLimit_150);
        if (succeeded)
        {
          Var_141 = (MR_Integer) 0;
          succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(RevVarNameVector_96, RevVarNames0_94, Var_141, &OldVarNameOffset_98);
        }
      }
      if (succeeded)
      {
        MR_Integer Var_142 = (NextVarName0_95 - OldVarNameOffset_98);

        VarNameSlot_99 = (Var_142 - NumVarNames_97);
        STATE_VARIABLE_ExecTraceInfo_144_144 = STATE_VARIABLE_ExecTraceInfo_138_138;
      }
      else
      {
        MR_Word RevVarNames_100;
        MR_Integer NextVarName_101;
        MR_Integer Var_316;
        MR_Integer Var_318;
        MR_Word Var_319;
        MR_Word Var_320;
        MR_Word Var_321;
        MR_Word Var_323;
        MR_Word Var_324;
        MR_Word Var_325;
        MR_Word Var_326;
        MR_Integer Var_317;
        MR_Word Var_322;

        RevVarNames_100 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_384_384, RevVarNameVector_96, RevVarNames0_94);
        Var_316 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 0)));
        Var_317 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 1)));
        Var_318 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 2)));
        Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 3)));
        Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 4)));
        Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 5)));
        Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 6)));
        Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 7)));
        Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 8)));
        Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 9)));
        Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_138_138, (MR_Integer) 10)));
        VarNameSlot_99 = NextVarName0_95;
        NextVarName_101 = (NextVarName0_95 + NumVarNames_97);
        {
          STATE_VARIABLE_ExecTraceInfo_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 0) = ((MR_Box) (Var_316));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 1) = ((MR_Box) (NextVarName_101));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 2) = ((MR_Box) (Var_318));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 3) = ((MR_Box) (Var_319));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 4) = ((MR_Box) (Var_320));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 5) = ((MR_Box) (Var_321));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 6) = ((MR_Box) (RevVarNames_100));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 7) = ((MR_Box) (Var_323));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 8) = ((MR_Box) (Var_324));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 9) = ((MR_Box) (Var_325));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, 10) = ((MR_Box) (Var_326));
        }
      }
      {
        VarNameSlotName_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarNameSlotName_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
        MR_hl_field(MR_mktag(0), VarNameSlotName_102, 1) = ((MR_Box) (VarNameSlot_99));
      }
      {
        MaybeVarNamesSlotName_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVarNamesSlotName_103, 0) = ((MR_Box) (VarNameSlotName_102));
      }
    }
    ll_backend__stack_layout__encode_exec_trace_flags_5_p_0(ModuleInfo_58, HeadVars_32, ArgModes_33, VarTypes_36, &Flags_104);
    {
      ExecTrace_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 19 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExecTrace_105, 0) = ((MR_Box) (MaybeCallLabelSlotName_61));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 1) = ((MR_Box) (EventLayoutsSlotName_77));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 2) = ((MR_Box) (NumProcEventLayouts_75));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 3) = ((MR_Box) (MaybeTable_62));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 4) = ((MR_Box) (MaybeHeadVarsSlotName_91));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 5) = ((MR_Box) (NumHeadVars_84));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 6) = ((MR_Box) (MaybeVarNamesSlotName_103));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 7) = ((MR_Box) (MaxVarNum_49));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 8) = ((MR_Box) (MaxTraceRegR_30));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 9) = ((MR_Box) (MaxTraceRegF_31));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 10) = ((MR_Box) (MaybeFromFullSlot_52));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 11) = ((MR_Box) (MaybeIoSeqSlot_53));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 12) = ((MR_Box) (MaybeTrailSlots_54));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 13) = ((MR_Box) (MaybeMaxfrSlot_55));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 14) = ((MR_Box) (EvalMethod_26));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 15) = ((MR_Box) (MaybeCallTableSlot_56));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 16) = ((MR_Box) (MaybeTailRecSlot_57));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 17) = ((MR_Box) (EffTraceLevel_27));
      MR_hl_field(MR_mktag(0), ExecTrace_105, 18) = ((MR_Box) (Flags_104));
    }
    Var_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 0)));
    Var_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 1)));
    Var_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 2)));
    Var_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 3)));
    Var_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 4)));
    Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 5)));
    Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 6)));
    Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 7)));
    Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 8)));
    RevExecTraces0_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 9)));
    Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_144_144, (MR_Integer) 10)));
    {
      RevExecTraces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevExecTraces_107, 0) = ((MR_Box) (ExecTrace_105));
      MR_hl_field(MR_mktag(1), RevExecTraces_107, 1) = ((MR_Box) (RevExecTraces0_106));
    }
    ExecTraceCounter0_108 = Var_342;
    {
      STATE_VARIABLE_ExecTraceInfo_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 0) = ((MR_Box) (Var_338));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 1) = ((MR_Box) (Var_339));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 2) = ((MR_Box) (Var_340));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 3) = ((MR_Box) (Var_341));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 4) = ((MR_Box) (ExecTraceCounter0_108));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 5) = ((MR_Box) (Var_343));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 6) = ((MR_Box) (Var_344));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 7) = ((MR_Box) (Var_345));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 8) = ((MR_Box) (Var_346));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 9) = ((MR_Box) (RevExecTraces_107));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, 10) = ((MR_Box) (Var_347));
    }
    mercury__counter__allocate_3_p_0(&ExecTraceSlot_109, ExecTraceCounter0_108, &ExecTraceCounter_110);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ExecTraceName_41 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExecTraceSlot_109));
    }
    Var_369 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 0)));
    Var_370 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 1)));
    Var_371 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 2)));
    Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 3)));
    Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 4)));
    Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 5)));
    Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 6)));
    Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 7)));
    Var_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 8)));
    Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 9)));
    Var_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_146_146, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ExecTraceInfo_114 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_369));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_370));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_371));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_372));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ExecTraceCounter_110));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_374));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_375));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_376));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_377));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_378));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_379));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_p_0(
  MR_Word Search_5,
  MR_Word HeadVar__2_2,
  MR_Integer CurOffset_8,
  MR_Integer * FoundAtOffset_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Tail_7;
    MR_Integer Head_6;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Head_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      succeeded = ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0(Search_5, HeadVar__2_2);
      if (succeeded)
      {
        *FoundAtOffset_9 = CurOffset_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_11 = (CurOffset_8 + (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__2_2 = Tail_7;
        MR_Integer next_value_of_CurOffset_8 = Var_11;

        // direct tailcall eliminated
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
ll_backend__stack_layout__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_105_110_100_95_115_101_113_117_101_110_99_101_95_97_116_116_101_109_112_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Integer SearchHead_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word SearchTail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer Head_6;
      MR_Word Tail_7;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Head_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (SearchHead_4 == Head_6);
        if (succeeded)
        {
          // direct tailcall eliminated
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_layout__var_has_name_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeInfo_26_26 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[4];
    MR_Word VarNames0_12;
    MR_Word VarNames_13;
    MR_Word SortedVarNames_14;

    mercury__map__values_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[4], TypeInfo_26_26, VarNumMap_7, &VarNames0_12);
    switch (NeedsAllNames_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__list__filter_3_p_0(TypeInfo_26_26, (MR_Word) &ll_backend__stack_layout_scalar_common_1[21], VarNames0_12, &VarNames_13);
        }
        break;
      case (MR_Integer) 1:
        VarNames_13 = VarNames0_12;
        break;
    }
    mercury__list__sort_2_p_0(TypeInfo_26_26, VarNames_13, &SortedVarNames_14);
    if ((SortedVarNames_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaxVarNum_9 = (MR_Integer) 0;
      *Offsets_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_StringTable_20 = STATE_VARIABLE_StringTable_0_19;
    }
    else
    {
      MR_Integer MaxVarNum0_18;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), SortedVarNames_14, (MR_Integer) 0)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), SortedVarNames_14, (MR_Integer) 1)));
      MR_String Var_16;

      MaxVarNum0_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
      Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
      ll_backend__stack_layout__construct_var_name_rvals_7_p_0(SortedVarNames_14, (MR_Integer) 1, MaxVarNum0_18, MaxVarNum_9, Offsets_10, STATE_VARIABLE_StringTable_0_19, STATE_VARIABLE_StringTable_20);
    }
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
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = HeadVar__3_3;
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_StringTable_7 = STATE_VARIABLE_StringTable_0_6;
    }
    else
    {
      MR_Integer Var_14;
      MR_String Name_15;
      MR_Word VarNamesTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer Offset_19;
      MR_Word OffsetsTail_20;
      MR_Word VarNames_22;
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_StringTable_28_28;
      MR_Integer STATE_VARIABLE_MaxNum_29_29;
      MR_Integer Var_30;

      Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
      Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1)));
      succeeded = (Var_14 == HeadVar__2_2);
      if (succeeded)
      {
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(Name_15, &Offset_19, STATE_VARIABLE_StringTable_0_6, &STATE_VARIABLE_StringTable_28_28);
        STATE_VARIABLE_MaxNum_29_29 = Var_14;
        VarNames_22 = VarNamesTail_16;
      }
      else
      {
        Offset_19 = (MR_Integer) 0;
        VarNames_22 = HeadVar__1_1;
        STATE_VARIABLE_StringTable_28_28 = STATE_VARIABLE_StringTable_0_6;
        STATE_VARIABLE_MaxNum_29_29 = HeadVar__3_3;
      }
      Var_30 = (HeadVar__2_2 + (MR_Integer) 1);
      ll_backend__stack_layout__construct_var_name_rvals_7_p_0(VarNames_22, Var_30, STATE_VARIABLE_MaxNum_29_29, HeadVar__4_4, &OffsetsTail_20, STATE_VARIABLE_StringTable_28_28, STATE_VARIABLE_StringTable_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Offset_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OffsetsTail_20));
      }
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__encode_exec_trace_flags_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadVars_7,
  MR_Word ArgModes_8,
  MR_Word VarTypes_9,
  MR_Integer * STATE_VARIABLE_Flags_13)
{
  {
    MR_bool succeeded;
    MR_Integer STATE_VARIABLE_Flags_15_15;
    MR_Integer Var_11;
    MR_Integer Var_12;

    succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_from_details_6_p_0(ModuleInfo_6, HeadVars_7, ArgModes_8, VarTypes_9, &Var_11, &Var_12);
    if (succeeded)
    {
      STATE_VARIABLE_Flags_15_15 = ((MR_Integer) 0 + (MR_Integer) 1);
    }
    else
      STATE_VARIABLE_Flags_15_15 = (MR_Integer) 0;
    succeeded = hlds__hlds_pred__proc_info_has_higher_order_arg_from_details_3_p_0(ModuleInfo_6, VarTypes_9, HeadVars_7);
    if (succeeded)
    {
      *STATE_VARIABLE_Flags_13 = (STATE_VARIABLE_Flags_15_15 + (MR_Integer) 2);
    }
    else
      *STATE_VARIABLE_Flags_13 = STATE_VARIABLE_Flags_15_15;
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RevInternals_5 = STATE_VARIABLE_RevInternals_0_4;
      *STATE_VARIABLE_RevInterfaces_3 = STATE_VARIABLE_RevInterfaces_0_2;
    }
    else
    {
      MR_Word Info_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Infos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word LabelVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 2)));
      MR_Integer Slot_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 3)));
      MR_Word InternalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 4)));
      MR_Word MaybePortInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalInfo_20, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_RevInternals_32_32;
      MR_Word STATE_VARIABLE_RevInterfaces_34_34;
      MR_Word _ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
      MR_Integer _LabelNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalInfo_20, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InternalInfo_20, (MR_Integer) 2)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevInterfaces_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInternals_0_4;

      if ((MaybePortInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        STATE_VARIABLE_RevInterfaces_34_34 = STATE_VARIABLE_RevInterfaces_0_2;
        STATE_VARIABLE_RevInternals_32_32 = STATE_VARIABLE_RevInternals_0_4;
      }
      else
      {
        MR_Word PortInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePortInfo_21, (MR_Integer) 0)));
        MR_Word Port_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PortInfo_24, (MR_Integer) 1)));
        MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), PortInfo_24, (MR_Integer) 0)));
        MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), PortInfo_24, (MR_Integer) 2)));
        MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), PortInfo_24, (MR_Integer) 3)));
        MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), PortInfo_24, (MR_Integer) 4)));
        MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), PortInfo_24, (MR_Integer) 5)));

        switch (Port_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            {
              MR_Word LayoutName_26;
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (LabelVars_18));
              }
              {
                LayoutName_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LayoutName_26, 0) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(0), LayoutName_26, 1) = ((MR_Box) (Slot_19));
              }
              {
                STATE_VARIABLE_RevInterfaces_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInterfaces_34_34, 0) = ((MR_Box) (LayoutName_26));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInterfaces_34_34, 1) = ((MR_Box) (STATE_VARIABLE_RevInterfaces_0_2));
              }
              STATE_VARIABLE_RevInternals_32_32 = STATE_VARIABLE_RevInternals_0_4;
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
              MR_Word Var_31;
              MR_Word LayoutName_37;

              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (LabelVars_18));
              }
              {
                LayoutName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LayoutName_37, 0) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(0), LayoutName_37, 1) = ((MR_Box) (Slot_19));
              }
              {
                STATE_VARIABLE_RevInternals_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInternals_32_32, 0) = ((MR_Box) (LayoutName_37));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInternals_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevInternals_0_4));
              }
              STATE_VARIABLE_RevInterfaces_34_34 = STATE_VARIABLE_RevInterfaces_0_2;
            }
            break;
          case (MR_Integer) 5:
            {
              STATE_VARIABLE_RevInterfaces_34_34 = STATE_VARIABLE_RevInterfaces_0_2;
              STATE_VARIABLE_RevInternals_32_32 = STATE_VARIABLE_RevInternals_0_4;
            }
            break;
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Infos_13;
      next_value_of_STATE_VARIABLE_RevInterfaces_0_2 = STATE_VARIABLE_RevInterfaces_34_34;
      next_value_of_STATE_VARIABLE_RevInternals_0_4 = STATE_VARIABLE_RevInternals_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevInterfaces_0_2 = next_value_of_STATE_VARIABLE_RevInterfaces_0_2;
      STATE_VARIABLE_RevInternals_0_4 = next_value_of_STATE_VARIABLE_RevInternals_0_4;
      continue;
    }
    break;
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
  if (((MR_tag((MR_Word) TableInfo_11)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word TableIOInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableInfo_11, (MR_Integer) 0)));
    MR_Word MaybeTableArgInfos_16 = (MR_Word) TableIOInfo_15;
    MR_Word TableIoEntryData_17;
    MR_Word RevTableIoEntryDatas0_23;
    MR_Word RevTableIoEntryDatas_24;
    MR_Word TableDataCounter0_25;
    MR_Integer Slot_26;
    MR_Word TableDataCounter_27;
    MR_Word TableDataSlotName_28;
    MR_Word TableIoEntryMap0_29;
    MR_Word TableIoEntryMap_30;
    MR_Word STATE_VARIABLE_ExecTraceInfo_39_39;
    MR_Word STATE_VARIABLE_ExecTraceInfo_40_40;
    MR_Integer Var_43;
    MR_Integer Var_44;
    MR_Integer Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Integer Var_74;
    MR_Integer Var_75;
    MR_Integer Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_77;
    MR_Integer Var_95;
    MR_Integer Var_96;
    MR_Integer Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;

    if ((MaybeTableArgInfos_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        TableIoEntryData_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TableIoEntryData_17, 0) = ((MR_Box) (ProcLayoutName_10));
        MR_hl_field(MR_mktag(0), TableIoEntryData_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *STATE_VARIABLE_StaticCellInfo_33 = STATE_VARIABLE_StaticCellInfo_0_32;
    }
    else
    {
      MR_Word TableArgInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTableArgInfos_16, (MR_Integer) 0)));
      MR_Integer NumPTIs_19;
      MR_Word PTIVectorRval_20;
      MR_Word TVarVectorRval_21;
      MR_Word TableIoArgsData_22;
      MR_Word Var_37;

      ll_backend__stack_layout__convert_table_arg_info_6_p_0(TableArgInfos_18, &NumPTIs_19, &PTIVectorRval_20, &TVarVectorRval_21, STATE_VARIABLE_StaticCellInfo_0_32, STATE_VARIABLE_StaticCellInfo_33);
      {
        TableIoArgsData_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TableIoArgsData_22, 0) = ((MR_Box) (NumPTIs_19));
        MR_hl_field(MR_mktag(0), TableIoArgsData_22, 1) = ((MR_Box) (PTIVectorRval_20));
        MR_hl_field(MR_mktag(0), TableIoArgsData_22, 2) = ((MR_Box) (TVarVectorRval_21));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (TableIoArgsData_22));
      }
      {
        TableIoEntryData_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TableIoEntryData_17, 0) = ((MR_Box) (ProcLayoutName_10));
        MR_hl_field(MR_mktag(0), TableIoEntryData_17, 1) = ((MR_Box) (Var_37));
      }
    }
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 0)));
    Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 1)));
    Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 2)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 3)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 4)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 5)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 6)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 7)));
    RevTableIoEntryDatas0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 8)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 9)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_0_34, (MR_Integer) 10)));
    {
      RevTableIoEntryDatas_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevTableIoEntryDatas_24, 0) = ((MR_Box) (TableIoEntryData_17));
      MR_hl_field(MR_mktag(1), RevTableIoEntryDatas_24, 1) = ((MR_Box) (RevTableIoEntryDatas0_23));
    }
    TableDataCounter0_25 = Var_46;
    {
      STATE_VARIABLE_ExecTraceInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 2) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 3) = ((MR_Box) (TableDataCounter0_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 4) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 5) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 6) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 7) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 8) = ((MR_Box) (RevTableIoEntryDatas_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 9) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, 10) = ((MR_Box) (Var_52));
    }
    mercury__counter__allocate_3_p_0(&Slot_26, TableDataCounter0_25, &TableDataCounter_27);
    Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 0)));
    Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 1)));
    Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 2)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 3)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 4)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 5)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 6)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 7)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 8)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 9)));
    TableIoEntryMap0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_39_39, (MR_Integer) 10)));
    {
      STATE_VARIABLE_ExecTraceInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 2) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 3) = ((MR_Box) (TableDataCounter_27));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 4) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 5) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 6) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 7) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 8) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 9) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, 10) = ((MR_Box) (TableIoEntryMap0_29));
    }
    {
      TableDataSlotName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TableDataSlotName_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
      MR_hl_field(MR_mktag(0), TableDataSlotName_28, 1) = ((MR_Box) (Slot_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTableSlotName_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TableDataSlotName_28));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (PredProcId_9)), ((MR_Box) (TableDataSlotName_28)), TableIoEntryMap0_29, &TableIoEntryMap_30);
    Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 0)));
    Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 1)));
    Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 2)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 3)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 4)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 5)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 6)));
    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 7)));
    Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 8)));
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 9)));
    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ExecTraceInfo_40_40, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ExecTraceInfo_35 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (TableIoEntryMap_30));
    }
  }
  else
  {
    *MaybeTableSlotName_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_StaticCellInfo_33 = STATE_VARIABLE_StaticCellInfo_0_32;
    *STATE_VARIABLE_ExecTraceInfo_35 = STATE_VARIABLE_ExecTraceInfo_0_34;
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_proc_static_layout_4_p_0(
  MR_Word DeepProfInfo_5,
  MR_Word * ProcStaticSlotName_6,
  MR_Word STATE_VARIABLE_ProcStaticInfo_0_42,
  MR_Word * STATE_VARIABLE_ProcStaticInfo_43)
{
  {
    MR_Word HLDSProcStatic_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfInfo_5, (MR_Integer) 0)));
    MR_Word DeepExcpSlots_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfInfo_5, (MR_Integer) 1)));
    MR_String FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), HLDSProcStatic_8, (MR_Integer) 0)));
    MR_Integer LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HLDSProcStatic_8, (MR_Integer) 1)));
    MR_Word IsInInterface_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDSProcStatic_8, (MR_Integer) 2)));
    MR_Word CallSites_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDSProcStatic_8, (MR_Integer) 3)));
    MR_Word CoveragePoints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDSProcStatic_8, (MR_Integer) 4)));
    MR_Word MaybeCallSitesTuple_16;
    MR_Word MaybeCoveragePointsTuple_26;
    MR_Word ProcStatic_36;
    MR_Word RevProcStatics0_37;
    MR_Word RevProcStatics_38;
    MR_Word ProcStaticCounter0_39;
    MR_Integer ProcStaticSlot_40;
    MR_Word ProcStaticCounter_41;
    MR_Word STATE_VARIABLE_ProcStaticInfo_45_45;
    MR_Word STATE_VARIABLE_ProcStaticInfo_48_48;
    MR_Word STATE_VARIABLE_ProcStaticInfo_50_50;
    MR_Integer Var_97;
    MR_Integer Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word _OrigBody_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepProfInfo_5, (MR_Integer) 2)));
    MR_Integer Var_113;
    MR_Integer Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_115;

    if ((CallSites_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeCallSitesTuple_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_ProcStaticInfo_45_45 = STATE_VARIABLE_ProcStaticInfo_0_42;
    }
    else
    {
      MR_Word TypeCtorInfo_119_119 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
      MR_Word RevCallSites_19;
      MR_Integer NumCallSites_20;
      MR_Word RevAllCallSites0_21;
      MR_Word RevAllCallSites_22;
      MR_Integer CallSiteSlot_24;
      MR_Integer NextCallSite_25;
      MR_Tuple Var_46;
      MR_Integer Var_59;
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Integer Var_53;
      MR_Integer Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_61;

      mercury__list__reverse_2_p_0(TypeCtorInfo_119_119, CallSites_14, &RevCallSites_19);
      mercury__list__length_2_p_0(TypeCtorInfo_119_119, CallSites_14, &NumCallSites_20);
      Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 0)));
      Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 1)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 2)));
      RevAllCallSites0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 3)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 4)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 5)));
      RevAllCallSites_22 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_119_119, RevCallSites_19, RevAllCallSites0_21);
      CallSiteSlot_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 0)));
      Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 1)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 2)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 3)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 4)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_0_42, (MR_Integer) 5)));
      NextCallSite_25 = (CallSiteSlot_24 + NumCallSites_20);
      {
        STATE_VARIABLE_ProcStaticInfo_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, 0) = ((MR_Box) (NextCallSite_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, 1) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, 2) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, 3) = ((MR_Box) (RevAllCallSites_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, 4) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, 5) = ((MR_Box) (Var_63));
      }
      {
        Var_46 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (CallSiteSlot_24));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (NumCallSites_20));
      }
      {
        MaybeCallSitesTuple_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCallSitesTuple_16, 0) = ((MR_Box) (Var_46));
      }
    }
    if ((CoveragePoints_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeCoveragePointsTuple_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_ProcStaticInfo_48_48 = STATE_VARIABLE_ProcStaticInfo_45_45;
    }
    else
    {
      MR_Word TypeCtorInfo_120_120 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0;
      MR_Word RevCoveragePoints_29;
      MR_Integer NumCoveragePoints_30;
      MR_Word RevAllCoveragePoints0_31;
      MR_Word RevAllCoveragePoints_32;
      MR_Integer CoveragePointSlot_34;
      MR_Integer NextCoveragePoint_35;
      MR_Tuple Var_49;
      MR_Integer Var_80;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_85;
      MR_Integer Var_75;
      MR_Integer Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_84;

      mercury__list__reverse_2_p_0(TypeCtorInfo_120_120, CoveragePoints_15, &RevCoveragePoints_29);
      mercury__list__length_2_p_0(TypeCtorInfo_120_120, CoveragePoints_15, &NumCoveragePoints_30);
      Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 0)));
      Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 1)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 2)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 3)));
      RevAllCoveragePoints0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 4)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 5)));
      RevAllCoveragePoints_32 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_120_120, RevCoveragePoints_29, RevAllCoveragePoints0_31);
      Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 0)));
      CoveragePointSlot_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 1)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 2)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 3)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 4)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_45_45, (MR_Integer) 5)));
      NextCoveragePoint_35 = (CoveragePointSlot_34 + NumCoveragePoints_30);
      {
        STATE_VARIABLE_ProcStaticInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, 1) = ((MR_Box) (NextCoveragePoint_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, 2) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, 3) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, 4) = ((MR_Box) (RevAllCoveragePoints_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, 5) = ((MR_Box) (Var_85));
      }
      {
        Var_49 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (CoveragePointSlot_34));
        MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (NumCoveragePoints_30));
      }
      {
        MaybeCoveragePointsTuple_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCoveragePointsTuple_26, 0) = ((MR_Box) (Var_49));
      }
    }
    {
      ProcStatic_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcStatic_36, 0) = ((MR_Box) (FileName_11));
      MR_hl_field(MR_mktag(0), ProcStatic_36, 1) = ((MR_Box) (LineNumber_12));
      MR_hl_field(MR_mktag(0), ProcStatic_36, 2) = ((MR_Box) (IsInInterface_13));
      MR_hl_field(MR_mktag(0), ProcStatic_36, 3) = ((MR_Box) (DeepExcpSlots_9));
      MR_hl_field(MR_mktag(0), ProcStatic_36, 4) = ((MR_Box) (MaybeCallSitesTuple_16));
      MR_hl_field(MR_mktag(0), ProcStatic_36, 5) = ((MR_Box) (MaybeCoveragePointsTuple_26));
    }
    Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, (MR_Integer) 0)));
    Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, (MR_Integer) 1)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, (MR_Integer) 2)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, (MR_Integer) 3)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, (MR_Integer) 4)));
    RevProcStatics0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_48_48, (MR_Integer) 5)));
    {
      RevProcStatics_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevProcStatics_38, 0) = ((MR_Box) (ProcStatic_36));
      MR_hl_field(MR_mktag(1), RevProcStatics_38, 1) = ((MR_Box) (RevProcStatics0_37));
    }
    ProcStaticCounter0_39 = Var_99;
    {
      STATE_VARIABLE_ProcStaticInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, 0) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, 1) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, 2) = ((MR_Box) (ProcStaticCounter0_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, 3) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, 4) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, 5) = ((MR_Box) (RevProcStatics_38));
    }
    mercury__counter__allocate_3_p_0(&ProcStaticSlot_40, ProcStaticCounter0_39, &ProcStaticCounter_41);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ProcStaticSlotName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcStaticSlot_40));
    }
    Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, (MR_Integer) 0)));
    Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, (MR_Integer) 1)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, (MR_Integer) 2)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, (MR_Integer) 3)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, (MR_Integer) 4)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcStaticInfo_50_50, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ProcStaticInfo_43 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcStaticCounter_41));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_118));
    }
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
  {
    MR_bool succeeded;
    MR_Word MaybeSuccipInt_17;
    MR_Word StaticCodeAddr_18;
    MR_Word MaybeEntryLabel_19;
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

    if ((MaybeSuccipLoc_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeSuccipInt_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer Location_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeSuccipLoc_11, (MR_Integer) 0)));
      MR_Word SuccipLval_15;
      MR_Integer SuccipInt_16;
      MR_Word Var_21;
      MR_Word Var_33;
      MR_Word Var_14;

      parse_tree__prog_data__determinism_components_3_p_0(Detism_9, &Var_14, &Var_33);
      succeeded = ((MR_Integer) 3 == Var_33);
      if (succeeded)
        {
          SuccipLval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SuccipLval_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), SuccipLval_15, 1) = ((MR_Box) (Location_13));
        }
      else
        {
          SuccipLval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SuccipLval_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), SuccipLval_15, 1) = ((MR_Box) (Location_13));
        }
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (SuccipLval_15));
      }
      ll_backend__stack_layout__represent_locn_as_int_2_p_0(Var_21, &SuccipInt_16);
      {
        MaybeSuccipInt_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeSuccipInt_17, 0) = ((MR_Box) (SuccipInt_16));
      }
    }
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
    Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
    StaticCodeAddr_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    switch (StaticCodeAddr_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeEntryLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MaybeEntryLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEntryLabel_19, 0) = ((MR_Box) (EntryLabel_8));
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *Traversal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeEntryLabel_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeSuccipInt_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NumStackSlots_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Detism_9));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__add_line_no_4_p_0(
  MR_Integer LineNo_5,
  MR_Word LineInfo_6,
  MR_Word RevList0_7,
  MR_Word * RevList_8)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (LineNo_5));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (LineInfo_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *RevList_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevList0_7));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__format_label_table_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_17;

    ll_backend__stack_layout__IntroducedFrom__pred__format_label_table__381__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_17);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  }
}

static void MR_CALL 
ll_backend__stack_layout__format_label_table_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * FileLayoutData_5)
{
  {
    MR_String FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word LineNoMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word LineNoList_6;
    MR_Word FlatLineNoList_7;
    MR_Word FilteredList_14;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__stack_layout_scalar_common_2[0], LineNoMap_4, &LineNoList_6);
    ll_backend__stack_layout__flatten_label_table_3_p_0(LineNoList_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &FlatLineNoList_7);
    mercury__list__map_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[8], (MR_Word) &ll_backend__stack_layout_scalar_common_1[9], (MR_Word) &ll_backend__stack_layout_scalar_common_1[20], FlatLineNoList_7, &FilteredList_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FileLayoutData_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FilteredList_14));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__flatten_label_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RevList_8;

    ll_backend__stack_layout__add_line_no_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_RevList_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_RevList_8));
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[8], HeadVar__2_2, List_3);
    }
    else
    {
      MR_Integer LineNo_6;
      MR_Word LinesInfos_7;
      MR_Word Lines_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word RevList1_11;
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_13;
      MR_Box conv1_RevList1_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      LineNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
      LinesInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_8[3]));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__stack_layout__flatten_label_table_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (LineNo_6));
      }
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[0], (MR_Word) &ll_backend__stack_layout_scalar_common_2[5], Var_13, LinesInfos_7, ((MR_Box) (HeadVar__2_2)), &conv1_RevList1_11);
      RevList1_11 = ((MR_Word) conv1_RevList1_11);
      // direct tailcall eliminated
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
  {
    MR_Word Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attr_5, (MR_Integer) 2)));
    MR_Word TypeRval_11;
    MR_Word TypeRvalType_12;
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Attr_5, (MR_Integer) 0)));
    MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Attr_5, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attr_5, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attr_5, (MR_Integer) 4)));

    ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(Type_8, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_StaticCellInfo_0_13, STATE_VARIABLE_StaticCellInfo_14, &TypeRval_11, &TypeRvalType_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeRvalAndType_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeRval_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeRvalType_12));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeRvalAndType_6;
    MR_Word conv0_STATE_VARIABLE_StaticCellInfo_14;

    ll_backend__stack_layout__build_event_arg_type_info_4_p_0(((MR_Word) wrapper_arg_1), &conv1_TypeRvalAndType_6, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_StaticCellInfo_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeRvalAndType_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_14));
  }
}

static void MR_CALL 
ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0(
  MR_Word EventSpec_6,
  MR_Word STATE_VARIABLE_EventArgTypeInfoMap_0_14,
  MR_Word * STATE_VARIABLE_EventArgTypeInfoMap_15,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_16,
  MR_Word * STATE_VARIABLE_StaticCellInfo_17)
{
  {
    MR_Integer EventNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EventSpec_6, (MR_Integer) 0)));
    MR_Word Attrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), EventSpec_6, (MR_Integer) 3)));
    MR_Word RvalsAndTypes_11;
    MR_Word TypesDataAddr_12;
    MR_Word Rval_13;
    MR_Word STATE_VARIABLE_StaticCellInfo_19_19;
    MR_Word Var_21;
    MR_String Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), EventSpec_6, (MR_Integer) 1)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EventSpec_6, (MR_Integer) 2)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), EventSpec_6, (MR_Integer) 4)));
    MR_Box conv2_STATE_VARIABLE_StaticCellInfo_19_19;

    mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[19], Attrs_10, &RvalsAndTypes_11, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_16)), &conv2_STATE_VARIABLE_StaticCellInfo_19_19);
    STATE_VARIABLE_StaticCellInfo_19_19 = ((MR_Word) conv2_STATE_VARIABLE_StaticCellInfo_19_19);
    ll_backend__global_data__add_scalar_static_cell_4_p_0(RvalsAndTypes_11, &TypesDataAddr_12, STATE_VARIABLE_StaticCellInfo_19_19, STATE_VARIABLE_StaticCellInfo_17);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TypesDataAddr_12));
      MR_hl_field(MR_mktag(3), Var_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Rval_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Rval_13, 1) = ((MR_Box) (Var_21));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, EventNumber_9, ((MR_Box) (Rval_13)), STATE_VARIABLE_EventArgTypeInfoMap_0_14, STATE_VARIABLE_EventArgTypeInfoMap_15);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__valid_proc_layout_1_p_0(
  MR_Word ProcLayoutInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word EntryLabel_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 1)));
    MR_Word ProcLabel_4;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 2)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 7)));
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 8)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 9)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 10)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 11)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 12)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 13)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 14)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 15)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 16)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 17)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 18)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 19)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 20)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 21)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 22)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_2, (MR_Integer) 23)));

    ProcLabel_4 = ll_backend__llds__get_proc_label_1_f_0(EntryLabel_3);
    if (((MR_tag((MR_Word) ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word DeclModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 2)));
      MR_String Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 3)));
      MR_Integer Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 4)));
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 0)));
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 1)));
      MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 5)));

      succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(DeclModule_7, Name_8, Arity_9);
      succeeded = !(succeeded);
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_VarNumMap_30;
    MR_Word conv6_STATE_VARIABLE_Counter_32;

    ll_backend__stack_layout__internal_var_number_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_STATE_VARIABLE_VarNumMap_30, ((MR_Word) wrapper_arg_4), &conv6_STATE_VARIABLE_Counter_32);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_VarNumMap_30));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Counter_32));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_VarNumMap_14;
    MR_Word conv0_STATE_VARIABLE_Counter_16;

    ll_backend__stack_layout__add_var_to_var_number_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_VarNumMap_14, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Counter_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarNumMap_14));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Counter_16));
  }
}

void MR_CALL 
ll_backend__stack_layout__compute_var_number_map_5_p_0(
  MR_Word HeadVars_6,
  MR_Word VarSet_7,
  MR_Word Internals_8,
  MR_Word Goal_9,
  MR_Word * VarNumMap_10)
{
  {
    MR_Word TypeInfo_26_26 = (MR_Word) &ll_backend__stack_layout_scalar_common_2[4];
    MR_Word TypeInfo_34_34;
    MR_Word TypeCtorInfo_35_35;
    MR_Word GoalVarSet_12;
    MR_Word GoalVars_13;
    MR_Word STATE_VARIABLE_VarNumMap_15_15;
    MR_Word STATE_VARIABLE_Counter_16_16;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_VarNumMap_19_19;
    MR_Word STATE_VARIABLE_Counter_20_20;
    MR_Word STATE_VARIABLE_VarNumMap_22_22;
    MR_Word STATE_VARIABLE_Counter_23_23;
    MR_Word Var_24;
    MR_Box conv3_STATE_VARIABLE_VarNumMap_19_19;
    MR_Box conv2_STATE_VARIABLE_Counter_20_20;
    MR_Box conv5_STATE_VARIABLE_VarNumMap_22_22;
    MR_Box conv4_STATE_VARIABLE_Counter_23_23;
    MR_Word Var_14;
    MR_Box conv9_VarNumMap_10;
    MR_Box conv8_Var_14;

    STATE_VARIABLE_VarNumMap_15_15 = mercury__map__init_0_f_0(TypeInfo_26_26, (MR_Word) &ll_backend__stack_layout_scalar_common_1[4]);
    STATE_VARIABLE_Counter_16_16 = mercury__counter__init_1_f_0((MR_Integer) 1);
    hlds__goal_util__goal_vars_2_p_0(Goal_9, &GoalVarSet_12);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, GoalVarSet_12, &GoalVars_13);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ll_backend__stack_layout__compute_var_number_map_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VarSet_7));
    }
    TypeInfo_34_34 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[5];
    TypeCtorInfo_35_35 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
    mercury__list__foldl2_6_p_0(TypeInfo_26_26, TypeInfo_34_34, TypeCtorInfo_35_35, Var_18, GoalVars_13, ((MR_Box) (STATE_VARIABLE_VarNumMap_15_15)), &conv3_STATE_VARIABLE_VarNumMap_19_19, ((MR_Box) (STATE_VARIABLE_Counter_16_16)), &conv2_STATE_VARIABLE_Counter_20_20);
    STATE_VARIABLE_VarNumMap_19_19 = ((MR_Word) conv3_STATE_VARIABLE_VarNumMap_19_19);
    STATE_VARIABLE_Counter_20_20 = ((MR_Word) conv2_STATE_VARIABLE_Counter_20_20);
    mercury__list__foldl2_6_p_0(TypeInfo_26_26, TypeInfo_34_34, TypeCtorInfo_35_35, Var_18, HeadVars_6, ((MR_Box) (STATE_VARIABLE_VarNumMap_19_19)), &conv5_STATE_VARIABLE_VarNumMap_22_22, ((MR_Box) (STATE_VARIABLE_Counter_20_20)), &conv4_STATE_VARIABLE_Counter_23_23);
    STATE_VARIABLE_VarNumMap_22_22 = ((MR_Word) conv5_STATE_VARIABLE_VarNumMap_22_22);
    STATE_VARIABLE_Counter_23_23 = ((MR_Word) conv4_STATE_VARIABLE_Counter_23_23);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__stack_layout__compute_var_number_map_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (VarSet_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[6], TypeInfo_34_34, TypeCtorInfo_35_35, Var_24, Internals_8, ((MR_Box) (STATE_VARIABLE_VarNumMap_22_22)), &conv9_VarNumMap_10, ((MR_Box) (STATE_VARIABLE_Counter_23_23)), &conv8_Var_14);
    *VarNumMap_10 = ((MR_Word) conv9_VarNumMap_10);
    Var_14 = ((MR_Word) conv8_Var_14);
  }
}

void MR_CALL 
ll_backend__stack_layout__represent_determinism_rval_2_p_0(
  MR_Word Detism_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4;
    MR_Integer Var_5;

    Var_5 = hlds__code_model__represent_determinism_1_f_0(Detism_3);
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (Var_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_4));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LvalLocns_4;

    ll_backend__stack_layout__convert_slot_to_locn_map_2_p_0(((MR_Word) wrapper_arg_1), &conv3_LvalLocns_4);
    *wrapper_arg_2 = ((MR_Box) (conv3_LvalLocns_4));
  }
}

static void MR_CALL 
ll_backend__stack_layout__convert_table_arg_info_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;
    MR_Word conv0_STATE_VARIABLE_StaticCellInfo_16;

    ll_backend__stack_layout__construct_table_arg_pti_rval_4_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_StaticCellInfo_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_16));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_arg_info_0;
    MR_Word Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableArgInfos_7, (MR_Integer) 0)));
    MR_Word TVarSlotMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TableArgInfos_7, (MR_Integer) 1)));
    MR_Word PTIRvalsTypes_14;
    MR_Word PTIVectorAddr_15;
    MR_Word TVarLocnMap_16;
    MR_Word STATE_VARIABLE_StaticCellInfo_20_20;
    MR_Word STATE_VARIABLE_StaticCellInfo_21_21;
    MR_Word Var_22;
    MR_Box conv2_STATE_VARIABLE_StaticCellInfo_20_20;

    mercury__list__length_2_p_0(TypeCtorInfo_26_26, Args_12, NumPTIs_8);
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_26_26, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[17], Args_12, &PTIRvalsTypes_14, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_17)), &conv2_STATE_VARIABLE_StaticCellInfo_20_20);
    STATE_VARIABLE_StaticCellInfo_20_20 = ((MR_Word) conv2_STATE_VARIABLE_StaticCellInfo_20_20);
    ll_backend__global_data__add_scalar_static_cell_4_p_0(PTIRvalsTypes_14, &PTIVectorAddr_15, STATE_VARIABLE_StaticCellInfo_20_20, &STATE_VARIABLE_StaticCellInfo_21_21);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (PTIVectorAddr_15));
      MR_hl_field(MR_mktag(3), Var_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *PTIVectorRval_9 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_22));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_locn_0, (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], (MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_1[18], TVarSlotMap_13, &TVarLocnMap_16);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], TVarLocnMap_16);
    if (succeeded)
    {
      *TVarVectorRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[25]);
      *STATE_VARIABLE_StaticCellInfo_18 = STATE_VARIABLE_StaticCellInfo_21_21;
    }
    else
    {
      MR_Word Vector_43;
      MR_Word DataAddr_44;
      MR_Word Var_48;
      MR_Word TVarLocns_54;
      MR_Word TypeParamLocs_55;
      MR_Integer TypeParamsLength_56;
      MR_Word LengthRval_57;
      MR_Word Var_59;
      MR_Word Var_60;

      mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], TVarLocnMap_16, &TVarLocns_54);
      ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_54, (MR_Integer) 1, &TypeParamLocs_55);
      mercury__list__length_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, TypeParamLocs_55, &TypeParamsLength_56);
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (TypeParamsLength_56));
      }
      {
        LengthRval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LengthRval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), LengthRval_57, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (LengthRval_57));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[0])));
      }
      {
        Vector_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vector_43, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Vector_43, 1) = ((MR_Box) (TypeParamLocs_55));
      }
      ll_backend__global_data__add_scalar_static_cell_4_p_0(Vector_43, &DataAddr_44, STATE_VARIABLE_StaticCellInfo_21_21, STATE_VARIABLE_StaticCellInfo_18);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (DataAddr_44));
        MR_hl_field(MR_mktag(3), Var_48, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TVarVectorRval_10 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_48));
      }
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;
    MR_Word conv0_STATE_VARIABLE_StaticCellInfo_14;

    ll_backend__stack_layout__construct_closure_arg_rval_4_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_StaticCellInfo_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_14));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_24_63;
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
    MR_Word STATE_VARIABLE_StaticCellInfo_40_40;
    MR_Word Var_43;
    MR_Word ArgTypedRvals_49;
    MR_Integer Length_50;
    MR_Word LengthTypedRval_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Box conv2_STATE_VARIABLE_StaticCellInfo_40_40;

    {
      ClosureId_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClosureId_26, 0) = ((MR_Box) (CallerProcLabel_14));
      MR_hl_field(MR_mktag(1), ClosureId_26, 1) = ((MR_Box) (SeqNo_15));
      MR_hl_field(MR_mktag(1), ClosureId_26, 2) = ((MR_Box) (ClosureProcLabel_17));
    }
    {
      DataId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DataId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), DataId_27, 1) = ((MR_Box) (ClosureId_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *Data_25 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallerProcLabel_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SeqNo_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ClosureProcLabel_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FileName_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (LineNumber_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Origin_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (GoalPath_22));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (DataId_27));
      MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ProcIdRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ProcIdRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ProcIdRval_28, 1) = ((MR_Box) (Var_37));
    }
    {
      ProcIdTypedRval_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcIdTypedRval_29, 0) = ((MR_Box) (ProcIdRval_28));
      MR_hl_field(MR_mktag(0), ProcIdTypedRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    ClosureArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureLayoutInfo_16, (MR_Integer) 0)));
    TVarLocnMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureLayoutInfo_16, (MR_Integer) 1)));
    TypeCtorInfo_24_63 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
    mercury__list__map_foldl_5_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0, TypeCtorInfo_24_63, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[16], ClosureArgs_30, &ArgTypedRvals_49, ((MR_Box) (STATE_VARIABLE_StaticCellInfo_0_35)), &conv2_STATE_VARIABLE_StaticCellInfo_40_40);
    STATE_VARIABLE_StaticCellInfo_40_40 = ((MR_Word) conv2_STATE_VARIABLE_StaticCellInfo_40_40);
    mercury__list__length_2_p_0(TypeCtorInfo_24_63, ArgTypedRvals_49, &Length_50);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Length_50));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      LengthTypedRval_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LengthTypedRval_51, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), LengthTypedRval_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[2])));
    }
    {
      ClosureArgTypedRvals_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClosureArgTypedRvals_32, 0) = ((MR_Box) (LengthTypedRval_51));
      MR_hl_field(MR_mktag(1), ClosureArgTypedRvals_32, 1) = ((MR_Box) (ArgTypedRvals_49));
    }
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], TVarLocnMap_31);
    if (succeeded)
    {
      TVarVectorRval_33 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__stack_layout_scalar_common_2[25]);
      *STATE_VARIABLE_StaticCellInfo_36 = STATE_VARIABLE_StaticCellInfo_40_40;
    }
    else
    {
      MR_Word Vector_70;
      MR_Word DataAddr_71;
      MR_Word Var_75;
      MR_Word TVarLocns_81;
      MR_Word TypeParamLocs_82;
      MR_Integer TypeParamsLength_83;
      MR_Word LengthRval_84;
      MR_Word Var_86;
      MR_Word Var_87;

      mercury__map__to_assoc_list_2_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[3], (MR_Word) &ll_backend__stack_layout_scalar_common_2[2], TVarLocnMap_31, &TVarLocns_81);
      ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_81, (MR_Integer) 1, &TypeParamLocs_82);
      mercury__list__length_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, TypeParamLocs_82, &TypeParamsLength_83);
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (TypeParamsLength_83));
      }
      {
        LengthRval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LengthRval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), LengthRval_84, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (LengthRval_84));
        MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[0])));
      }
      {
        Vector_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vector_70, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(1), Vector_70, 1) = ((MR_Box) (TypeParamLocs_82));
      }
      ll_backend__global_data__add_scalar_static_cell_4_p_0(Vector_70, &DataAddr_71, STATE_VARIABLE_StaticCellInfo_40_40, STATE_VARIABLE_StaticCellInfo_36);
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (DataAddr_71));
        MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        TVarVectorRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TVarVectorRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), TVarVectorRval_33, 1) = ((MR_Box) (Var_75));
      }
    }
    {
      TVarVectorTypedRval_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TVarVectorTypedRval_34, 0) = ((MR_Box) (TVarVectorRval_33));
      MR_hl_field(MR_mktag(0), TVarVectorTypedRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (TVarVectorTypedRval_34));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (ClosureArgTypedRvals_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *TypedRvals_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIdTypedRval_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurSlot_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TVar_5;
      MR_Word Locns_6;
      MR_Word TVarLocns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer TVarNum_10;
      MR_Integer NextSlot_11;
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
      Locns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVar_5, &TVarNum_10);
      NextSlot_11 = (CurSlot_2 + (MR_Integer) 1);
      succeeded = (TVarNum_10 == CurSlot_2);
      if (succeeded)
      {
        MR_Word Locn_14;
        MR_Word Rval_15;
        MR_Word VectorTail_16;
        MR_Word Var_22;
        MR_Integer Word_42;
        MR_Word Var_43;
        MR_Word LeastLocn_12;
        MR_Word Var_13;
        MR_Box conv0_LeastLocn_12;

        succeeded = mercury__set__remove_least_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, &conv0_LeastLocn_12, Locns_6, &Var_13);
        if (succeeded)
        {
          LeastLocn_12 = ((MR_Word) conv0_LeastLocn_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Locn_14 = LeastLocn_12;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_type_param_locn_vector\'/3", (MR_String) "tvar has empty set of locations");
            return;
          }
        }
        ll_backend__stack_layout__represent_locn_as_int_2_p_0(Locn_14, &Word_42);
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Word_42));
        }
        {
          Rval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Rval_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Rval_15, 1) = ((MR_Box) (Var_43));
        }
        ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(TVarLocns_7, NextSlot_11, &VectorTail_16);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Rval_15));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__stack_layout_scalar_common_3[0])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VectorTail_16));
        }
      }
      else
      {
        succeeded = (TVarNum_10 > CurSlot_2);
        if (succeeded)
        {
          MR_Word VectorTail_36;

          ll_backend__stack_layout__construct_type_param_locn_vector_3_p_0(HeadVar__1_1, NextSlot_11, &VectorTail_36);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_2[24]));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VectorTail_36));
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.construct_type_param_locn_vector\'/3", (MR_String) "unsorted tvars");
            return;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_locn_as_int_2_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__stack_layout__represent_locn_as_int_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Word_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

      ll_backend__stack_layout__represent_lval_2_p_0(Lval_3, Word_2);
    }
    else
    {
      MR_Word Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer Offset_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer BaseWord_8;
      MR_Integer BaseAndOffset_9;
      MR_Word Var_10;
      MR_Integer Var_14;
      MR_Integer Var_17;
      MR_Integer Tag_23;
      MR_Integer Var_24;

      ll_backend__stack_layout__represent_lval_2_p_0(Lval_5, &BaseWord_8);
      Var_14 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 6);
      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ll_backend__stack_layout__represent_locn_as_int_2_p_0_1));
        MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Offset_6));
      }
      mercury__require__expect_4_p_0(Var_10, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_locn_as_int\'/2", (MR_String) "offset too large to be represented");
      Var_17 = mercury__int__f_60_60_2_f_0(BaseWord_8, (MR_Integer) 6);
      BaseAndOffset_9 = (Var_17 + Offset_6);
      ll_backend__stack_layout__locn_type_code_2_p_0((MR_Integer) 9, &Tag_23);
      Var_24 = mercury__int__f_60_60_2_f_0(BaseAndOffset_9, (MR_Integer) 5);
      *Word_2 = (Var_24 + Tag_23);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout__represent_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Word_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 4, (MR_Integer) 0, Word_2);
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 5, (MR_Integer) 0, Word_2);
            }
            break;
          case (MR_Integer) 2:
            {
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 6, (MR_Integer) 0, Word_2);
            }
            break;
          case (MR_Integer) 3:
            {
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 7, (MR_Integer) 0, Word_2);
            }
            break;
          case (MR_Integer) 4:
            {
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 8, (MR_Integer) 0, Word_2);
            }
            break;
          case (MR_Integer) 5:
            {
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 10, (MR_Integer) 0, Word_2);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
          MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

          switch (Var_117) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 1, Var_116, Word_2);
              }
              break;
            case (MR_Integer) 0:
              {
                ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 0, Var_116, Word_2);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in temp register");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Num_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_13;

              {
                Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_4));
                MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Num_11));
                MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_13, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad stackvar");
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 2, Num_11, Word_2);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Num_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_21;

              {
                Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_3));
                MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Num_19));
                MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_21, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad parent_stackvar");
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 11, Num_19, Word_2);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Num_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_2));
                MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Num_27));
                MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_29, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad framevar");
              ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 3, Num_27, Word_2);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word StackType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__stack_layout__represent_lval_2_p_0_1));
                MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Num_36));
                MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_38, (MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "bad stackvar");
              switch (StackType_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 13, Num_36, Word_2);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    ll_backend__stack_layout__make_tagged_word_3_p_0((MR_Integer) 12, Num_36, Word_2);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
                return;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in fixed slot");
                return;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in field");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in mem_ref");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in global_var_ref");
                return;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_layout", (MR_String) "predicate \140ll_backend.stack_layout.represent_lval\'/2", (MR_String) "continuation live value stored in lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__stack_layout__make_tagged_word_3_p_0(
  MR_Word Locn_4,
  MR_Integer Value_5,
  MR_Integer * TaggedValue_6)
{
  {
    MR_Integer Tag_7;
    MR_Integer Var_8;

    ll_backend__stack_layout__locn_type_code_2_p_0(Locn_4, &Tag_7);
    Var_8 = mercury__int__f_60_60_2_f_0(Value_5, (MR_Integer) 5);
    *TaggedValue_6 = (Var_8 + Tag_7);
  }
}

static void MR_CALL 
ll_backend__stack_layout__locn_type_code_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = ((&ll_backend__stack_layout_vector_common_7[0 + HeadVar__1_1]))->ll_backend__stack_layout__vector_common_type_7_0__vct_7_f_0;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_EventArgTypeInfoMap_15;
    MR_Word conv12_STATE_VARIABLE_StaticCellInfo_17;

    ll_backend__stack_layout__build_event_arg_type_info_map_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv13_STATE_VARIABLE_EventArgTypeInfoMap_15, ((MR_Word) wrapper_arg_4), &conv12_STATE_VARIABLE_StaticCellInfo_17);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_EventArgTypeInfoMap_15));
    *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_StaticCellInfo_17));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_LabelTables_57;
    MR_Word conv4_STATE_VARIABLE_StringTable_59;
    MR_Word conv3_STATE_VARIABLE_TypeTable_61;
    MR_Word conv2_STATE_VARIABLE_StaticCellInfo_63;
    MR_Word conv1_STATE_VARIABLE_LabelLayoutInfo_65;
    MR_Word conv0_STATE_VARIABLE_ProcLayoutInfo_67;

    ll_backend__stack_layout__construct_proc_and_label_layouts_for_proc_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_STATE_VARIABLE_LabelTables_57, ((MR_Word) wrapper_arg_4), &conv4_STATE_VARIABLE_StringTable_59, ((MR_Word) wrapper_arg_6), &conv3_STATE_VARIABLE_TypeTable_61, ((MR_Word) wrapper_arg_8), &conv2_STATE_VARIABLE_StaticCellInfo_63, ((MR_Word) wrapper_arg_10), &conv1_STATE_VARIABLE_LabelLayoutInfo_65, ((MR_Word) wrapper_arg_12), &conv0_STATE_VARIABLE_ProcLayoutInfo_67);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_LabelTables_57));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_StringTable_59));
    *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_TypeTable_61));
    *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_StaticCellInfo_63));
    *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_LabelLayoutInfo_65));
    *wrapper_arg_13 = ((MR_Box) (conv0_STATE_VARIABLE_ProcLayoutInfo_67));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_574_574;
    MR_Word TypeInfo_575_575;
    MR_Word TypeCtorInfo_593_593;
    MR_Word TypeCtorInfo_599_599;
    MR_Word TypeCtorInfo_605_605;
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
    MR_Integer Var_154;
    MR_Integer Var_155;
    MR_Integer Var_156;
    MR_Integer Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Integer Var_163;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_68;
    MR_Word Var_173;
    MR_Integer Var_174;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Integer Var_179;
    MR_Integer Var_180;
    MR_Word Var_181;
    MR_Word Var_206;
    MR_Integer Var_207;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_210;
    MR_Word Var_211;
    MR_Integer Var_212;
    MR_Integer Var_213;
    MR_Integer Var_214;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_221;
    MR_Word Var_286;
    MR_Integer Var_287;
    MR_Word Var_291;
    MR_Integer Var_292;
    MR_Integer Var_293;
    MR_Integer Var_294;
    MR_Word Var_295;
    MR_Word Var_296;
    MR_Word Var_297;
    MR_Word Var_298;
    MR_Word Var_299;
    MR_Word Var_300;
    MR_Word Var_301;
    MR_Integer Var_320;
    MR_Integer Var_321;
    MR_Integer Var_322;
    MR_Integer Var_323;
    MR_Word Var_327;
    MR_Integer Var_328;
    MR_Word Var_329;
    MR_Word Var_330;
    MR_Word Var_331;
    MR_Word Var_332;
    MR_Word Var_333;
    MR_Word Var_334;
    MR_Word Var_335;
    MR_Word Var_336;
    MR_Word Var_337;
    MR_Word Var_338;
    MR_Integer Var_396;
    MR_Integer Var_397;
    MR_Integer Var_398;
    MR_Integer Var_399;
    MR_Word Var_400;
    MR_Word Var_401;
    MR_Word Var_402;
    MR_Word Var_403;
    MR_Word Var_404;
    MR_Integer Var_405;
    MR_Word Var_407;
    MR_Word Var_408;
    MR_Word Var_409;
    MR_Word Var_410;
    MR_Word Var_411;
    MR_Word Var_412;
    MR_Word Var_413;
    MR_Word Var_414;
    MR_Integer Var_434;
    MR_Integer Var_435;
    MR_Integer Var_436;
    MR_Integer Var_437;
    MR_Word Var_438;
    MR_Word Var_439;
    MR_Word Var_440;
    MR_Word Var_441;
    MR_Word Var_442;
    MR_Integer Var_443;
    MR_Word Var_444;
    MR_Word Var_445;
    MR_Word Var_446;
    MR_Word Var_447;
    MR_Word Var_448;
    MR_Word Var_451;
    MR_Word Var_452;
    MR_Integer Var_491;
    MR_Integer Var_492;
    MR_Integer Var_493;
    MR_Integer Var_494;
    MR_Word Var_495;
    MR_Word Var_496;
    MR_Word Var_497;
    MR_Word Var_498;
    MR_Word Var_499;
    MR_Integer Var_500;
    MR_Word Var_501;
    MR_Word Var_502;
    MR_Word Var_503;
    MR_Word Var_504;
    MR_Word Var_505;
    MR_Word Var_506;
    MR_Word Var_507;
    MR_Word Var_508;
    MR_Word Var_509;
    MR_Word Var_510;
    MR_Word Var_511;
    MR_Integer Var_512;
    MR_Word Var_513;
    MR_Word Var_514;
    MR_Word Var_515;
    MR_Word Var_516;
    MR_Word Var_517;
    MR_Word Var_518;
    MR_Word Var_519;
    MR_Word Var_521;
    MR_Word Var_522;
    MR_Word Var_523;
    MR_Word Var_524;
    MR_Word Var_526;

    Params_52 = ll_backend__stack_layout__init_stack_layout_params_1_f_0(ModuleInfo_27);
    TypeCtorInfo_574_574 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    TypeInfo_575_575 = (MR_Word) &ll_backend__stack_layout_scalar_common_1[1];
    mercury__map__init_1_p_0(TypeCtorInfo_574_574, TypeInfo_575_575, &LabelTables0_53);
    StringTable0_54 = ll_backend__prog_rep_tables__init_string_table_info_0_f_0();
    TypeTable0_55 = ll_backend__prog_rep_tables__init_type_table_info_0_f_0();
    ll_backend__global_data__global_data_get_static_cell_info_2_p_0(STATE_VARIABLE_GlobalData_0_131, &StaticCellInfo0_56);
    LabelLayoutInfo0_57 = ll_backend__stack_layout__init_label_layouts_info_0_f_0();
    ProcLayoutInfo0_58 = ll_backend__stack_layout__init_proc_layouts_info_0_f_0();
    ll_backend__global_data__global_data_get_all_proc_layouts_2_p_0(STATE_VARIABLE_GlobalData_0_131, &ProcLayoutList_59);
    {
      Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (&ll_backend__stack_layout_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (ll_backend__stack_layout__generate_llds_layout_data_26_p_0_1));
      MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_133, 3) = ((MR_Box) (Params_52));
    }
    TypeCtorInfo_593_593 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0;
    mercury__list__foldl6_14_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[2], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, TypeCtorInfo_593_593, (MR_Word) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_label_layouts_info_0, (MR_Word) &ll_backend__stack_layout__ll_backend__stack_layout__type_ctor_info_proc_layouts_info_0, Var_133, ProcLayoutList_59, ((MR_Box) (LabelTables0_53)), &conv11_LabelTables_60, ((MR_Box) (StringTable0_54)), &conv10_StringTable_61, ((MR_Box) (TypeTable0_55)), &conv9_TypeTable_62, ((MR_Box) (StaticCellInfo0_56)), &conv8_StaticCellInfo1_63, ((MR_Box) (LabelLayoutInfo0_57)), &conv7_LabelLayoutInfo_64, ((MR_Box) (ProcLayoutInfo0_58)), &conv6_ProcLayoutInfo_65);
    LabelTables_60 = ((MR_Word) conv11_LabelTables_60);
    StringTable_61 = ((MR_Word) conv10_StringTable_61);
    TypeTable_62 = ((MR_Word) conv9_TypeTable_62);
    StaticCellInfo1_63 = ((MR_Word) conv8_StaticCellInfo1_63);
    LabelLayoutInfo_64 = ((MR_Word) conv7_LabelLayoutInfo_64);
    ProcLayoutInfo_65 = ((MR_Word) conv6_ProcLayoutInfo_65);
    Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 0)));
    Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 1)));
    Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 2)));
    Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 3)));
    Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 4)));
    Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 5)));
    Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 6)));
    Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 7)));
    Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 8)));
    Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 9)));
    Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 10)));
    Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 11)));
    Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 12)));
    Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 13)));
    Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 14)));
    Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 15)));
    Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 16)));
    Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 17)));
    LabelsCounter_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 18)));
    Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 19)));
    mercury__counter__allocate_3_p_0(&NumLabels_67, LabelsCounter_66, &Var_68);
    Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 0)));
    Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 1)));
    Var_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 2)));
    Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 3)));
    Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 4)));
    Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 5)));
    Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 6)));
    Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 0)));
    Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 1)));
    Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 2)));
    RevCallSiteStatics_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 3)));
    RevCoveragePoints_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 4)));
    RevProcStatics_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 5)));
    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, RevCallSiteStatics_69, CallSiteStatics_40);
    mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, RevCoveragePoints_70, CoveragePoints_41);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0, RevProcStatics_71, ProcStatics_42);
    Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 0)));
    Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 1)));
    Var_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 2)));
    Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 3)));
    Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 4)));
    Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 5)));
    Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 6)));
    Var_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 0)));
    Var_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 1)));
    Var_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 2)));
    Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 3)));
    Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 4)));
    RevProcHeadVarNums_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 5)));
    RevProcVarNames_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 6)));
    RevProcEventLayouts_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 7)));
    RevTableIoEntries_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 8)));
    RevExecTraces_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 9)));
    Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 10)));
    TypeCtorInfo_599_599 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_599_599, RevProcHeadVarNums_72, ProcHeadVarNums_43);
    mercury__list__reverse_2_p_0(TypeCtorInfo_599_599, RevProcVarNames_73, ProcVarNames_44);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, RevProcEventLayouts_74, ProcEventLayouts_48);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0, RevTableIoEntries_75, TableIoEntries_46);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0, RevExecTraces_76, ExecTraces_49);
    Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 0)));
    Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 1)));
    Var_287 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 2)));
    RevProcBodyBytecodes_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 3)));
    RevProcLayouts_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 4)));
    RevProcLayoutNames_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 5)));
    Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 6)));
    Var_292 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 0)));
    Var_293 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 1)));
    Var_294 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 2)));
    Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 3)));
    Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 4)));
    Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 5)));
    Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 6)));
    Var_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 7)));
    Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 8)));
    Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 9)));
    *TableIoEntryMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_142, (MR_Integer) 10)));
    mercury__list__reverse_2_p_0(TypeCtorInfo_599_599, RevProcBodyBytecodes_77, ProcBodyBytecodes_45);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0, RevProcLayouts_78, ProcLayouts_50);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0, RevProcLayoutNames_79, &ProcLayoutNames_80);
    Var_320 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 0)));
    Var_321 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 1)));
    Var_322 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 2)));
    Var_323 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 3)));
    RevPseudoTypeInfoRvals_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 4)));
    RevLongLocns_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 5)));
    RevShortLocns_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 6)));
    RevHLDSVarNums_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 7)));
    Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 8)));
    Var_328 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 9)));
    Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 10)));
    Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 11)));
    Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 12)));
    Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 13)));
    Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 14)));
    Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 15)));
    Var_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 16)));
    Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 17)));
    Var_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 18)));
    Var_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 19)));
    TypeCtorInfo_605_605 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_605_605, RevPseudoTypeInfoRvals_81, PseudoTypeInfoRvals_29);
    mercury__list__reverse_2_p_0(TypeCtorInfo_599_599, RevLongLocns_82, LongLocns_32);
    mercury__list__reverse_2_p_0(TypeCtorInfo_599_599, RevShortLocns_83, ShortLocns_31);
    mercury__list__reverse_2_p_0(TypeCtorInfo_599_599, RevHLDSVarNums_84, HLDSVarNums_30);
    Var_396 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 0)));
    Var_397 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 1)));
    Var_398 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 2)));
    Var_399 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 3)));
    Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 4)));
    Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 5)));
    Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 6)));
    Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 7)));
    Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 8)));
    Var_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 9)));
    UserEventsCord_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 10)));
    UserEventVarNumsCord_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 11)));
    Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 12)));
    Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 13)));
    Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 14)));
    Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 15)));
    Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 16)));
    Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 17)));
    Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 18)));
    Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 19)));
    *UserEventVarNums_33 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[1], UserEventVarNumsCord_85);
    *UserEvents_34 = mercury__cord__list_1_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0, UserEventsCord_86);
    Var_434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 0)));
    Var_435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 1)));
    Var_436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 2)));
    Var_437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 3)));
    Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 4)));
    Var_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 5)));
    Var_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 6)));
    Var_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 7)));
    Var_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 8)));
    Var_443 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 9)));
    Var_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 10)));
    Var_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 11)));
    Var_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 12)));
    Var_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 13)));
    Var_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 14)));
    RevNoVarLabelLayouts_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 15)));
    RevSVarLabelLayouts_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 16)));
    RevLVarLabelLayouts_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 17)));
    Var_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 18)));
    Var_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 19)));
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0, RevNoVarLabelLayouts_87, NoVarLabelLayouts_35);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0, RevSVarLabelLayouts_88, SVarLabelLayouts_36);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0, RevLVarLabelLayouts_89, LVarLabelLayouts_37);
    Var_491 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 0)));
    Var_492 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 1)));
    Var_493 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 2)));
    Var_494 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 3)));
    Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 4)));
    Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 5)));
    Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 6)));
    Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 7)));
    Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 8)));
    Var_500 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 9)));
    Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 10)));
    Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 11)));
    Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 12)));
    Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 13)));
    Var_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 14)));
    Var_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 15)));
    Var_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 16)));
    Var_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 17)));
    Var_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 18)));
    *InternalLabelToLayoutMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LabelLayoutInfo_64, (MR_Integer) 19)));
    Var_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 0)));
    Var_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 1)));
    Var_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 2)));
    Var_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 3)));
    Var_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 4)));
    Var_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 5)));
    *ProcLabelToLayoutMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLayoutInfo_65, (MR_Integer) 6)));
    Var_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 0)));
    Var_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 1)));
    Var_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 2)));
    DeepProfiling_90 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_519 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    TraceLayout_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_521 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 4)));
    Var_523 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_524 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_525 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_526 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    switch (DeepProfiling_90) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeDeepProfInfo_107 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
          mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, OISUMap_91, &OISUPairs_92);
          ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(ModuleInfo_27, OISUPairs_92, &NumOISUTypes_93, &OISUBytesCord_94);
          OISUBytes0_95 = mercury__cord__list_1_f_0(TypeCtorInfo_599_599, OISUBytesCord_94);
          if ((OISUBytes0_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            OISUBytes_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word OISULimitBytes_99;
            MR_Integer Var_143;
            MR_Integer Var_144;

            Var_144 = mercury__list__length_1_f_0(TypeCtorInfo_599_599, OISUBytes0_95);
            Var_143 = (Var_144 + (MR_Integer) 4);
            mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_143, &OISULimitBytes_99);
            OISUBytes_96 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_599_599, OISULimitBytes_99, OISUBytes0_95);
          }
          ll_backend__prog_rep_tables__get_type_table_contents_3_p_0(TypeTable_62, &NumTypes_100, &TypeBytes0_101);
          if ((TypeBytes0_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            TypeBytes_102 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word TypeTableSizeBytes_105;
            MR_Integer Var_146;
            MR_Integer Var_147;

            Var_147 = mercury__list__length_1_f_0(TypeCtorInfo_599_599, TypeBytes0_101);
            Var_146 = (Var_147 + (MR_Integer) 4);
            mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_146, &TypeTableSizeBytes_105);
            TypeBytes_102 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_599_599, TypeTableSizeBytes_105, TypeBytes0_101);
          }
          {
            DeepProfInfo_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DeepProfInfo_106, 0) = ((MR_Box) (NumOISUTypes_93));
            MR_hl_field(MR_mktag(0), DeepProfInfo_106, 1) = ((MR_Box) (OISUBytes_96));
            MR_hl_field(MR_mktag(0), DeepProfInfo_106, 2) = ((MR_Box) (NumTypes_100));
            MR_hl_field(MR_mktag(0), DeepProfInfo_106, 3) = ((MR_Box) (TypeBytes_102));
          }
          {
            MaybeDeepProfInfo_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeDeepProfInfo_107, 0) = ((MR_Box) (DeepProfInfo_106));
          }
        }
        break;
    }
    switch (TraceLayout_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          StaticCellInfo_118 = StaticCellInfo1_63;
          MaybeDebugInfo_125 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
          MR_Word Var_549;
          MR_Word Var_550;
          MR_Word Var_551;
          MR_Word Var_552;
          MR_Word Var_553;
          MR_Word Var_554;
          MR_Word Var_555;
          MR_Word Var_556;
          MR_Word Var_557;
          MR_Word Var_558;
          MR_Word Var_559;
          MR_Word Var_563;
          MR_Word Var_564;
          MR_Word Var_565;
          MR_Word Var_566;
          MR_Word Var_567;
          MR_Word Var_568;
          MR_Word Var_569;
          MR_Word Var_570;
          MR_Word Var_571;
          MR_Word Var_572;
          MR_Word Var_573;

          switch (Var_525) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__map__init_1_p_0(TypeCtorInfo_574_574, TypeInfo_575_575, &EffLabelTables_110);
              break;
            case (MR_Integer) 1:
              EffLabelTables_110 = LabelTables_60;
              break;
          }
          ll_backend__stack_layout__format_label_tables_2_p_0(EffLabelTables_110, &SourceFileLayouts_111);
          Var_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 0)));
          Var_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 1)));
          TraceSuppress_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 2)));
          Var_551 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_552 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_553 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_554 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          Var_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 4)));
          Var_556 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_557 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_558 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_559 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          SuppressedEvents_113 = libs__trace_params__encode_suppressed_events_1_f_0(TraceSuppress_112);
          if ((*UserEvents_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybeEventSet_117 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
            MR_String Var_560;
            MR_String Var_561;
            MR_Integer Var_562;
            MR_Box conv15_EventArgTypeInfoMap_121;
            MR_Box conv14_StaticCellInfo_118;

            hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_27, &EventSet_119);
            EventSetData_120 = parse_tree__prog_event__derive_event_set_data_1_f_0(EventSet_119);
            Var_560 = ((MR_String) (MR_hl_field(MR_mktag(0), EventSetData_120, (MR_Integer) 0)));
            Var_561 = ((MR_String) (MR_hl_field(MR_mktag(0), EventSetData_120, (MR_Integer) 1)));
            Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), EventSetData_120, (MR_Integer) 2)));
            Var_562 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EventSetData_120, (MR_Integer) 3)));
            Var_151 = mercury__map__init_0_f_0(TypeCtorInfo_599_599, TypeCtorInfo_605_605);
            mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[3], TypeCtorInfo_593_593, (MR_Word) &ll_backend__stack_layout_scalar_common_1[15], Var_150, ((MR_Box) (Var_151)), &conv15_EventArgTypeInfoMap_121, ((MR_Box) (StaticCellInfo1_63)), &conv14_StaticCellInfo_118);
            EventArgTypeInfoMap_121 = ((MR_Word) conv15_EventArgTypeInfoMap_121);
            StaticCellInfo_118 = ((MR_Word) conv14_StaticCellInfo_118);
            {
              EventSetLayoutData_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), EventSetLayoutData_122, 0) = ((MR_Box) (EventSetData_120));
              MR_hl_field(MR_mktag(0), EventSetLayoutData_122, 1) = ((MR_Box) (EventArgTypeInfoMap_121));
            }
            {
              MaybeEventSet_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeEventSet_117, 0) = ((MR_Box) (EventSetLayoutData_122));
            }
          }
          Var_563 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 0)));
          TraceLevel_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 1)));
          Var_564 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 2)));
          Var_565 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_566 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_567 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_568 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          Var_569 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 4)));
          Var_570 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_571 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_572 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_573 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Params_52, (MR_Integer) 5)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          {
            DebugInfo_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DebugInfo_124, 0) = ((MR_Box) (ProcLayoutNames_80));
            MR_hl_field(MR_mktag(0), DebugInfo_124, 1) = ((MR_Box) (SourceFileLayouts_111));
            MR_hl_field(MR_mktag(0), DebugInfo_124, 2) = ((MR_Box) (TraceLevel_123));
            MR_hl_field(MR_mktag(0), DebugInfo_124, 3) = ((MR_Box) (SuppressedEvents_113));
            MR_hl_field(MR_mktag(0), DebugInfo_124, 4) = ((MR_Box) (NumLabels_67));
            MR_hl_field(MR_mktag(0), DebugInfo_124, 5) = ((MR_Box) (MaybeEventSet_117));
          }
          {
            MaybeDebugInfo_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeDebugInfo_125, 0) = ((MR_Box) (DebugInfo_124));
          }
        }
        break;
    }
    succeeded = (MaybeDeepProfInfo_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (MaybeDebugInfo_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      *ModuleLayouts_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ModuleName_126;
      MR_Word StringList_127;
      MR_Integer StringTableSize_128;
      MR_Word StringTableContents_129;
      MR_Word ModuleLayout_130;

      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_27, &ModuleName_126);
      ll_backend__prog_rep_tables__get_string_table_contents_3_p_0(StringTable_61, &StringList_127, &StringTableSize_128);
      StringTableContents_129 = (MR_Word) StringList_127;
      {
        ModuleLayout_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModuleLayout_130, 0) = ((MR_Box) (ModuleName_126));
        MR_hl_field(MR_mktag(0), ModuleLayout_130, 1) = ((MR_Box) (StringTableSize_128));
        MR_hl_field(MR_mktag(0), ModuleLayout_130, 2) = ((MR_Box) (StringTableContents_129));
        MR_hl_field(MR_mktag(0), ModuleLayout_130, 3) = ((MR_Box) (MaybeDeepProfInfo_107));
        MR_hl_field(MR_mktag(0), ModuleLayout_130, 4) = ((MR_Box) (MaybeDebugInfo_125));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ModuleLayouts_51 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleLayout_130));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_118, STATE_VARIABLE_GlobalData_0_131, STATE_VARIABLE_GlobalData_132);
  }
}

static MR_Word MR_CALL 
ll_backend__stack_layout__init_stack_layout_params_1_f_0(
  MR_Word ModuleInfo_3)
{
  {
    MR_Word Params_4;
    MR_Word Globals_5;
    MR_Word TraceLevel_6;
    MR_Word TraceSuppress_7;
    MR_Word DeepProfiling_8;
    MR_Word AgcLayout_9;
    MR_Word TraceLayout_10;
    MR_Word ProcIdLayout_11;
    MR_Word CommonLayoutData_12;
    MR_Word StaticCodeAddr_13;
    MR_Word UnboxedFloatOpt_14;
    MR_Word RttiLineNumbers_15;
    MR_Integer CompressLimit_16;
    MR_Word UnboxedInt64sOpt_17;
    MR_Word UnboxedFloat_18;
    MR_Word CompressArrays_19;
    MR_Word UnboxedInt64s_20;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
    libs__globals__get_trace_level_2_p_0(Globals_5, &TraceLevel_6);
    libs__globals__get_trace_suppress_2_p_0(Globals_5, &TraceSuppress_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 210, &DeepProfiling_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 275, &AgcLayout_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 277, &TraceLayout_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 276, &ProcIdLayout_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 471, &CommonLayoutData_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 461, &StaticCodeAddr_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 256, &UnboxedFloatOpt_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 289, &RttiLineNumbers_15);
    libs__globals__lookup_int_option_3_p_0(Globals_5, (MR_Integer) 489, &CompressLimit_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 257, &UnboxedInt64sOpt_17);
    switch (UnboxedFloatOpt_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloat_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedFloat_18 = (MR_Integer) 0;
        break;
    }
    switch (CommonLayoutData_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CompressArrays_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          CompressArrays_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CompressArrays_19, 0) = ((MR_Box) (CompressLimit_16));
        }
        break;
    }
    switch (UnboxedInt64sOpt_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedInt64s_20 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedInt64s_20 = (MR_Integer) 0;
        break;
    }
    {
      Params_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_4, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), Params_4, 1) = ((MR_Box) (TraceLevel_6));
      MR_hl_field(MR_mktag(0), Params_4, 2) = ((MR_Box) (TraceSuppress_7));
      MR_hl_field(MR_mktag(0), Params_4, 3) = ((MR_Box) ((DeepProfiling_8 | ((((AgcLayout_9 << (MR_Integer) 1)) | ((((TraceLayout_10 << (MR_Integer) 2)) | ((ProcIdLayout_11 << (MR_Integer) 3)))))))));
      MR_hl_field(MR_mktag(0), Params_4, 4) = ((MR_Box) (CompressArrays_19));
      MR_hl_field(MR_mktag(0), Params_4, 5) = ((MR_Box) ((StaticCodeAddr_13 | ((((UnboxedFloat_18 << (MR_Integer) 1)) | ((((RttiLineNumbers_15 << (MR_Integer) 2)) | ((UnboxedInt64s_20 << (MR_Integer) 3)))))))));
    }
    return Params_4;
  }
}

static MR_Word MR_CALL 
ll_backend__stack_layout__init_label_layouts_info_0_f_0(void)
{
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
    Var_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0);
    Var_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__stack_layout_scalar_common_2[1]);
    Var_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_18 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_20 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_25 = mercury__counter__init_1_f_0((MR_Integer) 1);
    Var_27 = mercury__map__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
    {
      Info_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_2, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_2, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_2, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 8) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Info_2, 9) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_2, 10) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Info_2, 11) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Info_2, 12) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Info_2, 13) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Info_2, 14) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Info_2, 15) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 17) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 18) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Info_2, 19) = ((MR_Box) (Var_27));
    }
    return Info_2;
  }
}

static MR_Word MR_CALL 
ll_backend__stack_layout__init_proc_layouts_info_0_f_0(void)
{
  {
    MR_Word Info_2;
    MR_Word ProcStaticInfo_3;
    MR_Word ExecTraceInfo_4;
    MR_Word Var_9;
    MR_Word Var_15;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_33;

    Var_15 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      ProcStaticInfo_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcStaticInfo_3, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ProcStaticInfo_3, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ProcStaticInfo_3, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), ProcStaticInfo_3, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ProcStaticInfo_3, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ProcStaticInfo_3, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_24 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_26 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_33 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
    {
      ExecTraceInfo_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 3) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ExecTraceInfo_4, 10) = ((MR_Box) (Var_33));
    }
    Var_9 = mercury__map__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
    {
      Info_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_2, 0) = ((MR_Box) (ProcStaticInfo_3));
      MR_hl_field(MR_mktag(0), Info_2, 1) = ((MR_Box) (ExecTraceInfo_4));
      MR_hl_field(MR_mktag(0), Info_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info_2, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info_2, 6) = ((MR_Box) (Var_9));
    }
    return Info_2;
  }
}

static void MR_CALL 
ll_backend__stack_layout__format_label_tables_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FileLayoutData_5;

    ll_backend__stack_layout__format_label_table_2_p_0(((MR_Word) wrapper_arg_1), &conv0_FileLayoutData_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_FileLayoutData_5));
  }
}

static void MR_CALL 
ll_backend__stack_layout__format_label_tables_2_p_0(
  MR_Word LabelTableMap_3,
  MR_Word * SourceFileLayouts_4)
{
  {
    MR_Word LabelTableList_5;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[1], LabelTableMap_3, &LabelTableList_5);
    mercury__list__map_3_p_0((MR_Word) &ll_backend__stack_layout_scalar_common_1[7], (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0, (MR_Word) &ll_backend__stack_layout_scalar_common_1[14], LabelTableList_5, SourceFileLayouts_4);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____exec_traces_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____exec_traces_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____exec_traces_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____exec_traces_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____file_label_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____file_label_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____file_label_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____file_label_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____internal_label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____internal_label_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____internal_label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____internal_label_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____is_label_return_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____is_label_return_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____is_label_return_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____is_label_return_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_layouts_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____label_layouts_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_layouts_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____label_layouts_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____label_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____label_tables_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____label_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____label_tables_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____line_no_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____line_no_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____line_no_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____line_no_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____liveval_array_slot_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____liveval_array_slot_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____liveval_array_slot_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____liveval_array_slot_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____locn_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____locn_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____locn_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____locn_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____maybe_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____maybe_var_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____maybe_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____maybe_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_layouts_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____proc_layouts_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_layouts_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____proc_layouts_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____proc_statics_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____proc_statics_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____proc_statics_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____proc_statics_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_layout____Unify____stack_layout_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_layout____Unify____stack_layout_params_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_layout____Compare____stack_layout_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_layout____Compare____stack_layout_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
