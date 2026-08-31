/*
** Automatically generated from `fact_table_check.m'
** by the Mercury compiler,
** version rotd-2026-08-31
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


// :- module ll_backend.fact_table_check.
// :- implementation.

/*
INIT mercury__ll_backend__fact_table_check__init
ENDINIT
*/

#include "ll_backend.fact_table_check.mih"


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
#include "ll_backend.mih"
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
#include "term_context.mih"
#include "termination.mih"
#include "time.mih"
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
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_test.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "termination.term_constr.mih"
#include "termination.term_osi.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "termination.term_constr.term_constr_errors.mih"
#include "termination.term_constr.term_constr_main_types.mih"
#include "termination.term_osi.term_osi_errors.mih"
#include "termination.term_osi.term_osi_util.mih"




static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_arg_info_0_0[3];

static const MR_DuArgLocn ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_arg_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_arg_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_arg_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_arg_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_arg_info_0[1];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_arg_info_0[1];

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_1;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_2;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_arg_type_0[3];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_arg_type_0[3];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_arg_type_0[3];

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_arg_check_result_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_arg_check_result_0_1[1];

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_arg_check_result_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_arg_check_result_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_arg_check_result_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_arg_check_result_0[2];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_arg_check_result_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table_check__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_gen_info_0_0[4];

static const MR_ConstString ll_backend__fact_table_check__ll_backend__fact_table_check__field_names_fact_table_gen_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_gen_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_gen_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_gen_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_gen_info_0[1];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_gen_info_0[1];

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_table_mode_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_table_mode_0[2];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_mode_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_1;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_2;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_table_mode_class_0[3];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_table_mode_class_0[3];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_mode_class_0[3];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_var_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_proc_info_0_0[3];

static const MR_DuArgLocn ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_table_proc_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_proc_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_proc_info_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_proc_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_proc_info_0[1];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_proc_info_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_var_0_0[4];

static const MR_ConstString ll_backend__fact_table_check__ll_backend__fact_table_check__field_names_fact_table_var_0_0[4];

static const MR_DuArgLocn ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_table_var_0_0[4];

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_var_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_var_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_var_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_var_0[1];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_var_0[1];

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_in_or_output_for_some_mode_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_in_or_output_for_some_mode_0[2];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_in_or_output_for_some_mode_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_input_for_some_mode_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_input_for_some_mode_0[2];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_input_for_some_mode_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_make_unique_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_make_unique_0[2];

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_make_unique_0[2];

static MR_Word MR_CALL 
ll_backend__fact_table_check__IntroducedFrom__func__fact_table_check_proc_modes__267__1_1_f_0(
  MR_Word LambdaHeadVar__1_76);

static void MR_CALL 
ll_backend__fact_table_check__init_fact_arg_infos_5_p_0(
  MR_Word PredInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_Box MR_CALL 
ll_backend__fact_table_check__fact_table_check_proc_modes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_check__fact_table_check_proc_modes_14_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word PredInfo_3,
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
ll_backend__fact_table_check__fill_in_fact_arg_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table_check__check_proc_arg_modes_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredProcId_2,
  MR_Word ProcInfo_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_arg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_arg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_arg_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_arg_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_mode_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_mode_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____maybe_input_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_input_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____maybe_make_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_make_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_1[59][2];

static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_4[1][5];




static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_1[59][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for a"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "fact_table"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate without arguments."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for a predicate with"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "no declared modes."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in which all arguments are input."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than one mode"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: type"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The only types allowed in fact tables are"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in fact tables."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "float"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "string"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration requires all the arguments of"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be either fully input or fully output,"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument is"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "neither."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__fact_table_check_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table_check__fact_table_check_proc_modes_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__fact_table_check_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_arg_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_input_for_some_mode_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_in_or_output_for_some_mode_0)
};

static const MR_DuArgLocn ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_arg_info_0_0[3] = {
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

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_arg_info_0_0 = {
  (MR_String) "fact_arg_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_arg_info_0_0,
  NULL,
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_arg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_arg_info_0_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_arg_info_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_arg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_arg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_arg_info_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_arg_info_0_0 };

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_arg_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_arg_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_arg_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_arg_info",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_arg_info_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_arg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_arg_info_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_0 = {
  (MR_String) "fact_arg_type_int",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_1 = {
  (MR_String) "fact_arg_type_float",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_2 = {
  (MR_String) "fact_arg_type_string",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_arg_type_0[3] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_1,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_arg_type_0[3] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_1,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_arg_type_0_2
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_arg_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_arg_type_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_arg_type_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_arg_type",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_arg_type_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_arg_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_arg_type_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_arg_check_result_0_0[1] = { (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_gen_info_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_0 = {
  (MR_String) "fact_table_args_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_arg_check_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_arg_check_result_0_1[1] = { (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_err_spec_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_1 = {
  (MR_String) "fact_table_args_not_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_arg_check_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_arg_check_result_0_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_0 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_arg_check_result_0_1[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_1 };

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_arg_check_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_arg_check_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_arg_check_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_arg_check_result_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_1,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_arg_check_result_0_0
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_arg_check_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_arg_check_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_arg_check_result_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_arg_check_result_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_arg_check_result",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_arg_check_result_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_arg_check_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_arg_check_result_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table_check__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_gen_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString ll_backend__fact_table_check__ll_backend__fact_table_check__field_names_fact_table_gen_info_0_0[4] = {
  (MR_String) "fgti_arg_infos",
  (MR_String) "ftgi_proc_info_map",
  (MR_String) "ftgi_all_in_proc_id",
  (MR_String) "ftgi_in_out_proc_ids"
};

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_gen_info_0_0 = {
  (MR_String) "fact_table_gen_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_gen_info_0_0,
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_names_fact_table_gen_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_gen_info_0_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_gen_info_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_gen_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_gen_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_gen_info_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_gen_info_0_0 };

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_gen_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_gen_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_gen_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_gen_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_gen_info",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_gen_info_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_gen_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_gen_info_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_0 = {
  (MR_String) "fully_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_1 = {
  (MR_String) "fully_out",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_table_mode_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_table_mode_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_0_1
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_mode_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_mode_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_mode",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_table_mode_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_table_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_mode_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_0 = {
  (MR_String) "all_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_1 = {
  (MR_String) "in_out",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_2 = {
  (MR_String) "all_out",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_table_mode_class_0[3] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_1,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_table_mode_class_0[3] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_2,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_fact_table_mode_class_0_1
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_mode_class_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_mode_class_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_mode_class_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_mode_class",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_fact_table_mode_class_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_fact_table_mode_class_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_mode_class_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_check__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_var_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_class_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_table_proc_info_0_0[3] = {
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

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_proc_info_0_0 = {
  (MR_String) "fact_table_proc_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_proc_info_0_0,
  NULL,
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_table_proc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_proc_info_0_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_proc_info_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_proc_info_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_proc_info_0_0 };

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_proc_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_proc_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_proc_info",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_proc_info_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_proc_info_0,

};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_proc_map_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_proc_map_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_var_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_make_unique_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0)
};

static const MR_ConstString ll_backend__fact_table_check__ll_backend__fact_table_check__field_names_fact_table_var_0_0[4] = {
  (MR_String) "ftv_name",
  (MR_String) "ftv_mode",
  (MR_String) "ftv_make_unique",
  (MR_String) "ftv_pragma_var"
};

static const MR_DuArgLocn ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_table_var_0_0[4] = {
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

static const MR_DuFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_var_0_0 = {
  (MR_String) "fact_table_var",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_types_fact_table_var_0_0,
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_names_fact_table_var_0_0,
  ll_backend__fact_table_check__ll_backend__fact_table_check__field_locns_fact_table_var_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_var_0_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_var_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_var_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_check__ll_backend__fact_table_check__du_stag_ordered_fact_table_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_var_0[1] = { &ll_backend__fact_table_check__ll_backend__fact_table_check__du_functor_desc_fact_table_var_0_0 };

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_var_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_check____Unify____fact_table_var_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____fact_table_var_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "fact_table_var",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_name_ordered_fact_table_var_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__du_ptag_ordered_fact_table_var_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_fact_table_var_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0 = {
  (MR_String) "is_not_in_or_output_for_any_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1 = {
  (MR_String) "is_in_or_output_for_some_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_in_or_output_for_some_mode_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_in_or_output_for_some_mode_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_1,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_in_or_output_for_some_mode_0_0
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_in_or_output_for_some_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_in_or_output_for_some_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_check____Unify____maybe_in_or_output_for_some_mode_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____maybe_in_or_output_for_some_mode_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "maybe_in_or_output_for_some_mode",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_in_or_output_for_some_mode_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_in_or_output_for_some_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_in_or_output_for_some_mode_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_0 = {
  (MR_String) "is_not_input_for_any_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_1 = {
  (MR_String) "is_input_for_some_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_input_for_some_mode_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_input_for_some_mode_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_1,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_input_for_some_mode_0_0
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_input_for_some_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_input_for_some_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_check____Unify____maybe_input_for_some_mode_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____maybe_input_for_some_mode_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "maybe_input_for_some_mode",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_input_for_some_mode_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_input_for_some_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_input_for_some_mode_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_0 = {
  (MR_String) "do_not_make_unique",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_1 = {
  (MR_String) "make_unique",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_make_unique_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_make_unique_0[2] = {
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_0,
  &ll_backend__fact_table_check__ll_backend__fact_table_check__enum_functor_desc_maybe_make_unique_0_1
};

static const MR_Integer ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_make_unique_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_make_unique_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_check____Unify____maybe_make_unique_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_check____Compare____maybe_make_unique_0_0_10001)),
  (MR_String) "ll_backend.fact_table_check",
  (MR_String) "maybe_make_unique",
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_name_ordered_maybe_make_unique_0 },
  { ll_backend__fact_table_check__ll_backend__fact_table_check__enum_ordinal_ordered_maybe_make_unique_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_check__ll_backend__fact_table_check__functor_number_map_maybe_make_unique_0,

};

static MR_Word MR_CALL 
ll_backend__fact_table_check__IntroducedFrom__func__fact_table_check_proc_modes__267__1_1_f_0(
  MR_Word LambdaHeadVar__1_76)
{
  MR_Word LambdaHeadVar__2_77 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_76, 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_77;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_make_unique_0_0(
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
ll_backend__fact_table_check____Unify____maybe_make_unique_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_input_for_some_mode_0_0(
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
ll_backend__fact_table_check____Unify____maybe_input_for_some_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_in_or_output_for_some_mode_0_0(
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
ll_backend__fact_table_check____Unify____maybe_in_or_output_for_some_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_var_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__prog_data_foreign____Compare____pragma_var_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_var_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

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

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_proc_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_proc_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__fact_table_check_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_mode_class_0_0(
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
ll_backend__fact_table_check____Unify____fact_table_mode_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_mode_0_0(
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
ll_backend__fact_table_check____Unify____fact_table_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_arg_check_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
    MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

    ll_backend__fact_table_check____Compare____fact_table_gen_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_gen_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_arg_check_result_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_check_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = ll_backend__fact_table_check____Unify____fact_table_gen_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_gen_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ll_backend__fact_table_check_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&ll_backend__fact_table_check_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&ll_backend__fact_table_check_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_arg_type_0_0(
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
ll_backend__fact_table_check____Unify____fact_arg_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_check____Compare____fact_arg_info_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
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

MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_arg_info_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

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

void MR_CALL 
ll_backend__fact_table_check__fact_table_check_args_5_p_0(
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
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_64;

    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[13])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[14])));
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[11])), Var_52);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_check.fact_table_check_args\'/5"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 80U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (PragmaContext_7));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_64));
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
    MR_Word Specs_38;

    ll_backend__fact_table_check__init_fact_arg_infos_5_p_0(PredInfo_9, Types_11, &FactArgInfos0_16, (MR_Word) ((MR_Unsigned) 0U), &TypeSpecs_17);
    ProcIds_18 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(PredInfo_9);
    if ((ProcIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModePieces_19;
      MR_Word ModeSpec_20;
      MR_Word Var_77;
      MR_Word Var_78;

      Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[20])));
      Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[14])));
      ModePieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[18])), Var_77);
      {
        ModeSpec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_check.fact_table_check_args\'/5"));
        MR_hl_field(0, ModeSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ModeSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 80U));
        MR_hl_field(0, ModeSpec_20, 3) = ((MR_Box) (PragmaContext_7));
        MR_hl_field(0, ModeSpec_20, 4) = ((MR_Box) (ModePieces_19));
      }
      {
        ModeSpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModeSpecs_21, 0) = ((MR_Box) (ModeSpec_20));
        MR_hl_field(1, ModeSpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      FactArgInfos_22 = FactArgInfos0_16;
      mercury__map__init_1_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), &FactTableProcMap_23);
      MaybeAllInProcId_24 = (MR_Word) ((MR_Unsigned) 0U);
      InOutProcIds_25 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word RevAllInProcIds_28;
      MR_Word RevInOutProcIds_29;
      MR_Word ModeSpecs0_30;
      MR_Word AllInProcIds_31;
      MR_Word Var_90;

      Var_90 = mercury__map__init_0_f_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0));
      ll_backend__fact_table_check__fact_table_check_proc_modes_14_p_0(ModuleInfo_6, PredId_8, PredInfo_9, ProcIds_18, FactArgInfos0_16, &FactArgInfos_22, Var_90, &FactTableProcMap_23, (MR_Word) ((MR_Unsigned) 0U), &RevAllInProcIds_28, (MR_Word) ((MR_Unsigned) 0U), &RevInOutProcIds_29, (MR_Word) ((MR_Unsigned) 0U), &ModeSpecs0_30);
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), RevAllInProcIds_28, &AllInProcIds_31);
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), RevInOutProcIds_29, &InOutProcIds_25);
      if ((AllInProcIds_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeAllInProcId_24 = (MR_Word) ((MR_Unsigned) 0U);
        ModeSpecs_21 = ModeSpecs0_30;
      }
      else
      {
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, AllInProcIds_31, 1))));
        MR_Integer Var_130 = ((MR_Integer) ((MR_hl_field(1, AllInProcIds_31, 0))));

        if ((Var_129 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MaybeAllInProcId_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeAllInProcId_24, 0) = ((MR_Box) (Var_130));
          }
          ModeSpecs_21 = ModeSpecs0_30;
        }
        else
        {
          MR_Word AllInPieces_36;
          MR_Word AllInSpec_37;
          MR_Word Var_106;
          MR_Word Var_107;

          Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[24])));
          Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[14])));
          AllInPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[18])), Var_106);
          {
            AllInSpec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, AllInSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_check.fact_table_check_args\'/5"));
            MR_hl_field(0, AllInSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, AllInSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 80U));
            MR_hl_field(0, AllInSpec_37, 3) = ((MR_Box) (PragmaContext_7));
            MR_hl_field(0, AllInSpec_37, 4) = ((MR_Box) (AllInPieces_36));
          }
          {
            ModeSpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ModeSpecs_21, 0) = ((MR_Box) (AllInSpec_37));
            MR_hl_field(1, ModeSpecs_21, 1) = ((MR_Box) (ModeSpecs0_30));
          }
          MaybeAllInProcId_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
    }
    Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), TypeSpecs_17, ModeSpecs_21);
    if ((Specs_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word GenInfo_39;

      {
        GenInfo_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GenInfo_39, 0) = ((MR_Box) (FactArgInfos_22));
        MR_hl_field(0, GenInfo_39, 1) = ((MR_Box) (FactTableProcMap_23));
        MR_hl_field(0, GenInfo_39, 2) = ((MR_Box) (MaybeAllInProcId_24));
        MR_hl_field(0, GenInfo_39, 3) = ((MR_Box) (InOutProcIds_25));
      }
      *Result_10 = (MR_Word) ((MR_Word) (GenInfo_39));
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Specs_38));
      }
  }
}

static void MR_CALL 
ll_backend__fact_table_check__init_fact_arg_infos_5_p_0(
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
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Info_13;
    MR_Word Infos_14;
    MR_Word FactArgType_18;
    MR_Word STATE_VARIABLE_Specs_1_91;
    MR_Word FactArgTypePrime_17;
    MR_Word BuiltinType_16;

    succeeded = ((MR_tag((MR_Word) Type_11)) == (MR_Integer) 2);
    if (succeeded)
    {
      BuiltinType_16 = ((MR_Word) ((MR_hl_field(2, Type_11, 0))));
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
            MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_16, 0))) & (MR_Integer) 15);

            succeeded = (Var_26 == (MR_Integer) 0);
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
      STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_4;
    }
    else
    {
      MR_Word TVarSet_19;
      MR_String TypeStr_20;
      MR_Word Context_21;
      MR_Word Pieces_22;
      MR_Word Spec_23;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_48;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_71;
      MR_Word Var_76;
      MR_Word Var_77;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_1, &TVarSet_19);
      TypeStr_20 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_19, (MR_Integer) 0, Type_11);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_1, &Context_21);
      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (TypeStr_20));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_33 = parse_tree__error_spec__color_as_subject_1_f_0(Var_34);
      Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[30])));
      Var_57 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[41])));
      Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[47])));
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[14])));
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[43])), Var_76);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_71);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[34])), Var_56);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_48);
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[28])), Var_42);
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_37);
      Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[26])), Var_32);
      {
        Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_check.init_fact_arg_infos\'/5"));
        MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 80U));
        MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_21));
        MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        STATE_VARIABLE_Specs_1_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_91, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
      }
      FactArgType_18 = (MR_Integer) 0;
    }
    {
      Info_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_13, 0) = (MR_Box) (((((MR_Unsigned) (FactArgType_18) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
    ll_backend__fact_table_check__init_fact_arg_infos_5_p_0(PredInfo_1, Types_12, &Infos_14, STATE_VARIABLE_Specs_1_91, STATE_VARIABLE_Specs_5);
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
ll_backend__fact_table_check__fact_table_check_proc_modes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_77;

  conv1_LambdaHeadVar__2_77 = ll_backend__fact_table_check__IntroducedFrom__func__fact_table_check_proc_modes__267__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_77));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table_check__fact_table_check_proc_modes_14_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word PredInfo_3,
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
      MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ProcIds_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word ArgTypes_43;
      MR_Word ProcTable_44;
      MR_Word ProcInfo_45;
      MR_Word ArgModes_46;
      MR_Word PredProcId_47;
      MR_Word VarSet0_48;
      MR_Word FactTableVars_49;
      MR_Word VarSet_50;
      MR_Word ArgModeSpecs_51;
      MR_Word STATE_VARIABLE_Specs_1_74;
      MR_Word STATE_VARIABLE_FactArgInfos_1_78;
      MR_Word STATE_VARIABLE_RevAllInProcIds_1_81;
      MR_Word STATE_VARIABLE_RevInOutProcIds_1_86;
      MR_Word STATE_VARIABLE_FactTableProcMap_1_91;
      MR_Box conv0_ProcInfo_45;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_FactArgInfos_0_5;
      MR_Word next_value_of_STATE_VARIABLE_FactTableProcMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RevAllInProcIds_0_9;
      MR_Word next_value_of_STATE_VARIABLE_RevInOutProcIds_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_3, &ArgTypes_43);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_3, &ProcTable_44);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_44, ((MR_Box) (ProcId_36)), &conv0_ProcInfo_45);
      ProcInfo_45 = ((MR_Word) (conv0_ProcInfo_45));
      hlds__hlds_proc__proc_info_get_argmodes_2_p_0(ProcInfo_45, &ArgModes_46);
      {
        PredProcId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_47, 0) = ((MR_Box) (PredId_2));
        MR_hl_field(0, PredProcId_47, 1) = ((MR_Box) (ProcId_36));
      }
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_48);
      ll_backend__fact_table_check__check_proc_arg_modes_11_p_0(ModuleInfo_1, PredProcId_47, ProcInfo_45, (MR_Integer) 1, ArgTypes_43, ArgModes_46, &FactTableVars_49, VarSet0_48, &VarSet_50, (MR_Word) ((MR_Unsigned) 0U), &ArgModeSpecs_51);
      if ((ArgModeSpecs_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word FactTableModes_54;
        MR_Word PresentModes_59;
        MR_Word ModeClass_60;
        MR_Word FactTableProcInfo_61;
        MR_Word Var_79;
        MR_Word Var_80;

        FactTableModes_54 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_check_scalar_common_2[1]), FactTableVars_49);
        ll_backend__fact_table_check__fill_in_fact_arg_infos_3_p_0(FactTableModes_54, STATE_VARIABLE_FactArgInfos_0_5, &STATE_VARIABLE_FactArgInfos_1_78);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0), FactTableModes_54, &PresentModes_59);
        succeeded = (PresentModes_59 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_79 = ((MR_Word) ((MR_hl_field(1, PresentModes_59, 0))));
          Var_80 = ((MR_Word) ((MR_hl_field(1, PresentModes_59, 1))));
          succeeded = (Var_79 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          ModeClass_60 = (MR_Integer) 0;
          {
            STATE_VARIABLE_RevAllInProcIds_1_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevAllInProcIds_1_81, 0) = ((MR_Box) (ProcId_36));
            MR_hl_field(1, STATE_VARIABLE_RevAllInProcIds_1_81, 1) = ((MR_Box) (STATE_VARIABLE_RevAllInProcIds_0_9));
          }
          STATE_VARIABLE_RevInOutProcIds_1_86 = STATE_VARIABLE_RevInOutProcIds_0_11;
        }
        else
        {
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;

          succeeded = (PresentModes_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_82 = ((MR_Word) ((MR_hl_field(1, PresentModes_59, 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(1, PresentModes_59, 1))));
            succeeded = (Var_82 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_84 = ((MR_Word) ((MR_hl_field(1, Var_83, 0))));
                Var_85 = ((MR_Word) ((MR_hl_field(1, Var_83, 1))));
                succeeded = (Var_84 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            ModeClass_60 = (MR_Integer) 1;
            {
              STATE_VARIABLE_RevInOutProcIds_1_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevInOutProcIds_1_86, 0) = ((MR_Box) (ProcId_36));
              MR_hl_field(1, STATE_VARIABLE_RevInOutProcIds_1_86, 1) = ((MR_Box) (STATE_VARIABLE_RevInOutProcIds_0_11));
            }
          }
          else
          {
            MR_Word Var_87;
            MR_Word Var_88;

            succeeded = (PresentModes_59 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_87 = ((MR_Word) ((MR_hl_field(1, PresentModes_59, 0))));
              Var_88 = ((MR_Word) ((MR_hl_field(1, PresentModes_59, 1))));
              succeeded = (Var_87 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              ModeClass_60 = (MR_Integer) 2;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_check.fact_table_check_proc_modes\'/14", (MR_String) "impossible mode class");
                return;
              }
            STATE_VARIABLE_RevInOutProcIds_1_86 = STATE_VARIABLE_RevInOutProcIds_0_11;
          }
          STATE_VARIABLE_RevAllInProcIds_1_81 = STATE_VARIABLE_RevAllInProcIds_0_9;
        }
        {
          FactTableProcInfo_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactTableProcInfo_61, 0) = ((MR_Box) (FactTableVars_49));
          MR_hl_field(0, FactTableProcInfo_61, 1) = (MR_Box) ((MR_Unsigned) (ModeClass_60));
          MR_hl_field(0, FactTableProcInfo_61, 2) = ((MR_Box) (VarSet_50));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), ((MR_Box) (ProcId_36)), ((MR_Box) (FactTableProcInfo_61)), STATE_VARIABLE_FactTableProcMap_0_7, &STATE_VARIABLE_FactTableProcMap_1_91);
        STATE_VARIABLE_Specs_1_74 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ArgModeSpecs_51, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_FactArgInfos_1_78 = STATE_VARIABLE_FactArgInfos_0_5;
        STATE_VARIABLE_FactTableProcMap_1_91 = STATE_VARIABLE_FactTableProcMap_0_7;
        STATE_VARIABLE_RevAllInProcIds_1_81 = STATE_VARIABLE_RevAllInProcIds_0_9;
        STATE_VARIABLE_RevInOutProcIds_1_86 = STATE_VARIABLE_RevInOutProcIds_0_11;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_37;
      next_value_of_STATE_VARIABLE_FactArgInfos_0_5 = STATE_VARIABLE_FactArgInfos_1_78;
      next_value_of_STATE_VARIABLE_FactTableProcMap_0_7 = STATE_VARIABLE_FactTableProcMap_1_91;
      next_value_of_STATE_VARIABLE_RevAllInProcIds_0_9 = STATE_VARIABLE_RevAllInProcIds_1_81;
      next_value_of_STATE_VARIABLE_RevInOutProcIds_0_11 = STATE_VARIABLE_RevInOutProcIds_1_86;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_74;
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
ll_backend__fact_table_check__fill_in_fact_arg_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_check.fill_in_fact_arg_infos\'/3", (MR_String) "too many fact_arg_infos");
        return;
      }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_check.fill_in_fact_arg_infos\'/3", (MR_String) "too many argmodes");
        return;
      }
    else
    {
      MR_Word Info0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Infos0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Info_18;
      MR_Word Infos_19;
      MR_Word Type_20 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_16, 0))) >> 2)) & (MR_Integer) 3);
      MR_Word IsInput_21 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_16, 0))) >> 1)) & (MR_Integer) 1);

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
            MR_hl_field(0, Info_18, 0) = (MR_Box) (((((MR_Unsigned) (Type_20) << 2)) | (((((MR_Unsigned) (IsInput_21) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
          }
          break;
      }
      ll_backend__fact_table_check__fill_in_fact_arg_infos_3_p_0(Var_26, Infos0_17, &Infos_19);
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
ll_backend__fact_table_check__check_proc_arg_modes_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredProcId_2,
  MR_Word ProcInfo_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_VarSet_9 = STATE_VARIABLE_VarSet_0_8;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_check.check_proc_arg_modes\'/11", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_138 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word Var_139 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_check.check_proc_arg_modes\'/11", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Modes_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word FactTableVar_60;
      MR_Word FactTableVars_61;
      MR_Word FactTableMode_66;
      MR_Word MakeUnique_71;
      MR_String VarName_72;
      MR_Word Var_73;
      MR_Word PragmaVar_74;
      MR_Word STATE_VARIABLE_Specs_1_118;
      MR_Word STATE_VARIABLE_VarSet_1_128;
      MR_Integer Var_130;
      MR_String Var_140;
      MR_Word FinalInst_65;
      MR_Word Var_64;

      succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_58, &Var_64, &FinalInst_65);
      if (succeeded)
      {
        succeeded = hlds__mode_test__mode_is_fully_input_3_p_0(ModuleInfo_1, Var_139, Mode_58);
        if (succeeded)
        {
          FactTableMode_66 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_1_118 = STATE_VARIABLE_Specs_0_10;
        }
        else
        {
          succeeded = hlds__mode_test__mode_is_fully_output_3_p_0(ModuleInfo_1, Var_139, Mode_58);
          if (succeeded)
          {
            FactTableMode_66 = (MR_Integer) 1;
            STATE_VARIABLE_Specs_1_118 = STATE_VARIABLE_Specs_0_10;
          }
          else
          {
            MR_Word ProcPieces_67;
            MR_Word Context_68;
            MR_Word Pieces_69;
            MR_Word Spec_70;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_106;
            MR_Word Var_107;

            ProcPieces_67 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_1, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_3[0])), (MR_Integer) 1, PredProcId_2);
            hlds__hlds_proc__proc_info_get_context_2_p_0(ProcInfo_3, &Context_68);
            {
              Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_101, 1) = ((MR_Box) (ArgNum_4));
            }
            {
              Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
              MR_hl_field(1, Var_100, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[56])));
            }
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[54])));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_check_scalar_common_1[53])));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
            }
            Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[58])));
            Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[14])));
            Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_106);
            Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_67, Var_93);
            Pieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_check_scalar_common_1[52])), Var_92);
            {
              Spec_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_70, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_check.check_proc_arg_modes\'/11"));
              MR_hl_field(0, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 80U));
              MR_hl_field(0, Spec_70, 3) = ((MR_Box) (Context_68));
              MR_hl_field(0, Spec_70, 4) = ((MR_Box) (Pieces_69));
            }
            {
              STATE_VARIABLE_Specs_1_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_118, 0) = ((MR_Box) (Spec_70));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_118, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
            }
            FactTableMode_66 = (MR_Integer) 0;
          }
        }
        succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, FinalInst_65);
        if (succeeded)
          MakeUnique_71 = (MR_Integer) 0;
        else
          MakeUnique_71 = (MR_Integer) 1;
      }
      else
      {
        MR_Word Context_134;
        MR_Word Spec_135;

        hlds__hlds_proc__proc_info_get_context_2_p_0(ProcInfo_3, &Context_134);
        {
          Spec_135 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_135, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_check.check_proc_arg_modes\'/11"));
          MR_hl_field(0, Spec_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_135, 2) = ((MR_Box) ((MR_Unsigned) 80U));
          MR_hl_field(0, Spec_135, 3) = ((MR_Box) (Context_134));
          MR_hl_field(0, Spec_135, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          STATE_VARIABLE_Specs_1_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_118, 0) = ((MR_Box) (Spec_135));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_118, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
        }
        FactTableMode_66 = (MR_Integer) 0;
        MakeUnique_71 = (MR_Integer) 0;
      }
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_check_scalar_common_3[1]), ArgNum_4, &Var_140);
      VarName_72 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_140);
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_72, &Var_73, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_1_128);
      {
        PragmaVar_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PragmaVar_74, 0) = ((MR_Box) (Var_73));
        MR_hl_field(0, PragmaVar_74, 1) = ((MR_Box) (VarName_72));
        MR_hl_field(0, PragmaVar_74, 2) = ((MR_Box) (Mode_58));
        MR_hl_field(0, PragmaVar_74, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        FactTableVar_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FactTableVar_60, 0) = ((MR_Box) (VarName_72));
        MR_hl_field(0, FactTableVar_60, 1) = (MR_Box) (((((MR_Unsigned) (FactTableMode_66) << 1)) | (MR_Unsigned) (MakeUnique_71)));
        MR_hl_field(0, FactTableVar_60, 2) = ((MR_Box) (PragmaVar_74));
      }
      Var_130 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
      ll_backend__fact_table_check__check_proc_arg_modes_11_p_0(ModuleInfo_1, PredProcId_2, ProcInfo_3, Var_130, Var_138, Modes_59, &FactTableVars_61, STATE_VARIABLE_VarSet_1_128, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_Specs_1_118, STATE_VARIABLE_Specs_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FactTableVar_60));
        MR_hl_field(1, base, 1) = ((MR_Box) (FactTableVars_61));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_arg_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_arg_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_arg_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_arg_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_arg_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_arg_check_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_arg_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_arg_check_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_gen_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_mode_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_mode_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_mode_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_mode_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____fact_table_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____fact_table_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____fact_table_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____fact_table_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____maybe_in_or_output_for_some_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_in_or_output_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____maybe_in_or_output_for_some_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____maybe_input_for_some_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____maybe_input_for_some_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_input_for_some_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____maybe_input_for_some_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_check____Unify____maybe_make_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_check____Unify____maybe_make_unique_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_check____Compare____maybe_make_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_check____Compare____maybe_make_unique_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__fact_table_check__init(void)
{
}

void mercury__ll_backend__fact_table_check__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_arg_check_result_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_gen_info_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_class_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_map_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_in_or_output_for_some_mode_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_input_for_some_mode_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_maybe_make_unique_0);
}

void mercury__ll_backend__fact_table_check__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__fact_table_check__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.fact_table_check.
